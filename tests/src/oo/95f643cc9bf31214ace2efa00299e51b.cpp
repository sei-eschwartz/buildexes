// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ abstract_0* func0 (abstract_0** v1, abstract_0** v2);
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_0** v15;
abstract_0** v16;
};
struct C1 : public virtual C0 {
/* method id 403 */ C1 ();
C1 (special_constructor);
abstract_0** v17;
abstract_0** v18;
abstract_0** v19;
abstract_0** v20;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 404 */ C2 ();
C2 (special_constructor);
abstract_0** v29;
abstract_0** v30;
};
struct C3 : public virtual C1, public C2 {
/* method id 405 */ virtual ~C3 ();
/* method id 406 */ C3 ();
C3 (special_constructor);
C2 v75;
C2 v76;
};
abstract_0* func2 (C2 v77, C2 v78, C2 v79, C2 v80);
abstract_2 func3 (C2 v85, abstract_1 v86, C2 v87, C2 v88);
abstract_0* func4 (C2 v90, C2 v91);
abstract_0* func5 (abstract_1 v96, C2 v97, C2 v98);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
return new abstract_0 ();

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2) {
abstract_0** v3 = ((abstract_0**) 0);
abstract_0** v4 = ((abstract_0**) 0);
abstract_0** v5 = ((abstract_0**) 0);
abstract_0** v6 = ((abstract_0**) 0);
delete (new C1 ());
return ((abstract_0*) 0);

}
/* method id 402 */ C0::C0 () {
abstract_0** v7 = new abstract_0* ();
abstract_0** v8 = new abstract_0* ();
abstract_0** v9 = new abstract_0* ();
abstract_0** v10 = new abstract_0* ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {
abstract_0** v21 = ((abstract_0**) 0);
abstract_0** v22 = ((abstract_0**) 0);
abstract_0** v23 = ((abstract_0**) 0);
abstract_0** v24 = ((abstract_0**) 0);
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 405 */ C3::~C3 () {
abstract_0** v31 = ((abstract_0**) 0);
abstract_0** v32 = ((abstract_0**) 0);
abstract_0** v33 = ((abstract_0**) 0);
abstract_0** v34 = ((abstract_0**) 0);
return;

}
/* method id 406 */ C3::C3 () {
abstract_0** v35 = ((abstract_0**) 0);
abstract_0** v36 = ((abstract_0**) 0);
abstract_0** v37 = new abstract_0* ();
abstract_0** v38 = new abstract_0* ();
delete (new C3 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func2 (C2 v77, C2 v78, C2 v79, C2 v80) {
abstract_1 v81;
C2 v82;
C2 v83;
C2 v84;

return new abstract_0 ();

}
abstract_2 func3 (C2 v85, abstract_1 v86, C2 v87, C2 v88) {
C2 v89;

return abstract_2();

}
abstract_0* func4 (C2 v90, C2 v91) {
C2 v92;
C2 v93;
C2 v94;
C2 v95;

return new abstract_0 ();

}
abstract_0* func5 (abstract_1 v96, C2 v97, C2 v98) {
C2 v99;
C2 v100;
C2 v101;

return new abstract_0 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var15: PtrType{PtrType{AbstractType{0}}}
8    | var16: PtrType{PtrType{AbstractType{0}}}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(32)
0    +---
0    | {vbptr}
4    | var17: PtrType{PtrType{AbstractType{0}}}
8    | var18: PtrType{PtrType{AbstractType{0}}}
12   | var19: PtrType{PtrType{AbstractType{0}}}
16   | var20: PtrType{PtrType{AbstractType{0}}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var15: PtrType{PtrType{AbstractType{0}}}
28   | var16: PtrType{PtrType{AbstractType{0}}}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(44)
0    +---
0    | {vbptr}
4    | var29: PtrType{PtrType{AbstractType{0}}}
8    | var30: PtrType{PtrType{AbstractType{0}}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var15: PtrType{PtrType{AbstractType{0}}}
20   | var16: PtrType{PtrType{AbstractType{0}}}
24   +---
24   +--- (virtual base class C1)
24   | {vbptr}
28   | var17: PtrType{PtrType{AbstractType{0}}}
32   | var18: PtrType{PtrType{AbstractType{0}}}
36   | var19: PtrType{PtrType{AbstractType{0}}}
40   | var20: PtrType{PtrType{AbstractType{0}}}
44   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(136)
0    +---
0    | {vfptr}
4    | +--- (base class C2)
4    | | {vbptr}
8    | | var29: PtrType{PtrType{AbstractType{0}}}
12   | | var30: PtrType{PtrType{AbstractType{0}}}
16   | +---
16   | var75: ClassType{2}
60   | var76: ClassType{2}
104  +---
104  +--- (virtual base class C0)
104  | {vfptr}
108  | var15: PtrType{PtrType{AbstractType{0}}}
112  | var16: PtrType{PtrType{AbstractType{0}}}
116  +---
116  +--- (virtual base class C1)
116  | {vbptr}
120  | var17: PtrType{PtrType{AbstractType{0}}}
124  | var18: PtrType{PtrType{AbstractType{0}}}
128  | var19: PtrType{PtrType{AbstractType{0}}}
132  | var20: PtrType{PtrType{AbstractType{0}}}
136  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 136;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 116;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

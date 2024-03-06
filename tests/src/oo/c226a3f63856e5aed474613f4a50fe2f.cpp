// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual abstract_0*** func2 (abstract_0**** v0, abstract_0**** v1, abstract_0**** v2, abstract_0**** v3);
/* method id 403 */ C1 ();
C1 (special_constructor);
abstract_0**** v8;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 405 */ virtual abstract_0**** func1 (abstract_0**** v9);
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_0**** v11;
abstract_0**** v12;
abstract_1 v13;
abstract_1 v14;
};
struct C3 : public virtual C0, public virtual C1, public virtual C2 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual abstract_0* func8 (abstract_1 v16, abstract_1 v17, C2 v18);
/* method id 410 */ virtual abstract_0* func1 ();
/* method id 411 */ virtual abstract_0* func3 (abstract_1 v23, C2 v24);
C3 (special_constructor);
C2 v25;
abstract_0**** v26;
abstract_2 v27;
};
abstract_0* func10 (abstract_1 v28, abstract_1 v29, abstract_1 v30, abstract_2 v31);
abstract_0* func11 (abstract_2 v36, abstract_1 v37, abstract_1 v38, abstract_1 v39);
abstract_0* func12 (abstract_1 v42, abstract_1 v43, abstract_1 v44, abstract_1 v45);
abstract_0* func13 (abstract_1 v50, abstract_1 v51, abstract_2 v52);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0*** C1::func2 (abstract_0**** v0, abstract_0**** v1, abstract_0**** v2, abstract_0**** v3) {
abstract_0**** v4 = new abstract_0*** ();
abstract_0**** v5 = new abstract_0*** ();
abstract_0**** v6 = new abstract_0*** ();
abstract_0**** v7 = new abstract_0*** ();
delete (new C1 ());
return new abstract_0** ();

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ abstract_0**** C2::func1 (abstract_0**** v9) {
abstract_0**** v10 = new abstract_0*** ();
return v11;

}
/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
abstract_1 v15 = abstract_1();
return;

}
/* method id 409 */ abstract_0* C3::func8 (abstract_1 v16, abstract_1 v17, C2 v18) {
C2 v19 = *(&(*((new C2 ()))));
abstract_2 v20 = abstract_2();
abstract_1 v21 = abstract_1();
C2 v22 = *(&(*((new C2 ()))));
delete (new C1 ());
return ((abstract_0*) 0);

}
/* method id 410 */ abstract_0* C3::func1 () {
return new abstract_0 ();

}
/* method id 411 */ abstract_0* C3::func3 (abstract_1 v23, C2 v24) {
return new abstract_0 ();

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func10 (abstract_1 v28, abstract_1 v29, abstract_1 v30, abstract_2 v31) {
abstract_1 v32;
C2 v33;
abstract_1 v34;
abstract_1 v35;

return new abstract_0 ();

}
abstract_0* func11 (abstract_2 v36, abstract_1 v37, abstract_1 v38, abstract_1 v39) {
abstract_1 v40;
abstract_2 v41;

return ((abstract_0*) 0);

}
abstract_0* func12 (abstract_1 v42, abstract_1 v43, abstract_1 v44, abstract_1 v45) {
abstract_1 v46;
C2 v47;
abstract_1 v48;
abstract_2 v49;

return new abstract_0 ();

}
abstract_0* func13 (abstract_1 v50, abstract_1 v51, abstract_2 v52) {
abstract_1 v53;
abstract_1 v54;
abstract_2 v55;

return ((abstract_0*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var8: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var11: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
12   | var12: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
16   | var13: AbstractType{1}
20   | var14: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var8: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(96)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var25: ClassType{2}
48   | var26: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
52   | var27: AbstractType{2}
56   +---
56   +--- (virtual base class C0)
56   | {vfptr}
60   +---
60   +--- (virtual base class C1)
60   | {vfptr}
64   | {vbptr}
68   | var8: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
72   +---
72   +--- (virtual base class C2)
72   | {vfptr}
76   | {vbptr}
80   | var11: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
84   | var12: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
88   | var13: AbstractType{1}
92   | var14: AbstractType{1}
96   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 96;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 56;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 60;
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
 const size_t model_offset = 72;
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

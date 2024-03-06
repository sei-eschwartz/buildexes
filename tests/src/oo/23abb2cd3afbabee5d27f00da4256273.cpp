// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2);
/* method id 401 */ virtual abstract_0 func0 ();
/* method id 402 */ C0 ();
/* method id 403 */ virtual ~C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_0* v7;
abstract_0* v8;
abstract_0* v9;
abstract_0* v10;
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_0* v18;
abstract_0* v19;
};
struct C3 : public virtual C1 {
/* method id 408 */ C3 ();
C3 (special_constructor);
abstract_0* v24;
abstract_0* v25;
abstract_0* v26;
abstract_0* v27;
};
abstract_0 func4 (abstract_0* v28, abstract_0* v29, abstract_0* v30, abstract_0* v31);
abstract_0 func5 (abstract_0* v34, abstract_0* v35, abstract_0* v36, abstract_0* v37);
abstract_0 func6 (abstract_0* v41, abstract_0* v42, abstract_0* v43, abstract_0* v44);
abstract_0 func7 (abstract_0* v49, abstract_0* v50, abstract_0* v51, abstract_0* v52);
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2) {
return abstract_0();

}
/* method id 401 */ abstract_0 C0::func0 () {
return ::func7(new abstract_0 (), new abstract_0 (), new abstract_0 (), new abstract_0 ());

}
/* method id 402 */ C0::C0 () {
delete (new C1 ());
return;

}
/* method id 403 */ C0::~C0 () {
delete (new C2 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
abstract_0* v11 = ((abstract_0*) 0);
abstract_0* v12 = ((abstract_0*) 0);
abstract_0* v13 = ((abstract_0*) 0);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
abstract_0* v20 = ((abstract_0*) 0);
abstract_0* v21 = ((abstract_0*) 0);
abstract_0* v22 = ((abstract_0*) 0);
abstract_0* v23 = ((abstract_0*) 0);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0 func4 (abstract_0* v28, abstract_0* v29, abstract_0* v30, abstract_0* v31) {
abstract_0* v32;
abstract_0* v33;

return abstract_0();

}
abstract_0 func5 (abstract_0* v34, abstract_0* v35, abstract_0* v36, abstract_0* v37) {
abstract_0* v38;
abstract_0* v39;
abstract_0* v40;

return ::func6(v35, v35, v35, v35);

}
abstract_0 func6 (abstract_0* v41, abstract_0* v42, abstract_0* v43, abstract_0* v44) {
abstract_0* v45;
abstract_0* v46;
abstract_0* v47;
abstract_0* v48;

return abstract_0();

}
abstract_0 func7 (abstract_0* v49, abstract_0* v50, abstract_0* v51, abstract_0* v52) {
abstract_0* v53;
abstract_0* v54;
abstract_0* v55;
abstract_0* v56;

return abstract_0();

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
class C1    size(24)
0    +---
0    | {vbptr}
4    | var7: PtrType{AbstractType{0}}
8    | var8: PtrType{AbstractType{0}}
12   | var9: PtrType{AbstractType{0}}
16   | var10: PtrType{AbstractType{0}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
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
class C2    size(36)
0    +---
0    | {vbptr}
4    | var18: PtrType{AbstractType{0}}
8    | var19: PtrType{AbstractType{0}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vbptr}
20   | var7: PtrType{AbstractType{0}}
24   | var8: PtrType{AbstractType{0}}
28   | var9: PtrType{AbstractType{0}}
32   | var10: PtrType{AbstractType{0}}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(44)
0    +---
0    | {vbptr}
4    | var24: PtrType{AbstractType{0}}
8    | var25: PtrType{AbstractType{0}}
12   | var26: PtrType{AbstractType{0}}
16   | var27: PtrType{AbstractType{0}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vbptr}
28   | var7: PtrType{AbstractType{0}}
32   | var8: PtrType{AbstractType{0}}
36   | var9: PtrType{AbstractType{0}}
40   | var10: PtrType{AbstractType{0}}
44   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

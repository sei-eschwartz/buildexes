// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2);
/* method id 401 */ abstract_0 func0 (abstract_0* v7, abstract_0* v8, abstract_1 v9);
/* method id 402 */ virtual abstract_0 func0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual abstract_0* func0 (abstract_2 v21, abstract_0* v22);
/* method id 405 */ virtual abstract_0* func1 ();
/* method id 406 */ abstract_0 func2 (abstract_2 v26, abstract_3 v27);
/* method id 407 */ C1 ();
C1 (special_constructor);
abstract_0* v32;
abstract_0* v33;
};
struct C2 : public virtual C1 {
/* method id 408 */ C2 ();
/* method id 409 */ virtual abstract_0* func0 (abstract_0** v38, abstract_0* v39);
C2 (special_constructor);
abstract_0** v40;
abstract_1 v41;
abstract_1 v42;
abstract_1 v43;
};
struct C3 : public C1 {
/* method id 410 */ virtual abstract_0 func1 (abstract_2 v44, abstract_0* v45, abstract_0** v46, abstract_0** v47);
/* method id 411 */ C3 ();
C3 (special_constructor);
abstract_0* v52;
};
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2) {
return abstract_0();

}
/* method id 401 */ abstract_0 C0::func0 (abstract_0* v7, abstract_0* v8, abstract_1 v9) {
abstract_0* v10 = ((abstract_0*) 0);
abstract_1 v11 = abstract_1();
abstract_1 v12 = abstract_1();
return abstract_0();

}
/* method id 402 */ abstract_0 C0::func0 () {
abstract_1 v13 = abstract_1();
abstract_0* v14 = ((abstract_0*) 0);
abstract_1 v15 = abstract_1();
abstract_0* v16 = ((abstract_0*) 0);
return abstract_0();

}
/* method id 403 */ C0::C0 () {
abstract_0* v17 = ((abstract_0*) 0);
abstract_2 v18 = abstract_2();
abstract_1 v19 = abstract_1();
abstract_0* v20 = ((abstract_0*) 0);
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_0* C1::func0 (abstract_2 v21, abstract_0* v22) {
abstract_1 v23 = abstract_1();
abstract_0* v24 = new abstract_0 ();
return new abstract_0 ();

}
/* method id 405 */ abstract_0* C1::func1 () {
abstract_1 v25 = abstract_1();
return new abstract_0 ();

}
/* method id 406 */ abstract_0 C1::func2 (abstract_2 v26, abstract_3 v27) {
abstract_1 v28 = abstract_1();
abstract_0** v29 = ((abstract_0**) 0);
abstract_0** v30 = ((abstract_0**) 0);
abstract_2 v31 = abstract_2();
return abstract_0();

}
/* method id 407 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {
abstract_0** v34 = ((abstract_0**) 0);
abstract_0** v35 = ((abstract_0**) 0);
abstract_1 v36 = abstract_1();
abstract_1 v37 = abstract_1();
return;

}
/* method id 409 */ abstract_0* C2::func0 (abstract_0** v38, abstract_0* v39) {
return v32;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ abstract_0 C3::func1 (abstract_2 v44, abstract_0* v45, abstract_0** v46, abstract_0** v47) {
abstract_0* v48 = new abstract_0 ();
abstract_0* v49 = new abstract_0 ();
abstract_0* v50 = new abstract_0 ();
abstract_0* v51 = new abstract_0 ();
return (((C0*) 0))->C0::func0();

}
/* method id 411 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var32: PtrType{AbstractType{0}}
12   | var33: PtrType{AbstractType{0}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
0    | {vfptr}
4    | {vbptr}
8    | var40: PtrType{PtrType{AbstractType{0}}}
12   | var41: AbstractType{1}
16   | var42: AbstractType{1}
20   | var43: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var32: PtrType{AbstractType{0}}
40   | var33: PtrType{AbstractType{0}}
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
class C3    size(24)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var32: PtrType{AbstractType{0}}
12   | | var33: PtrType{AbstractType{0}}
16   | +---
16   | var52: PtrType{AbstractType{0}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

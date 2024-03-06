// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_10 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_11 { int x; };
struct abstract_12 { int x; };
struct abstract_13 { int x; };
struct abstract_14 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2);
/* method id 401 */ virtual abstract_0 func0 (abstract_0* v7, abstract_0* v8, abstract_1 v9);
/* method id 402 */ C0 ();
/* method id 403 */ virtual abstract_0* func0 ();
C0 (special_constructor);
abstract_3 v15;
};
struct C1 : public C0 {
/* method id 404 */ void func1 (abstract_1 v16, abstract_0* v17);
/* method id 405 */ virtual abstract_0* func1 (abstract_0* v19);
/* method id 406 */ virtual abstract_0 func0 (abstract_0* v22, abstract_0* v23, abstract_0* v24);
/* method id 407 */ virtual abstract_0* func1 ();
/* method id 408 */ C1 ();
C1 (special_constructor);
abstract_1 v32;
abstract_7 v33;
};
struct C2 : public virtual C1 {
/* method id 409 */ C2 ();
/* method id 410 */ virtual ~C2 ();
/* method id 411 */ abstract_0* func0 ();
/* method id 412 */ virtual abstract_0* func1 (abstract_1 v52, abstract_1 v53);
C2 (special_constructor);
abstract_1 v55;
abstract_0* v56;
};
struct C3  {
/* method id 413 */ C3 ();
C3 (special_constructor);
abstract_0* v57;
abstract_0* v58;
};
abstract_10 func5 ();
abstract_10 func6 (abstract_13 v63, abstract_5 v64, abstract_13 v65, C1 v66);
abstract_10 func7 ();
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2) {
return abstract_0();

}
/* method id 401 */ abstract_0 C0::func0 (abstract_0* v7, abstract_0* v8, abstract_1 v9) {
abstract_0* v10 = ((abstract_0*) 0);
return abstract_0();

}
/* method id 402 */ C0::C0 () {
abstract_2 v11 = abstract_2();
abstract_1 v12 = abstract_1();
abstract_1 v13 = abstract_1();
abstract_3 v14 = abstract_3();
return;

}
/* method id 403 */ abstract_0* C0::func0 () {
return ((abstract_0*) 0);

}
C0::C0 (special_constructor)  {}

/* method id 404 */ void C1::func1 (abstract_1 v16, abstract_0* v17) {
abstract_4 v18 = abstract_4();
return;

}
/* method id 405 */ abstract_0* C1::func1 (abstract_0* v19) {
abstract_0* v20 = new abstract_0 ();
abstract_0* v21 = new abstract_0 ();
return new abstract_0 ();

}
/* method id 406 */ abstract_0 C1::func0 (abstract_0* v22, abstract_0* v23, abstract_0* v24) {
abstract_0* v25 = ((abstract_0*) 0);
abstract_5 v26 = abstract_5();
abstract_5 v27 = abstract_5();
abstract_6 v28 = abstract_6();
return abstract_0();

}
/* method id 407 */ abstract_0* C1::func1 () {
abstract_6 v29 = abstract_6();
abstract_7 v30 = abstract_7();
abstract_2 v31 = abstract_2();
return new abstract_0 ();

}
/* method id 408 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::C2 () {
abstract_2 v34 = abstract_2();
abstract_1 v35 = abstract_1();
abstract_1 v36 = abstract_1();
abstract_7 v37 = abstract_7();
return;

}
/* method id 410 */ C2::~C2 () {
abstract_1 v42 = abstract_1();
abstract_1 v43 = abstract_1();
abstract_5 v44 = abstract_5();
abstract_1 v45 = abstract_1();
return;

}
/* method id 411 */ abstract_0* C2::func0 () {
return new abstract_0 ();

}
/* method id 412 */ abstract_0* C2::func1 (abstract_1 v52, abstract_1 v53) {
abstract_11 v54 = abstract_11();
return v56;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 413 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

abstract_10 func5 () {
abstract_1 v59;
abstract_12 v60;
abstract_12 v61;
abstract_5 v62;

return ::func7();

}
abstract_10 func6 (abstract_13 v63, abstract_5 v64, abstract_13 v65, C1 v66) {

return ::func7();

}
abstract_10 func7 () {
abstract_9 v67;
void* v68;
abstract_14 v69;
abstract_12 v70;

return abstract_10();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var15: AbstractType{3}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
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
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var15: AbstractType{3}
8    | +---
8    | var32: AbstractType{1}
12   | var33: AbstractType{7}
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
 const size_t model_offset = 0;
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
0    | {vfptr}
4    | {vbptr}
8    | var55: AbstractType{1}
12   | var56: PtrType{AbstractType{0}}
16   | {vtordisp for vbase 1}
20   +---
20   +--- (virtual base class C1)
20   | +--- (base class C0)
20   | | {vfptr}
24   | | var15: AbstractType{3}
28   | +---
28   | var32: AbstractType{1}
32   | var33: AbstractType{7}
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
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(8)
0    +---
0    | var57: PtrType{AbstractType{0}}
4    | var58: PtrType{AbstractType{0}}
8    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

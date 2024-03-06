// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ virtual abstract_1 func0 (abstract_0 v1, abstract_2 v2, abstract_0 v3, abstract_2 v4);
/* method id 402 */ virtual abstract_1* func0 ();
/* method id 403 */ virtual abstract_3 func0 (abstract_2 v10, abstract_2 v11, abstract_2 v12, abstract_0 v13);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_0 v14;
abstract_0 v15;
abstract_0 v16;
abstract_0 v17;
};
struct C1 : public C0 {
/* method id 405 */ virtual abstract_3 func1 (abstract_0 v18, abstract_0 v19, abstract_0 v20, abstract_0 v21);
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ C1 ();
C1 (special_constructor);
abstract_2 v51;
abstract_0 v52;
};
struct C2  {
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_2 v53;
};
struct C3 : public C0, public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ abstract_3 func0 (abstract_2 v58, abstract_2 v59, abstract_2 v60, abstract_0 v61);
/* method id 411 */ abstract_4 func3 (abstract_0 v62);
/* method id 412 */ virtual abstract_1 func2 (abstract_2 v64, abstract_2 v65, abstract_0 v66, abstract_2 v67);
C3 (special_constructor);
abstract_2 v68;
};
abstract_1* func4 (abstract_2 v69, abstract_0 v70, abstract_2 v71, C0 v72);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_2 v2, abstract_0 v3, abstract_2 v4) {
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
abstract_2 v7 = abstract_2();
abstract_2 v8 = abstract_2();
return abstract_1();

}
/* method id 402 */ abstract_1* C0::func0 () {
abstract_0 v9 = abstract_0();
return new abstract_1 ();

}
/* method id 403 */ abstract_3 C0::func0 (abstract_2 v10, abstract_2 v11, abstract_2 v12, abstract_0 v13) {
return abstract_3();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_3 C1::func1 (abstract_0 v18, abstract_0 v19, abstract_0 v20, abstract_0 v21) {
abstract_2 v22 = abstract_2();
abstract_0 v23 = abstract_0();
abstract_0 v24 = abstract_0();
return abstract_3();

}
/* method id 406 */ C1::~C1 () {
abstract_2 v25 = abstract_2();
abstract_2 v26 = abstract_2();
abstract_2 v27 = abstract_2();
abstract_2 v28 = abstract_2();
return;

}
/* method id 407 */ C1::C1 () {
abstract_2 v29 = abstract_2();
abstract_2 v30 = abstract_2();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 409 */ C3::C3 () {
abstract_0 v54 = abstract_0();
abstract_2 v55 = abstract_2();
abstract_2 v56 = abstract_2();
abstract_0 v57 = abstract_0();
return;

}
/* method id 410 */ abstract_3 C3::func0 (abstract_2 v58, abstract_2 v59, abstract_2 v60, abstract_0 v61) {
return abstract_3();

}
/* method id 411 */ abstract_4 C3::func3 (abstract_0 v62) {
abstract_2 v63 = abstract_2();
return abstract_4();

}
/* method id 412 */ abstract_1 C3::func2 (abstract_2 v64, abstract_2 v65, abstract_0 v66, abstract_2 v67) {
return abstract_1();

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

abstract_1* func4 (abstract_2 v69, abstract_0 v70, abstract_2 v71, C0 v72) {
abstract_0 v73;

return new abstract_1 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var14: AbstractType{0}
8    | var15: AbstractType{0}
12   | var16: AbstractType{0}
16   | var17: AbstractType{0}
20   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(28)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var14: AbstractType{0}
8    | | var15: AbstractType{0}
12   | | var16: AbstractType{0}
16   | | var17: AbstractType{0}
20   | +---
20   | var51: AbstractType{2}
24   | var52: AbstractType{0}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
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
class C2    size(4)
0    +---
0    | var53: AbstractType{2}
4    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(32)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var14: AbstractType{0}
8    | | var15: AbstractType{0}
12   | | var16: AbstractType{0}
16   | | var17: AbstractType{0}
20   | +---
20   | {vbptr}
24   | var68: AbstractType{2}
28   +---
28   +--- (virtual base class C2)
28   | var53: AbstractType{2}
32   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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

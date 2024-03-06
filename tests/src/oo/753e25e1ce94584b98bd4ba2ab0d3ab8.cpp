// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v7, abstract_1 v8);
/* method id 403 */ virtual abstract_4 func1 (abstract_3 v13, abstract_1 v14, abstract_3 v15, abstract_1 v16);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_3 v19;
abstract_0 v20;
abstract_1 v21;
abstract_5 v22;
};
struct C1  {
/* method id 405 */ C1 ();
C1 (special_constructor);
};
struct C2 : public C1, public C0 {
/* method id 406 */ ~C2 ();
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_1 v25;
};
abstract_2 func4 (abstract_3 v26, abstract_6 v27, abstract_6 v28, abstract_1 v29);
abstract_4 func5 ();
abstract_2 func6 (abstract_4* v32, abstract_4* v33, abstract_4* v34);
abstract_4 func7 (abstract_6 v37, abstract_0 v38, abstract_4* v39);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return ::func6(((abstract_4*) 0), ((abstract_4*) 0), ((abstract_4*) 0));

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
delete (new C1 ());
return ::func6(new abstract_4 (), new abstract_4 (), new abstract_4 ());

}
/* method id 403 */ abstract_4 C0::func1 (abstract_3 v13, abstract_1 v14, abstract_3 v15, abstract_1 v16) {
abstract_1 v17 = abstract_1();
abstract_1 v18 = abstract_1();
v17 = abstract_1();
v17 = abstract_1();
return ::func5();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 406 */ C2::~C2 () {
abstract_5 v23 = abstract_5();
return;

}
/* method id 407 */ C2::C2 () {
::func5();
::func5();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

abstract_2 func4 (abstract_3 v26, abstract_6 v27, abstract_6 v28, abstract_1 v29) {

return abstract_2();

}
abstract_4 func5 () {
abstract_6 v30;
abstract_0 v31;

return ::func7(v30, v31, new abstract_4 ());

}
abstract_2 func6 (abstract_4* v32, abstract_4* v33, abstract_4* v34) {
abstract_2* v35;
abstract_1 v36;

return abstract_2();

}
abstract_4 func7 (abstract_6 v37, abstract_0 v38, abstract_4* v39) {

::func5();
return abstract_4();

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var19: AbstractType{3}
8    | var20: AbstractType{0}
12   | var21: AbstractType{1}
16   | var22: AbstractType{5}
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
class C1    size(0)
0    +---
0    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(24)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var19: AbstractType{3}
8    | | var20: AbstractType{0}
12   | | var21: AbstractType{1}
16   | | var22: AbstractType{5}
20   | +---
20   | +--- (base class C1)
20   | +---
20   | var25: AbstractType{1}
24   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 24;
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

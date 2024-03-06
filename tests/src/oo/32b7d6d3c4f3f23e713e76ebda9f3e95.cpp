// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 401 */ abstract_1 func0 (abstract_0 v8, abstract_0 v9, abstract_0 v10);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ abstract_1 func0 (abstract_0 v22, abstract_0 v23, abstract_2 v24, abstract_2 v25);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_1 func1 ();
/* method id 406 */ abstract_1 func1 (abstract_2 v27, abstract_0 v28, abstract_3 v29, abstract_2 v30);
/* method id 407 */ C1 ();
C1 (special_constructor);
abstract_0 v31;
abstract_3 v32;
abstract_2 v33;
abstract_3 v34;
};
abstract_1 func3 (abstract_1* v35, abstract_2 v36, abstract_3 v37, abstract_2 v38);
abstract_1 func4 ();
abstract_1 func5 (abstract_2 v44, abstract_0 v45);
abstract_1 func6 (abstract_4 v46, abstract_2 v47, C0 v48, abstract_3 v49);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v8, abstract_0 v9, abstract_0 v10) {
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 () {
return abstract_1();

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v22, abstract_0 v23, abstract_2 v24, abstract_2 v25) {
return ::func4();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func1 () {
abstract_2 v26 = abstract_2();
return abstract_1();

}
/* method id 406 */ abstract_1 C1::func1 (abstract_2 v27, abstract_0 v28, abstract_3 v29, abstract_2 v30) {
return abstract_1();

}
/* method id 407 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

abstract_1 func3 (abstract_1* v35, abstract_2 v36, abstract_3 v37, abstract_2 v38) {
abstract_0 v39;
abstract_2 v40;

return (&(*(((C0*) 0))))->C0::func0();

}
abstract_1 func4 () {
abstract_1* v41;
abstract_4 v42;
abstract_2 v43;

return ::func5(v43, abstract_0());

}
abstract_1 func5 (abstract_2 v44, abstract_0 v45) {

return abstract_1();

}
abstract_1 func6 (abstract_4 v46, abstract_2 v47, C0 v48, abstract_3 v49) {
abstract_1* v50;

return ::func4();

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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var31: AbstractType{0}
12   | var32: AbstractType{3}
16   | var33: AbstractType{2}
20   | var34: AbstractType{3}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
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
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

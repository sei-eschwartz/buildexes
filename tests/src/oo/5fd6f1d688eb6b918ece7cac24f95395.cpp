// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v7, abstract_1 v8);
/* method id 403 */ virtual abstract_2 func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_2 func0 (abstract_1 v14, abstract_1 v15);
/* method id 406 */ abstract_2 func0 ();
/* method id 407 */ C1 ();
/* method id 408 */ abstract_2 func0 (abstract_1 v27, abstract_0 v28);
C1 (special_constructor);
abstract_1 v30;
abstract_0 v31;
abstract_1 v32;
abstract_0 v33;
};
struct C2 : public C1 {
/* method id 409 */ virtual abstract_2 func0 ();
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_1 v42;
abstract_0 v43;
};
abstract_2 func4 (abstract_0 v44);
abstract_2** func5 (abstract_1 v46);
abstract_2** func6 (abstract_1 v47);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return abstract_2();

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
return ::func4(v9);

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
return abstract_2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func0 (abstract_1 v14, abstract_1 v15) {
abstract_1 v16 = abstract_1();
abstract_1 v17 = abstract_1();
abstract_3 v18 = abstract_3();
abstract_0 v19 = abstract_0();
return abstract_2();

}
/* method id 406 */ abstract_2 C1::func0 () {
abstract_1 v20 = abstract_1();
abstract_0 v21 = abstract_0();
return ::func4(v31);

}
/* method id 407 */ C1::C1 () {
abstract_1 v22 = abstract_1();
abstract_0 v23 = abstract_0();
abstract_0 v24 = abstract_0();
abstract_1 v25 = abstract_1();
return;

}
/* method id 408 */ abstract_2 C1::func0 (abstract_1 v27, abstract_0 v28) {
abstract_3 v29 = abstract_3();
return ::func4(v28);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ abstract_2 C2::func0 () {
abstract_1 v34 = abstract_1();
abstract_1 v35 = abstract_1();
abstract_3 v36 = abstract_3();
abstract_1 v37 = abstract_1();
return abstract_2();

}
/* method id 410 */ C2::C2 () {
abstract_1 v38 = abstract_1();
abstract_0 v39 = abstract_0();
abstract_1 v40 = abstract_1();
abstract_0 v41 = abstract_0();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

abstract_2 func4 (abstract_0 v44) {
abstract_1 v45;

return ((new C2 ()))->C2::func0();

}
abstract_2** func5 (abstract_1 v46) {

return ((abstract_2**) 0);

}
abstract_2** func6 (abstract_1 v47) {

return ::func5(v47);

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
0    | {vbptr}
4    | var30: AbstractType{1}
8    | var31: AbstractType{0}
12   | var32: AbstractType{1}
16   | var33: AbstractType{0}
20   | {vtordisp for vbase 0}
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
/*
class C2    size(36)
0    +---
0    | +--- (base class C1)
0    | | {vbptr}
4    | | var30: AbstractType{1}
8    | | var31: AbstractType{0}
12   | | var32: AbstractType{1}
16   | | var33: AbstractType{0}
20   | +---
20   | var42: AbstractType{1}
24   | var43: AbstractType{0}
28   | {vtordisp for vbase 0}
32   +---
32   +--- (virtual base class C0)
32   | {vfptr}
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
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

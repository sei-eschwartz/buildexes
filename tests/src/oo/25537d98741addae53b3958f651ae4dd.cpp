// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v7, abstract_1 v8);
/* method id 403 */ virtual abstract_2 func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ abstract_2 func0 (abstract_1 v14, abstract_1 v15);
/* method id 406 */ virtual abstract_2 func0 (abstract_5 v18);
/* method id 407 */ abstract_2 func0 ();
/* method id 408 */ C1 ();
C1 (special_constructor);
abstract_1 v19;
abstract_5 v20;
abstract_5 v21;
abstract_5 v22;
};
struct C2 : public virtual C1 {
/* method id 409 */ virtual abstract_2 func0 ();
/* method id 410 */ ~C2 ();
/* method id 411 */ virtual abstract_2 func0 (abstract_1 v26, abstract_1 v27);
/* method id 412 */ virtual abstract_4 func3 (abstract_0 v30, abstract_5 v31);
/* method id 413 */ C2 ();
C2 (special_constructor);
abstract_5 v32;
};
struct C3 : public C2 {
/* method id 414 */ C3 ();
C3 (special_constructor);
};
abstract_4 func6 ();
abstract_4 func7 (abstract_1 v36, C3 v37, abstract_1 v38, C3 v39);
abstract_4 func8 (C3 v44, abstract_1 v45, abstract_1 v46, abstract_1 v47);
abstract_4 func9 ();
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
return abstract_2();

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
abstract_0 v17 = abstract_0();
return abstract_2();

}
/* method id 406 */ abstract_2 C1::func0 (abstract_5 v18) {
return abstract_2();

}
/* method id 407 */ abstract_2 C1::func0 () {
return abstract_2();

}
/* method id 408 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ abstract_2 C2::func0 () {
abstract_5 v23 = abstract_5();
return abstract_2();

}
/* method id 410 */ C2::~C2 () {
abstract_1 v24 = abstract_1();
abstract_3 v25 = abstract_3();
return;

}
/* method id 411 */ abstract_2 C2::func0 (abstract_1 v26, abstract_1 v27) {
abstract_0 v28 = abstract_0();
return abstract_2();

}
/* method id 412 */ abstract_4 C2::func3 (abstract_0 v30, abstract_5 v31) {
return abstract_4();

}
/* method id 413 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 414 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_4 func6 () {
abstract_4* v33;
abstract_1 v34;
C3 v35;

return ::func8(v35, v34, v34, v34);

}
abstract_4 func7 (abstract_1 v36, C3 v37, abstract_1 v38, C3 v39) {
abstract_1 v40;
abstract_1 v41;
abstract_1 v42;
abstract_3 v43;

return abstract_4();

}
abstract_4 func8 (C3 v44, abstract_1 v45, abstract_1 v46, abstract_1 v47) {
abstract_1 v48;
abstract_3 v49;
abstract_1 v50;
abstract_1 v51;

return abstract_4();

}
abstract_4 func9 () {
C3 v52;
abstract_4* v53;
abstract_3 v54;
abstract_5 v55;

return abstract_4();

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
class C1    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var19: AbstractType{1}
12   | var20: AbstractType{5}
16   | var21: AbstractType{5}
20   | var22: AbstractType{5}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
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
 const size_t model_offset = 28;
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
8    | var32: AbstractType{5}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var19: AbstractType{1}
32   | var20: AbstractType{5}
36   | var21: AbstractType{5}
40   | var22: AbstractType{5}
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
class C3    size(44)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | | var32: AbstractType{5}
12   | +---
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var19: AbstractType{1}
32   | var20: AbstractType{5}
36   | var21: AbstractType{5}
40   | var22: AbstractType{5}
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

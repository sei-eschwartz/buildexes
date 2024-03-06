// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_5 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

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
/* method id 407 */ virtual abstract_1 func1 (abstract_2 v33, abstract_2 v34, abstract_3 v35, abstract_2 v36);
/* method id 408 */ virtual abstract_1 func0 (abstract_3 v37, abstract_2 v38);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_2 v40;
abstract_3 v41;
abstract_2 v42;
};
struct C2 : public virtual C1 {
/* method id 410 */ virtual abstract_1 func1 ();
/* method id 411 */ virtual abstract_1 func0 (abstract_3 v45, abstract_2 v46);
/* method id 412 */ virtual abstract_1 func1 (abstract_2 v48, abstract_0 v49);
/* method id 413 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C0 {
/* method id 414 */ abstract_5 func3 (abstract_0 v54, abstract_3 v55);
/* method id 415 */ virtual abstract_1 func1 (abstract_0 v56, abstract_0 v57);
/* method id 416 */ virtual abstract_1 func3 (abstract_3 v62, abstract_2 v63);
/* method id 417 */ virtual abstract_5 func1 ();
/* method id 418 */ C3 ();
C3 (special_constructor);
abstract_0 v64;
abstract_2 v65;
abstract_3 v66;
};
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
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func1 () {
abstract_2 v26 = abstract_2();
return abstract_1();

}
/* method id 406 */ abstract_1 C1::func1 (abstract_2 v27, abstract_0 v28, abstract_3 v29, abstract_2 v30) {
abstract_2 v31 = abstract_2();
abstract_3 v32 = abstract_3();
return abstract_1();

}
/* method id 407 */ abstract_1 C1::func1 (abstract_2 v33, abstract_2 v34, abstract_3 v35, abstract_2 v36) {
return abstract_1();

}
/* method id 408 */ abstract_1 C1::func0 (abstract_3 v37, abstract_2 v38) {
abstract_0 v39 = abstract_0();
return abstract_1();

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ abstract_1 C2::func1 () {
abstract_0 v43 = abstract_0();
abstract_3 v44 = abstract_3();
return abstract_1();

}
/* method id 411 */ abstract_1 C2::func0 (abstract_3 v45, abstract_2 v46) {
abstract_0 v47 = abstract_0();
return abstract_1();

}
/* method id 412 */ abstract_1 C2::func1 (abstract_2 v48, abstract_0 v49) {
abstract_0 v50 = abstract_0();
abstract_3 v51 = abstract_3();
abstract_4 v52 = abstract_4();
abstract_4 v53 = abstract_4();
return abstract_1();

}
/* method id 413 */ C2::C2 () {
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 414 */ abstract_5 C3::func3 (abstract_0 v54, abstract_3 v55) {
return (((C3*) 0))->C3::func1();

}
/* method id 415 */ abstract_1 C3::func1 (abstract_0 v56, abstract_0 v57) {
abstract_2 v58 = abstract_2();
abstract_4 v59 = abstract_4();
abstract_4 v60 = abstract_4();
abstract_4 v61 = abstract_4();
return abstract_1();

}
/* method id 416 */ abstract_1 C3::func3 (abstract_3 v62, abstract_2 v63) {
return abstract_1();

}
/* method id 417 */ abstract_5 C3::func1 () {
return abstract_5();

}
/* method id 418 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()) {}

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
0    | {vfptr}
4    | {vbptr}
8    | var40: AbstractType{2}
12   | var41: AbstractType{3}
16   | var42: AbstractType{2}
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
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
12   | {vtordisp for vbase 1}
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var40: AbstractType{2}
28   | var41: AbstractType{3}
32   | var42: AbstractType{2}
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
class C3    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var64: AbstractType{0}
12   | var65: AbstractType{2}
16   | var66: AbstractType{3}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_5 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct abstract_12 { int x; };
struct abstract_13 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_11 { int x; };
struct abstract_14 { int x; };
struct abstract_15 { int x; };
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
struct C1 : public C0 {
/* method id 405 */ virtual abstract_2 func1 (abstract_3 v14, abstract_4 v15, abstract_1 v16, abstract_1 v17);
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ virtual abstract_5 func1 ();
/* method id 408 */ virtual abstract_5 func0 (abstract_1 v19, abstract_6 v20, abstract_1 v21, abstract_1 v22);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_5* v27;
abstract_1 v28;
};
struct C2 : public C1 {
/* method id 410 */ virtual abstract_5 func2 ();
/* method id 411 */ C2 ();
C2 (special_constructor);
abstract_7 v31;
};
struct C3 : public C2 {
/* method id 412 */ ~C3 ();
/* method id 413 */ abstract_5 func0 (abstract_5* v36, abstract_5* v37, abstract_0 v38, abstract_6 v39);
/* method id 414 */ virtual abstract_9 func4 (abstract_0 v40, abstract_0 v41);
/* method id 415 */ virtual abstract_10 func1 (abstract_0 v42);
/* method id 416 */ C3 ();
C3 (special_constructor);
abstract_1 v43;
abstract_3 v44;
abstract_11 v45;
abstract_7 v46;
};
abstract_2 func6 ();
abstract_12** func7 (abstract_0 v50, abstract_13* v51, abstract_5** v52, C3 v53);
abstract_5 func8 (abstract_14 v54, C3 v55, abstract_6 v56, abstract_0 v57);
abstract_12* func9 (C0 v58);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return ::func6();

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
return ::func6();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func1 (abstract_3 v14, abstract_4 v15, abstract_1 v16, abstract_1 v17) {
return abstract_2();

}
/* method id 406 */ C1::~C1 () {
abstract_5* v18 = new abstract_5 ();
return;

}
/* method id 407 */ abstract_5 C1::func1 () {
return abstract_5();

}
/* method id 408 */ abstract_5 C1::func0 (abstract_1 v19, abstract_6 v20, abstract_1 v21, abstract_1 v22) {
abstract_7 v23 = abstract_7();
C0 v24 = *((new C0 ()));
abstract_8 v25 = abstract_8();
abstract_0 v26 = abstract_0();
return abstract_5();

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ abstract_5 C2::func2 () {
abstract_6 v29 = abstract_6();
abstract_3 v30 = abstract_3();
return abstract_5();

}
/* method id 411 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::~C3 () {
abstract_1 v32 = abstract_1();
abstract_5** v33 = new abstract_5* ();
abstract_1 v34 = abstract_1();
abstract_6 v35 = abstract_6();
return;

}
/* method id 413 */ abstract_5 C3::func0 (abstract_5* v36, abstract_5* v37, abstract_0 v38, abstract_6 v39) {
return abstract_5();

}
/* method id 414 */ abstract_9 C3::func4 (abstract_0 v40, abstract_0 v41) {
return abstract_9();

}
/* method id 415 */ abstract_10 C3::func1 (abstract_0 v42) {
return abstract_10();

}
/* method id 416 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_2 func6 () {
abstract_5* v47;
abstract_1 v48;
C3 v49;

return abstract_2();

}
abstract_12** func7 (abstract_0 v50, abstract_13* v51, abstract_5** v52, C3 v53) {

return new abstract_12* ();

}
abstract_5 func8 (abstract_14 v54, C3 v55, abstract_6 v56, abstract_0 v57) {

return abstract_5();

}
abstract_12* func9 (C0 v58) {
abstract_6 v59;
abstract_15 v60;
abstract_6 v61;
abstract_7 v62;

return ((abstract_12*) 0);

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
class C1    size(12)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var27: PtrType{AbstractType{5}}
8    | var28: AbstractType{1}
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
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
class C2    size(16)
0    +---
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | +---
4    | | var27: PtrType{AbstractType{5}}
8    | | var28: AbstractType{1}
12   | +---
12   | var31: AbstractType{7}
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
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
/*
class C3    size(32)
0    +---
0    | +--- (base class C2)
0    | | +--- (base class C1)
0    | | | +--- (base class C0)
0    | | | | {vfptr}
4    | | | +---
4    | | | var27: PtrType{AbstractType{5}}
8    | | | var28: AbstractType{1}
12   | | +---
12   | | var31: AbstractType{7}
16   | +---
16   | var43: AbstractType{1}
20   | var44: AbstractType{3}
24   | var45: AbstractType{11}
28   | var46: AbstractType{7}
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

// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
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
/* method id 412 */ abstract_4 func3 (abstract_0 v30, abstract_5 v31);
/* method id 413 */ C2 ();
C2 (special_constructor);
abstract_4** v34;
abstract_1 v35;
C1 v36;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 414 */ C3 ();
/* method id 415 */ abstract_4 func1 (abstract_3 v46, abstract_1 v47);
/* method id 416 */ virtual abstract_2 func5 (abstract_1 v51, C0 v52);
/* method id 417 */ virtual abstract_2 func6 (C0 v53, abstract_0 v54);
C3 (special_constructor);
C1 v55;
abstract_0 v56;
abstract_1 v57;
};
abstract_4* func8 (C0 v58, C0 v59, abstract_1 v60, abstract_6 v61);
abstract_2 func9 (C0 v62);
abstract_4 func10 (abstract_7 v63, abstract_1 v64);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
::func9(*(((C0*) 0)));
::func9(*(((C0*) 0)));
return ::func9(*(((C0*) 0)));

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
delete (new C2 ());
return ::func9(*(&(*((new C0 ())))));

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
v9 = abstract_0();
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
return ::func9(*(((C0*) 0)));

}
/* method id 406 */ abstract_2 C1::func0 (abstract_5 v18) {
v19 = v19;
v19 = v19;
v19 = v19;
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
return ::func9(*(((C0*) 0)));

}
/* method id 410 */ C2::~C2 () {
abstract_1 v24 = abstract_1();
abstract_3 v25 = abstract_3();
v19 = v19;
v19 = v19;
v19 = v19;
return;

}
/* method id 411 */ abstract_2 C2::func0 (abstract_1 v26, abstract_1 v27) {
abstract_0 v28 = abstract_0();
v19 = abstract_1();
v19 = abstract_1();
v19 = abstract_1();
v19 = abstract_1();
return abstract_2();

}
/* method id 412 */ abstract_4 C2::func3 (abstract_0 v30, abstract_5 v31) {
abstract_1 v32 = abstract_1();
abstract_3 v33 = abstract_3();
v20 = v31;
return abstract_4();

}
/* method id 413 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 414 */ C3::C3 () {
abstract_1 v37 = abstract_1();
v22 = v20;
return;

}
/* method id 415 */ abstract_4 C3::func1 (abstract_3 v46, abstract_1 v47) {
abstract_3 v48 = abstract_3();
C1 v49 = *(&(*((new C1 ()))));
C1 v50 = *(&(*((new C1 ()))));
return ::func10(abstract_7(), v57);

}
/* method id 416 */ abstract_2 C3::func5 (abstract_1 v51, C0 v52) {
::func9(v52);
::func9(v52);
::func9(v52);
return ::func9(v52);

}
/* method id 417 */ abstract_2 C3::func6 (C0 v53, abstract_0 v54) {
return ((new C0 ()))->C0::func0();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_4* func8 (C0 v58, C0 v59, abstract_1 v60, abstract_6 v61) {

delete (new C1 ());
return new abstract_4 ();

}
abstract_2 func9 (C0 v62) {

return abstract_2();

}
abstract_4 func10 (abstract_7 v63, abstract_1 v64) {
abstract_0 v65;

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
class C2    size(76)
0    +---
0    | {vbptr}
4    | var34: PtrType{PtrType{AbstractType{4}}}
8    | var35: AbstractType{1}
12   | var36: ClassType{1}
44   | {vtordisp for vbase 0}
48   +---
48   +--- (virtual base class C0)
48   | {vfptr}
52   +---
52   +--- (virtual base class C1)
52   | {vfptr}
56   | {vbptr}
60   | var19: AbstractType{1}
64   | var20: AbstractType{5}
68   | var21: AbstractType{5}
72   | var22: AbstractType{5}
76   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 76;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 52;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(124)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var55: ClassType{1}
40   | var56: AbstractType{0}
44   | var57: AbstractType{1}
48   | {vtordisp for vbase 0}
52   +---
52   +--- (virtual base class C0)
52   | {vfptr}
56   +---
56   +--- (virtual base class C1)
56   | {vfptr}
60   | {vbptr}
64   | var19: AbstractType{1}
68   | var20: AbstractType{5}
72   | var21: AbstractType{5}
76   | var22: AbstractType{5}
80   +---
80   +--- (virtual base class C2)
80   | {vbptr}
84   | var34: PtrType{PtrType{AbstractType{4}}}
88   | var35: AbstractType{1}
92   | var36: ClassType{1}
124  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 124;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 56;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 80;
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

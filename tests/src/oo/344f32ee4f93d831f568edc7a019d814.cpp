// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_5 { int x; };
struct abstract_7 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_6 { int x; };
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
/* method id 405 */ virtual abstract_2 func0 (abstract_1 v14, abstract_1 v15, abstract_1 v16, abstract_3 v17);
/* method id 406 */ virtual abstract_2 func1 ();
/* method id 407 */ virtual abstract_2 func2 (abstract_1 v22, abstract_1 v23, abstract_3 v24, abstract_1 v25);
/* method id 408 */ virtual abstract_2 func0 (abstract_3 v30, abstract_1 v31, abstract_3 v32);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_0 v33;
abstract_4 v34;
};
struct C2 : public virtual C1 {
/* method id 410 */ virtual abstract_2 func4 (abstract_4 v35, abstract_0 v36);
/* method id 411 */ ~C2 ();
/* method id 412 */ C2 ();
C2 (special_constructor);
abstract_2* v45;
abstract_1 v46;
abstract_1 v47;
abstract_1 v48;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 413 */ C3 ();
/* method id 414 */ abstract_5 func0 (abstract_2* v49, abstract_1 v50);
/* method id 415 */ virtual abstract_2 func5 (abstract_2* v51, abstract_2* v52, abstract_2* v53, abstract_2* v54);
/* method id 416 */ virtual abstract_5 func6 (abstract_0 v58, abstract_1 v59, abstract_5** v60, abstract_1 v61);
C3 (special_constructor);
abstract_1 v66;
abstract_5** v67;
abstract_2* v68;
abstract_1 v69;
};
abstract_5 func8 (abstract_5** v70, abstract_1 v71, abstract_4 v72, abstract_3 v73);
abstract_7 func9 (abstract_5** v74, abstract_3 v75);
abstract_5 func10 (abstract_2* v76, abstract_2* v77);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
delete (new C2 ());
v1 = abstract_0();
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
delete (new C3 ());
return ((new C1 ()))->C1::func1();

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
v13 = v13;
return abstract_2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func0 (abstract_1 v14, abstract_1 v15, abstract_1 v16, abstract_3 v17) {
return abstract_2();

}
/* method id 406 */ abstract_2 C1::func1 () {
abstract_3 v18 = abstract_3();
abstract_1 v19 = abstract_1();
abstract_1 v20 = abstract_1();
abstract_1 v21 = abstract_1();
return abstract_2();

}
/* method id 407 */ abstract_2 C1::func2 (abstract_1 v22, abstract_1 v23, abstract_3 v24, abstract_1 v25) {
abstract_3 v26 = abstract_3();
abstract_1 v27 = abstract_1();
abstract_1 v28 = abstract_1();
abstract_1 v29 = abstract_1();
return abstract_2();

}
/* method id 408 */ abstract_2 C1::func0 (abstract_3 v30, abstract_1 v31, abstract_3 v32) {
delete (new C2 ());
return abstract_2();

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ abstract_2 C2::func4 (abstract_4 v35, abstract_0 v36) {
abstract_4 v37 = abstract_4();
abstract_1 v38 = abstract_1();
abstract_3 v39 = abstract_3();
abstract_1 v40 = abstract_1();
delete (new C3 ());
return abstract_2();

}
/* method id 411 */ C2::~C2 () {
abstract_1 v41 = abstract_1();
abstract_4 v42 = abstract_4();
abstract_0 v43 = abstract_0();
abstract_4 v44 = abstract_4();
return;

}
/* method id 412 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 413 */ C3::C3 () {
return;

}
/* method id 414 */ abstract_5 C3::func0 (abstract_2* v49, abstract_1 v50) {
return abstract_5();

}
/* method id 415 */ abstract_2 C3::func5 (abstract_2* v51, abstract_2* v52, abstract_2* v53, abstract_2* v54) {
abstract_1 v55 = abstract_1();
abstract_2* v56 = new abstract_2 ();
abstract_0 v57 = abstract_0();
return (((C1*) 0))->C1::func0(abstract_3(), v48, abstract_3());

}
/* method id 416 */ abstract_5 C3::func6 (abstract_0 v58, abstract_1 v59, abstract_5** v60, abstract_1 v61) {
abstract_3 v62 = abstract_3();
abstract_6 v63 = abstract_6();
abstract_1 v64 = abstract_1();
abstract_0 v65 = abstract_0();
return abstract_5();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_5 func8 (abstract_5** v70, abstract_1 v71, abstract_4 v72, abstract_3 v73) {

v72 = abstract_4();
return abstract_5();

}
abstract_7 func9 (abstract_5** v74, abstract_3 v75) {

delete (new C3 ());
return abstract_7();

}
abstract_5 func10 (abstract_2* v76, abstract_2* v77) {
abstract_0 v78;
abstract_1 v79;
abstract_1 v80;
C3 v81;

::func9(new abstract_5* (), abstract_3());
::func9(new abstract_5* (), abstract_3());
return abstract_5();

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var33: AbstractType{0}
12   | var34: AbstractType{4}
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
8    | var45: PtrType{AbstractType{2}}
12   | var46: AbstractType{1}
16   | var47: AbstractType{1}
20   | var48: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var33: AbstractType{0}
40   | var34: AbstractType{4}
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
class C3    size(68)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var66: AbstractType{1}
12   | var67: DeletablePtrType{PtrType{AbstractType{5}}}
16   | var68: PtrType{AbstractType{2}}
20   | var69: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var33: AbstractType{0}
40   | var34: AbstractType{4}
44   +---
44   +--- (virtual base class C2)
44   | {vfptr}
48   | {vbptr}
52   | var45: PtrType{AbstractType{2}}
56   | var46: AbstractType{1}
60   | var47: AbstractType{1}
64   | var48: AbstractType{1}
68   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 68;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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
 const size_t model_offset = 44;
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

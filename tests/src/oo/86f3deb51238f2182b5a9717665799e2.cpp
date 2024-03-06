// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual abstract_1 func0 (abstract_0 v8, abstract_0 v9);
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_2 v18;
abstract_2 v19;
abstract_2 v20;
abstract_2 v21;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual ~C1 ();
/* method id 405 */ C1 ();
/* method id 406 */ virtual abstract_1 func0 (abstract_2 v30, abstract_2 v31, abstract_2 v32, abstract_2 v33);
C1 (special_constructor);
abstract_2 v46;
abstract_2 v47;
abstract_2 v48;
abstract_2 v49;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_2 v54;
abstract_2 v55;
abstract_2 v56;
abstract_2 v57;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ virtual abstract_1* func0 (abstract_2 v74, abstract_1** v75, abstract_0 v76);
/* method id 412 */ abstract_1* func1 (abstract_2 v77, abstract_0 v78, abstract_2 v79, abstract_2 v80);
C3 (special_constructor);
abstract_2 v85;
abstract_2 v86;
abstract_2 v87;
abstract_0 v88;
};
abstract_1* func2 (abstract_2 v89);
abstract_1 func3 ();
abstract_1 func4 (abstract_1** v90, abstract_2 v91);
abstract_1 func5 (abstract_2 v92, abstract_0 v93);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
abstract_0 v7 = abstract_0();
return ::func3();

}
/* method id 402 */ abstract_1 C0::func0 (abstract_0 v8, abstract_0 v9) {
abstract_2 v10 = abstract_2();
abstract_0 v11 = abstract_0();
abstract_0 v12 = abstract_0();
abstract_0 v13 = abstract_0();
return abstract_1();

}
/* method id 403 */ C0::C0 () {
abstract_2 v14 = abstract_2();
abstract_2 v15 = abstract_2();
abstract_2 v16 = abstract_2();
abstract_0 v17 = abstract_0();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::~C1 () {
abstract_2 v22 = abstract_2();
abstract_0 v23 = abstract_0();
abstract_2 v24 = abstract_2();
abstract_2 v25 = abstract_2();
return;

}
/* method id 405 */ C1::C1 () {
abstract_2 v26 = abstract_2();
abstract_0 v27 = abstract_0();
abstract_2 v28 = abstract_2();
abstract_2 v29 = abstract_2();
return;

}
/* method id 406 */ abstract_1 C1::func0 (abstract_2 v30, abstract_2 v31, abstract_2 v32, abstract_2 v33) {
abstract_2 v34 = abstract_2();
abstract_2 v35 = abstract_2();
abstract_0 v36 = abstract_0();
abstract_2 v37 = abstract_2();
return abstract_1();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_2 v50 = abstract_2();
abstract_2 v51 = abstract_2();
abstract_2 v52 = abstract_2();
abstract_0 v53 = abstract_0();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
abstract_2 v58 = abstract_2();
return;

}
/* method id 410 */ C3::~C3 () {
abstract_2 v65 = abstract_2();
abstract_2 v66 = abstract_2();
abstract_2 v67 = abstract_2();
abstract_0 v68 = abstract_0();
return;

}
/* method id 411 */ abstract_1* C3::func0 (abstract_2 v74, abstract_1** v75, abstract_0 v76) {
return ((abstract_1*) 0);

}
/* method id 412 */ abstract_1* C3::func1 (abstract_2 v77, abstract_0 v78, abstract_2 v79, abstract_2 v80) {
abstract_2 v81 = abstract_2();
abstract_2 v82 = abstract_2();
abstract_2 v83 = abstract_2();
abstract_1** v84 = new abstract_1* ();
return ((abstract_1*) 0);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_1* func2 (abstract_2 v89) {

return ((abstract_1*) 0);

}
abstract_1 func3 () {

return ::func4(((abstract_1**) 0), abstract_2());

}
abstract_1 func4 (abstract_1** v90, abstract_2 v91) {

return abstract_1();

}
abstract_1 func5 (abstract_2 v92, abstract_0 v93) {

return abstract_1();

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var18: AbstractType{2}
8    | var19: AbstractType{2}
12   | var20: AbstractType{2}
16   | var21: AbstractType{2}
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
class C1    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var46: AbstractType{2}
12   | var47: AbstractType{2}
16   | var48: AbstractType{2}
20   | var49: AbstractType{2}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var18: AbstractType{2}
32   | var19: AbstractType{2}
36   | var20: AbstractType{2}
40   | var21: AbstractType{2}
44   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 44;
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
class C2    size(64)
0    +---
0    | {vbptr}
4    | var54: AbstractType{2}
8    | var55: AbstractType{2}
12   | var56: AbstractType{2}
16   | var57: AbstractType{2}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var18: AbstractType{2}
28   | var19: AbstractType{2}
32   | var20: AbstractType{2}
36   | var21: AbstractType{2}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | {vbptr}
48   | var46: AbstractType{2}
52   | var47: AbstractType{2}
56   | var48: AbstractType{2}
60   | var49: AbstractType{2}
64   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 64;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(88)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var85: AbstractType{2}
12   | var86: AbstractType{2}
16   | var87: AbstractType{2}
20   | var88: AbstractType{0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var18: AbstractType{2}
32   | var19: AbstractType{2}
36   | var20: AbstractType{2}
40   | var21: AbstractType{2}
44   +---
44   +--- (virtual base class C1)
44   | {vfptr}
48   | {vbptr}
52   | var46: AbstractType{2}
56   | var47: AbstractType{2}
60   | var48: AbstractType{2}
64   | var49: AbstractType{2}
68   +---
68   +--- (virtual base class C2)
68   | {vbptr}
72   | var54: AbstractType{2}
76   | var55: AbstractType{2}
80   | var56: AbstractType{2}
84   | var57: AbstractType{2}
88   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 88;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 44;
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
 const size_t model_offset = 68;
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

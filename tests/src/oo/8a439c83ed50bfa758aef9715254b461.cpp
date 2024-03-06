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
/* method id 405 */ virtual abstract_2 func0 (abstract_1 v14, abstract_1 v15);
/* method id 406 */ C1 ();
/* method id 407 */ virtual abstract_4 func0 (abstract_0 v21, abstract_1 v22, abstract_4** v23, abstract_1 v24);
/* method id 408 */ ~C1 ();
C1 (special_constructor);
abstract_1 v29;
abstract_6 v30;
abstract_1 v31;
abstract_4** v32;
};
struct C2 : public virtual C1 {
/* method id 409 */ C2 ();
/* method id 410 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1 v83;
abstract_1 v84;
C1 v85;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 411 */ virtual ~C3 ();
/* method id 412 */ C3 ();
C3 (special_constructor);
abstract_1 v127;
C1 v128;
};
abstract_4 func2 (abstract_3 v129, abstract_1 v130, abstract_1 v131, C1 v132);
abstract_4 func3 (abstract_1 v137, abstract_1 v138, abstract_4** v139, abstract_1 v140);
abstract_4 func4 (abstract_1 v142, C1 v143);
abstract_4 func5 (abstract_1 v146, abstract_1 v147, abstract_1 v148, C1 v149);
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
abstract_1 v17 = abstract_1();
abstract_5 v18 = abstract_5();
abstract_5 v19 = abstract_5();
return abstract_2();

}
/* method id 406 */ C1::C1 () {
C0 v20 = *(&(*(((C0*) 0))));
return;

}
/* method id 407 */ abstract_4 C1::func0 (abstract_0 v21, abstract_1 v22, abstract_4** v23, abstract_1 v24) {
abstract_3 v25 = abstract_3();
abstract_6 v26 = abstract_6();
abstract_1 v27 = abstract_1();
abstract_0 v28 = abstract_0();
return abstract_4();

}
/* method id 408 */ C1::~C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::C2 () {
abstract_1 v33 = abstract_1();
abstract_0 v34 = abstract_0();
return;

}
/* method id 410 */ C2::~C2 () {
abstract_1 v51 = abstract_1();
abstract_1 v52 = abstract_1();
abstract_0 v53 = abstract_0();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 411 */ C3::~C3 () {
abstract_1 v86 = abstract_1();
abstract_1 v87 = abstract_1();
abstract_4** v88 = new abstract_4* ();
abstract_1 v89 = abstract_1();
return;

}
/* method id 412 */ C3::C3 () {
abstract_1 v94 = abstract_1();
abstract_1 v95 = abstract_1();
abstract_3 v96 = abstract_3();
abstract_1 v97 = abstract_1();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_4 func2 (abstract_3 v129, abstract_1 v130, abstract_1 v131, C1 v132) {
abstract_1 v133;
C1 v134;
abstract_1 v135;
abstract_1 v136;

return ::func4(v131, *((new C1 ())));

}
abstract_4 func3 (abstract_1 v137, abstract_1 v138, abstract_4** v139, abstract_1 v140) {
C1 v141;

delete (new C1 ());
return abstract_4();

}
abstract_4 func4 (abstract_1 v142, C1 v143) {
abstract_1 v144;
C1 v145;

return abstract_4();

}
abstract_4 func5 (abstract_1 v146, abstract_1 v147, abstract_1 v148, C1 v149) {

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
8    | var29: AbstractType{1}
12   | var30: AbstractType{6}
16   | var31: AbstractType{1}
20   | var32: DeletablePtrType{PtrType{AbstractType{4}}}
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
class C2    size(80)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var83: AbstractType{1}
12   | var84: AbstractType{1}
16   | var85: ClassType{1}
48   | {vtordisp for vbase 0}
52   +---
52   +--- (virtual base class C0)
52   | {vfptr}
56   +---
56   +--- (virtual base class C1)
56   | {vfptr}
60   | {vbptr}
64   | var29: AbstractType{1}
68   | var30: AbstractType{6}
72   | var31: AbstractType{1}
76   | var32: DeletablePtrType{PtrType{AbstractType{4}}}
80   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 80;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 56;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(120)
0    +---
0    | {vbptr}
4    | var127: AbstractType{1}
8    | var128: ClassType{1}
40   | {vtordisp for vbase 0}
44   +---
44   +--- (virtual base class C0)
44   | {vfptr}
48   +---
48   +--- (virtual base class C1)
48   | {vfptr}
52   | {vbptr}
56   | var29: AbstractType{1}
60   | var30: AbstractType{6}
64   | var31: AbstractType{1}
68   | var32: DeletablePtrType{PtrType{AbstractType{4}}}
72   +---
72   +--- (virtual base class C2)
72   | {vfptr}
76   | {vbptr}
80   | var83: AbstractType{1}
84   | var84: AbstractType{1}
88   | var85: ClassType{1}
120  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 120;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 48;
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
 const size_t model_offset = 72;
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

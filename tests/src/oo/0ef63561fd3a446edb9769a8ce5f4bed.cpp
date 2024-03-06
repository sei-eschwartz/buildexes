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
/* method id 403 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 404 */ C1 ();
/* method id 405 */ virtual abstract_2 func0 (abstract_4* v17, abstract_4* v18, abstract_1 v19, abstract_1 v20);
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ virtual abstract_4 func0 (abstract_4* v27);
C1 (special_constructor);
abstract_1 v32;
abstract_4** v33;
abstract_4** v34;
abstract_1 v35;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ virtual abstract_4 func0 (abstract_1 v64, abstract_1 v65, abstract_1 v66, abstract_3 v67);
/* method id 412 */ C3 ();
C3 (special_constructor);
abstract_4* v72;
C1 v73;
abstract_4** v74;
};
abstract_4 func2 (abstract_1 v75, abstract_4** v76, abstract_1 v77, abstract_1 v78);
abstract_4 func3 ();
abstract_4 func4 (abstract_1 v86, abstract_4** v87, abstract_1 v88, abstract_1 v89);
abstract_4 func5 (abstract_0 v94);
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
/* method id 403 */ C0::C0 () {
abstract_1 v13 = abstract_1();
abstract_4* v14 = ((abstract_4*) 0);
abstract_4* v15 = new abstract_4 ();
abstract_0 v16 = abstract_0();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
return;

}
/* method id 405 */ abstract_2 C1::func0 (abstract_4* v17, abstract_4* v18, abstract_1 v19, abstract_1 v20) {
abstract_3 v21 = abstract_3();
abstract_4* v22 = new abstract_4 ();
return abstract_2();

}
/* method id 406 */ C1::~C1 () {
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
abstract_1 v25 = abstract_1();
abstract_1 v26 = abstract_1();
return;

}
/* method id 407 */ abstract_4 C1::func0 (abstract_4* v27) {
abstract_1 v28 = abstract_1();
abstract_1 v29 = abstract_1();
abstract_3 v30 = abstract_3();
abstract_5 v31 = abstract_5();
return ::func5(abstract_0());

}
C1::C1 (special_constructor)  {}

/* method id 408 */ C2::~C2 () {
abstract_1 v36 = abstract_1();
abstract_1 v37 = abstract_1();
abstract_1 v38 = abstract_1();
abstract_3 v39 = abstract_3();
return;

}
/* method id 409 */ C2::C2 () {
abstract_1 v40 = abstract_1();
abstract_1 v41 = abstract_1();
abstract_1 v42 = abstract_1();
abstract_4** v43 = new abstract_4* ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 410 */ C3::~C3 () {
abstract_1 v60 = abstract_1();
abstract_1 v61 = abstract_1();
abstract_1 v62 = abstract_1();
abstract_1 v63 = abstract_1();
::func3();
::func3();
return;

}
/* method id 411 */ abstract_4 C3::func0 (abstract_1 v64, abstract_1 v65, abstract_1 v66, abstract_3 v67) {
abstract_4** v68 = new abstract_4* ();
abstract_1 v69 = abstract_1();
abstract_1 v70 = abstract_1();
abstract_1 v71 = abstract_1();
::func5(abstract_0());
::func5(abstract_0());
::func5(abstract_0());
::func5(abstract_0());
return ::func3();

}
/* method id 412 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_4 func2 (abstract_1 v75, abstract_4** v76, abstract_1 v77, abstract_1 v78) {
abstract_1 v79;
abstract_1 v80;
abstract_4* v81;
abstract_1 v82;

return abstract_4();

}
abstract_4 func3 () {
abstract_1 v83;
abstract_1 v84;
abstract_0 v85;

return abstract_4();

}
abstract_4 func4 (abstract_1 v86, abstract_4** v87, abstract_1 v88, abstract_1 v89) {
abstract_3 v90;
abstract_1 v91;
abstract_1 v92;
abstract_0 v93;

return (((C1*) 0))->C1::func0(new abstract_4 ());

}
abstract_4 func5 (abstract_0 v94) {
C1 v95;
abstract_1 v96;
abstract_4** v97;
abstract_1 v98;

return ::func3();

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
4    | var32: AbstractType{1}
8    | var33: DeletablePtrType{PtrType{AbstractType{4}}}
12   | var34: DeletablePtrType{PtrType{AbstractType{4}}}
16   | var35: AbstractType{1}
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
}
/*
class C2    size(28)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C1)
4    | {vfptr}
8    | var32: AbstractType{1}
12   | var33: DeletablePtrType{PtrType{AbstractType{4}}}
16   | var34: DeletablePtrType{PtrType{AbstractType{4}}}
20   | var35: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(64)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var72: PtrType{AbstractType{4}}
12   | var73: ClassType{1}
32   | var74: DeletablePtrType{PtrType{AbstractType{4}}}
36   +---
36   +--- (virtual base class C1)
36   | {vfptr}
40   | var32: AbstractType{1}
44   | var33: DeletablePtrType{PtrType{AbstractType{4}}}
48   | var34: DeletablePtrType{PtrType{AbstractType{4}}}
52   | var35: AbstractType{1}
56   +---
56   +--- (virtual base class C0)
56   | {vfptr}
60   +---
60   +--- (virtual base class C2)
60   | {vbptr}
64   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 64;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
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
 const size_t model_offset = 60;
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

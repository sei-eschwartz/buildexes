// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_5 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
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
struct C1 : public C0 {
/* method id 405 */ virtual abstract_2 func1 (abstract_3 v14, abstract_4 v15, abstract_1 v16, abstract_1 v17);
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ virtual abstract_5 func1 ();
/* method id 408 */ virtual abstract_2 func0 (abstract_0 v19, abstract_4 v20);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_5* v23;
abstract_5* v24;
abstract_2* v25;
abstract_4 v26;
};
struct C2 : public virtual C1 {
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_1 v39;
abstract_1 v40;
abstract_1 v41;
abstract_1 v42;
};
struct C3 : public virtual C2 {
/* method id 412 */ virtual ~C3 ();
/* method id 413 */ C3 ();
C3 (special_constructor);
abstract_2* v58;
abstract_1 v59;
C2 v60;
abstract_4 v61;
};
abstract_5 func5 ();
abstract_5 func6 (abstract_2* v65, abstract_1 v66, abstract_1 v67, abstract_3 v68);
abstract_2 func7 ();
abstract_5* func8 (abstract_7 v74, abstract_3 v75, abstract_5* v76, abstract_3 v77);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return ::func7();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
delete (new C0 ());
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

/* method id 405 */ abstract_2 C1::func1 (abstract_3 v14, abstract_4 v15, abstract_1 v16, abstract_1 v17) {
return ((new C1 ()))->C1::func0(abstract_0(), v26);

}
/* method id 406 */ C1::~C1 () {
abstract_5* v18 = new abstract_5 ();
return;

}
/* method id 407 */ abstract_5 C1::func1 () {
return abstract_5();

}
/* method id 408 */ abstract_2 C1::func0 (abstract_0 v19, abstract_4 v20) {
abstract_5* v21 = ((abstract_5*) 0);
abstract_0 v22 = abstract_0();
delete (new C1 ());
delete (new C2 ());
return abstract_2();

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C2::C2 () {
abstract_1 v27 = abstract_1();
abstract_1 v28 = abstract_1();
abstract_1 v29 = abstract_1();
abstract_1 v30 = abstract_1();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::~C3 () {
abstract_1 v43 = abstract_1();
abstract_1 v44 = abstract_1();
abstract_1 v45 = abstract_1();
((C1*)(&(v60)))->C1::func1();
((C1*)(&(v60)))->C1::func1();
return;

}
/* method id 413 */ C3::C3 () {
abstract_1 v46 = abstract_1();
abstract_1 v47 = abstract_1();
abstract_1 v48 = abstract_1();
abstract_1 v49 = abstract_1();
v42 = v49;
v42 = v49;
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_5 func5 () {
abstract_1 v62;
abstract_1 v63;
C2 v64;

delete (new C0 ());
return abstract_5();

}
abstract_5 func6 (abstract_2* v65, abstract_1 v66, abstract_1 v67, abstract_3 v68) {
abstract_1 v69;
abstract_1 v70;
abstract_2* v71;
abstract_4 v72;

return ::func5();

}
abstract_2 func7 () {
abstract_0 v73;

return abstract_2();

}
abstract_5* func8 (abstract_7 v74, abstract_3 v75, abstract_5* v76, abstract_3 v77) {

return v76;

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
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var23: PtrType{AbstractType{5}}
8    | var24: PtrType{AbstractType{5}}
12   | var25: PtrType{AbstractType{2}}
16   | var26: AbstractType{4}
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
class C2    size(40)
0    +---
0    | {vbptr}
4    | var39: AbstractType{1}
8    | var40: AbstractType{1}
12   | var41: AbstractType{1}
16   | var42: AbstractType{1}
20   +---
20   +--- (virtual base class C1)
20   | +--- (base class C0)
20   | | {vfptr}
24   | +---
24   | var23: PtrType{AbstractType{5}}
28   | var24: PtrType{AbstractType{5}}
32   | var25: PtrType{AbstractType{2}}
36   | var26: AbstractType{4}
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
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
class C3    size(96)
0    +---
0    | {vbptr}
4    | var58: PtrType{AbstractType{2}}
8    | var59: AbstractType{1}
12   | var60: ClassType{2}
52   | var61: AbstractType{4}
56   +---
56   +--- (virtual base class C1)
56   | +--- (base class C0)
56   | | {vfptr}
60   | +---
60   | var23: PtrType{AbstractType{5}}
64   | var24: PtrType{AbstractType{5}}
68   | var25: PtrType{AbstractType{2}}
72   | var26: AbstractType{4}
76   +---
76   +--- (virtual base class C2)
76   | {vbptr}
80   | var39: AbstractType{1}
84   | var40: AbstractType{1}
88   | var41: AbstractType{1}
92   | var42: AbstractType{1}
96   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 96;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 76;
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

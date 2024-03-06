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
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 411 */ virtual ~C3 ();
/* method id 412 */ C3 ();
C3 (special_constructor);
abstract_1 v81;
abstract_1 v82;
C1 v83;
};
abstract_4 func2 (abstract_1 v84, C1 v85);
abstract_4 func3 (abstract_1 v89, abstract_1 v90, abstract_3 v91, abstract_1 v92);
abstract_2 func4 (abstract_1 v97, C1 v98);
abstract_4 func5 (abstract_4** v102, abstract_1 v103, abstract_1 v104, abstract_3 v105);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return ::func4(v3, *((new C1 ())));

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
delete (new C1 ());
return ::func4(abstract_1(), *(((C1*) 0)));

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
return ::func4(abstract_1(), *(((C1*) 0)));

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
delete (new C1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::C2 () {
abstract_1 v33 = abstract_1();
abstract_0 v34 = abstract_0();
return;

}
/* method id 410 */ C2::~C2 () {
abstract_1 v43 = abstract_1();
abstract_4** v44 = new abstract_4* ();
abstract_1 v45 = abstract_1();
abstract_1 v46 = abstract_1();
delete (new C1 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 411 */ C3::~C3 () {
abstract_1 v51 = abstract_1();
abstract_4** v52 = new abstract_4* ();
abstract_1 v53 = abstract_1();
abstract_1 v54 = abstract_1();
delete (new C3 ());
return;

}
/* method id 412 */ C3::C3 () {
abstract_0 v55 = abstract_0();
delete (new C3 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_4 func2 (abstract_1 v84, C1 v85) {
abstract_1 v86;
abstract_1 v87;
C1 v88;

return abstract_4();

}
abstract_4 func3 (abstract_1 v89, abstract_1 v90, abstract_3 v91, abstract_1 v92) {
abstract_1 v93;
C1 v94;
abstract_1 v95;
C1 v96;

return abstract_4();

}
abstract_2 func4 (abstract_1 v97, C1 v98) {
abstract_1 v99;
abstract_1 v100;
C1 v101;

return abstract_2();

}
abstract_4 func5 (abstract_4** v102, abstract_1 v103, abstract_1 v104, abstract_3 v105) {
abstract_1 v106;
C0 v107;
abstract_1 v108;
abstract_1 v109;

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
class C2    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var29: AbstractType{1}
28   | var30: AbstractType{6}
32   | var31: AbstractType{1}
36   | var32: DeletablePtrType{PtrType{AbstractType{4}}}
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
class C3    size(84)
0    +---
0    | {vbptr}
4    | var81: AbstractType{1}
8    | var82: AbstractType{1}
12   | var83: ClassType{1}
44   | {vtordisp for vbase 0}
48   +---
48   +--- (virtual base class C0)
48   | {vfptr}
52   +---
52   +--- (virtual base class C1)
52   | {vfptr}
56   | {vbptr}
60   | var29: AbstractType{1}
64   | var30: AbstractType{6}
68   | var31: AbstractType{1}
72   | var32: DeletablePtrType{PtrType{AbstractType{4}}}
76   +---
76   +--- (virtual base class C2)
76   | {vfptr}
80   | {vbptr}
84   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 84;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 52;
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

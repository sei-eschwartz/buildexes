// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 (abstract_0* v0);
/* method id 401 */ C0 ();
/* method id 402 */ virtual ~C0 ();
C0 (special_constructor);
abstract_1 v13;
abstract_0* v14;
abstract_0* v15;
abstract_1 v16;
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ abstract_0 func0 (abstract_1 v21);
/* method id 405 */ abstract_0 func0 (abstract_0* v24, abstract_0* v25);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_1 v30;
abstract_1 v31;
abstract_1 v32;
abstract_1 v33;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_1 v38;
abstract_1 v39;
abstract_1 v40;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual abstract_0 func0 (abstract_0* v52);
/* method id 411 */ virtual abstract_0 func1 (abstract_1 v57, abstract_0* v58, abstract_0* v59, abstract_1 v60);
C3 (special_constructor);
abstract_0* v64;
abstract_0* v65;
};
abstract_0 func3 (abstract_0* v66, C3 v67);
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0) {
return abstract_0();

}
/* method id 401 */ C0::C0 () {
delete (new C2 ());
return;

}
/* method id 402 */ C0::~C0 () {
abstract_1 v1 = abstract_1();
abstract_1 v2 = abstract_1();
abstract_0* v3 = new abstract_0 ();
v2 = abstract_1();
v2 = abstract_1();
v2 = abstract_1();
v2 = abstract_1();
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::~C1 () {
abstract_1 v17 = abstract_1();
abstract_1 v18 = abstract_1();
abstract_1 v19 = abstract_1();
abstract_1 v20 = abstract_1();
v17 = abstract_1();
return;

}
/* method id 404 */ abstract_0 C1::func0 (abstract_1 v21) {
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
return abstract_0();

}
/* method id 405 */ abstract_0 C1::func0 (abstract_0* v24, abstract_0* v25) {
return abstract_0();

}
/* method id 406 */ C1::C1 () {
abstract_1 v26 = abstract_1();
abstract_1 v27 = abstract_1();
abstract_0* v28 = new abstract_0 ();
abstract_1 v29 = abstract_1();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_1 v34 = abstract_1();
abstract_1 v35 = abstract_1();
abstract_1 v36 = abstract_1();
abstract_1 v37 = abstract_1();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
abstract_1 v41 = abstract_1();
abstract_1 v42 = abstract_1();
abstract_1 v43 = abstract_1();
abstract_1 v44 = abstract_1();
delete (new C2 ());
return;

}
/* method id 410 */ abstract_0 C3::func0 (abstract_0* v52) {
abstract_0* v53 = ((abstract_0*) 0);
abstract_1 v54 = abstract_1();
abstract_1 v55 = abstract_1();
abstract_1 v56 = abstract_1();
delete (new C0 ());
delete (new C1 ());
return ::func3(((abstract_0*) 0), *(((C3*) 0)));

}
/* method id 411 */ abstract_0 C3::func1 (abstract_1 v57, abstract_0* v58, abstract_0* v59, abstract_1 v60) {
abstract_0* v61 = new abstract_0 ();
abstract_1 v62 = abstract_1();
abstract_1 v63 = abstract_1();
return abstract_0();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func3 (abstract_0* v66, C3 v67) {
abstract_0* v68;
C3 v69;
abstract_0* v70;

return abstract_0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var13: AbstractType{1}
8    | var14: PtrType{AbstractType{0}}
12   | var15: PtrType{AbstractType{0}}
16   | var16: AbstractType{1}
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
class C1    size(40)
0    +---
0    | {vbptr}
4    | var30: AbstractType{1}
8    | var31: AbstractType{1}
12   | var32: AbstractType{1}
16   | var33: AbstractType{1}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var13: AbstractType{1}
28   | var14: PtrType{AbstractType{0}}
32   | var15: PtrType{AbstractType{0}}
36   | var16: AbstractType{1}
40   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 40;
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
class C2    size(56)
0    +---
0    | {vbptr}
4    | var38: AbstractType{1}
8    | var39: AbstractType{1}
12   | var40: AbstractType{1}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var13: AbstractType{1}
24   | var14: PtrType{AbstractType{0}}
28   | var15: PtrType{AbstractType{0}}
32   | var16: AbstractType{1}
36   +---
36   +--- (virtual base class C1)
36   | {vbptr}
40   | var30: AbstractType{1}
44   | var31: AbstractType{1}
48   | var32: AbstractType{1}
52   | var33: AbstractType{1}
56   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 56;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(76)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var64: PtrType{AbstractType{0}}
12   | var65: PtrType{AbstractType{0}}
16   | {vtordisp for vbase 0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var13: AbstractType{1}
28   | var14: PtrType{AbstractType{0}}
32   | var15: PtrType{AbstractType{0}}
36   | var16: AbstractType{1}
40   +---
40   +--- (virtual base class C1)
40   | {vbptr}
44   | var30: AbstractType{1}
48   | var31: AbstractType{1}
52   | var32: AbstractType{1}
56   | var33: AbstractType{1}
60   +---
60   +--- (virtual base class C2)
60   | {vbptr}
64   | var38: AbstractType{1}
68   | var39: AbstractType{1}
72   | var40: AbstractType{1}
76   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 76;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
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

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 ();
/* method id 401 */ ~C0 ();
/* method id 402 */ virtual abstract_0 func0 (abstract_1* v1, abstract_1* v2, abstract_1* v3, abstract_1* v4);
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_1* v5;
abstract_1* v6;
abstract_1* v7;
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
/* method id 405 */ virtual abstract_1 func2 (abstract_2 v14, abstract_1* v15);
C1 (special_constructor);
C0 v24;
C0 v25;
C0 v26;
C0 v27;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
C0 v28;
C0 v29;
C0 v30;
C0 v31;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ ~C3 ();
/* method id 410 */ C3 ();
C3 (special_constructor);
C0 v40;
C0 v41;
C0 v42;
};
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return abstract_0();

}
/* method id 401 */ C0::~C0 () {
abstract_1* v0 = ((abstract_1*) 0);
return;

}
/* method id 402 */ abstract_0 C0::func0 (abstract_1* v1, abstract_1* v2, abstract_1* v3, abstract_1* v4) {
return abstract_0();

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
C0 v8 = *(&(*((new C0 ()))));
return;

}
/* method id 405 */ abstract_1 C1::func2 (abstract_2 v14, abstract_1* v15) {
abstract_2 v16 = abstract_2();
C0 v17 = *(((C0*) 0));
abstract_2 v18 = abstract_2();
C0 v19 = *(((C0*) 0));
return abstract_1();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::~C3 () {
abstract_2 v32 = abstract_2();
C0 v33 = *((new C0 ()));
C0 v34 = *((new C0 ()));
C0 v35 = *((new C0 ()));
return;

}
/* method id 410 */ C3::C3 () {
C0 v36 = *(((C0*) 0));
abstract_2 v37 = abstract_2();
C0 v38 = *(((C0*) 0));
C0 v39 = *(((C0*) 0));
v6 = v6;
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var5: PtrType{AbstractType{1}}
8    | var6: PtrType{AbstractType{1}}
12   | var7: PtrType{AbstractType{1}}
16   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(88)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var24: ClassType{0}
24   | var25: ClassType{0}
40   | var26: ClassType{0}
56   | var27: ClassType{0}
72   +---
72   +--- (virtual base class C0)
72   | {vfptr}
76   | var5: PtrType{AbstractType{1}}
80   | var6: PtrType{AbstractType{1}}
84   | var7: PtrType{AbstractType{1}}
88   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 88;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 72;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(156)
0    +---
0    | {vbptr}
4    | var28: ClassType{0}
20   | var29: ClassType{0}
36   | var30: ClassType{0}
52   | var31: ClassType{0}
68   +---
68   +--- (virtual base class C0)
68   | {vfptr}
72   | var5: PtrType{AbstractType{1}}
76   | var6: PtrType{AbstractType{1}}
80   | var7: PtrType{AbstractType{1}}
84   +---
84   +--- (virtual base class C1)
84   | {vfptr}
88   | {vbptr}
92   | var24: ClassType{0}
108  | var25: ClassType{0}
124  | var26: ClassType{0}
140  | var27: ClassType{0}
156  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 156;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 84;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(208)
0    +---
0    | {vbptr}
4    | var40: ClassType{0}
20   | var41: ClassType{0}
36   | var42: ClassType{0}
52   +---
52   +--- (virtual base class C0)
52   | {vfptr}
56   | var5: PtrType{AbstractType{1}}
60   | var6: PtrType{AbstractType{1}}
64   | var7: PtrType{AbstractType{1}}
68   +---
68   +--- (virtual base class C1)
68   | {vfptr}
72   | {vbptr}
76   | var24: ClassType{0}
92   | var25: ClassType{0}
108  | var26: ClassType{0}
124  | var27: ClassType{0}
140  +---
140  +--- (virtual base class C2)
140  | {vbptr}
144  | var28: ClassType{0}
160  | var29: ClassType{0}
176  | var30: ClassType{0}
192  | var31: ClassType{0}
208  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 208;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 68;
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
 const size_t model_offset = 140;
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

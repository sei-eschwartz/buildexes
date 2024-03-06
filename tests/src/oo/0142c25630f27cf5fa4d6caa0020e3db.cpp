// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ virtual abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_0 v7;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 405 */ virtual void func1 ();
/* method id 406 */ void func0 (abstract_0 v12, abstract_0 v13, abstract_0 v14, abstract_0 v15);
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ C2 ();
C2 (special_constructor);
C1 v19;
C1 v20;
C1 v21;
C1 v22;
};
struct C3 : public virtual C2 {
/* method id 409 */ C3 ();
C3 (special_constructor);
C1 v23;
C1 v24;
C1 v25;
C1 v26;
};
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
abstract_0 v4 = abstract_0();
return abstract_1();

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::~C1 () {
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
return;

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ void C2::func1 () {
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_0 v11 = abstract_0();
return;

}
/* method id 406 */ void C2::func0 (abstract_0 v12, abstract_0 v13, abstract_0 v14, abstract_0 v15) {
abstract_0 v16 = abstract_0();
return;

}
/* method id 407 */ C2::~C2 () {
abstract_0 v17 = abstract_0();
C1 v18 = *(((C1*) 0));
return;

}
/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var7: AbstractType{0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(88)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var19: ClassType{1}
24   | var20: ClassType{1}
40   | var21: ClassType{1}
56   | var22: ClassType{1}
72   +---
72   +--- (virtual base class C0)
72   | {vfptr}
76   +---
76   +--- (virtual base class C1)
76   | {vfptr}
80   | {vbptr}
84   | var7: AbstractType{0}
88   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 88;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 72;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 76;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(156)
0    +---
0    | {vbptr}
4    | var23: ClassType{1}
20   | var24: ClassType{1}
36   | var25: ClassType{1}
52   | var26: ClassType{1}
68   +---
68   +--- (virtual base class C0)
68   | {vfptr}
72   +---
72   +--- (virtual base class C1)
72   | {vfptr}
76   | {vbptr}
80   | var7: AbstractType{0}
84   +---
84   +--- (virtual base class C2)
84   | {vfptr}
88   | {vbptr}
92   | var19: ClassType{1}
108  | var20: ClassType{1}
124  | var21: ClassType{1}
140  | var22: ClassType{1}
156  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 156;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 84;
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

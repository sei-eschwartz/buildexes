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
/* method id 403 */ virtual abstract_2 func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_4 func0 (abstract_1 v14, abstract_2* v15, abstract_1 v16, abstract_0 v17);
/* method id 406 */ ~C1 ();
/* method id 407 */ C1 ();
C1 (special_constructor);
abstract_1 v24;
};
struct C2 : public virtual C1 {
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_1 v25;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 410 */ C3 ();
C3 (special_constructor);
abstract_2* v26;
C1 v27;
C1 v28;
abstract_0 v29;
};
abstract_4 func6 ();
abstract_4 func7 (abstract_3 v30, abstract_0 v31);
abstract_2 func8 (abstract_1 v33, C1 v34, abstract_3 v35);
abstract_4 func9 (abstract_1 v40, abstract_1 v41, abstract_1 v42, abstract_1 v43);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return ::func8(v3, *(((C1*) 0)), abstract_3());

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
return ::func8(abstract_1(), *((new C1 ())), abstract_3());

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_4 C1::func0 (abstract_1 v14, abstract_2* v15, abstract_1 v16, abstract_0 v17) {
return ::func7(abstract_3(), v17);

}
/* method id 406 */ C1::~C1 () {
abstract_1 v18 = abstract_1();
abstract_1 v19 = abstract_1();
abstract_5 v20 = abstract_5();
abstract_0 v21 = abstract_0();
return;

}
/* method id 407 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_4 func6 () {

return abstract_4();

}
abstract_4 func7 (abstract_3 v30, abstract_0 v31) {
C1 v32;

return abstract_4();

}
abstract_2 func8 (abstract_1 v33, C1 v34, abstract_3 v35) {
abstract_0 v36;
abstract_5 v37;
abstract_2* v38;
C1 v39;

return abstract_2();

}
abstract_4 func9 (abstract_1 v40, abstract_1 v41, abstract_1 v42, abstract_1 v43) {
abstract_3 v44;
abstract_1 v45;
abstract_1 v46;
C1 v47;

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var24: AbstractType{1}
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
class C2    size(24)
0    +---
0    | {vbptr}
4    | var25: AbstractType{1}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | {vbptr}
20   | var24: AbstractType{1}
24   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
0    | {vbptr}
4    | var26: PtrType{AbstractType{2}}
8    | var27: ClassType{1}
24   | var28: ClassType{1}
40   | var29: AbstractType{0}
44   +---
44   +--- (virtual base class C0)
44   | {vfptr}
48   +---
48   +--- (virtual base class C1)
48   | {vfptr}
52   | {vbptr}
56   | var24: AbstractType{1}
60   +---
60   +--- (virtual base class C2)
60   | {vbptr}
64   | var25: AbstractType{1}
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

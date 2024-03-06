// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void* func0 ();
/* method id 401 */ virtual void* func0 (abstract_0 v0);
/* method id 402 */ virtual void func0 (abstract_0 v1, abstract_0 v2);
/* method id 403 */ virtual abstract_1 func0 (abstract_0 v5, abstract_0 v6, abstract_0 v7, abstract_0 v8);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_0 v9;
abstract_0 v10;
abstract_0 v11;
abstract_0 v12;
};
struct C1 : public C0 {
/* method id 405 */ abstract_1 func1 (abstract_0 v13, abstract_0 v14, abstract_0 v15, abstract_0 v16);
/* method id 406 */ C1 ();
/* method id 407 */ virtual ~C1 ();
/* method id 408 */ void func0 (abstract_0 v42, abstract_0 v43);
C1 (special_constructor);
abstract_0 v44;
abstract_0 v45;
abstract_0 v46;
C0 v47;
};
struct C2 : public virtual C0 {
/* method id 409 */ C2 ();
C2 (special_constructor);
};
struct C3  {
/* method id 410 */ C3 ();
C3 (special_constructor);
C0 v48;
abstract_0 v49;
};
// definitions
/* method id 400 */ void* C0::func0 () {
return ((void*) 0);

}
/* method id 401 */ void* C0::func0 (abstract_0 v0) {
return ((void*) 0);

}
/* method id 402 */ void C0::func0 (abstract_0 v1, abstract_0 v2) {
abstract_0 v3 = abstract_0();
return;

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v5, abstract_0 v6, abstract_0 v7, abstract_0 v8) {
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func1 (abstract_0 v13, abstract_0 v14, abstract_0 v15, abstract_0 v16) {
abstract_0 v17 = abstract_0();
abstract_0 v18 = abstract_0();
abstract_0 v19 = abstract_0();
abstract_0 v20 = abstract_0();
return abstract_1();

}
/* method id 406 */ C1::C1 () {
abstract_0 v21 = abstract_0();
abstract_0 v22 = abstract_0();
abstract_0 v23 = abstract_0();
abstract_0 v24 = abstract_0();
return;

}
/* method id 407 */ C1::~C1 () {
abstract_0 v33 = abstract_0();
abstract_0 v34 = abstract_0();
abstract_0 v35 = abstract_0();
abstract_0 v36 = abstract_0();
return;

}
/* method id 408 */ void C1::func0 (abstract_0 v42, abstract_0 v43) {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var9: AbstractType{0}
8    | var10: AbstractType{0}
12   | var11: AbstractType{0}
16   | var12: AbstractType{0}
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
class C1    size(52)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var9: AbstractType{0}
8    | | var10: AbstractType{0}
12   | | var11: AbstractType{0}
16   | | var12: AbstractType{0}
20   | +---
20   | var44: AbstractType{0}
24   | var45: AbstractType{0}
28   | var46: AbstractType{0}
32   | var47: ClassType{0}
52   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 52;
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
class C2    size(24)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    | var9: AbstractType{0}
12   | var10: AbstractType{0}
16   | var11: AbstractType{0}
20   | var12: AbstractType{0}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(24)
0    +---
0    | var48: ClassType{0}
20   | var49: AbstractType{0}
24   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

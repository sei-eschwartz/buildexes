// type for special constructors
struct special_constructor {};
struct abstract_5 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual void func0 (abstract_2 v6, abstract_0 v7, abstract_3 v8, abstract_3 v9);
/* method id 402 */ void func0 (abstract_2 v10, abstract_4 v11, abstract_1 v12, abstract_1 v13);
/* method id 403 */ virtual ~C0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1 v16;
abstract_0 v17;
abstract_2 v18;
abstract_0 v19;
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual ~C1 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_5* v20;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_4 v21;
abstract_2 v22;
abstract_3 v23;
abstract_1 v24;
};
struct C3  {
/* method id 409 */ ~C3 ();
/* method id 410 */ C3 ();
C3 (special_constructor);
};
void func6 (abstract_5* v25, abstract_4 v26, abstract_4 v27, abstract_0 v28);
// definitions
/* method id 400 */ void C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
abstract_0 v4 = abstract_0();
abstract_2 v5 = abstract_2();
return ::func6(((abstract_5*) 0), abstract_4(), abstract_4(), abstract_0());

}
/* method id 401 */ void C0::func0 (abstract_2 v6, abstract_0 v7, abstract_3 v8, abstract_3 v9) {
return;

}
/* method id 402 */ void C0::func0 (abstract_2 v10, abstract_4 v11, abstract_1 v12, abstract_1 v13) {
return;

}
/* method id 403 */ C0::~C0 () {
abstract_1 v14 = abstract_1();
abstract_0 v15 = abstract_0();
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::~C1 () {
return;

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::~C3 () {
return;

}
/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

void func6 (abstract_5* v25, abstract_4 v26, abstract_4 v27, abstract_0 v28) {

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var16: AbstractType{1}
8    | var17: AbstractType{0}
12   | var18: AbstractType{2}
16   | var19: AbstractType{0}
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
class C1    size(28)
0    +---
0    | {vbptr}
4    | var20: PtrType{AbstractType{5}}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var16: AbstractType{1}
16   | var17: AbstractType{0}
20   | var18: AbstractType{2}
24   | var19: AbstractType{0}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(48)
0    +---
0    | {vbptr}
4    | var21: AbstractType{4}
8    | var22: AbstractType{2}
12   | var23: AbstractType{3}
16   | var24: AbstractType{1}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var16: AbstractType{1}
28   | var17: AbstractType{0}
32   | var18: AbstractType{2}
36   | var19: AbstractType{0}
40   +---
40   +--- (virtual base class C1)
40   | {vbptr}
44   | var20: PtrType{AbstractType{5}}
48   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 48;
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
class C3    size(0)
0    +---
0    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 1;
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

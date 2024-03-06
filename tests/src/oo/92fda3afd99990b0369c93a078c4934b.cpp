// type for special constructors
struct special_constructor {};
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_11 { int x; };
struct abstract_12 { int x; };
struct abstract_13 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_10 { int x; };
struct abstract_14 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ C0 func0 (C0* v7, abstract_1 v8, abstract_1 v9, abstract_1 v10);
C1 (special_constructor);
abstract_2 v15;
C0* v16;
abstract_3 v17;
C0* v18;
};
struct C2  {
/* method id 404 */ ~C2 ();
/* method id 405 */ virtual C0 func0 (C0* v20, abstract_3 v21, abstract_0 v22);
/* method id 406 */ C2 ();
/* method id 407 */ virtual abstract_4 func0 (abstract_3 v26, C0* v27);
C2 (special_constructor);
C0* v28;
};
struct C3 : public virtual C2, public virtual C1, public virtual C0 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual abstract_4 func0 (abstract_3 v30, C0* v31);
/* method id 410 */ virtual void func0 ();
C3 (special_constructor);
abstract_14 v41;
};
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = ((C0*) 0);
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
return;

}
/* method id 403 */ C0 C1::func0 (C0* v7, abstract_1 v8, abstract_1 v9, abstract_1 v10) {
return *(((C0*) 0));

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::~C2 () {
abstract_0 v19 = abstract_0();
return;

}
/* method id 405 */ C0 C2::func0 (C0* v20, abstract_3 v21, abstract_0 v22) {
C1 v23 = *(&(*(((C1*) 0))));
abstract_1 v24 = abstract_1();
delete (new C3 ());
return *(((C0*) 0));

}
/* method id 406 */ C2::C2 () {
abstract_0 v25 = abstract_0();
v28 = (new C0 ());
return;

}
/* method id 407 */ abstract_4 C2::func0 (abstract_3 v26, C0* v27) {
return abstract_4();

}
C2::C2 (special_constructor)  {}

/* method id 408 */ C3::C3 () {
abstract_0 v29 = abstract_0();
v17 = abstract_3();
v17 = abstract_3();
return;

}
/* method id 409 */ abstract_4 C3::func0 (abstract_3 v30, C0* v31) {
abstract_3 v32 = abstract_3();
v16 = ((C0*) 0);
v16 = ((C0*) 0);
v31 = ((C0*) 0);
v16 = v28;
return abstract_4();

}
/* method id 410 */ void C3::func0 () {
C1 v33 = *(((C1*) 0));
v17 = abstract_3();
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()), C1(special_constructor ()), C0(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(0)
0    +---
0    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 1;
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
4    | var15: AbstractType{2}
8    | var16: PtrType{ClassType{0}}
12   | var17: AbstractType{3}
16   | var18: PtrType{ClassType{0}}
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
class C2    size(8)
0    +---
0    | {vfptr}
4    | var28: PtrType{ClassType{0}}
8    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var41: AbstractType{14}
12   | {vtordisp for vbase 2}
16   +---
16   +--- (virtual base class C2)
16   | {vfptr}
20   | var28: PtrType{ClassType{0}}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | var15: AbstractType{2}
32   | var16: PtrType{ClassType{0}}
36   | var17: AbstractType{3}
40   | var18: PtrType{ClassType{0}}
44   +---
44   +--- (virtual base class C0)
44   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 44;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct abstract_11 { int x; };
struct abstract_12 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ virtual abstract_1* func1 (abstract_0 v1, abstract_0 v2);
/* method id 404 */ virtual abstract_2 func1 (abstract_0 v4, abstract_0 v5, abstract_0 v6);
/* method id 405 */ virtual void func0 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
/* method id 408 */ virtual abstract_1* func1 ();
/* method id 409 */ virtual abstract_3 func0 (abstract_0 v10, abstract_0 v11, abstract_0 v12, abstract_0 v13);
/* method id 410 */ virtual abstract_1* func0 (abstract_0 v14, abstract_0 v15);
C2 (special_constructor);
abstract_0 v17;
abstract_0 v18;
abstract_0 v19;
};
struct C3 : public virtual C1 {
/* method id 412 */ C3 ();
/* method id 413 */ virtual ~C3 ();
C3 (special_constructor);
C1 v24;
};
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::~C1 () {
abstract_0 v0 = abstract_0();
return;

}
/* method id 403 */ abstract_1* C1::func1 (abstract_0 v1, abstract_0 v2) {
abstract_0 v3 = abstract_0();
return ((abstract_1*) 0);

}
/* method id 404 */ abstract_2 C1::func1 (abstract_0 v4, abstract_0 v5, abstract_0 v6) {
return abstract_2();

}
/* method id 405 */ void C1::func0 () {
abstract_0 v7 = abstract_0();
abstract_0 v8 = abstract_0();
return;

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_0 v9 = abstract_0();
return;

}
/* method id 408 */ abstract_1* C2::func1 () {
return new abstract_1 ();

}
/* method id 409 */ abstract_3 C2::func0 (abstract_0 v10, abstract_0 v11, abstract_0 v12, abstract_0 v13) {
return abstract_3();

}
/* method id 410 */ abstract_1* C2::func0 (abstract_0 v14, abstract_0 v15) {
abstract_0 v16 = abstract_0();
return new abstract_1 ();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {
return;

}
/* method id 413 */ C3::~C3 () {
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
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
class C2    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var17: AbstractType{0}
12   | var18: AbstractType{0}
16   | var19: AbstractType{0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(28)
0    +---
0    | {vbptr}
4    | var24: ClassType{1}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

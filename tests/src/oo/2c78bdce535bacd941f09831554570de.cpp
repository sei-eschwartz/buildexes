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
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ ~C0 ();
/* method id 402 */ abstract_1 func0 (abstract_1** v3, abstract_1** v4);
/* method id 403 */ void func1 (abstract_1** v5, abstract_1* v6);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 405 */ ~C1 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ virtual void func4 ();
/* method id 409 */ virtual void func2 (abstract_0 v14);
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_0 v15;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 411 */ C3 ();
/* method id 412 */ void func5 ();
C3 (special_constructor);
};
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ C0::~C0 () {
return;

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v3, abstract_1** v4) {
return abstract_1();

}
/* method id 403 */ void C0::func1 (abstract_1** v5, abstract_1* v6) {
void* v7 = ((void*) 0);
void* v8 = ((void*) 0);
void* v9 = ((void*) 0);
abstract_0 v10 = abstract_0();
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
C1::C1 (special_constructor)  {}

/* method id 407 */ C2::~C2 () {
return;

}
/* method id 408 */ void C2::func4 () {
void* v11 = ((void*) 0);
abstract_0 v12 = abstract_0();
abstract_0 v13 = abstract_0();
return;

}
/* method id 409 */ void C2::func2 (abstract_0 v14) {
return;

}
/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 411 */ C3::C3 () {
abstract_0 v16 = abstract_0();
abstract_0 v17 = abstract_0();
return;

}
/* method id 412 */ void C3::func5 () {
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

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
class C1    size(0)
0    +---
0    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var15: AbstractType{0}
12   +---
12   +--- (virtual base class C0)
12   +---
12   | alignment: Additional padding between virtual bases 0, which ends with a zero-sized object, and 1, which leads with zero sized base.
16   +--- (virtual base class C1)
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
class C3    size(20)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C1)
4    +---
4    | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 0, which leads with zero sized base.
8    +--- (virtual base class C0)
8    +---
8    +--- (virtual base class C2)
8    | {vfptr}
12   | {vbptr}
16   | var15: AbstractType{0}
20   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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
 const size_t model_offset = 8;
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

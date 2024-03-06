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
/* method id 400 */ ~C0 ();
/* method id 401 */ abstract_0 func0 (abstract_0**** v1, abstract_0**** v2);
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 403 */ abstract_1 func0 (abstract_0**** v3, abstract_0**** v4);
/* method id 404 */ void*** func0 (abstract_0**** v5);
/* method id 405 */ void** func0 (abstract_0**** v6, abstract_0**** v7, abstract_0**** v8, abstract_2 v9);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_2 v12;
abstract_2 v13;
abstract_2 v14;
};
struct C2 : public C1 {
/* method id 408 */ C2 ();
C2 (special_constructor);
void*** v23;
abstract_0**** v24;
void**** v25;
void*** v26;
};
struct C3 : public C2 {
/* method id 410 */ C3 ();
C3 (special_constructor);
};
void* func7 (abstract_0**** v27);
// definitions
/* method id 400 */ C0::~C0 () {
abstract_0**** v0 = new abstract_0*** ();
v0 = v0;
v0 = v0;
return;

}
/* method id 401 */ abstract_0 C0::func0 (abstract_0**** v1, abstract_0**** v2) {
return abstract_0();

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_1 C1::func0 (abstract_0**** v3, abstract_0**** v4) {
return abstract_1();

}
/* method id 404 */ void*** C1::func0 (abstract_0**** v5) {
return new void** ();

}
/* method id 405 */ void** C1::func0 (abstract_0**** v6, abstract_0**** v7, abstract_0**** v8, abstract_2 v9) {
abstract_0**** v10 = new abstract_0*** ();
v9 = v9;
return new void* ();

}
/* method id 406 */ C1::C1 () {
abstract_2 v11 = abstract_2();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {
void**** v15 = new void*** ();
abstract_2 v16 = abstract_2();
abstract_2 v17 = abstract_2();
void**** v18 = new void*** ();
delete (new C1 ());
v24 = v24;
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void* func7 (abstract_0**** v27) {

return ((void*) 0);

}
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
class C1    size(16)
0    +---
0    | {vbptr}
4    | var12: AbstractType{2}
8    | var13: AbstractType{2}
12   | var14: AbstractType{2}
16   +---
16   +--- (virtual base class C0)
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
 const size_t model_offset = 16;
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
0    | +--- (base class C1)
0    | | {vbptr}
4    | | var12: AbstractType{2}
8    | | var13: AbstractType{2}
12   | | var14: AbstractType{2}
16   | +---
16   | var23: PtrType{DeletablePtrType{PtrType{VoidType{}}}}
20   | var24: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
24   | var25: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
28   | var26: PtrType{DeletablePtrType{PtrType{VoidType{}}}}
32   +---
32   +--- (virtual base class C0)
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
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(32)
0    +---
0    | +--- (base class C2)
0    | | +--- (base class C1)
0    | | | {vbptr}
4    | | | var12: AbstractType{2}
8    | | | var13: AbstractType{2}
12   | | | var14: AbstractType{2}
16   | | +---
16   | | var23: PtrType{DeletablePtrType{PtrType{VoidType{}}}}
20   | | var24: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
24   | | var25: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
28   | | var26: PtrType{DeletablePtrType{PtrType{VoidType{}}}}
32   | +---
32   +---
32   +--- (virtual base class C0)
32   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

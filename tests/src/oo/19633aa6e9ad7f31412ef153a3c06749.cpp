// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
void* v0;
};
struct C1 : public C0 {
/* method id 401 */ C1 ();
C1 (special_constructor);
void* v1;
void* v2;
};
struct C2  {
/* method id 402 */ virtual ~C2 ();
/* method id 403 */ C2 ();
/* method id 404 */ virtual abstract_0* func1 (abstract_1** v10, abstract_0* v11);
C2 (special_constructor);
abstract_1** v15;
void* v16;
abstract_1** v17;
};
struct C3 : public C1, public virtual C2 {
/* method id 405 */ C3 ();
C3 (special_constructor);
};
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 402 */ C2::~C2 () {
abstract_0* v3 = ((abstract_0*) 0);
abstract_0* v4 = ((abstract_0*) 0);
abstract_1** v5 = new abstract_1* ();
(((C2*) 0))->C2::func1(new abstract_1* (), v3);
v4 = v4;
v4 = v4;
return;

}
/* method id 403 */ C2::C2 () {
abstract_1** v6 = new abstract_1* ();
abstract_0* v7 = new abstract_0 ();
abstract_0* v8 = new abstract_0 ();
abstract_0* v9 = new abstract_0 ();
v17 = v6;
v17 = v6;
v17 = v6;
return;

}
/* method id 404 */ abstract_0* C2::func1 (abstract_1** v10, abstract_0* v11) {
abstract_0* v12 = ((abstract_0*) 0);
abstract_1** v13 = new abstract_1* ();
return v11;

}
C2::C2 (special_constructor)  {}

/* method id 405 */ C3::C3 () {
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | var0: PtrType{VoidType{}}
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
0    | +--- (base class C0)
0    | | var0: PtrType{VoidType{}}
4    | +---
4    | var1: PtrType{VoidType{}}
8    | var2: PtrType{VoidType{}}
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
class C2    size(16)
0    +---
0    | {vfptr}
4    | var15: DeletablePtrType{PtrType{AbstractType{1}}}
8    | var16: PtrType{VoidType{}}
12   | var17: DeletablePtrType{PtrType{AbstractType{1}}}
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
}
/*
class C3    size(32)
0    +---
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | var0: PtrType{VoidType{}}
4    | | +---
4    | | var1: PtrType{VoidType{}}
8    | | var2: PtrType{VoidType{}}
12   | +---
12   | {vbptr}
16   +---
16   +--- (virtual base class C2)
16   | {vfptr}
20   | var15: DeletablePtrType{PtrType{AbstractType{1}}}
24   | var16: PtrType{VoidType{}}
28   | var17: DeletablePtrType{PtrType{AbstractType{1}}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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
 const size_t model_offset = 16;
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

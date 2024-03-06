// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
/* method id 402 */ void* func2 ();
/* method id 403 */ virtual void func0 (void* v2);
C0 (special_constructor);
void* v4;
abstract_0 v5;
};
struct C1 : public virtual C0 {
/* method id 404 */ void* func3 ();
/* method id 405 */ C1 ();
/* method id 406 */ virtual void func1 ();
/* method id 407 */ virtual ~C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public C1 {
/* method id 408 */ virtual void* func2 (abstract_0 v8, abstract_0 v9);
/* method id 409 */ C2 ();
/* method id 410 */ virtual void* func0 (void* v10, abstract_0 v11);
/* method id 411 */ virtual ~C2 ();
C2 (special_constructor);
C1 v16;
C1 v17;
abstract_0 v18;
};
struct C3  {
/* method id 412 */ C3 ();
C3 (special_constructor);
C1 v19;
abstract_0 v20;
void*** v21;
void*** v22;
};
void func5 ();
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {
void* v0 = ((void*) 0);
return;

}
/* method id 402 */ void* C0::func2 () {
void* v1 = ((void*) 0);
return v4;

}
/* method id 403 */ void C0::func0 (void* v2) {
void* v3 = ((void*) 0);
return ::func5();

}
C0::C0 (special_constructor)  {}

/* method id 404 */ void* C1::func3 () {
delete (new C3 ());
return v4;

}
/* method id 405 */ C1::C1 () {
return;

}
/* method id 406 */ void C1::func1 () {
void* v6 = ((void*) 0);
return;

}
/* method id 407 */ C1::~C1 () {
void* v7 = ((void*) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ void* C2::func2 (abstract_0 v8, abstract_0 v9) {
delete (new C0 ());
return v4;

}
/* method id 409 */ C2::C2 () {
return;

}
/* method id 410 */ void* C2::func0 (void* v10, abstract_0 v11) {
C1 v12 = *(&(*((new C1 ()))));
abstract_0 v13 = abstract_0();
C1 v14 = *(&(*((new C1 ()))));
return v4;

}
/* method id 411 */ C2::~C2 () {
C1 v15 = *((new C1 ()));
(&(v16))->C1::func3();
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {
return;

}
C3::C3 (special_constructor)  {}

void func5 () {
void*** v23;
void* v24;
void*** v25;
abstract_0 v26;

v24 = v24;
v24 = v24;
return (((C1*) 0))->C1::func1();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var4: PtrType{VoidType{}}
8    | var5: AbstractType{0}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
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
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var4: PtrType{VoidType{}}
16   | var5: AbstractType{0}
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
class C2    size(64)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | +---
8    | var16: ClassType{1}
28   | var17: ClassType{1}
48   | var18: AbstractType{0}
52   +---
52   +--- (virtual base class C0)
52   | {vfptr}
56   | var4: PtrType{VoidType{}}
60   | var5: AbstractType{0}
64   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 64;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 52;
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
0    | var19: ClassType{1}
20   | var20: AbstractType{0}
24   | var21: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
28   | var22: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
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
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

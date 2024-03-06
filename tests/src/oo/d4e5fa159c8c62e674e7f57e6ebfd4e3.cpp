// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
C1 (special_constructor);
void*** v0;
void*** v1;
};
struct C2 : public virtual C1 {
/* method id 402 */ C2 ();
/* method id 403 */ virtual void* func0 (void** v6, void** v7, abstract_0 v8, void** v9);
C2 (special_constructor);
void*** v13;
};
struct C3 : public virtual C1, public C2 {
/* method id 404 */ C3 ();
C3 (special_constructor);
void** v18;
void** v19;
};
C1 func2 (void** v20, void** v21, abstract_3 v22, void** v23);
void* func3 (void** v28);
C0 func4 (void** v31, abstract_5 v32);
C0 func5 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 402 */ C2::C2 () {
void*** v2 = new void** ();
void*** v3 = new void** ();
void** v4 = ((void**) 0);
void** v5 = ((void**) 0);
return;

}
/* method id 403 */ void* C2::func0 (void** v6, void** v7, abstract_0 v8, void** v9) {
abstract_1 v10 = abstract_1();
void** v11 = new void* ();
void** v12 = new void* ();
return ((void*) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 404 */ C3::C3 () {
abstract_0 v14 = abstract_0();
abstract_1 v15 = abstract_1();
abstract_2 v16 = abstract_2();
void*** v17 = new void** ();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

C1 func2 (void** v20, void** v21, abstract_3 v22, void** v23) {
abstract_4 v24;
abstract_1 v25;
abstract_2 v26;
abstract_1 v27;

return *(((C1*) 0));

}
void* func3 (void** v28) {
abstract_2 v29;
void*** v30;

::func4(new void* (), abstract_5());
::func5();
return ((void*) 0);

}
C0 func4 (void** v31, abstract_5 v32) {
abstract_3 v33;
void** v34;

return ::func5();

}
C0 func5 () {

delete (new C0 ());
return ::func4(new void* (), abstract_5());

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
class C1    size(12)
0    +---
0    | {vbptr}
4    | var0: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
8    | var1: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
12   +---
12   +--- (virtual base class C0)
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
0    | {vfptr}
4    | {vbptr}
8    | var13: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
12   +---
12   +--- (virtual base class C0)
12   +---
12   +--- (virtual base class C1)
12   | {vbptr}
16   | var0: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
20   | var1: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
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
class C3    size(32)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | | var13: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
12   | +---
12   | var18: PtrType{PtrType{VoidType{}}}
16   | var19: DeletablePtrType{PtrType{VoidType{}}}
20   +---
20   +--- (virtual base class C0)
20   +---
20   +--- (virtual base class C1)
20   | {vbptr}
24   | var0: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
28   | var1: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
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
 const size_t model_offset = 20;
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

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
void**** v5;
};
struct C1  {
/* method id 402 */ C1 ();
C1 (special_constructor);
void*** v10;
abstract_1 v11;
};
struct C2 : public virtual C1, public C0 {
/* method id 403 */ virtual abstract_2 func1 (void**** v12, abstract_1 v13);
/* method id 404 */ virtual abstract_3 func1 (abstract_1 v14);
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual ~C3 ();
C3 (special_constructor);
abstract_1 v18;
void**** v19;
};
abstract_3 func4 ();
void* func5 (C0 v22, C0 v23, void** v24, abstract_1 v25);
void** func6 (C0 v27, abstract_1 v28, abstract_1 v29);
abstract_0**** func7 (void*** v32);
// definitions
/* method id 400 */ C0::~C0 () {
void**** v0 = new void*** ();
return;

}
/* method id 401 */ C0::C0 () {
void**** v1 = new void*** ();
void**** v2 = new void*** ();
void**** v3 = new void*** ();
void**** v4 = new void*** ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
void**** v6 = new void*** ();
abstract_1 v7 = abstract_1();
abstract_1 v8 = abstract_1();
abstract_1 v9 = abstract_1();
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ abstract_2 C2::func1 (void**** v12, abstract_1 v13) {
return abstract_2();

}
/* method id 404 */ abstract_3 C2::func1 (abstract_1 v14) {
return abstract_3();

}
/* method id 405 */ C2::~C2 () {
void**** v15 = new void*** ();
return;

}
/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
return;

}
/* method id 408 */ C3::~C3 () {
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_3 func4 () {
void**** v20;
void*** v21;

return abstract_3();

}
void* func5 (C0 v22, C0 v23, void** v24, abstract_1 v25) {
C3 v26;

return ((void*) 0);

}
void** func6 (C0 v27, abstract_1 v28, abstract_1 v29) {
void*** v30;
abstract_1 v31;

return new void* ();

}
abstract_0**** func7 (void*** v32) {
abstract_4 v33;
void**** v34;
C0 v35;

return new abstract_0*** ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var5: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(8)
0    +---
0    | var10: PtrType{PtrType{PtrType{VoidType{}}}}
4    | var11: AbstractType{1}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(20)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var5: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | +---
8    | {vbptr}
12   +---
12   +--- (virtual base class C1)
12   | var10: PtrType{PtrType{PtrType{VoidType{}}}}
16   | var11: AbstractType{1}
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(32)
0    +---
0    | {vbptr}
4    | var18: AbstractType{1}
8    | var19: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   +---
12   +--- (virtual base class C1)
12   | var10: PtrType{PtrType{PtrType{VoidType{}}}}
16   | var11: AbstractType{1}
20   +---
20   +--- (virtual base class C2)
20   | +--- (base class C0)
20   | | {vfptr}
24   | | var5: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
28   | +---
28   | {vbptr}
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
 const size_t model_offset = 20;
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

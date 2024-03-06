// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_5 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ void func0 (void** v0, abstract_0 v1, void** v2, abstract_0 v3);
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
void** v9;
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual abstract_1 func1 (void** v10, abstract_0 v11);
/* method id 404 */ virtual ~C1 ();
/* method id 405 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
/* method id 407 */ abstract_1 func2 ();
C2 (special_constructor);
void** v35;
};
struct C3 : public C1 {
/* method id 409 */ virtual abstract_5 func4 (abstract_3 v36, abstract_0 v37);
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ C3 ();
C3 (special_constructor);
};
abstract_5 func5 (abstract_2 v45, abstract_0 v46, abstract_2 v47);
void func6 ();
// definitions
/* method id 400 */ void C0::func0 (void** v0, abstract_0 v1, void** v2, abstract_0 v3) {
return;

}
/* method id 401 */ C0::~C0 () {
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
abstract_0 v7 = abstract_0();
v5 = v7;
v5 = v7;
v5 = v7;
return;

}
/* method id 402 */ C0::C0 () {
abstract_0 v8 = abstract_0();
v8 = abstract_0();
v8 = abstract_0();
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_1 C1::func1 (void** v10, abstract_0 v11) {
v11 = abstract_0();
return abstract_1();

}
/* method id 404 */ C1::~C1 () {
abstract_0 v12 = abstract_0();
abstract_1* v13 = new abstract_1 ();
abstract_0 v14 = abstract_0();
::func6();
return;

}
/* method id 405 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
void** v19 = new void* ();
::func6();
return;

}
/* method id 407 */ abstract_1 C2::func2 () {
delete (new C3 ());
return abstract_1();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ abstract_5 C3::func4 (abstract_3 v36, abstract_0 v37) {
return ::func5(abstract_2(), v37, abstract_2());

}
/* method id 410 */ C3::~C3 () {
abstract_0 v38 = abstract_0();
abstract_1* v39 = new abstract_1 ();
abstract_0 v40 = abstract_0();
return;

}
/* method id 411 */ C3::C3 () {
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_5 func5 (abstract_2 v45, abstract_0 v46, abstract_2 v47) {
abstract_0 v48;
abstract_0 v49;
abstract_2 v50;

delete (new C3 ());
return abstract_5();

}
void func6 () {
abstract_2 v51;
abstract_3 v52;
void** v53;

v52 = abstract_3();
v52 = abstract_3();
return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var9: DeletablePtrType{PtrType{VoidType{}}}
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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var9: DeletablePtrType{PtrType{VoidType{}}}
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
class C2    size(24)
0    +---
0    | {vbptr}
4    | var35: DeletablePtrType{PtrType{VoidType{}}}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var9: DeletablePtrType{PtrType{VoidType{}}}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
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
class C3    size(16)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | +---
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var9: DeletablePtrType{PtrType{VoidType{}}}
16   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 16;
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

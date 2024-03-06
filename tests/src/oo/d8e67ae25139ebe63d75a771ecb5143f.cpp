// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_0 func0 ();
/* method id 401 */ abstract_0 func0 (abstract_1 v0);
/* method id 402 */ virtual void func1 ();
/* method id 403 */ void* func2 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
void** v1;
abstract_1 v2;
};
struct C1 : public virtual C0 {
/* method id 405 */ C1 ();
C1 (special_constructor);
void** v3;
abstract_2 v4;
abstract_2 v5;
abstract_2 v6;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 406 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 407 */ virtual abstract_0 func0 (abstract_1 v7);
/* method id 408 */ virtual abstract_4 func6 (abstract_3 v12, abstract_1 v13, abstract_3 v14, void** v15);
/* method id 409 */ C3 ();
C3 (special_constructor);
};
void func8 (abstract_1 v17);
abstract_0 func9 ();
void* func10 (void** v21);
abstract_0 func11 (abstract_5* v22);
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return ::func9();

}
/* method id 401 */ abstract_0 C0::func0 (abstract_1 v0) {
delete (new C1 ());
return abstract_0();

}
/* method id 402 */ void C0::func1 () {
return;

}
/* method id 403 */ void* C0::func2 () {
return ((void*) 0);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 407 */ abstract_0 C3::func0 (abstract_1 v7) {
abstract_1 v8 = abstract_1();
void** v9 = new void* ();
abstract_3 v10 = abstract_3();
abstract_3 v11 = abstract_3();
delete (new C1 ());
::func8(v2);
return ::func11(((abstract_5*) 0));

}
/* method id 408 */ abstract_4 C3::func6 (abstract_3 v12, abstract_1 v13, abstract_3 v14, void** v15) {
abstract_1 v16 = abstract_1();
return abstract_4();

}
/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func8 (abstract_1 v17) {

delete (new C2 ());
return (((C0*) 0))->C0::func1();

}
abstract_0 func9 () {
abstract_1 v18;
abstract_2 v19;
abstract_1 v20;

return abstract_0();

}
void* func10 (void** v21) {

return ((void*) 0);

}
abstract_0 func11 (abstract_5* v22) {

::func8(abstract_1());
delete (new C3 ());
::func8(abstract_1());
return abstract_0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var1: PtrType{PtrType{VoidType{}}}
8    | var2: AbstractType{1}
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
class C1    size(32)
0    +---
0    | {vbptr}
4    | var3: PtrType{PtrType{VoidType{}}}
8    | var4: AbstractType{2}
12   | var5: AbstractType{2}
16   | var6: AbstractType{2}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var1: PtrType{PtrType{VoidType{}}}
28   | var2: AbstractType{1}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(36)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    | var1: PtrType{PtrType{VoidType{}}}
12   | var2: AbstractType{1}
16   +---
16   +--- (virtual base class C1)
16   | {vbptr}
20   | var3: PtrType{PtrType{VoidType{}}}
24   | var4: AbstractType{2}
28   | var5: AbstractType{2}
32   | var6: AbstractType{2}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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
class C3    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var1: PtrType{PtrType{VoidType{}}}
16   | var2: AbstractType{1}
20   +---
20   +--- (virtual base class C1)
20   | {vbptr}
24   | var3: PtrType{PtrType{VoidType{}}}
28   | var4: AbstractType{2}
32   | var5: AbstractType{2}
36   | var6: AbstractType{2}
40   +---
40   +--- (virtual base class C2)
40   | {vbptr}
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
 const size_t model_offset = 40;
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

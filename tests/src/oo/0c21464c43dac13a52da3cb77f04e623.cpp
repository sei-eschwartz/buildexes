// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 402 */ C1 ();
C1 (special_constructor);
void** v5;
abstract_1 v6;
};
struct C2 : public C1 {
/* method id 403 */ C2 ();
C2 (special_constructor);
void** v7;
};
struct C3 : public C1 {
/* method id 404 */ ~C3 ();
/* method id 405 */ C3 ();
/* method id 406 */ void func0 ();
C3 (special_constructor);
abstract_1 v9;
};
void func5 (abstract_2 v10, abstract_1 v11);
void func6 (abstract_5* v12);
void* func7 (abstract_6 v13);
void**** func8 (void** v14, abstract_6 v15, void** v16, abstract_6 v17);
// definitions
/* method id 400 */ C0::~C0 () {
void** v0 = ((void**) 0);
return;

}
/* method id 401 */ C0::C0 () {
void** v1 = ((void**) 0);
void** v2 = new void* ();
abstract_1 v3 = abstract_1();
void** v4 = new void* ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 404 */ C3::~C3 () {
return;

}
/* method id 405 */ C3::C3 () {
abstract_2 v8 = abstract_2();
return;

}
/* method id 406 */ void C3::func0 () {
return ::func5(abstract_2(), abstract_1());

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void func5 (abstract_2 v10, abstract_1 v11) {

return;

}
void func6 (abstract_5* v12) {

return ::func5(abstract_2(), abstract_1());

}
void* func7 (abstract_6 v13) {

return ((void*) 0);

}
void**** func8 (void** v14, abstract_6 v15, void** v16, abstract_6 v17) {

return new void*** ();

}
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
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var5: PtrType{PtrType{VoidType{}}}
8    | var6: AbstractType{1}
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
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | +---
4    | | var5: PtrType{PtrType{VoidType{}}}
8    | | var6: AbstractType{1}
12   | +---
12   | var7: PtrType{PtrType{VoidType{}}}
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
class C3    size(16)
0    +---
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | +---
4    | | var5: PtrType{PtrType{VoidType{}}}
8    | | var6: AbstractType{1}
12   | +---
12   | var9: AbstractType{1}
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

// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ void func0 ();
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ C1 ();
/* method id 404 */ virtual void func0 (abstract_0 v2, abstract_0 v3);
C1 (special_constructor);
abstract_0 v8;
};
struct C2 : public C0, public virtual C1 {
/* method id 405 */ C2 ();
/* method id 406 */ virtual void func0 (abstract_1 v13);
C2 (special_constructor);
void* v14;
abstract_0 v15;
};
struct C3 : public virtual C0, public virtual C1 {
/* method id 408 */ C3 ();
C3 (special_constructor);
};
void func4 ();
abstract_2 func5 (abstract_1 v17, void* v18, abstract_0 v19, abstract_0 v20);
void func6 (abstract_0 v21, abstract_1 v22, abstract_1 v23, abstract_1 v24);
abstract_2 func7 (abstract_1 v27, abstract_0 v28, abstract_0 v29, abstract_1 v30);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
return ::func6(abstract_0(), abstract_1(), abstract_1(), abstract_1());

}
/* method id 402 */ C1::~C1 () {
abstract_0 v0 = abstract_0();
return;

}
/* method id 403 */ C1::C1 () {
abstract_0 v1 = abstract_0();
return;

}
/* method id 404 */ void C1::func0 (abstract_0 v2, abstract_0 v3) {
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
abstract_0 v7 = abstract_0();
return ::func6(abstract_0(), abstract_1(), abstract_1(), abstract_1());

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {
abstract_1 v9 = abstract_1();
abstract_0 v10 = abstract_0();
abstract_1 v11 = abstract_1();
return;

}
/* method id 406 */ void C2::func0 (abstract_1 v13) {
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

void func4 () {
abstract_0 v16;

return;

}
abstract_2 func5 (abstract_1 v17, void* v18, abstract_0 v19, abstract_0 v20) {

return abstract_2();

}
void func6 (abstract_0 v21, abstract_1 v22, abstract_1 v23, abstract_1 v24) {
abstract_1 v25;
C3 v26;

return;

}
abstract_2 func7 (abstract_1 v27, abstract_0 v28, abstract_0 v29, abstract_1 v30) {

return ::func5(abstract_1(), ((void*) 0), v28, v28);

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
class C1    size(8)
0    +---
0    | {vfptr}
4    | var8: AbstractType{0}
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
class C2    size(24)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | {vbptr}
8    | var14: PtrType{VoidType{}}
12   | var15: AbstractType{0}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | var8: AbstractType{0}
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
class C3    size(12)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    +---
4    +--- (virtual base class C1)
4    | {vfptr}
8    | var8: AbstractType{0}
12   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_0 func0 ();
/* method id 401 */ abstract_0 func0 (abstract_1 v0);
/* method id 402 */ virtual abstract_2 func1 (abstract_1 v1, abstract_1 v2, abstract_1 v3, abstract_1 v4);
/* method id 403 */ ~C0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ C1 ();
C1 (special_constructor);
abstract_1 v5;
};
struct C2 : public C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C2 {
/* method id 409 */ C3 ();
C3 (special_constructor);
};
abstract_2 func9 ();
abstract_2 func10 ();
abstract_0* func11 (abstract_1 v6, abstract_1 v7, abstract_1 v8);
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return abstract_0();

}
/* method id 401 */ abstract_0 C0::func0 (abstract_1 v0) {
return abstract_0();

}
/* method id 402 */ abstract_2 C0::func1 (abstract_1 v1, abstract_1 v2, abstract_1 v3, abstract_1 v4) {
delete (new C0 ());
return abstract_2();

}
/* method id 403 */ C0::~C0 () {
delete (new C2 ());
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_2 func9 () {

delete (new C1 ());
return ::func10();

}
abstract_2 func10 () {

return abstract_2();

}
abstract_0* func11 (abstract_1 v6, abstract_1 v7, abstract_1 v8) {
abstract_1 v9;
abstract_1 v10;
abstract_1 v11;
abstract_1 v12;

return new abstract_0 ();

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
0    | {vbptr}
4    | var5: AbstractType{1}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
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
class C2    size(12)
0    +---
0    | +--- (base class C1)
0    | | {vbptr}
4    | | var5: AbstractType{1}
8    | +---
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
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
class C3    size(12)
0    +---
0    | +--- (base class C2)
0    | | +--- (base class C1)
0    | | | {vbptr}
4    | | | var5: AbstractType{1}
8    | | +---
8    | +---
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
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

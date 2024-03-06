// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ abstract_0 func0 (abstract_0**** v1, abstract_0**** v2);
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 403 */ abstract_1 func0 (abstract_0**** v3, abstract_0**** v4);
/* method id 404 */ void*** func0 (abstract_0**** v5);
/* method id 405 */ virtual abstract_3 func0 (abstract_2 v6);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_2 v9;
abstract_2 v10;
abstract_2 v11;
};
struct C2 : public virtual C0 {
/* method id 408 */ C2 ();
/* method id 409 */ virtual abstract_0**** func4 ();
C2 (special_constructor);
abstract_0**** v15;
abstract_2 v16;
abstract_2 v17;
abstract_0**** v18;
};
// definitions
/* method id 400 */ C0::~C0 () {
abstract_0**** v0 = new abstract_0*** ();
return;

}
/* method id 401 */ abstract_0 C0::func0 (abstract_0**** v1, abstract_0**** v2) {
return abstract_0();

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_1 C1::func0 (abstract_0**** v3, abstract_0**** v4) {
delete (new C2 ());
return abstract_1();

}
/* method id 404 */ void*** C1::func0 (abstract_0**** v5) {
delete (new C2 ());
return new void** ();

}
/* method id 405 */ abstract_3 C1::func0 (abstract_2 v6) {
abstract_2 v7 = abstract_2();
abstract_0**** v8 = new abstract_0*** ();
delete (new C1 ());
return abstract_3();

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {
abstract_0**** v12 = new abstract_0*** ();
abstract_2 v13 = abstract_2();
return;

}
/* method id 409 */ abstract_0**** C2::func4 () {
return v15;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var9: AbstractType{2}
12   | var10: AbstractType{2}
16   | var11: AbstractType{2}
20   +---
20   +--- (virtual base class C0)
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
class C2    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var15: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
12   | var16: AbstractType{2}
16   | var17: AbstractType{2}
20   | var18: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
24   +---
24   +--- (virtual base class C0)
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
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

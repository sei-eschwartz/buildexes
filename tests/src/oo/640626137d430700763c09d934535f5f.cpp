// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
/* method id 402 */ virtual void* func0 (abstract_0** v1, abstract_0** v2);
C0 (special_constructor);
abstract_0** v11;
abstract_1 v12;
};
struct C1 : public C0 {
/* method id 403 */ C1 ();
C1 (special_constructor);
abstract_0** v13;
abstract_1 v14;
abstract_1 v15;
};
void func2 (abstract_0** v16, abstract_0** v17);
// definitions
/* method id 400 */ C0::~C0 () {
abstract_0** v0 = new abstract_0* ();
delete (new C0 ());
delete (new C1 ());
return;

}
/* method id 401 */ C0::C0 () {
delete (new C0 ());
delete (new C1 ());
return;

}
/* method id 402 */ void* C0::func0 (abstract_0** v1, abstract_0** v2) {
abstract_0** v3 = new abstract_0* ();
return ((void*) 0);

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

void func2 (abstract_0** v16, abstract_0** v17) {

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var11: DeletablePtrType{PtrType{AbstractType{0}}}
8    | var12: AbstractType{1}
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
class C1    size(24)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var11: DeletablePtrType{PtrType{AbstractType{0}}}
8    | | var12: AbstractType{1}
12   | +---
12   | var13: DeletablePtrType{PtrType{AbstractType{0}}}
16   | var14: AbstractType{1}
20   | var15: AbstractType{1}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

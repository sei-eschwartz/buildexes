// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 401 */ void* func1 (abstract_1 v1);
/* method id 402 */ virtual void* func0 (abstract_1 v4, abstract_1 v5, abstract_1 v6);
/* method id 403 */ C1 ();
C1 (special_constructor);
abstract_0 v13;
abstract_1 v14;
};
struct C2 : public virtual C1 {
/* method id 404 */ C2 ();
C2 (special_constructor);
abstract_0 v15;
abstract_1 v16;
};
// definitions
/* method id 400 */ C0::C0 () {
abstract_0 v0 = abstract_0();
((C1*)(((C2*) 0)))->C1::func1(abstract_1());
((C1*)(((C2*) 0)))->C1::func1(abstract_1());
((C1*)(((C2*) 0)))->C1::func1(abstract_1());
((C1*)(((C2*) 0)))->C1::func1(abstract_1());
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void* C1::func1 (abstract_1 v1) {
abstract_1 v2 = abstract_1();
abstract_1 v3 = abstract_1();
delete (new C0 ());
return ((void*) 0);

}
/* method id 402 */ void* C1::func0 (abstract_1 v4, abstract_1 v5, abstract_1 v6) {
abstract_1 v7 = abstract_1();
abstract_1 v8 = abstract_1();
abstract_1 v9 = abstract_1();
abstract_1 v10 = abstract_1();
return ((void*) 0);

}
/* method id 403 */ C1::C1 () {
abstract_1 v11 = abstract_1();
abstract_0 v12 = abstract_0();
delete (new C2 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

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
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | var13: AbstractType{0}
8    | var14: AbstractType{1}
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
 const size_t model_offset = 4;
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
4    | var15: AbstractType{0}
8    | var16: AbstractType{1}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | +--- (base class C0)
16   | +---
16   | var13: AbstractType{0}
20   | var14: AbstractType{1}
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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

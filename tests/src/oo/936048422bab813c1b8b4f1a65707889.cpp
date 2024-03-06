// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 300 */ abstract_0* func0 ();
/* method id 301 */ virtual abstract_0 func0 (abstract_1 v0, abstract_1 v1, abstract_1 v2);
/* method id 302 */ virtual ~C0 ();
/* method id 303 */ C0 ();
C0 (special_constructor);
abstract_1 v13;
abstract_1 v14;
abstract_1 v15;
};
struct C1 : public virtual C0 {
/* method id 304 */ C1 ();
/* method id 305 */ virtual ~C1 ();
/* method id 306 */ void func2 ();
C1 (special_constructor);
};
// definitions
/* method id 300 */ abstract_0* C0::func0 () {
delete (new C0 ());
return new abstract_0 ();

}
/* method id 301 */ abstract_0 C0::func0 (abstract_1 v0, abstract_1 v1, abstract_1 v2) {
abstract_1 v3 = abstract_1();
delete (new C1 ());
return abstract_0();

}
/* method id 302 */ C0::~C0 () {
abstract_1 v10 = abstract_1();
abstract_1 v11 = abstract_1();
abstract_1 v12 = abstract_1();
return;

}
/* method id 303 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 304 */ C1::C1 () {
return;

}
/* method id 305 */ C1::~C1 () {
abstract_1 v43 = abstract_1();
abstract_1 v44 = abstract_1();
abstract_1 v45 = abstract_1();
delete (new C1 ());
return;

}
/* method id 306 */ void C1::func2 () {
abstract_1 v131 = abstract_1();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var13: AbstractType{1}
8    | var14: AbstractType{1}
12   | var15: AbstractType{1}
16   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 16;
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
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    | var13: AbstractType{1}
12   | var14: AbstractType{1}
16   | var15: AbstractType{1}
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
 const size_t model_offset = 4;
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

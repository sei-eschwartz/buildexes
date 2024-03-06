// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual void*** func2 ();
/* method id 403 */ void**** func2 (void**** v0);
/* method id 404 */ virtual void*** func0 (C0 v2, abstract_0 v3);
/* method id 405 */ C1 ();
C1 (special_constructor);
abstract_0 v12;
C0 v13;
abstract_0 v14;
};
// definitions
/* method id 400 */ C0::~C0 () {
((new C1 ()))->C1::func2(new void*** ());
((new C1 ()))->C1::func2(new void*** ());
((new C1 ()))->C1::func2(new void*** ());
((new C1 ()))->C1::func2(new void*** ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void*** C1::func2 () {
((new C1 ()))->C1::func0(v13, v12);
((new C1 ()))->C1::func0(v13, v12);
((new C1 ()))->C1::func0(v13, v12);
((new C1 ()))->C1::func0(v13, v12);
return new void** ();

}
/* method id 403 */ void**** C1::func2 (void**** v0) {
void**** v1 = new void*** ();
v14 = abstract_0();
v14 = abstract_0();
return v1;

}
/* method id 404 */ void*** C1::func0 (C0 v2, abstract_0 v3) {
void**** v4 = new void*** ();
void**** v5 = new void*** ();
void**** v6 = new void*** ();
C0 v7 = *((new C0 ()));
return new void** ();

}
/* method id 405 */ C1::C1 () {
abstract_0 v8 = abstract_0();
C0 v9 = *((new C0 ()));
C0 v10 = *((new C0 ()));
void**** v11 = new void*** ();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var12: AbstractType{0}
12   | var13: ClassType{0}
16   | var14: AbstractType{0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
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
 const size_t model_offset = 20;
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

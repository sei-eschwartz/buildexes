// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual abstract_1*** func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 401 */ virtual abstract_1** func0 (abstract_2 v6, abstract_2 v7);
/* method id 402 */ ~C0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual abstract_1*** func0 ();
/* method id 405 */ C1 ();
C1 (special_constructor);
abstract_2 v13;
abstract_2 v14;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_0 v15;
abstract_0 v16;
};
abstract_1*** func5 (abstract_0 v17, abstract_1*** v18, abstract_3 v19);
abstract_1* func6 (abstract_1*** v21);
// definitions
/* method id 400 */ abstract_1*** C0::func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3) {
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
delete (new C1 ());
return ((abstract_1***) 0);

}
/* method id 401 */ abstract_1** C0::func0 (abstract_2 v6, abstract_2 v7) {
abstract_2 v8 = abstract_2();
abstract_1*** v9 = new abstract_1** ();
abstract_3 v10 = abstract_3();
abstract_3 v11 = abstract_3();
delete (new C2 ());
return new abstract_1* ();

}
/* method id 402 */ C0::~C0 () {
return;

}
/* method id 403 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_1*** C1::func0 () {
abstract_0 v12 = abstract_0();
v12 = v12;
v12 = v12;
return new abstract_1** ();

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

abstract_1*** func5 (abstract_0 v17, abstract_1*** v18, abstract_3 v19) {
abstract_3 v20;

delete (new C2 ());
delete (new C1 ());
v17 = abstract_0();
return v18;

}
abstract_1* func6 (abstract_1*** v21) {
abstract_3 v22;
abstract_0 v23;
abstract_0 v24;
abstract_2 v25;

v23 = abstract_0();
v23 = abstract_0();
v23 = abstract_0();
return new abstract_1 ();

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var13: AbstractType{2}
12   | var14: AbstractType{2}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
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
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(32)
0    +---
0    | {vbptr}
4    | var15: AbstractType{0}
8    | var16: AbstractType{0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var13: AbstractType{2}
28   | var14: AbstractType{2}
32   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 32;
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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

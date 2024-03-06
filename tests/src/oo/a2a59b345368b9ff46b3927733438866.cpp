// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual void* func0 ();
/* method id 401 */ virtual void* func0 (abstract_0 v0);
/* method id 402 */ virtual void func0 (abstract_0 v1, abstract_0 v2);
/* method id 403 */ virtual abstract_1 func0 (abstract_0 v5, abstract_0 v6, abstract_0 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_0 v8;
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual void func2 ();
/* method id 406 */ virtual abstract_1* func3 ();
/* method id 407 */ virtual abstract_2 func3 (void*** v14, void*** v15, void*** v16);
/* method id 408 */ void* func0 ();
/* method id 409 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 410 */ C2 ();
C2 (special_constructor);
};
void* func5 ();
// definitions
/* method id 400 */ void* C0::func0 () {
return ((void*) 0);

}
/* method id 401 */ void* C0::func0 (abstract_0 v0) {
return ::func5();

}
/* method id 402 */ void C0::func0 (abstract_0 v1, abstract_0 v2) {
abstract_0 v3 = abstract_0();
return;

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v5, abstract_0 v6, abstract_0 v7) {
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ void C1::func2 () {
abstract_0 v9 = abstract_0();
void*** v10 = new void** ();
void*** v11 = new void** ();
void*** v12 = new void** ();
return;

}
/* method id 406 */ abstract_1* C1::func3 () {
abstract_0 v13 = abstract_0();
return new abstract_1 ();

}
/* method id 407 */ abstract_2 C1::func3 (void*** v14, void*** v15, void*** v16) {
return abstract_2();

}
/* method id 408 */ void* C1::func0 () {
return ::func5();

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C2::C2 () {
return;

}
C2::C2 (special_constructor)  {}

void* func5 () {

return (((C1*) 0))->C1::func0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var8: AbstractType{0}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
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
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var8: AbstractType{0}
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
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(0)
0    +---
0    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

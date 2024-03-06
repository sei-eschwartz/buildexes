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
/* method id 400 */ ~C0 ();
/* method id 401 */ abstract_0 func1 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_0* v1;
abstract_0* v2;
};
struct C1 : public virtual C0 {
/* method id 403 */ C1 ();
C1 (special_constructor);
abstract_0* v3;
};
struct C2 : public C0 {
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ virtual abstract_2 func0 (abstract_0* v5, abstract_1 v6, abstract_1 v7);
/* method id 407 */ C2 ();
C2 (special_constructor);
};
struct C3  {
/* method id 408 */ abstract_2 func1 (abstract_1 v8, abstract_1 v9);
/* method id 409 */ C3 ();
C3 (special_constructor);
};
// definitions
/* method id 400 */ C0::~C0 () {
abstract_0* v0 = ((abstract_0*) 0);
((new C3 ()))->C3::func1(abstract_1(), abstract_1());
((new C3 ()))->C3::func1(abstract_1(), abstract_1());
((new C3 ()))->C3::func1(abstract_1(), abstract_1());
((new C3 ()))->C3::func1(abstract_1(), abstract_1());
return;

}
/* method id 401 */ abstract_0 C0::func1 () {
return abstract_0();

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::~C2 () {
abstract_1 v4 = abstract_1();
return;

}
/* method id 406 */ abstract_2 C2::func0 (abstract_0* v5, abstract_1 v6, abstract_1 v7) {
return abstract_2();

}
/* method id 407 */ C2::C2 () {
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ abstract_2 C3::func1 (abstract_1 v8, abstract_1 v9) {
v9 = v8;
v9 = v8;
v9 = v8;
return abstract_2();

}
/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | var1: PtrType{AbstractType{0}}
4    | var2: PtrType{AbstractType{0}}
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
class C1    size(16)
0    +---
0    | {vbptr}
4    | var3: PtrType{AbstractType{0}}
8    +---
8    +--- (virtual base class C0)
8    | var1: PtrType{AbstractType{0}}
12   | var2: PtrType{AbstractType{0}}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
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
0    | {vfptr}
4    | +--- (base class C0)
4    | | var1: PtrType{AbstractType{0}}
8    | | var2: PtrType{AbstractType{0}}
12   | +---
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
 }}}
/*
class C3    size(0)
0    +---
0    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

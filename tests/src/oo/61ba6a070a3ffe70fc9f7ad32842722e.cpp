// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ virtual abstract_0 func0 ();
/* method id 402 */ abstract_0 func1 ();
/* method id 403 */ virtual abstract_0 func2 (abstract_1 v1, abstract_1 v2);
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_1 v8;
};
struct C2 : public virtual C0, public C1 {
/* method id 405 */ C2 ();
/* method id 406 */ abstract_0 func2 (abstract_3 v10);
C2 (special_constructor);
abstract_1 v16;
abstract_3 v17;
};
struct C3 : public virtual C1, public virtual C0 {
/* method id 407 */ C3 ();
C3 (special_constructor);
abstract_2 v18;
};
abstract_0 func4 (abstract_3 v19);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ abstract_0 C1::func0 () {
abstract_1 v0 = abstract_1();
v8 = v8;
return abstract_0();

}
/* method id 402 */ abstract_0 C1::func1 () {
return ::func4(abstract_3());

}
/* method id 403 */ abstract_0 C1::func2 (abstract_1 v1, abstract_1 v2) {
abstract_2 v3 = abstract_2();
return ::func4(abstract_3());

}
/* method id 404 */ C1::C1 () {
abstract_3 v4 = abstract_3();
abstract_1 v5 = abstract_1();
abstract_2 v6 = abstract_2();
abstract_2 v7 = abstract_2();
delete (new C0 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {
abstract_2 v9 = abstract_2();
return;

}
/* method id 406 */ abstract_0 C2::func2 (abstract_3 v10) {
abstract_2 v11 = abstract_2();
abstract_1 v12 = abstract_1();
abstract_2 v13 = abstract_2();
abstract_1 v14 = abstract_1();
((C1*)(((C3*) 0)))->C1::func0();
((C1*)(((C3*) 0)))->C1::func0();
((C1*)(((C3*) 0)))->C1::func0();
((C1*)(((C3*) 0)))->C1::func0();
return ((C1*)(((C3*) 0)))->C1::func0();

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

abstract_0 func4 (abstract_3 v19) {
abstract_2 v20;
abstract_0* v21;
abstract_0* v22;
abstract_2 v23;

delete (new C2 ());
return abstract_0();

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
4    | var8: AbstractType{1}
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
class C2    size(20)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var8: AbstractType{1}
8    | +---
8    | {vbptr}
12   | var16: AbstractType{1}
16   | var17: AbstractType{3}
20   +---
20   +--- (virtual base class C0)
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
class C3    size(16)
0    +---
0    | {vbptr}
4    | var18: AbstractType{2}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var8: AbstractType{1}
16   +---
16   +--- (virtual base class C0)
16   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

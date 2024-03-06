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
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ ~C1 ();
/* method id 403 */ virtual C0 func0 ();
/* method id 404 */ virtual C0 func1 (abstract_1 v11);
C1 (special_constructor);
abstract_0 v13;
abstract_1 v14;
C0* v15;
abstract_0 v16;
};
struct C2 : public C1, public virtual C0 {
/* method id 405 */ virtual C0 func2 (abstract_1 v17, C0* v18, abstract_0 v19);
/* method id 406 */ virtual C0 func0 (abstract_1 v20, C0* v21);
/* method id 407 */ virtual C0 func1 (abstract_0 v23);
/* method id 408 */ C2 ();
C2 (special_constructor);
C0* v24;
C0 v25;
abstract_0 v26;
};
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = ((C0*) 0);
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
C0* v6 = ((C0*) 0);
return;

}
/* method id 403 */ C0 C1::func0 () {
return ((new C2 ()))->C2::func2(v14, v15, abstract_0());

}
/* method id 404 */ C0 C1::func1 (abstract_1 v11) {
abstract_1 v12 = abstract_1();
return ((new C2 ()))->C2::func2(v14, (new C0 ()), abstract_0());

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C0 C2::func2 (abstract_1 v17, C0* v18, abstract_0 v19) {
return v25;

}
/* method id 406 */ C0 C2::func0 (abstract_1 v20, C0* v21) {
abstract_1 v22 = abstract_1();
return v25;

}
/* method id 407 */ C0 C2::func1 (abstract_0 v23) {
return ((new C2 ()))->C2::func2(v14, (new C0 ()), abstract_0());

}
/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

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
4    | var13: AbstractType{0}
8    | var14: AbstractType{1}
12   | var15: PtrType{ClassType{0}}
16   | var16: AbstractType{0}
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
}
/*
class C2    size(36)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var13: AbstractType{0}
8    | | var14: AbstractType{1}
12   | | var15: PtrType{ClassType{0}}
16   | | var16: AbstractType{0}
20   | +---
20   | {vbptr}
24   | var24: PtrType{ClassType{0}}
28   | var25: ClassType{0}
29   | alignment: 
32   | var26: AbstractType{0}
36   +---
36   +--- (virtual base class C0)
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
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

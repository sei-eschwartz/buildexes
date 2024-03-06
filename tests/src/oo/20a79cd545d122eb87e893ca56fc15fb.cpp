// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ void func0 ();
/* method id 402 */ C1 ();
/* method id 403 */ virtual abstract_1 func0 (C0 v7, abstract_0 v8);
/* method id 404 */ virtual ~C1 ();
C1 (special_constructor);
abstract_0 v9;
};
struct C2 : public virtual C1, public C0 {
/* method id 405 */ C2 ();
/* method id 406 */ abstract_1 func0 (abstract_0 v10, C0 v11);
/* method id 407 */ virtual abstract_1 func2 (C0 v14, abstract_2 v15, C1 v16, abstract_0 v17);
/* method id 408 */ virtual ~C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ C3 ();
C3 (special_constructor);
abstract_0 v24;
};
abstract_3 func5 (abstract_2 v25, C1 v26, abstract_0 v27, C0 v28);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
return;

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
return;

}
/* method id 403 */ abstract_1 C1::func0 (C0 v7, abstract_0 v8) {
return abstract_1();

}
/* method id 404 */ C1::~C1 () {
return;

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {
return;

}
/* method id 406 */ abstract_1 C2::func0 (abstract_0 v10, C0 v11) {
return abstract_1();

}
/* method id 407 */ abstract_1 C2::func2 (C0 v14, abstract_2 v15, C1 v16, abstract_0 v17) {
C1 v18 = *(((C1*) 0));
C1 v19 = *(((C1*) 0));
return abstract_1();

}
/* method id 408 */ C2::~C2 () {
C1 v20 = *(&(*(((C1*) 0))));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 409 */ C3::~C3 () {
abstract_0 v21 = abstract_0();
abstract_0 v22 = abstract_0();
C1 v23 = *(((C1*) 0));
return;

}
/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_3 func5 (abstract_2 v25, C1 v26, abstract_0 v27, C0 v28) {
C1 v29;

return abstract_3();

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
4    | var9: AbstractType{0}
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
class C2    size(16)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var9: AbstractType{0}
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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
class C3    size(24)
0    +---
0    | {vbptr}
4    | var24: AbstractType{0}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var9: AbstractType{0}
16   +---
16   +--- (virtual base class C2)
16   | {vfptr}
20   | +--- (base class C0)
20   | +---
20   | {vbptr}
24   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

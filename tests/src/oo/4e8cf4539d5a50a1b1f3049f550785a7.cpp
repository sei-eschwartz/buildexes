// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void**** func0 ();
/* method id 401 */ virtual void*** func0 (abstract_2 v1, abstract_2 v2, abstract_2 v3, abstract_2 v4);
/* method id 402 */ virtual void* func0 (abstract_2 v5, abstract_2 v6);
/* method id 403 */ virtual abstract_0 func0 (abstract_2 v8);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_2 v12;
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual void*** func0 (abstract_2 v13, abstract_2 v14, abstract_2 v15, abstract_2 v16);
/* method id 406 */ ~C1 ();
/* method id 407 */ C1 ();
C1 (special_constructor);
abstract_2 v17;
abstract_2 v18;
abstract_2 v19;
};
struct C2 : public C1 {
/* method id 408 */ C2 ();
/* method id 409 */ virtual abstract_0* func1 ();
/* method id 410 */ virtual abstract_0* func0 (abstract_2 v25, abstract_2 v26, abstract_2 v27);
C2 (special_constructor);
abstract_2 v30;
};
struct C3 : public virtual C1 {
/* method id 411 */ C3 ();
C3 (special_constructor);
abstract_2 v31;
abstract_2 v32;
};
// definitions
/* method id 400 */ void**** C0::func0 () {
abstract_2 v0 = abstract_2();
return new void*** ();

}
/* method id 401 */ void*** C0::func0 (abstract_2 v1, abstract_2 v2, abstract_2 v3, abstract_2 v4) {
return ((void***) 0);

}
/* method id 402 */ void* C0::func0 (abstract_2 v5, abstract_2 v6) {
abstract_2 v7 = abstract_2();
return ((void*) 0);

}
/* method id 403 */ abstract_0 C0::func0 (abstract_2 v8) {
abstract_2 v9 = abstract_2();
abstract_2 v10 = abstract_2();
abstract_2 v11 = abstract_2();
return abstract_0();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ void*** C1::func0 (abstract_2 v13, abstract_2 v14, abstract_2 v15, abstract_2 v16) {
return ((void***) 0);

}
/* method id 406 */ C1::~C1 () {
return;

}
/* method id 407 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {
abstract_2 v20 = abstract_2();
abstract_2 v21 = abstract_2();
abstract_2 v22 = abstract_2();
abstract_2 v23 = abstract_2();
return;

}
/* method id 409 */ abstract_0* C2::func1 () {
abstract_2 v24 = abstract_2();
return ((abstract_0*) 0);

}
/* method id 410 */ abstract_0* C2::func0 (abstract_2 v25, abstract_2 v26, abstract_2 v27) {
abstract_2 v28 = abstract_2();
abstract_2 v29 = abstract_2();
return new abstract_0 ();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 411 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var12: AbstractType{2}
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
class C1    size(28)
0    +---
0    | {vbptr}
4    | var17: AbstractType{2}
8    | var18: AbstractType{2}
12   | var19: AbstractType{2}
16   | {vtordisp for vbase 0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var12: AbstractType{2}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
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
/*
class C2    size(36)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | {vbptr}
8    | | var17: AbstractType{2}
12   | | var18: AbstractType{2}
16   | | var19: AbstractType{2}
20   | +---
20   | var30: AbstractType{2}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   | var12: AbstractType{2}
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
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(40)
0    +---
0    | {vbptr}
4    | var31: AbstractType{2}
8    | var32: AbstractType{2}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var12: AbstractType{2}
24   +---
24   +--- (virtual base class C1)
24   | {vbptr}
28   | var17: AbstractType{2}
32   | var18: AbstractType{2}
36   | var19: AbstractType{2}
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

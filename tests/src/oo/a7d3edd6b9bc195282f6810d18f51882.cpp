// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 402 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 403 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C0, public C2, public C1 {
/* method id 404 */ virtual abstract_0 func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2, abstract_0* v3);
/* method id 405 */ virtual abstract_0 func1 ();
/* method id 406 */ abstract_0 func3 (abstract_0* v8);
/* method id 407 */ abstract_0* func4 (abstract_0* v9);
/* method id 408 */ C3 ();
C3 (special_constructor);
abstract_1 v10;
abstract_0* v11;
abstract_1 v12;
};
void func7 ();
void func8 (abstract_1 v17, abstract_1 v18);
abstract_0* func9 (abstract_1 v22, abstract_1 v23, abstract_1 v24, abstract_1 v25);
abstract_0* func10 (abstract_0* v30, abstract_1 v31, abstract_1 v32, abstract_1 v33);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::C2 () {
return;

}
C2::C2 (special_constructor)  {}

/* method id 404 */ abstract_0 C3::func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2, abstract_0* v3) {
return abstract_0();

}
/* method id 405 */ abstract_0 C3::func1 () {
return abstract_0();

}
/* method id 406 */ abstract_0 C3::func3 (abstract_0* v8) {
return ((new C3 ()))->C3::func1();

}
/* method id 407 */ abstract_0* C3::func4 (abstract_0* v9) {
return v11;

}
/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()), C1(special_constructor ()) {}

void func7 () {
abstract_1 v13;
abstract_1 v14;
abstract_1 v15;
abstract_1 v16;

return ::func8(v15, v15);

}
void func8 (abstract_1 v17, abstract_1 v18) {
abstract_1 v19;
abstract_1 v20;
abstract_1 v21;

return ::func7();

}
abstract_0* func9 (abstract_1 v22, abstract_1 v23, abstract_1 v24, abstract_1 v25) {
abstract_1 v26;
abstract_1 v27;
abstract_1 v28;
abstract_1 v29;

return ((abstract_0*) 0);

}
abstract_0* func10 (abstract_0* v30, abstract_1 v31, abstract_1 v32, abstract_1 v33) {
abstract_1 v34;
abstract_1 v35;
abstract_1 v36;
abstract_1 v37;

return v30;

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
class C1    size(0)
0    +---
0    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
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
/*
class C3    size(32)
0    +---
0    | {vfptr}
4    | +--- (base class C2)
4    | +---
4    | alignment: Additional padding between non-virtual bases
5    | +--- (base class C1)
5    | +---
5    | alignment: VBPtr aligned to pointer size
8    | alignment: Weird msvc alignment bug
9    | alignment: Weird msvc alignment bug: final alignment
12   | {vbptr}
16   | var10: AbstractType{1}
20   | var11: PtrType{AbstractType{0}}
24   | var12: AbstractType{1}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 5;
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

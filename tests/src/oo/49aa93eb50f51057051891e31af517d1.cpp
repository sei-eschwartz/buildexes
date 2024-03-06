// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual abstract_0** func0 ();
C1 (special_constructor);
abstract_0* v0;
};
struct C2 : public C1, public C0 {
/* method id 403 */ virtual abstract_0** func0 ();
/* method id 404 */ abstract_0* func0 (abstract_0* v1, abstract_0* v2);
/* method id 405 */ C2 ();
C2 (special_constructor);
abstract_0* v12;
abstract_6* v13;
abstract_0* v14;
};
struct C3 : public virtual C1 {
/* method id 406 */ virtual abstract_0* func0 (abstract_0* v15);
/* method id 407 */ virtual abstract_0**** func0 (abstract_2* v16);
/* method id 408 */ virtual abstract_3 func0 (abstract_6* v19);
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ C3 ();
C3 (special_constructor);
abstract_2* v24;
abstract_2* v25;
};
abstract_0 func2 ();
abstract_0** func3 ();
abstract_0* func4 (abstract_6* v29);
abstract_5 func5 (abstract_0* v32, abstract_1* v33, abstract_2* v34);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
return;

}
/* method id 402 */ abstract_0** C1::func0 () {
return ::func3();

}
C1::C1 (special_constructor)  {}

/* method id 403 */ abstract_0** C2::func0 () {
return new abstract_0* ();

}
/* method id 404 */ abstract_0* C2::func0 (abstract_0* v1, abstract_0* v2) {
return v12;

}
/* method id 405 */ C2::C2 () {
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 406 */ abstract_0* C3::func0 (abstract_0* v15) {
return v15;

}
/* method id 407 */ abstract_0**** C3::func0 (abstract_2* v16) {
abstract_6* v17 = ((abstract_6*) 0);
abstract_0* v18 = new abstract_0 ();
return new abstract_0*** ();

}
/* method id 408 */ abstract_3 C3::func0 (abstract_6* v19) {
abstract_6* v20 = ((abstract_6*) 0);
abstract_0* v21 = new abstract_0 ();
return abstract_3();

}
/* method id 409 */ C3::~C3 () {
abstract_1* v22 = ((abstract_1*) 0);
abstract_0* v23 = ((abstract_0*) 0);
return;

}
/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0 func2 () {
abstract_0* v26;
abstract_1* v27;
abstract_0* v28;

return abstract_0();

}
abstract_0** func3 () {

return new abstract_0* ();

}
abstract_0* func4 (abstract_6* v29) {
abstract_6* v30;
abstract_0* v31;

return new abstract_0 ();

}
abstract_5 func5 (abstract_0* v32, abstract_1* v33, abstract_2* v34) {
abstract_6* v35;

return abstract_5();

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
4    | var0: PtrType{AbstractType{0}}
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
4    | | var0: PtrType{AbstractType{0}}
8    | +---
8    | +--- (base class C0)
8    | +---
8    | var12: PtrType{AbstractType{0}}
12   | var13: PtrType{AbstractType{6}}
16   | var14: PtrType{AbstractType{0}}
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
 const size_t model_offset = 8;
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
0    | {vfptr}
4    | {vbptr}
8    | var24: PtrType{AbstractType{2}}
12   | var25: PtrType{AbstractType{2}}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | var0: PtrType{AbstractType{0}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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

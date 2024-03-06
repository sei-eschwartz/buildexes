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
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual C0 func0 ();
/* method id 403 */ virtual C0 func1 (C0* v8);
C1 (special_constructor);
abstract_1 v12;
C0* v13;
abstract_1 v14;
};
struct C2 : public virtual C1 {
/* method id 404 */ C2 ();
C2 (special_constructor);
abstract_0 v15;
};
struct C3  {
/* method id 405 */ virtual ~C3 ();
/* method id 406 */ C3 ();
C3 (special_constructor);
C0* v65;
C0* v66;
abstract_2 v67;
};
C0 func4 (C0* v68, abstract_2 v69);
C0 func5 (C0* v72, C0* v73, C0* v74, C0* v75);
C0 func6 (abstract_2 v80);
C0 func7 (C0* v83, C0* v84, C0* v85, C0* v86);
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
/* method id 402 */ C0 C1::func0 () {
delete (new C1 ());
return ::func4(v13, abstract_2());

}
/* method id 403 */ C0 C1::func1 (C0* v8) {
return ::func5((new C0 ()), (new C0 ()), (new C0 ()), (new C0 ()));

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 405 */ C3::~C3 () {
abstract_0 v16 = abstract_0();
return;

}
/* method id 406 */ C3::C3 () {
abstract_2 v17 = abstract_2();
abstract_1 v18 = abstract_1();
return;

}
C3::C3 (special_constructor)  {}

C0 func4 (C0* v68, abstract_2 v69) {
C0* v70;
abstract_2 v71;

return ::func5((new C0 ()), (new C0 ()), (new C0 ()), (new C0 ()));

}
C0 func5 (C0* v72, C0* v73, C0* v74, C0* v75) {
abstract_2 v76;
C0* v77;
abstract_1 v78;
C0* v79;

return ::func6(v76);

}
C0 func6 (abstract_2 v80) {
C0* v81;
abstract_2 v82;

return *(v81);

}
C0 func7 (C0* v83, C0* v84, C0* v85, C0* v86) {
abstract_2 v87;
C0* v88;
C0* v89;
abstract_2 v90;

return ::func5((new C0 ()), (new C0 ()), (new C0 ()), (new C0 ()));

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | var12: AbstractType{1}
8    | var13: PtrType{ClassType{0}}
12   | var14: AbstractType{1}
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
}
/*
class C2    size(24)
0    +---
0    | {vbptr}
4    | var15: AbstractType{0}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var12: AbstractType{1}
16   | var13: PtrType{ClassType{0}}
20   | var14: AbstractType{1}
24   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 24;
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
 }}}
/*
class C3    size(16)
0    +---
0    | {vfptr}
4    | var65: PtrType{ClassType{0}}
8    | var66: PtrType{ClassType{0}}
12   | var67: AbstractType{2}
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
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

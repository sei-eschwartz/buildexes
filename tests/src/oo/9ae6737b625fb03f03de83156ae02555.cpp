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
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct abstract_11 { int x; };
struct abstract_12 { int x; };
struct abstract_13 { int x; };
struct abstract_14 { int x; };
struct abstract_15 { int x; };
struct abstract_16 { int x; };
struct abstract_17 { int x; };
struct abstract_18 { int x; };
struct abstract_19 { int x; };
struct abstract_20 { int x; };
struct abstract_21 { int x; };
struct abstract_22 { int x; };
struct abstract_23 { int x; };
struct abstract_24 { int x; };
struct abstract_25 { int x; };
struct abstract_26 { int x; };
struct abstract_27 { int x; };
struct abstract_28 { int x; };
struct abstract_29 { int x; };
struct abstract_30 { int x; };
struct abstract_31 { int x; };
struct abstract_32 { int x; };
struct abstract_33 { int x; };
struct abstract_34 { int x; };
struct abstract_35 { int x; };
struct abstract_36 { int x; };
struct abstract_37 { int x; };
struct abstract_38 { int x; };
struct abstract_39 { int x; };
struct abstract_40 { int x; };
struct abstract_41 { int x; };
struct abstract_42 { int x; };
struct abstract_43 { int x; };
struct abstract_44 { int x; };
struct abstract_45 { int x; };
struct abstract_46 { int x; };
struct abstract_47 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 402 */ C2 ();
/* method id 403 */ ~C2 ();
/* method id 404 */ virtual C1* func1 (C0 v29, C0 v30, C0 v31, C0 v32);
C2 (special_constructor);
};
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 402 */ C2::C2 () {
C0 v2 = *(&(*((new C0 ()))));
C0 v3 = *(&(*((new C0 ()))));
C0 v4 = *(&(*((new C0 ()))));
C0 v5 = *(&(*((new C0 ()))));
return;

}
/* method id 403 */ C2::~C2 () {
C0 v6 = *(((C0*) 0));
C0 v7 = *(((C0*) 0));
C0 v8 = *(((C0*) 0));
C0 v9 = *(((C0*) 0));
return;

}
/* method id 404 */ C1* C2::func1 (C0 v29, C0 v30, C0 v31, C0 v32) {
C0 v33 = *(&(*(((C0*) 0))));
C0 v34 = *(&(*(((C0*) 0))));
return &(*(((C1*) 0)));

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
class C1    size(2)
0    +---
0    | var0: ClassType{0}
1    | var1: ClassType{0}
2    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 2;
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
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | var0: ClassType{0}
9    | var1: ClassType{0}
10   +---
10   | alignment: alignment before virtual base padding
12   | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 0, which leads with zero sized base.
16   +--- (virtual base class C0)
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
 const size_t model_offset = 16;
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

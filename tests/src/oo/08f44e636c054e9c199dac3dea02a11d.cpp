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
struct abstract_48 { int x; };
struct abstract_49 { int x; };
struct abstract_50 { int x; };
struct abstract_51 { int x; };
struct abstract_52 { int x; };
struct abstract_53 { int x; };
struct abstract_54 { int x; };
struct abstract_55 { int x; };
struct abstract_56 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 402 */ C2 ();
C2 (special_constructor);
};
C1** func3 (C2 v0);
C0 func4 (C2 v3, C2 v4, C2 v5, C2 v6);
void func5 (C2 v10, C2 v11, C2 v12);
void*** func6 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 402 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

C1** func3 (C2 v0) {
C2 v1;
C2 v2;

::func5(v2, v0, v0);
return new C1* ();

}
C0 func4 (C2 v3, C2 v4, C2 v5, C2 v6) {
C2 v7;
C2 v8;
C2 v9;

return *(((C0*) 0));

}
void func5 (C2 v10, C2 v11, C2 v12) {

delete (new C0 ());
return;

}
void*** func6 () {

delete (new C0 ());
return ((void***) 0);

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
class C1    size(4)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(8)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    +---
4    +--- (virtual base class C1)
4    | {vbptr}
8    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 8;
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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

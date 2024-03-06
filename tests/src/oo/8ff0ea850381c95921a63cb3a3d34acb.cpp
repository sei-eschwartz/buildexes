// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
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
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v7);
/* method id 403 */ virtual ~C0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_0 v12;
abstract_4 v13;
};
struct C1 : public C0 {
/* method id 405 */ C1 ();
/* method id 406 */ virtual void func0 ();
/* method id 407 */ virtual ~C1 ();
C1 (special_constructor);
abstract_0 v29;
abstract_4 v30;
abstract_4 v31;
};
struct C2 : public virtual C1 {
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_1 v32;
abstract_4 v33;
C1 v34;
};
struct C3 : public virtual C0 {
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ C3 ();
C3 (special_constructor);
abstract_1 v35;
abstract_0 v36;
};
abstract_16 func4 ();
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return abstract_2();

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7) {
return abstract_2();

}
/* method id 403 */ C0::~C0 () {
abstract_0 v8 = abstract_0();
abstract_3 v9 = abstract_3();
abstract_3 v10 = abstract_3();
abstract_1 v11 = abstract_1();
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {
((new C1 ()))->C1::func0();
((new C1 ()))->C1::func0();
((new C1 ()))->C1::func0();
((new C1 ()))->C1::func0();
return;

}
/* method id 406 */ void C1::func0 () {
return;

}
/* method id 407 */ C1::~C1 () {
abstract_1 v21 = abstract_1();
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::~C3 () {
delete (new C0 ());
return;

}
/* method id 411 */ C3::C3 () {
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()) {}

abstract_16 func4 () {
C1 v37;
abstract_3 v38;

v37 = v37;
v37 = v37;
v37 = v37;
v37 = v37;
return abstract_16();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var12: AbstractType{0}
8    | var13: AbstractType{4}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(24)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var12: AbstractType{0}
8    | | var13: AbstractType{4}
12   | +---
12   | var29: AbstractType{0}
16   | var30: AbstractType{4}
20   | var31: AbstractType{4}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(60)
0    +---
0    | {vbptr}
4    | var32: AbstractType{1}
8    | var33: AbstractType{4}
12   | var34: ClassType{1}
36   +---
36   +--- (virtual base class C1)
36   | +--- (base class C0)
36   | | {vfptr}
40   | | var12: AbstractType{0}
44   | | var13: AbstractType{4}
48   | +---
48   | var29: AbstractType{0}
52   | var30: AbstractType{4}
56   | var31: AbstractType{4}
60   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 60;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(24)
0    +---
0    | {vbptr}
4    | var35: AbstractType{1}
8    | var36: AbstractType{0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var12: AbstractType{0}
20   | var13: AbstractType{4}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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

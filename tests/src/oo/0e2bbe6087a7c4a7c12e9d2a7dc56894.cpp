// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void* func0 ();
/* method id 401 */ virtual void* func0 (abstract_0 v0);
/* method id 402 */ virtual void func0 (abstract_0 v1, abstract_0 v2);
/* method id 403 */ virtual abstract_1 func0 (abstract_0 v5, abstract_0 v6, abstract_0 v7, abstract_0 v8);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_0 v9;
abstract_0 v10;
abstract_0 v11;
abstract_0 v12;
};
struct C1 : public C0 {
/* method id 405 */ void func1 (abstract_0 v13, abstract_0 v14, abstract_0 v15, abstract_0 v16);
/* method id 406 */ C1 ();
/* method id 407 */ virtual ~C1 ();
C1 (special_constructor);
abstract_0 v52;
abstract_0 v53;
};
struct C2 : public virtual C1 {
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_0 v54;
abstract_0 v55;
abstract_0 v56;
abstract_0 v57;
};
struct C3 : public virtual C2 {
/* method id 410 */ C3 ();
/* method id 411 */ virtual ~C3 ();
C3 (special_constructor);
void*** v83;
abstract_0 v84;
};
abstract_2 func4 (void*** v85);
void func5 ();
void* func6 (void*** v86, void*** v87, C3 v88, void*** v89);
// definitions
/* method id 400 */ void* C0::func0 () {
v10 = abstract_0();
v10 = abstract_0();
v10 = abstract_0();
v10 = abstract_0();
return ((void*) 0);

}
/* method id 401 */ void* C0::func0 (abstract_0 v0) {
return ((void*) 0);

}
/* method id 402 */ void C0::func0 (abstract_0 v1, abstract_0 v2) {
abstract_0 v3 = abstract_0();
delete (new C3 ());
return;

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v5, abstract_0 v6, abstract_0 v7, abstract_0 v8) {
v9 = v7;
v9 = v7;
v9 = v7;
v9 = v7;
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ void C1::func1 (abstract_0 v13, abstract_0 v14, abstract_0 v15, abstract_0 v16) {
abstract_0 v17 = abstract_0();
abstract_0 v18 = abstract_0();
abstract_0 v19 = abstract_0();
v9 = abstract_0();
v9 = abstract_0();
v9 = abstract_0();
v9 = abstract_0();
return;

}
/* method id 406 */ C1::C1 () {
abstract_0 v20 = abstract_0();
abstract_0 v21 = abstract_0();
abstract_0 v22 = abstract_0();
abstract_0 v23 = abstract_0();
return;

}
/* method id 407 */ C1::~C1 () {
abstract_0 v32 = abstract_0();
abstract_0 v33 = abstract_0();
abstract_0 v34 = abstract_0();
abstract_0 v35 = abstract_0();
v33 = abstract_0();
v33 = abstract_0();
v33 = abstract_0();
v33 = abstract_0();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
abstract_0 v58 = abstract_0();
delete (new C2 ());
return;

}
/* method id 411 */ C3::~C3 () {
abstract_0 v59 = abstract_0();
abstract_0 v60 = abstract_0();
abstract_0 v61 = abstract_0();
abstract_0 v62 = abstract_0();
v9 = v53;
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_2 func4 (void*** v85) {

v85 = v85;
return abstract_2();

}
void func5 () {

return;

}
void* func6 (void*** v86, void*** v87, C3 v88, void*** v89) {
C3 v90;

delete (new C1 ());
return ((void*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var9: AbstractType{0}
8    | var10: AbstractType{0}
12   | var11: AbstractType{0}
16   | var12: AbstractType{0}
20   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 20;
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
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var9: AbstractType{0}
8    | | var10: AbstractType{0}
12   | | var11: AbstractType{0}
16   | | var12: AbstractType{0}
20   | +---
20   | var52: AbstractType{0}
24   | var53: AbstractType{0}
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
class C2    size(48)
0    +---
0    | {vbptr}
4    | var54: AbstractType{0}
8    | var55: AbstractType{0}
12   | var56: AbstractType{0}
16   | var57: AbstractType{0}
20   +---
20   +--- (virtual base class C1)
20   | +--- (base class C0)
20   | | {vfptr}
24   | | var9: AbstractType{0}
28   | | var10: AbstractType{0}
32   | | var11: AbstractType{0}
36   | | var12: AbstractType{0}
40   | +---
40   | var52: AbstractType{0}
44   | var53: AbstractType{0}
48   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(60)
0    +---
0    | {vbptr}
4    | var83: PtrType{PtrType{PtrType{VoidType{}}}}
8    | var84: AbstractType{0}
12   +---
12   +--- (virtual base class C1)
12   | +--- (base class C0)
12   | | {vfptr}
16   | | var9: AbstractType{0}
20   | | var10: AbstractType{0}
24   | | var11: AbstractType{0}
28   | | var12: AbstractType{0}
32   | +---
32   | var52: AbstractType{0}
36   | var53: AbstractType{0}
40   +---
40   +--- (virtual base class C2)
40   | {vbptr}
44   | var54: AbstractType{0}
48   | var55: AbstractType{0}
52   | var56: AbstractType{0}
56   | var57: AbstractType{0}
60   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 60;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
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

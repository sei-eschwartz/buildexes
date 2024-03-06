// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_6 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_0 func0 (abstract_0* v0);
/* method id 401 */ virtual abstract_0 func0 (abstract_0* v2, abstract_0* v3, abstract_0* v4);
/* method id 402 */ virtual abstract_0 func0 (abstract_0* v7, abstract_1 v8, abstract_1 v9, abstract_1 v10);
/* method id 403 */ ~C0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1 v16;
abstract_3 v17;
abstract_3 v18;
abstract_1 v19;
};
struct C1  {
/* method id 405 */ ~C1 ();
/* method id 406 */ C1 ();
/* method id 407 */ abstract_0 func0 ();
/* method id 408 */ virtual abstract_0 func1 ();
C1 (special_constructor);
C0 v24;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 409 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C2 {
/* method id 411 */ C3 ();
/* method id 412 */ virtual ~C3 ();
/* method id 413 */ virtual abstract_0 func5 ();
C3 (special_constructor);
abstract_0* v37;
};
abstract_6 func7 ();
abstract_0 func8 ();
abstract_6 func9 (abstract_6*** v46, C0 v47);
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0) {
abstract_0* v1 = ((abstract_0*) 0);
return abstract_0();

}
/* method id 401 */ abstract_0 C0::func0 (abstract_0* v2, abstract_0* v3, abstract_0* v4) {
abstract_0* v5 = ((abstract_0*) 0);
abstract_0* v6 = ((abstract_0*) 0);
return abstract_0();

}
/* method id 402 */ abstract_0 C0::func0 (abstract_0* v7, abstract_1 v8, abstract_1 v9, abstract_1 v10) {
abstract_1 v11 = abstract_1();
abstract_0* v12 = new abstract_0 ();
delete (new C2 ());
v9 = v8;
v9 = v8;
return ::func8();

}
/* method id 403 */ C0::~C0 () {
abstract_2 v13 = abstract_2();
abstract_2 v14 = abstract_2();
abstract_0* v15 = new abstract_0 ();
delete (new C1 ());
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::~C1 () {
return;

}
/* method id 406 */ C1::C1 () {
abstract_1 v20 = abstract_1();
return;

}
/* method id 407 */ abstract_0 C1::func0 () {
return (&(*(((C1*) 0))))->C1::func1();

}
/* method id 408 */ abstract_0 C1::func1 () {
abstract_1 v21 = abstract_1();
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
return ::func8();

}
C1::C1 (special_constructor)  {}

/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 411 */ C3::C3 () {
::func8();
::func8();
::func8();
::func8();
return;

}
/* method id 412 */ C3::~C3 () {
abstract_1 v25 = abstract_1();
abstract_0* v26 = new abstract_0 ();
return;

}
/* method id 413 */ abstract_0 C3::func5 () {
abstract_1 v33 = abstract_1();
abstract_1 v34 = abstract_1();
delete (new C1 ());
return abstract_0();

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_6 func7 () {
abstract_4 v38;
abstract_0* v39;
abstract_1 v40;
abstract_6*** v41;

v38 = v38;
v38 = v38;
v38 = v38;
v38 = v38;
return abstract_6();

}
abstract_0 func8 () {
abstract_6* v42;
C0 v43;
abstract_0* v44;
abstract_1 v45;

delete (new C1 ());
return abstract_0();

}
abstract_6 func9 (abstract_6*** v46, C0 v47) {
abstract_1 v48;
abstract_6* v49;
abstract_4 v50;

return ::func7();

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var16: AbstractType{1}
8    | var17: AbstractType{3}
12   | var18: AbstractType{3}
16   | var19: AbstractType{1}
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
class C1    size(24)
0    +---
0    | {vfptr}
4    | var24: ClassType{0}
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
}
/*
class C2    size(48)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    | var16: AbstractType{1}
12   | var17: AbstractType{3}
16   | var18: AbstractType{3}
20   | var19: AbstractType{1}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | var24: ClassType{0}
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
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(56)
0    +---
0    | {vfptr}
4    | +--- (base class C2)
4    | | {vbptr}
8    | +---
8    | var37: PtrType{AbstractType{0}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var16: AbstractType{1}
20   | var17: AbstractType{3}
24   | var18: AbstractType{3}
28   | var19: AbstractType{1}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | var24: ClassType{0}
56   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 56;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

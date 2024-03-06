// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_5 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 ();
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_1 v1;
abstract_0* v2;
abstract_1 v3;
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual abstract_0 func0 (abstract_0* v4, abstract_1 v5, abstract_0* v6, abstract_0* v7);
/* method id 404 */ C1 ();
/* method id 405 */ virtual ~C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 406 */ virtual abstract_5 func2 (abstract_4 v15, abstract_0* v16);
/* method id 407 */ C2 ();
C2 (special_constructor);
C1 v21;
};
struct C3 : public C2 {
/* method id 409 */ virtual abstract_5 func4 ();
/* method id 410 */ C3 ();
/* method id 411 */ virtual ~C3 ();
C3 (special_constructor);
abstract_4 v36;
abstract_0* v37;
};
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return abstract_0();

}
/* method id 401 */ C0::~C0 () {
abstract_1 v0 = abstract_1();
delete (new C3 ());
return;

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0 C1::func0 (abstract_0* v4, abstract_1 v5, abstract_0* v6, abstract_0* v7) {
abstract_0* v8 = new abstract_0 ();
abstract_2 v9 = abstract_2();
abstract_0* v10 = new abstract_0 ();
abstract_2 v11 = abstract_2();
return abstract_0();

}
/* method id 404 */ C1::C1 () {
abstract_3 v12 = abstract_3();
return;

}
/* method id 405 */ C1::~C1 () {
abstract_4 v14 = abstract_4();
v3 = abstract_1();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ abstract_5 C2::func2 (abstract_4 v15, abstract_0* v16) {
C1 v17 = *((new C1 ()));
abstract_3 v18 = abstract_3();
abstract_2 v19 = abstract_2();
abstract_4 v20 = abstract_4();
delete (new C2 ());
return ((new C3 ()))->C3::func4();

}
/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 409 */ abstract_5 C3::func4 () {
return abstract_5();

}
/* method id 410 */ C3::C3 () {
abstract_0* v22 = new abstract_0 ();
C1 v23 = *(((C1*) 0));
abstract_2 v24 = abstract_2();
C1 v25 = *(((C1*) 0));
return;

}
/* method id 411 */ C3::~C3 () {
abstract_3 v34 = abstract_3();
C1 v35 = *(((C1*) 0));
delete (new C1 ());
v3 = v1;
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var1: AbstractType{1}
8    | var2: PtrType{AbstractType{0}}
12   | var3: AbstractType{1}
16   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 16;
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
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var1: AbstractType{1}
16   | var2: PtrType{AbstractType{0}}
20   | var3: AbstractType{1}
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
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(56)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var21: ClassType{1}
32   +---
32   +--- (virtual base class C0)
32   | {vfptr}
36   | var1: AbstractType{1}
40   | var2: PtrType{AbstractType{0}}
44   | var3: AbstractType{1}
48   +---
48   +--- (virtual base class C1)
48   | {vfptr}
52   | {vbptr}
56   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 56;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
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
 const size_t model_offset = 48;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(64)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | | var21: ClassType{1}
32   | +---
32   | var36: AbstractType{4}
36   | var37: PtrType{AbstractType{0}}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   | var1: AbstractType{1}
48   | var2: PtrType{AbstractType{0}}
52   | var3: AbstractType{1}
56   +---
56   +--- (virtual base class C1)
56   | {vfptr}
60   | {vbptr}
64   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 64;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

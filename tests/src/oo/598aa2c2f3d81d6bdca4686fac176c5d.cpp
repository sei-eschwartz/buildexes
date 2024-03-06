// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_0 func0 ();
/* method id 401 */ abstract_0 func0 (abstract_1 v0);
/* method id 402 */ virtual abstract_2 func1 (abstract_1 v1, abstract_1 v2, abstract_1 v3, abstract_1 v4);
/* method id 403 */ ~C0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1 v5;
abstract_1 v6;
abstract_1 v7;
abstract_1 v8;
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_2 func1 (abstract_1 v9);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_1 v11;
abstract_1 v12;
abstract_3 v13;
abstract_3 v14;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_3 v19;
};
struct C3 : public virtual C0, public virtual C1, public C2 {
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ virtual abstract_0 func4 (abstract_3 v21, abstract_3 v22, abstract_4 v23, abstract_3 v24);
/* method id 412 */ C3 ();
/* method id 413 */ virtual abstract_0 func4 (abstract_5 v29, abstract_5 v30, abstract_5 v31, abstract_5 v32);
C3 (special_constructor);
};
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return abstract_0();

}
/* method id 401 */ abstract_0 C0::func0 (abstract_1 v0) {
delete (new C0 ());
v6 = v0;
return abstract_0();

}
/* method id 402 */ abstract_2 C0::func1 (abstract_1 v1, abstract_1 v2, abstract_1 v3, abstract_1 v4) {
return abstract_2();

}
/* method id 403 */ C0::~C0 () {
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func1 (abstract_1 v9) {
abstract_1 v10 = abstract_1();
return abstract_2();

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {
abstract_2* v15 = new abstract_2 ();
abstract_2* v16 = new abstract_2 ();
abstract_3 v17 = abstract_3();
abstract_1 v18 = abstract_1();
delete (new C3 ());
delete (new C0 ());
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 410 */ C3::~C3 () {
abstract_3 v20 = abstract_3();
delete (new C1 ());
v6 = v6;
v6 = v6;
return;

}
/* method id 411 */ abstract_0 C3::func4 (abstract_3 v21, abstract_3 v22, abstract_4 v23, abstract_3 v24) {
v19 = v19;
return abstract_0();

}
/* method id 412 */ C3::C3 () {
abstract_3 v25 = abstract_3();
abstract_3 v26 = abstract_3();
abstract_1 v27 = abstract_1();
abstract_5 v28 = abstract_5();
v6 = v6;
return;

}
/* method id 413 */ abstract_0 C3::func4 (abstract_5 v29, abstract_5 v30, abstract_5 v31, abstract_5 v32) {
return abstract_0();

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var5: AbstractType{1}
8    | var6: AbstractType{1}
12   | var7: AbstractType{1}
16   | var8: AbstractType{1}
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
class C1    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var11: AbstractType{1}
12   | var12: AbstractType{1}
16   | var13: AbstractType{3}
20   | var14: AbstractType{3}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var5: AbstractType{1}
32   | var6: AbstractType{1}
36   | var7: AbstractType{1}
40   | var8: AbstractType{1}
44   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(52)
0    +---
0    | {vbptr}
4    | var19: AbstractType{3}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var5: AbstractType{1}
16   | var6: AbstractType{1}
20   | var7: AbstractType{1}
24   | var8: AbstractType{1}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var11: AbstractType{1}
40   | var12: AbstractType{1}
44   | var13: AbstractType{3}
48   | var14: AbstractType{3}
52   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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
8    | | var19: AbstractType{3}
12   | +---
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var5: AbstractType{1}
20   | var6: AbstractType{1}
24   | var7: AbstractType{1}
28   | var8: AbstractType{1}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   | var11: AbstractType{1}
44   | var12: AbstractType{1}
48   | var13: AbstractType{3}
52   | var14: AbstractType{3}
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
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

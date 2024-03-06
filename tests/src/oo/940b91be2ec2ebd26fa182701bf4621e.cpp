// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ virtual abstract_2* func1 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_1 v3);
/* method id 402 */ virtual abstract_3 func1 (abstract_1 v5, abstract_1 v6, abstract_1 v7);
/* method id 403 */ virtual abstract_3* func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1 v9;
};
struct C1 : public virtual C0 {
/* method id 405 */ C1 ();
C1 (special_constructor);
abstract_1 v10;
abstract_4 v11;
abstract_4 v12;
abstract_4 v13;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 409 */ virtual abstract_3 func0 (abstract_0 v14);
/* method id 410 */ C3 ();
/* method id 411 */ virtual abstract_2* func6 (abstract_0 v20, C1 v21, abstract_4 v22);
C3 (special_constructor);
abstract_1 v25;
abstract_4 v26;
abstract_1 v27;
abstract_1 v28;
};
abstract_2* func8 (abstract_1 v29, abstract_1 v30, abstract_4 v31, abstract_1 v32);
abstract_2* func9 (abstract_4 v34, abstract_4 v35);
abstract_2* func10 (abstract_1 v39, abstract_2** v40);
abstract_2** func11 (C1 v42, abstract_4 v43, C1 v44, abstract_2** v45);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C1 ());
return;

}
/* method id 401 */ abstract_2* C0::func1 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_1 v3) {
abstract_0 v4 = abstract_0();
v0 = v2;
return ((abstract_2*) 0);

}
/* method id 402 */ abstract_3 C0::func1 (abstract_1 v5, abstract_1 v6, abstract_1 v7) {
delete (new C1 ());
return abstract_3();

}
/* method id 403 */ abstract_3* C0::func0 () {
abstract_0 v8 = abstract_0();
return new abstract_3 ();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 409 */ abstract_3 C3::func0 (abstract_0 v14) {
abstract_0 v15 = abstract_0();
abstract_3* v16 = new abstract_3 ();
abstract_5 v17 = abstract_5();
abstract_1 v18 = abstract_1();
return abstract_3();

}
/* method id 410 */ C3::C3 () {
abstract_0 v19 = abstract_0();
return;

}
/* method id 411 */ abstract_2* C3::func6 (abstract_0 v20, C1 v21, abstract_4 v22) {
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
v22 = abstract_4();
v22 = abstract_4();
v22 = abstract_4();
v22 = abstract_4();
return ((abstract_2*) 0);

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_2* func8 (abstract_1 v29, abstract_1 v30, abstract_4 v31, abstract_1 v32) {
abstract_1 v33;

return ::func10(abstract_1(), ((abstract_2**) 0));

}
abstract_2* func9 (abstract_4 v34, abstract_4 v35) {
abstract_6 v36;
abstract_1 v37;
abstract_0 v38;

delete (new C1 ());
return new abstract_2 ();

}
abstract_2* func10 (abstract_1 v39, abstract_2** v40) {
abstract_1 v41;

return new abstract_2 ();

}
abstract_2** func11 (C1 v42, abstract_4 v43, C1 v44, abstract_2** v45) {
C1 v46;
abstract_1 v47;

return v45;

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var9: AbstractType{1}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
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
0    | {vbptr}
4    | var10: AbstractType{1}
8    | var11: AbstractType{4}
12   | var12: AbstractType{4}
16   | var13: AbstractType{4}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var9: AbstractType{1}
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
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(32)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    | var9: AbstractType{1}
12   +---
12   +--- (virtual base class C1)
12   | {vbptr}
16   | var10: AbstractType{1}
20   | var11: AbstractType{4}
24   | var12: AbstractType{4}
28   | var13: AbstractType{4}
32   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 32;
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
 const size_t model_offset = 12;
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
4    | {vbptr}
8    | var25: AbstractType{1}
12   | var26: AbstractType{4}
16   | var27: AbstractType{1}
20   | var28: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var9: AbstractType{1}
32   +---
32   +--- (virtual base class C1)
32   | {vbptr}
36   | var10: AbstractType{1}
40   | var11: AbstractType{4}
44   | var12: AbstractType{4}
48   | var13: AbstractType{4}
52   +---
52   +--- (virtual base class C2)
52   | {vbptr}
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
 const size_t model_offset = 52;
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

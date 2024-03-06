// type for special constructors
struct special_constructor {};
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
abstract_1 v11;
abstract_1 v12;
};
struct C1  {
/* method id 402 */ C1 ();
C1 (special_constructor);
abstract_1 v13;
abstract_3 v14;
abstract_1 v15;
abstract_1 v16;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 403 */ C2 ();
C2 (special_constructor);
abstract_1 v21;
abstract_1 v22;
abstract_3 v23;
abstract_1 v24;
};
struct C3 : public virtual C1, public virtual C0, public virtual C2 {
/* method id 405 */ C3 ();
C3 (special_constructor);
abstract_1 v34;
abstract_3 v35;
};
C1**** func4 (abstract_1 v36, abstract_1 v37, abstract_1 v38, abstract_1 v39);
abstract_4* func5 (abstract_1 v44, abstract_3 v45, abstract_1 v46, abstract_1 v47);
C1** func6 (abstract_1 v51, abstract_1 v52, abstract_1 v53, abstract_1 v54);
abstract_4* func7 (abstract_1 v59, abstract_1 v60, abstract_1 v61, abstract_3 v62);
// definitions
/* method id 400 */ C0::~C0 () {
abstract_0 v0 = abstract_0();
abstract_0 v1 = abstract_0();
abstract_1 v2 = abstract_1();
abstract_2 v3 = abstract_2();
return;

}
/* method id 401 */ C0::C0 () {
abstract_1 v4 = abstract_1();
abstract_1 v5 = abstract_1();
abstract_0 v6 = abstract_0();
abstract_0 v7 = abstract_0();
delete (new C1 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::C2 () {
abstract_1 v17 = abstract_1();
abstract_1 v18 = abstract_1();
abstract_1 v19 = abstract_1();
abstract_2 v20 = abstract_2();
delete (new C1 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
abstract_1 v25 = abstract_1();
abstract_1 v26 = abstract_1();
abstract_1 v27 = abstract_1();
abstract_1 v28 = abstract_1();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()), C2(special_constructor ()) {}

C1**** func4 (abstract_1 v36, abstract_1 v37, abstract_1 v38, abstract_1 v39) {
abstract_3 v40;
abstract_1 v41;
abstract_2 v42;
abstract_1 v43;

return new C1*** ();

}
abstract_4* func5 (abstract_1 v44, abstract_3 v45, abstract_1 v46, abstract_1 v47) {
abstract_1 v48;
abstract_1 v49;
abstract_3 v50;

return ((abstract_4*) 0);

}
C1** func6 (abstract_1 v51, abstract_1 v52, abstract_1 v53, abstract_1 v54) {
abstract_1 v55;
abstract_2 v56;
abstract_1 v57;
abstract_1 v58;

delete (new C2 ());
return new C1* ();

}
abstract_4* func7 (abstract_1 v59, abstract_1 v60, abstract_1 v61, abstract_3 v62) {
abstract_1 v63;
abstract_2 v64;
abstract_1 v65;
abstract_1 v66;

return ((abstract_4*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var11: AbstractType{1}
8    | var12: AbstractType{1}
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
class C1    size(16)
0    +---
0    | var13: AbstractType{1}
4    | var14: AbstractType{3}
8    | var15: AbstractType{1}
12   | var16: AbstractType{1}
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
class C2    size(48)
0    +---
0    | {vbptr}
4    | var21: AbstractType{1}
8    | var22: AbstractType{1}
12   | var23: AbstractType{3}
16   | var24: AbstractType{1}
20   +---
20   +--- (virtual base class C1)
20   | var13: AbstractType{1}
24   | var14: AbstractType{3}
28   | var15: AbstractType{1}
32   | var16: AbstractType{1}
36   +---
36   +--- (virtual base class C0)
36   | {vfptr}
40   | var11: AbstractType{1}
44   | var12: AbstractType{1}
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(60)
0    +---
0    | {vbptr}
4    | var34: AbstractType{1}
8    | var35: AbstractType{3}
12   +---
12   +--- (virtual base class C1)
12   | var13: AbstractType{1}
16   | var14: AbstractType{3}
20   | var15: AbstractType{1}
24   | var16: AbstractType{1}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   | var11: AbstractType{1}
36   | var12: AbstractType{1}
40   +---
40   +--- (virtual base class C2)
40   | {vbptr}
44   | var21: AbstractType{1}
48   | var22: AbstractType{1}
52   | var23: AbstractType{3}
56   | var24: AbstractType{1}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
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

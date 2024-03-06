// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ C0 ();
/* method id 403 */ virtual abstract_2 func0 ();
C0 (special_constructor);
abstract_3 v10;
abstract_4 v11;
abstract_1 v12;
abstract_5 v13;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual abstract_2 func0 (abstract_5 v14, abstract_1 v15);
/* method id 405 */ C1 ();
C1 (special_constructor);
abstract_1 v18;
C0 v19;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 406 */ C2 ();
/* method id 407 */ ~C2 ();
/* method id 408 */ virtual abstract_2 func1 (abstract_1 v25, abstract_1 v26, abstract_2* v27, abstract_1 v28);
C2 (special_constructor);
abstract_1 v45;
abstract_1 v46;
abstract_6 v47;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ C3 ();
C3 (special_constructor);
abstract_1 v64;
abstract_1 v65;
abstract_6 v66;
abstract_1 v67;
};
abstract_2 func2 (abstract_2* v68, abstract_1 v69, abstract_1 v70, abstract_6 v71);
abstract_2 func3 (abstract_6 v72);
abstract_2 func4 (abstract_5 v76, abstract_1 v77, abstract_5 v78, abstract_1 v79);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
return abstract_2();

}
/* method id 402 */ C0::C0 () {
return;

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_1 v6 = abstract_1();
abstract_2* v7 = new abstract_2 ();
abstract_3 v8 = abstract_3();
abstract_3 v9 = abstract_3();
return abstract_2();

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_2 C1::func0 (abstract_5 v14, abstract_1 v15) {
abstract_4 v16 = abstract_4();
abstract_0 v17 = abstract_0();
return ::func3(abstract_6());

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
abstract_6 v20 = abstract_6();
abstract_4 v21 = abstract_4();
abstract_4 v22 = abstract_4();
::func3(v47);
::func3(v47);
::func3(v47);
::func3(v47);
return;

}
/* method id 407 */ C2::~C2 () {
::func3(v47);
::func3(v47);
::func3(v47);
::func3(v47);
return;

}
/* method id 408 */ abstract_2 C2::func1 (abstract_1 v25, abstract_1 v26, abstract_2* v27, abstract_1 v28) {
abstract_1 v29 = abstract_1();
abstract_1 v30 = abstract_1();
abstract_1 v31 = abstract_1();
abstract_6 v32 = abstract_6();
return ::func3(v47);

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 409 */ C3::~C3 () {
abstract_1 v48 = abstract_1();
abstract_6 v49 = abstract_6();
abstract_1 v50 = abstract_1();
abstract_1 v51 = abstract_1();
return;

}
/* method id 410 */ C3::C3 () {
abstract_2* v52 = ((abstract_2*) 0);
abstract_1 v53 = abstract_1();
abstract_1 v54 = abstract_1();
abstract_6 v55 = abstract_6();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_2 func2 (abstract_2* v68, abstract_1 v69, abstract_1 v70, abstract_6 v71) {

return abstract_2();

}
abstract_2 func3 (abstract_6 v72) {
abstract_1 v73;
abstract_1 v74;
abstract_6 v75;

return abstract_2();

}
abstract_2 func4 (abstract_5 v76, abstract_1 v77, abstract_5 v78, abstract_1 v79) {
abstract_1 v80;
abstract_6 v81;
abstract_1 v82;
abstract_2* v83;

return ::func3(v81);

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var10: AbstractType{3}
8    | var11: AbstractType{4}
12   | var12: AbstractType{1}
16   | var13: AbstractType{5}
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
class C1    size(52)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var18: AbstractType{1}
12   | var19: ClassType{0}
32   +---
32   +--- (virtual base class C0)
32   | {vfptr}
36   | var10: AbstractType{3}
40   | var11: AbstractType{4}
44   | var12: AbstractType{1}
48   | var13: AbstractType{5}
52   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(72)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var45: AbstractType{1}
12   | var46: AbstractType{1}
16   | var47: AbstractType{6}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var10: AbstractType{3}
28   | var11: AbstractType{4}
32   | var12: AbstractType{1}
36   | var13: AbstractType{5}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | {vbptr}
48   | var18: AbstractType{1}
52   | var19: ClassType{0}
72   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 72;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
 const size_t model_offset = 40;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(96)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var64: AbstractType{1}
12   | var65: AbstractType{1}
16   | var66: AbstractType{6}
20   | var67: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var10: AbstractType{3}
32   | var11: AbstractType{4}
36   | var12: AbstractType{1}
40   | var13: AbstractType{5}
44   +---
44   +--- (virtual base class C1)
44   | {vfptr}
48   | {vbptr}
52   | var18: AbstractType{1}
56   | var19: ClassType{0}
76   +---
76   +--- (virtual base class C2)
76   | {vfptr}
80   | {vbptr}
84   | var45: AbstractType{1}
88   | var46: AbstractType{1}
92   | var47: AbstractType{6}
96   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 96;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 44;
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
 const size_t model_offset = 76;
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

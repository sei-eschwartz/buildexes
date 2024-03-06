// type for special constructors
struct special_constructor {};
struct abstract_4 { int x; };
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
abstract_3 v13;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 403 */ C2 ();
C2 (special_constructor);
abstract_1 v14;
abstract_1 v15;
abstract_3 v16;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 405 */ C3 ();
/* method id 406 */ virtual ~C3 ();
/* method id 407 */ virtual abstract_4*** func4 (abstract_3 v49, abstract_0 v50);
/* method id 408 */ virtual abstract_4* func1 (abstract_1 v100, abstract_3 v101);
C3 (special_constructor);
abstract_3 v106;
abstract_1 v107;
abstract_3 v108;
};
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
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
abstract_1 v17 = abstract_1();
abstract_3 v18 = abstract_3();
abstract_1 v19 = abstract_1();
abstract_1 v20 = abstract_1();
return;

}
/* method id 406 */ C3::~C3 () {
abstract_1 v33 = abstract_1();
abstract_1 v34 = abstract_1();
abstract_3 v35 = abstract_3();
abstract_1 v36 = abstract_1();
(((C3*) 0))->C3::func1(abstract_1(), v13);
(((C3*) 0))->C3::func1(abstract_1(), v13);
(((C3*) 0))->C3::func1(abstract_1(), v13);
(((C3*) 0))->C3::func1(abstract_1(), v13);
return;

}
/* method id 407 */ abstract_4*** C3::func4 (abstract_3 v49, abstract_0 v50) {
abstract_1 v51 = abstract_1();
abstract_1 v52 = abstract_1();
abstract_1 v53 = abstract_1();
abstract_2 v54 = abstract_2();
(((C3*) 0))->C3::func1(abstract_1(), v13);
(((C3*) 0))->C3::func1(abstract_1(), v13);
(((C3*) 0))->C3::func1(abstract_1(), v13);
(((C3*) 0))->C3::func1(abstract_1(), v13);
return new abstract_4** ();

}
/* method id 408 */ abstract_4* C3::func1 (abstract_1 v100, abstract_3 v101) {
abstract_1 v102 = abstract_1();
abstract_2 v103 = abstract_2();
abstract_1 v104 = abstract_1();
abstract_3 v105 = abstract_3();
return new abstract_4 ();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

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
class C1    size(4)
0    +---
0    | var13: AbstractType{3}
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
}
/*
class C2    size(32)
0    +---
0    | {vbptr}
4    | var14: AbstractType{1}
8    | var15: AbstractType{1}
12   | var16: AbstractType{3}
16   +---
16   +--- (virtual base class C1)
16   | var13: AbstractType{3}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var11: AbstractType{1}
28   | var12: AbstractType{1}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(52)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var106: AbstractType{3}
12   | var107: AbstractType{1}
16   | var108: AbstractType{3}
20   +---
20   +--- (virtual base class C1)
20   | var13: AbstractType{3}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var11: AbstractType{1}
32   | var12: AbstractType{1}
36   +---
36   +--- (virtual base class C2)
36   | {vbptr}
40   | var14: AbstractType{1}
44   | var15: AbstractType{1}
48   | var16: AbstractType{3}
52   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
 const size_t model_offset = 36;
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

// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
abstract_0 v0;
};
struct C1 : public virtual C0 {
/* method id 401 */ virtual ~C1 ();
/* method id 402 */ virtual abstract_1** func1 (abstract_0 v5, abstract_0 v6, abstract_0 v7, abstract_0 v8);
/* method id 403 */ C1 ();
/* method id 404 */ virtual abstract_1 func0 ();
C1 (special_constructor);
abstract_0 v48;
abstract_0 v49;
abstract_0 v50;
abstract_0 v51;
};
struct C2 : public virtual C1 {
/* method id 405 */ C2 ();
/* method id 406 */ ~C2 ();
/* method id 407 */ virtual void func2 ();
/* method id 408 */ virtual void func1 ();
C2 (special_constructor);
C1 v87;
C1 v88;
C1 v89;
C1 v90;
};
struct C3 : public virtual C0, public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual abstract_3 func1 (abstract_0 v91, abstract_2 v92, abstract_0 v93);
/* method id 411 */ virtual abstract_1** func3 (C1 v94, abstract_0 v95);
/* method id 412 */ virtual C0** func4 (C1 v96, abstract_2 v97, abstract_0 v98, C1 v99);
C3 (special_constructor);
abstract_2 v104;
C1 v105;
C1 v106;
C1 v107;
};
// definitions
/* method id 400 */ C0::C0 () {
delete (new C3 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::~C1 () {
abstract_0 v1 = abstract_0();
abstract_0 v2 = abstract_0();
abstract_0 v3 = abstract_0();
abstract_0 v4 = abstract_0();
delete (new C1 ());
return;

}
/* method id 402 */ abstract_1** C1::func1 (abstract_0 v5, abstract_0 v6, abstract_0 v7, abstract_0 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_0 v11 = abstract_0();
abstract_0 v12 = abstract_0();
return new abstract_1* ();

}
/* method id 403 */ C1::C1 () {
abstract_0 v13 = abstract_0();
abstract_0 v14 = abstract_0();
abstract_0 v15 = abstract_0();
abstract_0 v16 = abstract_0();
delete (new C2 ());
return;

}
/* method id 404 */ abstract_1 C1::func0 () {
return abstract_1();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
abstract_0 v52 = abstract_0();
abstract_0 v53 = abstract_0();
abstract_0 v54 = abstract_0();
abstract_0 v55 = abstract_0();
return;

}
/* method id 406 */ C2::~C2 () {
abstract_0 v56 = abstract_0();
abstract_0 v57 = abstract_0();
abstract_0 v58 = abstract_0();
abstract_0 v59 = abstract_0();
delete (new C3 ());
return;

}
/* method id 407 */ void C2::func2 () {
abstract_0 v76 = abstract_0();
abstract_0 v77 = abstract_0();
abstract_0 v78 = abstract_0();
return;

}
/* method id 408 */ void C2::func1 () {
C1 v83 = *((new C1 ()));
C1 v84 = *((new C1 ()));
C1 v85 = *((new C1 ()));
C1 v86 = *((new C1 ()));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
return;

}
/* method id 410 */ abstract_3 C3::func1 (abstract_0 v91, abstract_2 v92, abstract_0 v93) {
return abstract_3();

}
/* method id 411 */ abstract_1** C3::func3 (C1 v94, abstract_0 v95) {
delete (new C1 ());
return new abstract_1* ();

}
/* method id 412 */ C0** C3::func4 (C1 v96, abstract_2 v97, abstract_0 v98, C1 v99) {
C1 v100 = *((new C1 ()));
abstract_0 v101 = abstract_0();
C1 v102 = *((new C1 ()));
C1 v103 = *((new C1 ()));
return ((C0**) 0);

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | var0: AbstractType{0}
4    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 4;
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
0    | {vfptr}
4    | {vbptr}
8    | var48: AbstractType{0}
12   | var49: AbstractType{0}
16   | var50: AbstractType{0}
20   | var51: AbstractType{0}
24   +---
24   +--- (virtual base class C0)
24   | var0: AbstractType{0}
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
class C2    size(148)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var87: ClassType{1}
36   | var88: ClassType{1}
64   | var89: ClassType{1}
92   | var90: ClassType{1}
120  +---
120  +--- (virtual base class C0)
120  | var0: AbstractType{0}
124  +---
124  +--- (virtual base class C1)
124  | {vfptr}
128  | {vbptr}
132  | var48: AbstractType{0}
136  | var49: AbstractType{0}
140  | var50: AbstractType{0}
144  | var51: AbstractType{0}
148  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 148;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 124;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(244)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var104: AbstractType{2}
12   | var105: ClassType{1}
40   | var106: ClassType{1}
68   | var107: ClassType{1}
96   +---
96   +--- (virtual base class C0)
96   | var0: AbstractType{0}
100  +---
100  +--- (virtual base class C1)
100  | {vfptr}
104  | {vbptr}
108  | var48: AbstractType{0}
112  | var49: AbstractType{0}
116  | var50: AbstractType{0}
120  | var51: AbstractType{0}
124  +---
124  +--- (virtual base class C2)
124  | {vfptr}
128  | {vbptr}
132  | var87: ClassType{1}
160  | var88: ClassType{1}
188  | var89: ClassType{1}
216  | var90: ClassType{1}
244  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 244;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 96;
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
 const size_t model_offset = 124;
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

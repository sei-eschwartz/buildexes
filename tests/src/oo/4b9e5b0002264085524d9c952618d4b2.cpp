// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_0*** func0 ();
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_1 v3;
abstract_1 v4;
};
struct C1 : public virtual C0 {
/* method id 403 */ C1 ();
/* method id 404 */ virtual ~C1 ();
C1 (special_constructor);
abstract_1 v25;
abstract_1 v26;
abstract_1 v27;
abstract_1 v28;
};
struct C2 : public virtual C1 {
/* method id 405 */ C2 ();
/* method id 406 */ virtual abstract_0*** func0 (abstract_1 v33);
C2 (special_constructor);
abstract_1 v37;
abstract_1 v38;
abstract_2 v39;
abstract_2 v40;
};
struct C3 : public virtual C0, public virtual C1, public virtual C2 {
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ C3 ();
C3 (special_constructor);
C2 v45;
};
abstract_0*** func3 (C3 v46, abstract_2 v47, C3 v48, C3 v49);
abstract_0* func4 (C3 v50, abstract_2 v51, C3 v52);
abstract_0*** func5 (abstract_2 v56, abstract_2 v57, abstract_2 v58, C2 v59);
abstract_0*** func6 (abstract_2 v63, C2 v64, abstract_2 v65, abstract_2 v66);
// definitions
/* method id 400 */ abstract_0*** C0::func0 () {
delete (new C1 ());
return new abstract_0** ();

}
/* method id 401 */ C0::~C0 () {
abstract_1 v0 = abstract_1();
abstract_1 v1 = abstract_1();
abstract_1 v2 = abstract_1();
return;

}
/* method id 402 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {
abstract_1 v5 = abstract_1();
abstract_1 v6 = abstract_1();
abstract_1 v7 = abstract_1();
abstract_1 v8 = abstract_1();
return;

}
/* method id 404 */ C1::~C1 () {
abstract_1 v9 = abstract_1();
abstract_1 v10 = abstract_1();
abstract_1 v11 = abstract_1();
abstract_1 v12 = abstract_1();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
abstract_1 v29 = abstract_1();
abstract_1 v30 = abstract_1();
abstract_1 v31 = abstract_1();
abstract_1 v32 = abstract_1();
return;

}
/* method id 406 */ abstract_0*** C2::func0 (abstract_1 v33) {
abstract_1 v34 = abstract_1();
return ((abstract_0***) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::~C3 () {
abstract_2 v41 = abstract_2();
abstract_1 v42 = abstract_1();
return;

}
/* method id 409 */ C3::C3 () {
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0*** func3 (C3 v46, abstract_2 v47, C3 v48, C3 v49) {

delete (new C1 ());
v47 = v47;
return ((abstract_0***) 0);

}
abstract_0* func4 (C3 v50, abstract_2 v51, C3 v52) {
abstract_2 v53;
abstract_2 v54;
C3 v55;

return new abstract_0 ();

}
abstract_0*** func5 (abstract_2 v56, abstract_2 v57, abstract_2 v58, C2 v59) {
abstract_2 v60;
abstract_2 v61;
C3 v62;

return new abstract_0** ();

}
abstract_0*** func6 (abstract_2 v63, C2 v64, abstract_2 v65, abstract_2 v66) {
abstract_2 v67;

return ((abstract_0***) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var3: AbstractType{1}
8    | var4: AbstractType{1}
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
class C1    size(32)
0    +---
0    | {vbptr}
4    | var25: AbstractType{1}
8    | var26: AbstractType{1}
12   | var27: AbstractType{1}
16   | var28: AbstractType{1}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var3: AbstractType{1}
28   | var4: AbstractType{1}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
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
class C2    size(56)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var37: AbstractType{1}
12   | var38: AbstractType{1}
16   | var39: AbstractType{2}
20   | var40: AbstractType{2}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var3: AbstractType{1}
32   | var4: AbstractType{1}
36   +---
36   +--- (virtual base class C1)
36   | {vbptr}
40   | var25: AbstractType{1}
44   | var26: AbstractType{1}
48   | var27: AbstractType{1}
52   | var28: AbstractType{1}
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
class C3    size(116)
0    +---
0    | {vbptr}
4    | var45: ClassType{2}
60   +---
60   +--- (virtual base class C0)
60   | {vfptr}
64   | var3: AbstractType{1}
68   | var4: AbstractType{1}
72   +---
72   +--- (virtual base class C1)
72   | {vbptr}
76   | var25: AbstractType{1}
80   | var26: AbstractType{1}
84   | var27: AbstractType{1}
88   | var28: AbstractType{1}
92   +---
92   +--- (virtual base class C2)
92   | {vfptr}
96   | {vbptr}
100  | var37: AbstractType{1}
104  | var38: AbstractType{1}
108  | var39: AbstractType{2}
112  | var40: AbstractType{2}
116  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 116;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 60;
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
 const size_t model_offset = 72;
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
 const size_t model_offset = 92;
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

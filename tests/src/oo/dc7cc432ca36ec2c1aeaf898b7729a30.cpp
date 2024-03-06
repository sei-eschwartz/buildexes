// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ C1 ();
C1 (special_constructor);
abstract_0 v5;
abstract_0 v6;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 404 */ virtual ~C2 ();
/* method id 405 */ C2 ();
/* method id 406 */ virtual abstract_1* func1 (abstract_0 v30);
C2 (special_constructor);
abstract_0 v32;
abstract_0 v33;
abstract_2 v34;
abstract_2 v35;
};
struct C3 : public virtual C0, public virtual C1, public virtual C2 {
/* method id 407 */ virtual ~C3 ();
/* method id 408 */ C3 ();
C3 (special_constructor);
C2 v40;
};
abstract_1* func3 (C3 v41, abstract_2 v42, C3 v43, C3 v44);
abstract_1* func4 (C3 v45, abstract_2 v46, C3 v47);
abstract_1* func5 (abstract_2 v51, abstract_2 v52, abstract_2 v53, C2 v54);
abstract_1* func6 (abstract_2 v58, C2 v59, abstract_2 v60, abstract_2 v61);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::~C1 () {
abstract_0 v0 = abstract_0();
return;

}
/* method id 403 */ C1::C1 () {
return;

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::~C2 () {
abstract_0 v7 = abstract_0();
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
return;

}
/* method id 405 */ C2::C2 () {
abstract_0 v11 = abstract_0();
abstract_0 v12 = abstract_0();
abstract_0 v13 = abstract_0();
abstract_0 v14 = abstract_0();
return;

}
/* method id 406 */ abstract_1* C2::func1 (abstract_0 v30) {
abstract_0 v31 = abstract_0();
return ((abstract_1*) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 407 */ C3::~C3 () {
abstract_2 v36 = abstract_2();
abstract_0 v37 = abstract_0();
return;

}
/* method id 408 */ C3::C3 () {
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

abstract_1* func3 (C3 v41, abstract_2 v42, C3 v43, C3 v44) {

delete (new C1 ());
v42 = v42;
return ((abstract_1*) 0);

}
abstract_1* func4 (C3 v45, abstract_2 v46, C3 v47) {
abstract_2 v48;
abstract_2 v49;
C3 v50;

return new abstract_1 ();

}
abstract_1* func5 (abstract_2 v51, abstract_2 v52, abstract_2 v53, C2 v54) {
abstract_2 v55;
abstract_2 v56;
C3 v57;

return new abstract_1 ();

}
abstract_1* func6 (abstract_2 v58, C2 v59, abstract_2 v60, abstract_2 v61) {
abstract_2 v62;

return new abstract_1 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | {vfptr}
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
class C1    size(12)
0    +---
0    | {vfptr}
4    | var5: AbstractType{0}
8    | var6: AbstractType{0}
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var32: AbstractType{0}
12   | var33: AbstractType{0}
16   | var34: AbstractType{2}
20   | var35: AbstractType{2}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | var5: AbstractType{0}
32   | var6: AbstractType{0}
36   +---
36   +--- (virtual base class C0)
36   | {vfptr}
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
class C3    size(84)
0    +---
0    | {vbptr}
4    | var40: ClassType{2}
44   +---
44   +--- (virtual base class C0)
44   | {vfptr}
48   +---
48   +--- (virtual base class C1)
48   | {vfptr}
52   | var5: AbstractType{0}
56   | var6: AbstractType{0}
60   +---
60   +--- (virtual base class C2)
60   | {vfptr}
64   | {vbptr}
68   | var32: AbstractType{0}
72   | var33: AbstractType{0}
76   | var34: AbstractType{2}
80   | var35: AbstractType{2}
84   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 84;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 44;
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
 const size_t model_offset = 48;
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
 const size_t model_offset = 60;
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

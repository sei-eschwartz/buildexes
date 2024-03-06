// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 402 */ C2 ();
C2 (special_constructor);
C1 v0;
C1 v1;
C1 v2;
};
struct C3 : public C0, public virtual C2 {
/* method id 403 */ ~C3 ();
/* method id 404 */ C3 ();
/* method id 405 */ virtual C1** func0 (C1 v11, C1 v12);
C3 (special_constructor);
C2 v55;
C2 v56;
abstract_3 v57;
C2 v58;
};
abstract_0* func3 (C2 v59, abstract_3 v60, C2 v61, abstract_3 v62);
abstract_0* func4 (C2 v67, C2 v68, C2 v69, C2 v70);
abstract_0** func5 (C2 v75, C2 v76, abstract_3 v77);
abstract_0* func6 (abstract_3 v80);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 402 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 403 */ C3::~C3 () {
C1 v3 = *(((C1*) 0));
C1 v4 = *(((C1*) 0));
C1 v5 = *(((C1*) 0));
C1 v6 = *(((C1*) 0));
return;

}
/* method id 404 */ C3::C3 () {
C1 v7 = *(((C1*) 0));
C1 v8 = *(((C1*) 0));
C1 v9 = *(((C1*) 0));
C1 v10 = *(((C1*) 0));
return;

}
/* method id 405 */ C1** C3::func0 (C1 v11, C1 v12) {
return ((C1**) 0);

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func3 (C2 v59, abstract_3 v60, C2 v61, abstract_3 v62) {
C2 v63;
C2 v64;
abstract_3 v65;
C2 v66;

return ((abstract_0*) 0);

}
abstract_0* func4 (C2 v67, C2 v68, C2 v69, C2 v70) {
abstract_2 v71;
C2 v72;
C2 v73;
abstract_3 v74;

return new abstract_0 ();

}
abstract_0** func5 (C2 v75, C2 v76, abstract_3 v77) {
C2 v78;
abstract_3 v79;

return ((abstract_0**) 0);

}
abstract_0* func6 (abstract_3 v80) {
C2 v81;
C2 v82;
abstract_3 v83;
C2 v84;

return new abstract_0 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(0)
0    +---
0    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 1;
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
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
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
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(12)
0    +---
0    | var0: ClassType{1}
4    | var1: ClassType{1}
8    | var2: ClassType{1}
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(60)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | {vbptr}
8    | var55: ClassType{2}
20   | var56: ClassType{2}
32   | var57: AbstractType{3}
36   | var58: ClassType{2}
48   +---
48   +--- (virtual base class C2)
48   | var0: ClassType{1}
52   | var1: ClassType{1}
56   | var2: ClassType{1}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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
 const size_t model_offset = 48;
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

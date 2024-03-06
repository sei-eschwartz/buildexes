// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ virtual C0 func0 ();
C1 (special_constructor);
abstract_0 v53;
abstract_0 v54;
C0* v55;
abstract_0 v56;
};
struct C2 : public C0, public virtual C1 {
/* method id 404 */ virtual C0 func0 (abstract_1 v57, abstract_0 v58);
/* method id 405 */ C0 func0 (abstract_1 v59, C0* v60);
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_0 v65;
};
C0 func3 (C0* v66);
C0 func4 ();
C0 func5 (abstract_1 v68);
C0 func6 (abstract_0 v70);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
::func4();
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = (new C0 ());
C0* v4 = (new C0 ());
C0* v5 = (new C0 ());
C0* v6 = (new C0 ());
return;

}
/* method id 403 */ C0 C1::func0 () {
C0* v48 = ((C0*) 0);
::func4();
return ::func3(v48);

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C0 C2::func0 (abstract_1 v57, abstract_0 v58) {
delete (new C1 ());
return *(v55);

}
/* method id 405 */ C0 C2::func0 (abstract_1 v59, C0* v60) {
C0* v61 = ((C0*) 0);
abstract_0 v62 = abstract_0();
abstract_0 v63 = abstract_0();
C0* v64 = ((C0*) 0);
return ::func6(v62);

}
/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

C0 func3 (C0* v66) {
abstract_0 v67;

v66 = v66;
return *(v66);

}
C0 func4 () {

::func5(abstract_1());
::func5(abstract_1());
return ::func3(((C0*) 0));

}
C0 func5 (abstract_1 v68) {
abstract_1 v69;

v69 = abstract_1();
v69 = abstract_1();
v69 = abstract_1();
return ::func3(&(::func6(abstract_0())));

}
C0 func6 (abstract_0 v70) {

return ::func3(&(::func5(abstract_1())));

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | var53: AbstractType{0}
8    | var54: AbstractType{0}
12   | var55: PtrType{ClassType{0}}
16   | var56: AbstractType{0}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
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
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | {vbptr}
8    | var65: AbstractType{0}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | var53: AbstractType{0}
20   | var54: AbstractType{0}
24   | var55: PtrType{ClassType{0}}
28   | var56: AbstractType{0}
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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

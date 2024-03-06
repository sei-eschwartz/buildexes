// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_5 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ C1 ();
C1 (special_constructor);
C0 v22;
C0 v23;
C0 v24;
C0 v25;
};
struct C2 : public C0 {
/* method id 404 */ ~C2 ();
/* method id 405 */ C2 ();
C2 (special_constructor);
abstract_2 v35;
abstract_3 v36;
abstract_2 v37;
abstract_2 v38;
};
struct C3  {
/* method id 406 */ C3 ();
/* method id 407 */ virtual abstract_5 func3 (abstract_2 v43, abstract_2 v44, abstract_2 v45);
/* method id 408 */ virtual C0* func4 (abstract_4 v46, C0 v47, C0 v48);
/* method id 409 */ void* func0 (abstract_2 v49, abstract_2 v50);
C3 (special_constructor);
C0 v52;
abstract_4 v53;
};
void* func5 (abstract_3 v54, abstract_2 v55, abstract_2 v56);
C0**** func6 (abstract_3 v57, C0 v58);
abstract_0*** func7 ();
void*** func8 (abstract_4 v67, abstract_2 v68, abstract_2 v69, abstract_2 v70);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::~C1 () {
return;

}
/* method id 403 */ C1::C1 () {
C0 v0 = *((new C0 ()));
C0 v1 = *((new C0 ()));
C0 v2 = *((new C0 ()));
C0 v3 = *((new C0 ()));
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::~C2 () {
C0 v26 = *(((C0*) 0));
C0 v27 = *(((C0*) 0));
C0 v28 = *(((C0*) 0));
return;

}
/* method id 405 */ C2::C2 () {
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
abstract_4 v39 = abstract_4();
abstract_4 v40 = abstract_4();
abstract_4 v41 = abstract_4();
abstract_2 v42 = abstract_2();
return;

}
/* method id 407 */ abstract_5 C3::func3 (abstract_2 v43, abstract_2 v44, abstract_2 v45) {
return abstract_5();

}
/* method id 408 */ C0* C3::func4 (abstract_4 v46, C0 v47, C0 v48) {
return &(v47);

}
/* method id 409 */ void* C3::func0 (abstract_2 v49, abstract_2 v50) {
C0 v51 = *((new C0 ()));
return ((void*) 0);

}
C3::C3 (special_constructor)  {}

void* func5 (abstract_3 v54, abstract_2 v55, abstract_2 v56) {

return ((void*) 0);

}
C0**** func6 (abstract_3 v57, C0 v58) {
C0 v59;
abstract_4 v60;
abstract_2 v61;
abstract_2 v62;

return new C0*** ();

}
abstract_0*** func7 () {
abstract_2 v63;
abstract_3 v64;
abstract_2 v65;
C0 v66;

return ((abstract_0***) 0);

}
void*** func8 (abstract_4 v67, abstract_2 v68, abstract_2 v69, abstract_2 v70) {
C0 v71;
abstract_2 v72;

return new void** ();

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
class C1    size(20)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var22: ClassType{0}
8    | var23: ClassType{0}
12   | var24: ClassType{0}
16   | var25: ClassType{0}
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
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(20)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var35: AbstractType{2}
8    | var36: AbstractType{3}
12   | var37: AbstractType{2}
16   | var38: AbstractType{2}
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(12)
0    +---
0    | {vfptr}
4    | var52: ClassType{0}
8    | var53: AbstractType{4}
12   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

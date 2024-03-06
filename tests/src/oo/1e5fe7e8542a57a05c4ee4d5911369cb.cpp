// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
C1 (special_constructor);
C0* v9;
};
struct C2  {
/* method id 402 */ C2 ();
C2 (special_constructor);
abstract_1 v10;
C0* v11;
abstract_0 v12;
};
struct C3 : public C0, public virtual C2, public virtual C1 {
/* method id 403 */ C3 ();
/* method id 404 */ virtual ~C3 ();
C3 (special_constructor);
abstract_0 v46;
abstract_0 v47;
};
C0 func3 (abstract_1 v48);
C0** func4 ();
C0*** func5 (C0* v56, abstract_0 v57, C1 v58, abstract_0 v59);
C0* func6 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
delete (new C1 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 402 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 403 */ C3::C3 () {
C0* v13 = (new C0 ());
abstract_1 v14 = abstract_1();
C0* v15 = (new C0 ());
C0* v16 = (new C0 ());
v11 = (new C0 ());
return;

}
/* method id 404 */ C3::~C3 () {
C0* v36 = ((C0*) 0);
C0* v37 = ((C0*) 0);
C0* v38 = ((C0*) 0);
C0* v39 = ((C0*) 0);
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()), C1(special_constructor ()) {}

C0 func3 (abstract_1 v48) {
abstract_0 v49;
C0* v50;
C0*** v51;

return *(v50);

}
C0** func4 () {
C0* v52;
C0*** v53;
C1 v54;
C0* v55;

v54 = v54;
return ((C0**) 0);

}
C0*** func5 (C0* v56, abstract_0 v57, C1 v58, abstract_0 v59) {
C0** v60;
C0** v61;
C0* v62;
C0** v63;

::func3(abstract_1());
::func3(abstract_1());
return ((C0***) 0);

}
C0* func6 () {

return &(::func3(abstract_1()));

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
0    | var9: PtrType{ClassType{0}}
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
class C2    size(12)
0    +---
0    | var10: AbstractType{1}
4    | var11: PtrType{ClassType{0}}
8    | var12: AbstractType{0}
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
class C3    size(32)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | {vbptr}
8    | var46: AbstractType{0}
12   | var47: AbstractType{0}
16   +---
16   +--- (virtual base class C2)
16   | var10: AbstractType{1}
20   | var11: PtrType{ClassType{0}}
24   | var12: AbstractType{0}
28   +---
28   +--- (virtual base class C1)
28   | var9: PtrType{ClassType{0}}
32   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 32;
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
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

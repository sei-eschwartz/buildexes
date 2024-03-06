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
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ virtual C0 func0 (C0* v7, C0* v8);
/* method id 404 */ virtual C0 func0 ();
C1 (special_constructor);
C0* v14;
};
struct C2  {
/* method id 405 */ C2 ();
/* method id 406 */ virtual ~C2 ();
C2 (special_constructor);
abstract_0 v45;
C0* v46;
abstract_0 v47;
};
struct C3 : public virtual C2, public C0, public C1 {
/* method id 407 */ virtual ~C3 ();
/* method id 408 */ C0 func0 (C0* v48, abstract_0 v49, abstract_1 v50, C0* v51);
/* method id 409 */ C3 ();
C3 (special_constructor);
abstract_0 v52;
abstract_1 v53;
};
C0 func2 (C0* v54, C0* v55, abstract_0 v56, C0* v57);
C0 func3 (C0* v61, abstract_0 v62);
C0 func4 (abstract_0 v65);
C0 func5 (C0* v70, C0* v71, C3 v72, C3 v73);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = ((C0*) 0);
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
C0* v6 = ((C0*) 0);
return;

}
/* method id 403 */ C0 C1::func0 (C0* v7, C0* v8) {
return *((new C0 ()));

}
/* method id 404 */ C0 C1::func0 () {
abstract_0 v13 = abstract_0();
return *(v14);

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {
C0* v15 = (new C0 ());
abstract_0 v16 = abstract_0();
C0* v17 = (new C0 ());
C0* v18 = (new C0 ());
v46 = v46;
v46 = v46;
v46 = v46;
return;

}
/* method id 406 */ C2::~C2 () {
C0* v33 = ((C0*) 0);
C0* v34 = ((C0*) 0);
C0* v35 = ((C0*) 0);
C0* v36 = ((C0*) 0);
return;

}
C2::C2 (special_constructor)  {}

/* method id 407 */ C3::~C3 () {
return;

}
/* method id 408 */ C0 C3::func0 (C0* v48, abstract_0 v49, abstract_1 v50, C0* v51) {
delete (new C1 ());
return *(v46);

}
/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()), C0(special_constructor ()), C1(special_constructor ()) {}

C0 func2 (C0* v54, C0* v55, abstract_0 v56, C0* v57) {
C0* v58;
C0* v59;
abstract_0 v60;

return *(v57);

}
C0 func3 (C0* v61, abstract_0 v62) {
C0* v63;
C0* v64;

return ::func2(v64, v63, v62, v63);

}
C0 func4 (abstract_0 v65) {
C0* v66;
C0* v67;
abstract_0 v68;
abstract_0 v69;

delete (new C2 ());
return *(v67);

}
C0 func5 (C0* v70, C0* v71, C3 v72, C3 v73) {
C0* v74;

return *(v71);

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
class C1    size(8)
0    +---
0    | {vfptr}
4    | var14: PtrType{ClassType{0}}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(16)
0    +---
0    | {vfptr}
4    | var45: AbstractType{0}
8    | var46: PtrType{ClassType{0}}
12   | var47: AbstractType{0}
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(36)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var14: PtrType{ClassType{0}}
8    | +---
8    | +--- (base class C0)
8    | +---
8    | {vbptr}
12   | var52: AbstractType{0}
16   | var53: AbstractType{1}
20   +---
20   +--- (virtual base class C2)
20   | {vfptr}
24   | var45: AbstractType{0}
28   | var46: PtrType{ClassType{0}}
32   | var47: AbstractType{0}
36   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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
 const size_t model_offset = 0;
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

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
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ virtual C0 func0 (C0* v7, abstract_0 v8, C0* v9);
C1 (special_constructor);
abstract_1 v18;
C0* v19;
abstract_0 v20;
};
struct C2 : public virtual C1 {
/* method id 404 */ C2 ();
/* method id 405 */ virtual ~C2 ();
C2 (special_constructor);
C0* v50;
C0* v51;
};
struct C3 : public virtual C1, public virtual C0, public virtual C2 {
/* method id 406 */ C3 ();
/* method id 407 */ ~C3 ();
C3 (special_constructor);
abstract_0 v60;
};
C0 func1 (abstract_2 v61, abstract_2 v62, abstract_0 v63);
C0 func2 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
delete (new C1 ());
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = ((C0*) 0);
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
C0* v6 = ((C0*) 0);
::func2();
::func2();
::func2();
::func2();
return;

}
/* method id 403 */ C0 C1::func0 (C0* v7, abstract_0 v8, C0* v9) {
abstract_0 v10 = abstract_0();
abstract_0 v11 = abstract_0();
abstract_0 v12 = abstract_0();
C0* v13 = ((C0*) 0);
return *(v19);

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::C2 () {
C0* v21 = (new C0 ());
abstract_1 v22 = abstract_1();
C0* v23 = (new C0 ());
C0* v24 = (new C0 ());
::func2();
::func2();
::func2();
::func2();
return;

}
/* method id 405 */ C2::~C2 () {
C0* v29 = (new C0 ());
C0* v30 = (new C0 ());
C0* v31 = (new C0 ());
C0* v32 = (new C0 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
C0* v52 = ((C0*) 0);
C0* v53 = ((C0*) 0);
abstract_1 v54 = abstract_1();
C0* v55 = ((C0*) 0);
return;

}
/* method id 407 */ C3::~C3 () {
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()), C2(special_constructor ()) {}

C0 func1 (abstract_2 v61, abstract_2 v62, abstract_0 v63) {
C0* v64;
abstract_2 v65;
C0* v66;
C0* v67;

return *(v64);

}
C0 func2 () {
C0* v68;
C0* v69;
C0* v70;
C0* v71;

return (((C1*) 0))->C1::func0((new C0 ()), abstract_0(), (new C0 ()));

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | var18: AbstractType{1}
8    | var19: PtrType{ClassType{0}}
12   | var20: AbstractType{0}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(28)
0    +---
0    | {vbptr}
4    | var50: PtrType{ClassType{0}}
8    | var51: PtrType{ClassType{0}}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | var18: AbstractType{1}
20   | var19: PtrType{ClassType{0}}
24   | var20: AbstractType{0}
28   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
/*
class C3    size(36)
0    +---
0    | {vbptr}
4    | var60: AbstractType{0}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var18: AbstractType{1}
16   | var19: PtrType{ClassType{0}}
20   | var20: AbstractType{0}
24   +---
24   +--- (virtual base class C0)
24   +---
24   +--- (virtual base class C2)
24   | {vbptr}
28   | var50: PtrType{ClassType{0}}
32   | var51: PtrType{ClassType{0}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
 const size_t model_offset = 24;
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

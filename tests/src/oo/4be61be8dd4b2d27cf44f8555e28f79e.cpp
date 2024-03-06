// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
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
/* method id 402 */ C1 ();
/* method id 403 */ virtual ~C1 ();
C1 (special_constructor);
abstract_7 v17;
abstract_7 v18;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 404 */ virtual ~C2 ();
/* method id 405 */ C2 ();
C2 (special_constructor);
abstract_7 v71;
abstract_7 v72;
};
struct C3 : public virtual C1, public virtual C0, public virtual C2 {
/* method id 406 */ C3 ();
/* method id 407 */ virtual ~C3 ();
C3 (special_constructor);
abstract_7 v127;
abstract_7 v128;
};
void* func2 (C0** v129, abstract_7 v130, abstract_7 v131, abstract_7 v132);
void* func3 (C0** v135, abstract_7 v136, abstract_7 v137, abstract_7 v138);
abstract_5** func4 (C0** v143, abstract_7 v144, abstract_7 v145, abstract_7 v146);
void*** func5 (C0** v147, abstract_7 v148, C0** v149, abstract_7 v150);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
C0** v0 = ((C0**) 0);
abstract_7 v1 = abstract_7();
abstract_7 v2 = abstract_7();
C0** v3 = ((C0**) 0);
return;

}
/* method id 403 */ C1::~C1 () {
abstract_7 v9 = abstract_7();
abstract_7 v10 = abstract_7();
abstract_7 v11 = abstract_7();
abstract_7 v12 = abstract_7();
return;

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::~C2 () {
abstract_7 v19 = abstract_7();
abstract_7 v20 = abstract_7();
abstract_7 v21 = abstract_7();
abstract_7 v22 = abstract_7();
delete (new C1 ());
return;

}
/* method id 405 */ C2::C2 () {
abstract_7 v23 = abstract_7();
C0** v24 = new C0* ();
abstract_7 v25 = abstract_7();
abstract_7 v26 = abstract_7();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
abstract_7 v73 = abstract_7();
abstract_7 v74 = abstract_7();
abstract_7 v75 = abstract_7();
abstract_7 v76 = abstract_7();
return;

}
/* method id 407 */ C3::~C3 () {
abstract_7 v77 = abstract_7();
abstract_7 v78 = abstract_7();
abstract_7 v79 = abstract_7();
abstract_7 v80 = abstract_7();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()), C2(special_constructor ()) {}

void* func2 (C0** v129, abstract_7 v130, abstract_7 v131, abstract_7 v132) {
abstract_7 v133;
abstract_7 v134;

return ((void*) 0);

}
void* func3 (C0** v135, abstract_7 v136, abstract_7 v137, abstract_7 v138) {
abstract_7 v139;
abstract_7 v140;
abstract_7 v141;
abstract_7 v142;

return ((void*) 0);

}
abstract_5** func4 (C0** v143, abstract_7 v144, abstract_7 v145, abstract_7 v146) {

delete (new C1 ());
return new abstract_5* ();

}
void*** func5 (C0** v147, abstract_7 v148, C0** v149, abstract_7 v150) {

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | var17: AbstractType{7}
8    | var18: AbstractType{7}
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
class C2    size(28)
0    +---
0    | {vbptr}
4    | var71: AbstractType{7}
8    | var72: AbstractType{7}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | var17: AbstractType{7}
20   | var18: AbstractType{7}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(40)
0    +---
0    | {vbptr}
4    | var127: AbstractType{7}
8    | var128: AbstractType{7}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | var17: AbstractType{7}
20   | var18: AbstractType{7}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C2)
28   | {vbptr}
32   | var71: AbstractType{7}
36   | var72: AbstractType{7}
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
 const size_t model_offset = 28;
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

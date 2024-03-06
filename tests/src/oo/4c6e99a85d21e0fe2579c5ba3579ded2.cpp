// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ abstract_0* func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3);
/* method id 402 */ virtual abstract_0* func0 (abstract_0** v6, abstract_0** v7, abstract_0** v8, abstract_0** v9);
/* method id 403 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual abstract_0 func1 ();
/* method id 405 */ abstract_0* func1 (abstract_0** v13, abstract_0** v14, abstract_0** v15);
/* method id 406 */ void func2 (abstract_0** v17, abstract_0** v18);
/* method id 407 */ virtual abstract_0* func1 (abstract_0** v20);
/* method id 408 */ C1 ();
C1 (special_constructor);
abstract_1 v22;
};
struct C2  {
/* method id 409 */ C2 ();
/* method id 410 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1 v62;
abstract_0** v63;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 411 */ C3 ();
/* method id 412 */ virtual ~C3 ();
C3 (special_constructor);
abstract_1 v109;
abstract_1 v110;
abstract_1 v111;
abstract_1 v112;
};
abstract_0* func4 (abstract_1 v113, abstract_1 v114, abstract_0** v115, abstract_1 v116);
abstract_0* func5 (abstract_1 v121, abstract_1 v122, abstract_1 v123, abstract_1 v124);
abstract_0* func6 (abstract_1 v129, abstract_1 v130, abstract_0** v131, abstract_1 v132);
abstract_0* func7 (abstract_0** v135, abstract_1 v136, abstract_1 v137);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
return ((abstract_0*) 0);

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3) {
abstract_0** v4 = ((abstract_0**) 0);
abstract_0** v5 = ((abstract_0**) 0);
return new abstract_0 ();

}
/* method id 402 */ abstract_0* C0::func0 (abstract_0** v6, abstract_0** v7, abstract_0** v8, abstract_0** v9) {
return ((abstract_0*) 0);

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_0 C1::func1 () {
abstract_0** v10 = new abstract_0* ();
abstract_0** v11 = new abstract_0* ();
abstract_0** v12 = new abstract_0* ();
return abstract_0();

}
/* method id 405 */ abstract_0* C1::func1 (abstract_0** v13, abstract_0** v14, abstract_0** v15) {
abstract_0** v16 = new abstract_0* ();
return new abstract_0 ();

}
/* method id 406 */ void C1::func2 (abstract_0** v17, abstract_0** v18) {
abstract_1 v19 = abstract_1();
return;

}
/* method id 407 */ abstract_0* C1::func1 (abstract_0** v20) {
abstract_1 v21 = abstract_1();
return new abstract_0 ();

}
/* method id 408 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::C2 () {
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
abstract_1 v25 = abstract_1();
abstract_1 v26 = abstract_1();
return;

}
/* method id 410 */ C2::~C2 () {
abstract_1 v27 = abstract_1();
abstract_1 v28 = abstract_1();
abstract_1 v29 = abstract_1();
abstract_1 v30 = abstract_1();
return;

}
C2::C2 (special_constructor)  {}

/* method id 411 */ C3::C3 () {
abstract_1 v64 = abstract_1();
return;

}
/* method id 412 */ C3::~C3 () {
abstract_1 v69 = abstract_1();
abstract_1 v70 = abstract_1();
abstract_1 v71 = abstract_1();
abstract_0** v72 = new abstract_0* ();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func4 (abstract_1 v113, abstract_1 v114, abstract_0** v115, abstract_1 v116) {
abstract_1 v117;
abstract_1 v118;
abstract_1 v119;
abstract_0** v120;

return ((abstract_0*) 0);

}
abstract_0* func5 (abstract_1 v121, abstract_1 v122, abstract_1 v123, abstract_1 v124) {
abstract_0** v125;
abstract_1 v126;
abstract_1 v127;
abstract_1 v128;

return ((abstract_0*) 0);

}
abstract_0* func6 (abstract_1 v129, abstract_1 v130, abstract_0** v131, abstract_1 v132) {
abstract_1 v133;
abstract_1 v134;

return new abstract_0 ();

}
abstract_0* func7 (abstract_0** v135, abstract_1 v136, abstract_1 v137) {
abstract_1 v138;
abstract_1 v139;
abstract_1 v140;

return new abstract_0 ();

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var22: AbstractType{1}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
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
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
0    | {vfptr}
4    | var62: AbstractType{1}
8    | var63: PtrType{PtrType{AbstractType{0}}}
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
class C3    size(48)
0    +---
0    | {vbptr}
4    | var109: AbstractType{1}
8    | var110: AbstractType{1}
12   | var111: AbstractType{1}
16   | var112: AbstractType{1}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var22: AbstractType{1}
36   +---
36   +--- (virtual base class C2)
36   | {vfptr}
40   | var62: AbstractType{1}
44   | var63: PtrType{PtrType{AbstractType{0}}}
48   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
 const size_t model_offset = 36;
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

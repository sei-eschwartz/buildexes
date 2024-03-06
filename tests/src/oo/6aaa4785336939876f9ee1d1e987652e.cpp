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
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct abstract_11 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual abstract_0* func2 (C0* v0, C0* v1, C0* v2, C0* v3);
/* method id 403 */ ~C1 ();
/* method id 404 */ C1 ();
C1 (special_constructor);
C0* v21;
C0* v22;
};
struct C2 : public virtual C1 {
/* method id 405 */ C2 ();
/* method id 406 */ virtual ~C2 ();
C2 (special_constructor);
C0* v54;
C0* v55;
C0* v56;
};
abstract_0* func3 (C0* v57, C0* v58);
abstract_1*** func4 ();
abstract_0* func5 (C0* v66, C0* v67, C0* v68, C0* v69);
abstract_0* func6 (C0* v73, C0* v74, C0* v75, C0* v76);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0* C1::func2 (C0* v0, C0* v1, C0* v2, C0* v3) {
C0* v4 = ((C0*) 0);
C0* v5 = ((C0*) 0);
C0* v6 = ((C0*) 0);
C0* v7 = ((C0*) 0);
return ((abstract_0*) 0);

}
/* method id 403 */ C1::~C1 () {
C0* v8 = ((C0*) 0);
C0* v9 = ((C0*) 0);
C0* v10 = ((C0*) 0);
C0* v11 = ((C0*) 0);
return;

}
/* method id 404 */ C1::C1 () {
C0* v12 = ((C0*) 0);
C0* v13 = ((C0*) 0);
C0* v14 = ((C0*) 0);
C0* v15 = ((C0*) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
C0* v23 = (new C0 ());
C0* v24 = (new C0 ());
C0* v25 = (new C0 ());
C0* v26 = (new C0 ());
return;

}
/* method id 406 */ C2::~C2 () {
C0* v46 = (new C0 ());
C0* v47 = (new C0 ());
C0* v48 = (new C0 ());
C0* v49 = (new C0 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

abstract_0* func3 (C0* v57, C0* v58) {
C0* v59;
C0* v60;
C0* v61;
C0* v62;

return ((abstract_0*) 0);

}
abstract_1*** func4 () {
C0* v63;
C0* v64;
C0* v65;

return ((abstract_1***) 0);

}
abstract_0* func5 (C0* v66, C0* v67, C0* v68, C0* v69) {
C0* v70;
C0* v71;
C0* v72;

::func4();
::func4();
::func4();
::func4();
return ((abstract_0*) 0);

}
abstract_0* func6 (C0* v73, C0* v74, C0* v75, C0* v76) {
C0* v77;
C0* v78;

return ((abstract_0*) 0);

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
0    | {vfptr}
4    | {vbptr}
8    | var21: PtrType{ClassType{0}}
12   | var22: PtrType{ClassType{0}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
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
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(36)
0    +---
0    | {vbptr}
4    | var54: PtrType{ClassType{0}}
8    | var55: PtrType{ClassType{0}}
12   | var56: PtrType{ClassType{0}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var21: PtrType{ClassType{0}}
32   | var22: PtrType{ClassType{0}}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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

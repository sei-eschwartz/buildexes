// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
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
/* method id 403 */ C0 func1 (C0* v4);
C1 (special_constructor);
abstract_1 v8;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 404 */ virtual C0 func3 (C0* v9, abstract_0 v10, abstract_1 v11, C0* v12);
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_3 v21;
C0* v22;
abstract_4 v23;
abstract_4 v24;
};
struct C3 : public virtual C1 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ virtual C0 func1 (C0* v54, C0* v55);
/* method id 410 */ virtual C0 func1 (C0* v119, C0* v120, abstract_4 v121, abstract_4 v122);
C3 (special_constructor);
C0* v126;
C0* v127;
C0* v128;
C0* v129;
};
C0 func5 (abstract_1 v130, C0* v131, C0* v132, C0* v133);
C0 func6 (C0* v134);
C0 func7 (C0* v139, abstract_4 v140, C0* v141);
C0 func8 (C0* v145);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
delete (new C2 ());
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = (new C0 ());
return;

}
/* method id 403 */ C0 C1::func1 (C0* v4) {
delete (new C1 ());
return ::func8((new C0 ()));

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C0 C2::func3 (C0* v9, abstract_0 v10, abstract_1 v11, C0* v12) {
C0* v13 = (new C0 ());
C0* v14 = (new C0 ());
abstract_2 v15 = abstract_2();
abstract_0 v16 = abstract_0();
return ::func6(v12);

}
/* method id 405 */ C2::~C2 () {
C0* v17 = (new C0 ());
C0* v18 = (new C0 ());
C0* v19 = (new C0 ());
C0* v20 = (new C0 ());
return;

}
/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
C0* v25 = ((C0*) 0);
C0* v26 = ((C0*) 0);
C0* v27 = ((C0*) 0);
C0* v28 = ((C0*) 0);
return;

}
/* method id 408 */ C3::~C3 () {
C0* v33 = ((C0*) 0);
C0* v34 = ((C0*) 0);
C0* v35 = ((C0*) 0);
C0* v36 = ((C0*) 0);
return;

}
/* method id 409 */ C0 C3::func1 (C0* v54, C0* v55) {
abstract_4 v56 = abstract_4();
C0* v57 = (new C0 ());
C0* v58 = (new C0 ());
C0* v59 = (new C0 ());
return ::func6(v59);

}
/* method id 410 */ C0 C3::func1 (C0* v119, C0* v120, abstract_4 v121, abstract_4 v122) {
abstract_1 v123 = abstract_1();
C0* v124 = &(*((new C0 ())));
abstract_4 v125 = abstract_4();
delete (new C1 ());
return ::func6(v119);

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

C0 func5 (abstract_1 v130, C0* v131, C0* v132, C0* v133) {

return ::func7(v133, abstract_4(), v133);

}
C0 func6 (C0* v134) {
C0* v135;
C0* v136;
abstract_1 v137;
C0* v138;

return ::func7(v138, abstract_4(), v138);

}
C0 func7 (C0* v139, abstract_4 v140, C0* v141) {
C0* v142;
C0* v143;
C0* v144;

return ::func6(v141);

}
C0 func8 (C0* v145) {
C0* v146;
C0* v147;
C0* v148;

return ::func6(v146);

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
4    | var8: AbstractType{1}
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
class C2    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var21: AbstractType{3}
12   | var22: PtrType{ClassType{0}}
16   | var23: AbstractType{4}
20   | var24: AbstractType{4}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | var8: AbstractType{1}
32   +---
32   +--- (virtual base class C0)
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
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var126: PtrType{ClassType{0}}
12   | var127: PtrType{ClassType{0}}
16   | var128: PtrType{ClassType{0}}
20   | var129: PtrType{ClassType{0}}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | var8: AbstractType{1}
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

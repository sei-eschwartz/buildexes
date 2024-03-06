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
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ C0 func0 (abstract_1 v4);
C1 (special_constructor);
abstract_0 v5;
};
struct C2 : public virtual C1 {
/* method id 403 */ virtual C0 func0 ();
/* method id 404 */ C2 ();
/* method id 405 */ virtual ~C2 ();
C2 (special_constructor);
C0* v26;
abstract_3 v27;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 406 */ C3 ();
/* method id 407 */ virtual C0 func0 (C0* v47, C0* v48, C0* v49, C0* v50);
/* method id 408 */ virtual ~C3 ();
C3 (special_constructor);
C0* v59;
C0* v60;
};
C0 func1 (C0* v61, C0* v62, C0* v63, C0* v64);
C0 func2 (C0* v69, C0* v70, C0* v71);
C0 func3 (C0* v76, C0* v77, C0* v78);
C0 func4 (C0* v83, C0* v84, C0* v85, abstract_1 v86);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
return;

}
/* method id 402 */ C0 C1::func0 (abstract_1 v4) {
return ::func4(((C0*) 0), ((C0*) 0), ((C0*) 0), v4);

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C0 C2::func0 () {
C0* v6 = ((C0*) 0);
abstract_2 v7 = abstract_2();
abstract_0 v8 = abstract_0();
C0* v9 = ((C0*) 0);
return *(((C0*) 0));

}
/* method id 404 */ C2::C2 () {
C0* v14 = (new C0 ());
abstract_1 v15 = abstract_1();
C0* v16 = (new C0 ());
abstract_2 v17 = abstract_2();
return;

}
/* method id 405 */ C2::~C2 () {
C0* v18 = ((C0*) 0);
C0* v19 = ((C0*) 0);
C0* v20 = ((C0*) 0);
C0* v21 = ((C0*) 0);
delete (new C0 ());
v21 = ((C0*) 0);
v21 = ((C0*) 0);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
C0* v28 = (new C0 ());
abstract_1 v29 = abstract_1();
C0* v30 = (new C0 ());
C0* v31 = (new C0 ());
delete (new C2 ());
return;

}
/* method id 407 */ C0 C3::func0 (C0* v47, C0* v48, C0* v49, C0* v50) {
C0* v51 = &(*(((C0*) 0)));
abstract_1 v52 = abstract_1();
C0* v53 = &(*(((C0*) 0)));
C0* v54 = &(*(((C0*) 0)));
return ::func1((new C0 ()), (new C0 ()), (new C0 ()), (new C0 ()));

}
/* method id 408 */ C3::~C3 () {
C0* v55 = &(*(((C0*) 0)));
C0* v56 = &(*(((C0*) 0)));
abstract_0 v57 = abstract_0();
C0* v58 = &(*(((C0*) 0)));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

C0 func1 (C0* v61, C0* v62, C0* v63, C0* v64) {
C0* v65;
abstract_1 v66;
C0* v67;
C0* v68;

v68 = &(*(v64));
return ::func4(v68, ((C0*) 0), ((C0*) 0), v66);

}
C0 func2 (C0* v69, C0* v70, C0* v71) {
C0* v72;
C0* v73;
abstract_0 v74;
C0* v75;

return ::func1((new C0 ()), (new C0 ()), (new C0 ()), (new C0 ()));

}
C0 func3 (C0* v76, C0* v77, C0* v78) {
C0* v79;
C0* v80;
C0* v81;
C0* v82;

::func2(v78, ((C0*) 0), v76);
return ::func1(v81, ((C0*) 0), (new C0 ()), v77);

}
C0 func4 (C0* v83, C0* v84, C0* v85, abstract_1 v86) {
C0* v87;
C0* v88;
abstract_0 v89;
C0* v90;

v89 = v89;
v89 = v89;
return ::func3(v87, ((C0*) 0), ((C0*) 0));

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
0    | var5: AbstractType{0}
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
class C2    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var26: PtrType{ClassType{0}}
12   | var27: AbstractType{3}
16   +---
16   +--- (virtual base class C1)
16   | var5: AbstractType{0}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
0    | {vfptr}
4    | {vbptr}
8    | var59: PtrType{ClassType{0}}
12   | var60: PtrType{ClassType{0}}
16   +---
16   +--- (virtual base class C1)
16   | var5: AbstractType{0}
20   +---
20   +--- (virtual base class C2)
20   | {vfptr}
24   | {vbptr}
28   | var26: PtrType{ClassType{0}}
32   | var27: AbstractType{3}
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
 const size_t model_offset = 16;
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
 const size_t model_offset = 20;
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

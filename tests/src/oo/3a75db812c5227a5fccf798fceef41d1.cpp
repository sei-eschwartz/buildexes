// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ virtual abstract_0* func0 (abstract_0** v1, abstract_0** v2);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ virtual abstract_3 func0 (abstract_0** v5, abstract_0** v6, abstract_0** v7, abstract_2 v8);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_4 v9;
abstract_0** v10;
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_0 func1 (abstract_2 v11, abstract_5 v12, abstract_0** v13, abstract_0** v14);
/* method id 406 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 407 */ C2 ();
/* method id 408 */ abstract_1 func0 ();
/* method id 409 */ virtual ~C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C0, public virtual C1, public C2 {
/* method id 410 */ C3 ();
/* method id 411 */ virtual ~C3 ();
/* method id 412 */ virtual void func1 (abstract_2 v64, abstract_2 v65);
C3 (special_constructor);
abstract_2 v84;
abstract_2 v85;
abstract_2 v86;
};
abstract_0* func2 ();
abstract_0* func3 (abstract_2 v91, abstract_2 v92, abstract_2 v93, abstract_4 v94);
void func4 (abstract_3* v99, abstract_2 v100, abstract_2 v101, abstract_2 v102);
abstract_0* func5 (abstract_5 v103, abstract_2 v104, abstract_2 v105);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
return new abstract_0 ();

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2) {
delete (new C1 ());
return new abstract_0 ();

}
/* method id 402 */ abstract_1 C0::func0 () {
return abstract_1();

}
/* method id 403 */ abstract_3 C0::func0 (abstract_0** v5, abstract_0** v6, abstract_0** v7, abstract_2 v8) {
return abstract_3();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_0 C1::func1 (abstract_2 v11, abstract_5 v12, abstract_0** v13, abstract_0** v14) {
abstract_2 v15 = abstract_2();
abstract_5 v16 = abstract_5();
delete (new C1 ());
return abstract_0();

}
/* method id 406 */ C1::C1 () {
delete (new C1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_5 v17 = abstract_5();
delete (new C1 ());
return;

}
/* method id 408 */ abstract_1 C2::func0 () {
return abstract_1();

}
/* method id 409 */ C2::~C2 () {
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
abstract_2 v33 = abstract_2();
abstract_2 v34 = abstract_2();
abstract_3* v35 = ((abstract_3*) 0);
abstract_0** v36 = new abstract_0* ();
::func5(abstract_5(), abstract_2(), abstract_2());
::func5(abstract_5(), abstract_2(), abstract_2());
::func5(abstract_5(), abstract_2(), abstract_2());
return;

}
/* method id 411 */ C3::~C3 () {
abstract_6 v37 = abstract_6();
abstract_2 v38 = abstract_2();
abstract_3* v39 = ((abstract_3*) 0);
return;

}
/* method id 412 */ void C3::func1 (abstract_2 v64, abstract_2 v65) {
abstract_6 v66 = abstract_6();
abstract_2 v67 = abstract_2();
abstract_5 v68 = abstract_5();
abstract_2 v69 = abstract_2();
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func2 () {
abstract_2 v87;
abstract_2 v88;
abstract_2 v89;
abstract_2 v90;

return ((abstract_0*) 0);

}
abstract_0* func3 (abstract_2 v91, abstract_2 v92, abstract_2 v93, abstract_4 v94) {
abstract_2 v95;
abstract_2 v96;
abstract_2 v97;
abstract_2 v98;

delete (new C2 ());
return ((abstract_0*) 0);

}
void func4 (abstract_3* v99, abstract_2 v100, abstract_2 v101, abstract_2 v102) {

return;

}
abstract_0* func5 (abstract_5 v103, abstract_2 v104, abstract_2 v105) {
abstract_2 v106;
abstract_2 v107;
abstract_2 v108;

return new abstract_0 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var9: AbstractType{4}
8    | var10: PtrType{PtrType{AbstractType{0}}}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
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
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var9: AbstractType{4}
16   | var10: PtrType{PtrType{AbstractType{0}}}
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
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var9: AbstractType{4}
20   | var10: PtrType{PtrType{AbstractType{0}}}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
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
 const size_t model_offset = 12;
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
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(44)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | +---
8    | var84: AbstractType{2}
12   | var85: AbstractType{2}
16   | var86: AbstractType{2}
20   | {vtordisp for vbase 0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var9: AbstractType{4}
32   | var10: PtrType{PtrType{AbstractType{0}}}
36   +---
36   +--- (virtual base class C1)
36   | {vfptr}
40   | {vbptr}
44   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
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
 const size_t model_offset = 0;
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

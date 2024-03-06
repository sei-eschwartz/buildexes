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
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual abstract_0* func2 (abstract_0**** v0, abstract_0**** v1, abstract_0**** v2, abstract_0**** v3);
/* method id 403 */ C1 ();
/* method id 404 */ virtual ~C1 ();
C1 (special_constructor);
abstract_0**** v31;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 405 */ virtual C0 func1 (abstract_0**** v32);
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_0**** v34;
abstract_0**** v35;
abstract_1 v36;
abstract_1 v37;
};
struct C3 : public virtual C0, public virtual C1, public virtual C2 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual abstract_0* func6 (abstract_1 v39, abstract_1 v40, C2 v41);
/* method id 410 */ virtual ~C3 ();
C3 (special_constructor);
abstract_1 v47;
C2 v48;
};
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0* C1::func2 (abstract_0**** v0, abstract_0**** v1, abstract_0**** v2, abstract_0**** v3) {
abstract_0**** v4 = new abstract_0*** ();
abstract_0**** v5 = new abstract_0*** ();
abstract_0**** v6 = new abstract_0*** ();
abstract_0**** v7 = new abstract_0*** ();
return ((abstract_0*) 0);

}
/* method id 403 */ C1::C1 () {
abstract_0**** v8 = new abstract_0*** ();
abstract_0**** v9 = new abstract_0*** ();
abstract_0**** v10 = new abstract_0*** ();
abstract_0**** v11 = new abstract_0*** ();
return;

}
/* method id 404 */ C1::~C1 () {
abstract_0**** v16 = new abstract_0*** ();
abstract_0**** v17 = new abstract_0*** ();
abstract_0**** v18 = new abstract_0*** ();
abstract_0**** v19 = new abstract_0*** ();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C0 C2::func1 (abstract_0**** v32) {
abstract_0**** v33 = new abstract_0*** ();
return *(((C0*) 0));

}
/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
abstract_1 v38 = abstract_1();
return;

}
/* method id 409 */ abstract_0* C3::func6 (abstract_1 v39, abstract_1 v40, C2 v41) {
C2 v42 = *(&(*((new C2 ()))));
abstract_2 v43 = abstract_2();
abstract_1 v44 = abstract_1();
C2 v45 = *(&(*((new C2 ()))));
return ((abstract_0*) 0);

}
/* method id 410 */ C3::~C3 () {
abstract_0**** v46 = new abstract_0*** ();
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

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
8    | var31: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
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
class C2    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var34: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
12   | var35: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
16   | var36: AbstractType{1}
20   | var37: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var31: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(92)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var47: AbstractType{1}
12   | var48: ClassType{2}
52   +---
52   +--- (virtual base class C0)
52   | {vfptr}
56   +---
56   +--- (virtual base class C1)
56   | {vfptr}
60   | {vbptr}
64   | var31: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
68   +---
68   +--- (virtual base class C2)
68   | {vfptr}
72   | {vbptr}
76   | var34: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
80   | var35: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
84   | var36: AbstractType{1}
88   | var37: AbstractType{1}
92   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 92;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 52;
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
 const size_t model_offset = 56;
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
 const size_t model_offset = 68;
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

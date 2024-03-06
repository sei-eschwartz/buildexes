// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
/* method id 402 */ virtual abstract_0*** func2 (abstract_0**** v0, abstract_0**** v1, abstract_0**** v2, abstract_0**** v3);
/* method id 403 */ C1 ();
C1 (special_constructor);
abstract_0**** v8;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 405 */ virtual abstract_0**** func1 (abstract_0**** v9);
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_0**** v11;
abstract_0**** v12;
abstract_1 v13;
abstract_1 v14;
};
struct C3 : public virtual C0, public virtual C1, public virtual C2 {
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ C3 ();
C3 (special_constructor);
C2 v19;
};
abstract_0* func8 (C3 v20, abstract_1 v21, C3 v22, C3 v23);
abstract_0* func9 (C3 v24, abstract_1 v25, C3 v26);
abstract_0* func10 (abstract_1 v30, abstract_1 v31, abstract_1 v32, C2 v33);
abstract_0* func11 (abstract_1 v37, C2 v38, abstract_1 v39, abstract_1 v40);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0*** C1::func2 (abstract_0**** v0, abstract_0**** v1, abstract_0**** v2, abstract_0**** v3) {
abstract_0**** v4 = new abstract_0*** ();
abstract_0**** v5 = new abstract_0*** ();
abstract_0**** v6 = new abstract_0*** ();
abstract_0**** v7 = new abstract_0*** ();
return new abstract_0** ();

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ abstract_0**** C2::func1 (abstract_0**** v9) {
abstract_0**** v10 = new abstract_0*** ();
return v11;

}
/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 408 */ C3::~C3 () {
abstract_1 v15 = abstract_1();
abstract_0**** v16 = new abstract_0*** ();
return;

}
/* method id 409 */ C3::C3 () {
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func8 (C3 v20, abstract_1 v21, C3 v22, C3 v23) {

delete (new C1 ());
v22 = v20;
return ((abstract_0*) 0);

}
abstract_0* func9 (C3 v24, abstract_1 v25, C3 v26) {
abstract_1 v27;
abstract_1 v28;
C3 v29;

return new abstract_0 ();

}
abstract_0* func10 (abstract_1 v30, abstract_1 v31, abstract_1 v32, C2 v33) {
abstract_1 v34;
abstract_1 v35;
C3 v36;

return new abstract_0 ();

}
abstract_0* func11 (abstract_1 v37, C2 v38, abstract_1 v39, abstract_1 v40) {
abstract_1 v41;

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
8    | var8: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
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
8    | var11: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
12   | var12: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
16   | var13: AbstractType{1}
20   | var14: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var8: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
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
class C3    size(84)
0    +---
0    | {vbptr}
4    | var19: ClassType{2}
44   +---
44   +--- (virtual base class C0)
44   | {vfptr}
48   +---
48   +--- (virtual base class C1)
48   | {vfptr}
52   | {vbptr}
56   | var8: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
60   +---
60   +--- (virtual base class C2)
60   | {vfptr}
64   | {vbptr}
68   | var11: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
72   | var12: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
76   | var13: AbstractType{1}
80   | var14: AbstractType{1}
84   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 84;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 44;
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
 const size_t model_offset = 48;
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
 const size_t model_offset = 60;
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

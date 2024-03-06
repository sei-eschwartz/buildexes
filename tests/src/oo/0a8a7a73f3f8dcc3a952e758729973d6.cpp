// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ virtual abstract_0 func2 ();
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_0* v1;
abstract_0* v2;
};
struct C2 : public virtual C1 {
/* method id 405 */ C2 ();
/* method id 406 */ virtual ~C2 ();
/* method id 407 */ virtual abstract_0 func4 (abstract_0* v7, abstract_0* v8, abstract_0* v9, abstract_0* v10);
/* method id 408 */ virtual abstract_0 func5 (abstract_0* v19, abstract_0* v20, abstract_0* v21, abstract_0* v22);
C2 (special_constructor);
abstract_0* v23;
abstract_0* v24;
abstract_0* v25;
abstract_0* v26;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ virtual abstract_0 func1 ();
/* method id 412 */ abstract_0 func6 (abstract_0* v40, abstract_0* v41, abstract_0* v42, abstract_0* v43);
C3 (special_constructor);
abstract_0* v48;
};
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::~C1 () {
abstract_0* v0 = new abstract_0 ();
return;

}
/* method id 403 */ abstract_0 C1::func2 () {
return abstract_0();

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
abstract_0* v3 = ((abstract_0*) 0);
abstract_0* v4 = ((abstract_0*) 0);
abstract_0* v5 = ((abstract_0*) 0);
return;

}
/* method id 406 */ C2::~C2 () {
abstract_0* v6 = new abstract_0 ();
(&(*(((C3*) 0))))->C3::func1();
(&(*(((C3*) 0))))->C3::func1();
return;

}
/* method id 407 */ abstract_0 C2::func4 (abstract_0* v7, abstract_0* v8, abstract_0* v9, abstract_0* v10) {
abstract_0* v11 = new abstract_0 ();
abstract_0* v12 = new abstract_0 ();
abstract_0* v13 = new abstract_0 ();
abstract_0* v14 = new abstract_0 ();
delete (new C1 ());
return abstract_0();

}
/* method id 408 */ abstract_0 C2::func5 (abstract_0* v19, abstract_0* v20, abstract_0* v21, abstract_0* v22) {
delete (new C2 ());
return abstract_0();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
abstract_0* v27 = new abstract_0 ();
abstract_0* v28 = new abstract_0 ();
abstract_0* v29 = new abstract_0 ();
abstract_0* v30 = new abstract_0 ();
return;

}
/* method id 410 */ C3::~C3 () {
abstract_0* v36 = ((abstract_0*) 0);
abstract_0* v37 = ((abstract_0*) 0);
abstract_0* v38 = ((abstract_0*) 0);
return;

}
/* method id 411 */ abstract_0 C3::func1 () {
return abstract_0();

}
/* method id 412 */ abstract_0 C3::func6 (abstract_0* v40, abstract_0* v41, abstract_0* v42, abstract_0* v43) {
abstract_0* v44 = ((abstract_0*) 0);
abstract_0* v45 = ((abstract_0*) 0);
abstract_0* v46 = new abstract_0 ();
abstract_0* v47 = new abstract_0 ();
delete (new C1 ());
v41 = new abstract_0 ();
v41 = new abstract_0 ();
return ((new C3 ()))->C3::func1();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

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
8    | var1: PtrType{AbstractType{0}}
12   | var2: PtrType{AbstractType{0}}
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
class C2    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var23: PtrType{AbstractType{0}}
12   | var24: PtrType{AbstractType{0}}
16   | var25: PtrType{AbstractType{0}}
20   | var26: PtrType{AbstractType{0}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var1: PtrType{AbstractType{0}}
40   | var2: PtrType{AbstractType{0}}
44   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
class C3    size(56)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var48: PtrType{AbstractType{0}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var1: PtrType{AbstractType{0}}
28   | var2: PtrType{AbstractType{0}}
32   +---
32   +--- (virtual base class C2)
32   | {vfptr}
36   | {vbptr}
40   | var23: PtrType{AbstractType{0}}
44   | var24: PtrType{AbstractType{0}}
48   | var25: PtrType{AbstractType{0}}
52   | var26: PtrType{AbstractType{0}}
56   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 56;
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
 const size_t model_offset = 32;
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

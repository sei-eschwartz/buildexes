// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_8 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2**** func0 ();
/* method id 401 */ virtual abstract_0* func1 (abstract_4 v3, abstract_4 v4);
/* method id 402 */ abstract_1* func1 (abstract_3 v6, abstract_4 v7);
/* method id 403 */ virtual abstract_2** func1 (abstract_4 v12, abstract_3 v13);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 405 */ virtual void* func2 (abstract_3 v15, abstract_3 v16, abstract_4 v17, abstract_4 v18);
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ virtual abstract_2 func1 ();
/* method id 408 */ virtual void func0 (abstract_4 v20, abstract_4 v21);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_0* v24;
};
struct C2  {
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_0* v25;
abstract_4 v26;
abstract_3 v27;
};
struct C3 : public virtual C2, public virtual C1 {
/* method id 411 */ abstract_2**** func0 ();
/* method id 412 */ virtual ~C3 ();
/* method id 413 */ C3 ();
C3 (special_constructor);
abstract_9* v35;
abstract_0* v36;
abstract_4 v37;
abstract_10** v38;
};
abstract_2 func5 (abstract_5 v39, abstract_9* v40, abstract_8 v41, abstract_4 v42);
// definitions
/* method id 400 */ abstract_2**** C0::func0 () {
abstract_3 v0 = abstract_3();
abstract_3 v1 = abstract_3();
abstract_4 v2 = abstract_4();
v2 = v2;
v2 = v2;
v2 = v2;
return new abstract_2*** ();

}
/* method id 401 */ abstract_0* C0::func1 (abstract_4 v3, abstract_4 v4) {
abstract_3 v5 = abstract_3();
return new abstract_0 ();

}
/* method id 402 */ abstract_1* C0::func1 (abstract_3 v6, abstract_4 v7) {
abstract_3 v8 = abstract_3();
abstract_3 v9 = abstract_3();
abstract_5 v10 = abstract_5();
abstract_5 v11 = abstract_5();
return ((abstract_1*) 0);

}
/* method id 403 */ abstract_2** C0::func1 (abstract_4 v12, abstract_3 v13) {
abstract_3 v14 = abstract_3();
return new abstract_2* ();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ void* C1::func2 (abstract_3 v15, abstract_3 v16, abstract_4 v17, abstract_4 v18) {
delete (new C0 ());
return ((void*) 0);

}
/* method id 406 */ C1::~C1 () {
abstract_0* v19 = new abstract_0 ();
delete (new C1 ());
return;

}
/* method id 407 */ abstract_2 C1::func1 () {
return ::func5(abstract_5(), ((abstract_9*) 0), abstract_8(), abstract_4());

}
/* method id 408 */ void C1::func0 (abstract_4 v20, abstract_4 v21) {
abstract_3 v22 = abstract_3();
abstract_3 v23 = abstract_3();
(((C1*) 0))->C1::func1();
(((C1*) 0))->C1::func1();
return;

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C2::C2 () {
delete (new C1 ());
return;

}
C2::C2 (special_constructor)  {}

/* method id 411 */ abstract_2**** C3::func0 () {
abstract_3 v28 = abstract_3();
return new abstract_2*** ();

}
/* method id 412 */ C3::~C3 () {
abstract_4 v29 = abstract_4();
abstract_4 v30 = abstract_4();
abstract_4 v31 = abstract_4();
abstract_4 v32 = abstract_4();
return;

}
/* method id 413 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()), C1(special_constructor ()) {}

abstract_2 func5 (abstract_5 v39, abstract_9* v40, abstract_8 v41, abstract_4 v42) {

return abstract_2();

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
class C1    size(8)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var24: PtrType{AbstractType{0}}
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
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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
0    | var25: PtrType{AbstractType{0}}
4    | var26: AbstractType{4}
8    | var27: AbstractType{3}
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
class C3    size(44)
0    +---
0    | {vbptr}
4    | var35: PtrType{AbstractType{9}}
8    | var36: PtrType{AbstractType{0}}
12   | var37: AbstractType{4}
16   | var38: DeletablePtrType{PtrType{AbstractType{10}}}
20   +---
20   +--- (virtual base class C2)
20   | var25: PtrType{AbstractType{0}}
24   | var26: AbstractType{4}
28   | var27: AbstractType{3}
32   +---
32   | {vtordisp for vbase 1}
36   +--- (virtual base class C1)
36   | +--- (base class C0)
36   | | {vfptr}
40   | +---
40   | var24: PtrType{AbstractType{0}}
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

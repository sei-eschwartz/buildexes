// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void func0 ();
/* method id 401 */ virtual void* func0 (void**** v0);
/* method id 402 */ virtual ~C0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
void**** v15;
void**** v16;
void**** v17;
void**** v18;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual ~C1 ();
/* method id 405 */ C1 ();
/* method id 406 */ void func0 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ virtual void func1 ();
/* method id 409 */ virtual void* func0 (void**** v61);
/* method id 410 */ virtual void func0 ();
/* method id 411 */ C2 ();
C2 (special_constructor);
abstract_0 v62;
abstract_0 v63;
abstract_0 v64;
abstract_0 v65;
};
struct C3 : public C2 {
/* method id 412 */ void func0 ();
/* method id 413 */ C3 ();
C3 (special_constructor);
abstract_0 v67;
};
// definitions
/* method id 400 */ void C0::func0 () {
delete (new C2 ());
v18 = new void*** ();
v18 = new void*** ();
return (&(*(((C2*) 0))))->C2::func1();

}
/* method id 401 */ void* C0::func0 (void**** v0) {
void**** v1 = new void*** ();
void**** v2 = new void*** ();
void**** v3 = new void*** ();
void**** v4 = new void*** ();
return ((void*) 0);

}
/* method id 402 */ C0::~C0 () {
void**** v5 = new void*** ();
void**** v6 = new void*** ();
return;

}
/* method id 403 */ C0::C0 () {
void**** v11 = new void*** ();
void**** v12 = new void*** ();
void**** v13 = new void*** ();
void**** v14 = new void*** ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::~C1 () {
void**** v19 = new void*** ();
void**** v20 = new void*** ();
void**** v21 = new void*** ();
delete (new C0 ());
return;

}
/* method id 405 */ C1::C1 () {
void**** v22 = new void*** ();
void**** v23 = new void*** ();
void**** v24 = new void*** ();
void**** v25 = new void*** ();
v24 = v23;
v24 = v23;
v24 = v23;
return;

}
/* method id 406 */ void C1::func0 () {
abstract_0 v54 = abstract_0();
abstract_0 v55 = abstract_0();
void**** v56 = new void*** ();
abstract_0 v57 = abstract_0();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::~C2 () {
return;

}
/* method id 408 */ void C2::func1 () {
abstract_0 v58 = abstract_0();
void**** v59 = new void*** ();
void**** v60 = new void*** ();
v15 = new void*** ();
return;

}
/* method id 409 */ void* C2::func0 (void**** v61) {
v17 = v15;
v17 = v15;
return ((void*) 0);

}
/* method id 410 */ void C2::func0 () {
return;

}
/* method id 411 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 412 */ void C3::func0 () {
abstract_0 v66 = abstract_0();
return;

}
/* method id 413 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var15: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | var16: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | var17: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var18: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(28)
0    +---
0    | {vbptr}
4    | {vtordisp for vbase 0}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var15: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var16: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   | var17: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
24   | var18: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
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
class C2    size(52)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var62: AbstractType{0}
12   | var63: AbstractType{0}
16   | var64: AbstractType{0}
20   | var65: AbstractType{0}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   | var15: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
36   | var16: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
40   | var17: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
44   | var18: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
48   +---
48   +--- (virtual base class C1)
48   | {vbptr}
52   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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
 const size_t model_offset = 48;
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
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | | var62: AbstractType{0}
12   | | var63: AbstractType{0}
16   | | var64: AbstractType{0}
20   | | var65: AbstractType{0}
24   | +---
24   | var67: AbstractType{0}
28   | {vtordisp for vbase 0}
32   +---
32   +--- (virtual base class C0)
32   | {vfptr}
36   | var15: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
40   | var16: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
44   | var17: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
48   | var18: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
52   +---
52   +--- (virtual base class C1)
52   | {vbptr}
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

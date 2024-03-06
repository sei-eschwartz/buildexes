// type for special constructors
struct special_constructor {};
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
/* method id 402 */ virtual void func2 (void* v1);
C0 (special_constructor);
void* v28;
void* v29;
};
struct C1  {
/* method id 403 */ virtual void func0 ();
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_0 v42;
abstract_0 v43;
void** v44;
void** v45;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 405 */ virtual abstract_4 func0 (abstract_3 v46, abstract_0 v47);
/* method id 406 */ virtual ~C2 ();
/* method id 407 */ virtual abstract_4 func0 (void* v52);
/* method id 408 */ abstract_4 func1 (abstract_0 v54);
/* method id 409 */ C2 ();
C2 (special_constructor);
abstract_0 v59;
C1 v60;
abstract_4* v61;
C1 v62;
};
struct C3  {
/* method id 410 */ C3 ();
C3 (special_constructor);
abstract_3 v63;
};
abstract_4 func5 (abstract_5 v64);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {
void* v0 = ((void*) 0);
return;

}
/* method id 402 */ void C0::func2 (void* v1) {
void* v2 = ((void*) 0);
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ void C1::func0 () {
void* v30 = ((void*) 0);
abstract_0 v31 = abstract_0();
void* v32 = ((void*) 0);
abstract_0 v33 = abstract_0();
return;

}
/* method id 404 */ C1::C1 () {
abstract_1 v34 = abstract_1();
void* v35 = ((void*) 0);
abstract_0 v36 = abstract_0();
abstract_2 v37 = abstract_2();
return;

}
C1::C1 (special_constructor)  {}

/* method id 405 */ abstract_4 C2::func0 (abstract_3 v46, abstract_0 v47) {
return ::func5(abstract_5());

}
/* method id 406 */ C2::~C2 () {
abstract_0 v48 = abstract_0();
abstract_0 v49 = abstract_0();
abstract_5 v50 = abstract_5();
abstract_1 v51 = abstract_1();
return;

}
/* method id 407 */ abstract_4 C2::func0 (void* v52) {
abstract_0 v53 = abstract_0();
return ::func5(abstract_5());

}
/* method id 408 */ abstract_4 C2::func1 (abstract_0 v54) {
void** v55 = new void* ();
void** v56 = new void* ();
abstract_5 v57 = abstract_5();
abstract_0 v58 = abstract_0();
return ::func5(abstract_5());

}
/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

abstract_4 func5 (abstract_5 v64) {
abstract_0 v65;
abstract_1 v66;

return abstract_4();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var28: PtrType{VoidType{}}
8    | var29: PtrType{VoidType{}}
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
4    | var42: AbstractType{0}
8    | var43: AbstractType{0}
12   | var44: DeletablePtrType{PtrType{VoidType{}}}
16   | var45: DeletablePtrType{PtrType{VoidType{}}}
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
}
/*
class C2    size(88)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var59: AbstractType{0}
12   | var60: ClassType{1}
32   | var61: PtrType{AbstractType{4}}
36   | var62: ClassType{1}
56   +---
56   +--- (virtual base class C0)
56   | {vfptr}
60   | var28: PtrType{VoidType{}}
64   | var29: PtrType{VoidType{}}
68   +---
68   +--- (virtual base class C1)
68   | {vfptr}
72   | var42: AbstractType{0}
76   | var43: AbstractType{0}
80   | var44: DeletablePtrType{PtrType{VoidType{}}}
84   | var45: DeletablePtrType{PtrType{VoidType{}}}
88   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 88;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 56;
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
 const size_t model_offset = 68;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(4)
0    +---
0    | var63: AbstractType{3}
4    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

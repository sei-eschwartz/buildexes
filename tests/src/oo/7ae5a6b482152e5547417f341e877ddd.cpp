// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ void func0 ();
/* method id 401 */ virtual void func0 (void** v0);
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 403 */ void func1 (void** v3, void** v4, void** v5, void** v6);
/* method id 404 */ virtual ~C1 ();
/* method id 405 */ virtual void func0 ();
/* method id 406 */ void func1 (void** v13, C0 v14);
/* method id 407 */ C1 ();
C1 (special_constructor);
void* v18;
void* v19;
C0 v20;
void** v21;
};
struct C2 : public virtual C1, public C0 {
/* method id 408 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C0, public virtual C1 {
/* method id 410 */ C3 ();
C3 (special_constructor);
void* v22;
C0 v23;
C0 v24;
void* v25;
};
void func7 (C3 v26);
void func8 (C0 v29, abstract_0 v30, abstract_0 v31, abstract_0 v32);
// definitions
/* method id 400 */ void C0::func0 () {
return;

}
/* method id 401 */ void C0::func0 (void** v0) {
void** v1 = new void* ();
void** v2 = new void* ();
delete (new C1 ());
return;

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ void C1::func1 (void** v3, void** v4, void** v5, void** v6) {
void** v7 = new void* ();
void** v8 = new void* ();
void** v9 = new void* ();
delete (new C2 ());
return ::func8(v20, abstract_0(), abstract_0(), abstract_0());

}
/* method id 404 */ C1::~C1 () {
return;

}
/* method id 405 */ void C1::func0 () {
void** v10 = new void* ();
void** v11 = new void* ();
C0 v12 = *(&(*(((C0*) 0))));
return ::func8(v20, abstract_0(), abstract_0(), abstract_0());

}
/* method id 406 */ void C1::func1 (void** v13, C0 v14) {
void** v15 = new void* ();
C0 v16 = *((new C0 ()));
C0 v17 = *((new C0 ()));
return;

}
/* method id 407 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

void func7 (C3 v26) {
void** v27;
void** v28;

return;

}
void func8 (C0 v29, abstract_0 v30, abstract_0 v31, abstract_0 v32) {

::func7(*(((C3*) 0)));
return;

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
4    | var18: PtrType{VoidType{}}
8    | var19: PtrType{VoidType{}}
12   | var20: ClassType{0}
16   | var21: DeletablePtrType{PtrType{VoidType{}}}
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
class C2    size(28)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var18: PtrType{VoidType{}}
16   | var19: PtrType{VoidType{}}
20   | var20: ClassType{0}
24   | var21: DeletablePtrType{PtrType{VoidType{}}}
28   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(44)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | {vbptr}
8    | var22: PtrType{VoidType{}}
12   | var23: ClassType{0}
16   | var24: ClassType{0}
20   | var25: PtrType{VoidType{}}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | var18: PtrType{VoidType{}}
32   | var19: PtrType{VoidType{}}
36   | var20: ClassType{0}
40   | var21: DeletablePtrType{PtrType{VoidType{}}}
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
 const size_t model_offset = 0;
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

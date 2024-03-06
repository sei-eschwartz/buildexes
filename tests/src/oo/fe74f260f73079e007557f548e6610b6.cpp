// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
/* method id 402 */ void func1 (void** v7, void** v8, void** v9);
/* method id 403 */ void func2 ();
/* method id 404 */ virtual void func1 (void** v10);
C1 (special_constructor);
void** v12;
void** v13;
};
struct C2 : public virtual C1 {
/* method id 405 */ C2 ();
/* method id 406 */ virtual void func1 (C1 v21, void** v22);
/* method id 407 */ virtual ~C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C1, public C2 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual void func1 ();
/* method id 410 */ ~C3 ();
C3 (special_constructor);
C1 v29;
C1 v30;
C1 v31;
C1 v32;
};
void func3 ();
void func4 (C1 v35, C1 v36);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
void** v0 = new void* ();
void** v1 = new void* ();
void** v2 = new void* ();
return;

}
/* method id 402 */ void C1::func1 (void** v7, void** v8, void** v9) {
return ::func4(*(this), *(this));

}
/* method id 403 */ void C1::func2 () {
return ::func4(*(this), *(((C1*) 0)));

}
/* method id 404 */ void C1::func1 (void** v10) {
void** v11 = new void* ();
return;

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {
void** v14 = new void* ();
void** v15 = new void* ();
void** v16 = new void* ();
void** v17 = new void* ();
return;

}
/* method id 406 */ void C2::func1 (C1 v21, void** v22) {
C1 v23 = *((new C1 ()));
return;

}
/* method id 407 */ C2::~C2 () {
void** v24 = new void* ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
C1 v25 = *(&(*((new C1 ()))));
void** v26 = new void* ();
return;

}
/* method id 409 */ void C3::func1 () {
void** v27 = new void* ();
return ::func3();

}
/* method id 410 */ C3::~C3 () {
C1 v28 = *(((C1*) 0));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void func3 () {
C1 v33;
abstract_0 v34;

return (((C1*) 0))->C1::func1(new void* ());

}
void func4 (C1 v35, C1 v36) {
void** v37;
void** v38;

return;

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | var12: DeletablePtrType{PtrType{VoidType{}}}
8    | var13: DeletablePtrType{PtrType{VoidType{}}}
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
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
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var12: DeletablePtrType{PtrType{VoidType{}}}
16   | var13: DeletablePtrType{PtrType{VoidType{}}}
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
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(68)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | +---
8    | var29: ClassType{1}
20   | var30: ClassType{1}
32   | var31: ClassType{1}
44   | var32: ClassType{1}
56   +---
56   +--- (virtual base class C1)
56   | {vfptr}
60   | var12: DeletablePtrType{PtrType{VoidType{}}}
64   | var13: DeletablePtrType{PtrType{VoidType{}}}
68   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 68;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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

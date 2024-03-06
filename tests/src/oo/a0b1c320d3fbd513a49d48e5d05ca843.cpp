// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ void func0 ();
/* method id 402 */ C1 ();
/* method id 403 */ virtual void func0 (void* v1, void* v2, void* v3);
/* method id 404 */ void func0 (void* v4);
C1 (special_constructor);
void* v6;
void* v7;
void* v8;
};
struct C2 : public C0, public virtual C1 {
/* method id 405 */ C2 ();
/* method id 406 */ ~C2 ();
/* method id 407 */ virtual void func0 (void** v14);
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 408 */ virtual void* func0 ();
/* method id 409 */ C3 ();
C3 (special_constructor);
void** v20;
void* v21;
void** v22;
C1 v23;
};
void* func3 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
return;

}
/* method id 402 */ C1::C1 () {
void* v0 = ((void*) 0);
::func3();
v7 = ((void*) 0);
::func3();
v7 = ((void*) 0);
return;

}
/* method id 403 */ void C1::func0 (void* v1, void* v2, void* v3) {
delete (new C1 ());
return;

}
/* method id 404 */ void C1::func0 (void* v4) {
void* v5 = ((void*) 0);
return;

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {
void* v9 = ((void*) 0);
void* v10 = ((void*) 0);
void* v11 = ((void*) 0);
delete (new C1 ());
return;

}
/* method id 406 */ C2::~C2 () {
void** v12 = new void* ();
delete (new C0 ());
return;

}
/* method id 407 */ void C2::func0 (void** v14) {
C1 v15 = *(((C1*) 0));
C1 v16 = *(((C1*) 0));
void* v17 = ((void*) 0);
C1 v18 = *(((C1*) 0));
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 408 */ void* C3::func0 () {
C1 v19 = *(((C1*) 0));
delete (new C1 ());
return v6;

}
/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void* func3 () {
void** v24;
void** v25;
void** v26;
void** v27;

return ((void*) 0);

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | var6: PtrType{VoidType{}}
8    | var7: PtrType{VoidType{}}
12   | var8: PtrType{VoidType{}}
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
}
/*
class C2    size(24)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var6: PtrType{VoidType{}}
16   | var7: PtrType{VoidType{}}
20   | var8: PtrType{VoidType{}}
24   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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
class C3    size(60)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var20: PtrType{PtrType{VoidType{}}}
12   | var21: PtrType{VoidType{}}
16   | var22: DeletablePtrType{PtrType{VoidType{}}}
20   | var23: ClassType{1}
36   +---
36   +--- (virtual base class C1)
36   | {vfptr}
40   | var6: PtrType{VoidType{}}
44   | var7: PtrType{VoidType{}}
48   | var8: PtrType{VoidType{}}
52   +---
52   +--- (virtual base class C2)
52   | {vfptr}
56   | +--- (base class C0)
56   | +---
56   | {vbptr}
60   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 60;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 52;
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

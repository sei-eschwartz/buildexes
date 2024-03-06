// type for special constructors
struct special_constructor {};
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
void**** v12;
void**** v13;
void**** v14;
void** v15;
};
struct C1 : public C0 {
/* method id 404 */ C1 ();
C1 (special_constructor);
void** v20;
void** v21;
void** v22;
};
struct C2 : public virtual C1 {
/* method id 405 */ C2 ();
C2 (special_constructor);
void** v27;
void** v28;
void** v29;
void** v30;
};
struct C3 : public virtual C2 {
/* method id 406 */ C3 ();
/* method id 407 */ virtual ~C3 ();
/* method id 408 */ virtual void* func0 (void** v82, void** v83);
C3 (special_constructor);
void** v176;
};
// definitions
/* method id 400 */ void C0::func0 () {
return;

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
void**** v7 = new void*** ();
return;

}
/* method id 403 */ C0::C0 () {
void**** v8 = new void*** ();
void**** v9 = new void*** ();
void**** v10 = new void*** ();
void**** v11 = new void*** ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
void** v16 = ((void**) 0);
void** v17 = ((void**) 0);
void** v18 = ((void**) 0);
void** v19 = ((void**) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
void** v23 = ((void**) 0);
void** v24 = ((void**) 0);
void** v25 = ((void**) 0);
void** v26 = ((void**) 0);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
return;

}
/* method id 407 */ C3::~C3 () {
void** v70 = ((void**) 0);
void** v71 = ((void**) 0);
void** v72 = ((void**) 0);
void** v73 = ((void**) 0);
return;

}
/* method id 408 */ void* C3::func0 (void** v82, void** v83) {
void** v84 = new void* ();
void** v85 = new void* ();
void** v86 = new void* ();
void** v87 = new void* ();
return ((void*) 0);

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var15: PtrType{PtrType{VoidType{}}}
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
class C1    size(32)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | | var15: PtrType{PtrType{VoidType{}}}
20   | +---
20   | var20: PtrType{PtrType{VoidType{}}}
24   | var21: PtrType{PtrType{VoidType{}}}
28   | var22: PtrType{PtrType{VoidType{}}}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
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
class C2    size(52)
0    +---
0    | {vbptr}
4    | var27: PtrType{PtrType{VoidType{}}}
8    | var28: PtrType{PtrType{VoidType{}}}
12   | var29: PtrType{PtrType{VoidType{}}}
16   | var30: PtrType{PtrType{VoidType{}}}
20   +---
20   +--- (virtual base class C1)
20   | +--- (base class C0)
20   | | {vfptr}
24   | | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
28   | | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
32   | | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
36   | | var15: PtrType{PtrType{VoidType{}}}
40   | +---
40   | var20: PtrType{PtrType{VoidType{}}}
44   | var21: PtrType{PtrType{VoidType{}}}
48   | var22: PtrType{PtrType{VoidType{}}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(64)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var176: PtrType{PtrType{VoidType{}}}
12   +---
12   +--- (virtual base class C1)
12   | +--- (base class C0)
12   | | {vfptr}
16   | | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   | | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
24   | | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
28   | | var15: PtrType{PtrType{VoidType{}}}
32   | +---
32   | var20: PtrType{PtrType{VoidType{}}}
36   | var21: PtrType{PtrType{VoidType{}}}
40   | var22: PtrType{PtrType{VoidType{}}}
44   +---
44   +--- (virtual base class C2)
44   | {vbptr}
48   | var27: PtrType{PtrType{VoidType{}}}
52   | var28: PtrType{PtrType{VoidType{}}}
56   | var29: PtrType{PtrType{VoidType{}}}
60   | var30: PtrType{PtrType{VoidType{}}}
64   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 64;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 44;
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

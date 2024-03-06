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
void**** v15;
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
C1 (special_constructor);
void**** v16;
void**** v17;
void**** v18;
void**** v19;
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
C2 (special_constructor);
void**** v20;
void**** v21;
void**** v22;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual void* func1 (void**** v27);
C3 (special_constructor);
};
void* func6 (void**** v35);
// definitions
/* method id 400 */ void C0::func0 () {
return;

}
/* method id 401 */ void* C0::func0 (void**** v0) {
void**** v1 = new void*** ();
void**** v2 = new void*** ();
void**** v3 = new void*** ();
void**** v4 = new void*** ();
delete (new C1 ());
return ::func6(v13);

}
/* method id 402 */ C0::~C0 () {
void**** v5 = new void*** ();
void**** v6 = new void*** ();
void**** v7 = new void*** ();
delete (new C1 ());
return;

}
/* method id 403 */ C0::C0 () {
void**** v8 = new void*** ();
void**** v9 = new void*** ();
void**** v10 = new void*** ();
void**** v11 = new void*** ();
((new C3 ()))->C3::func1(v13);
((new C3 ()))->C3::func1(v13);
((new C3 ()))->C3::func1(v13);
((new C3 ()))->C3::func1(v13);
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
void**** v23 = new void*** ();
void**** v24 = new void*** ();
void**** v25 = new void*** ();
void**** v26 = new void*** ();
return;

}
/* method id 409 */ void* C3::func1 (void**** v27) {
void**** v28 = new void*** ();
void**** v29 = new void*** ();
void**** v30 = new void*** ();
void**** v31 = new void*** ();
::func6(v16);
v19 = v17;
return ::func6(v17);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void* func6 (void**** v35) {

return ((void*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var15: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
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
class C1    size(40)
0    +---
0    | {vbptr}
4    | var16: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | var17: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | var18: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var19: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
28   | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
32   | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
36   | var15: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
40   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(56)
0    +---
0    | {vbptr}
4    | var20: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | var21: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | var22: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
24   | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
28   | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
32   | var15: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
36   +---
36   +--- (virtual base class C1)
36   | {vbptr}
40   | var16: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
44   | var17: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
48   | var18: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
52   | var19: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
56   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 56;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
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
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
24   | var15: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
28   +---
28   +--- (virtual base class C1)
28   | {vbptr}
32   | var16: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
36   | var17: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
40   | var18: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
44   | var19: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
48   +---
48   +--- (virtual base class C2)
48   | {vbptr}
52   | var20: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
56   | var21: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
60   | var22: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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
 const size_t model_offset = 48;
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

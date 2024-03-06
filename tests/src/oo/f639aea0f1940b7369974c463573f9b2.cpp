// type for special constructors
struct special_constructor {};
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
/* method id 402 */ virtual void*** func2 ();
/* method id 403 */ void**** func2 (void**** v0);
/* method id 404 */ void func0 ();
/* method id 405 */ C1 ();
C1 (special_constructor);
void**** v2;
void**** v3;
void**** v4;
};
struct C2  {
/* method id 407 */ void func4 ();
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ C2 ();
/* method id 410 */ void func4 (C1 v11);
C2 (special_constructor);
void**** v13;
void**** v14;
void**** v15;
};
struct C3 : public virtual C0, public virtual C2, public virtual C1 {
/* method id 411 */ C3 ();
/* method id 412 */ ~C3 ();
C3 (special_constructor);
C1 v28;
};
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void*** C1::func2 () {
v4 = v4;
return new void** ();

}
/* method id 403 */ void**** C1::func2 (void**** v0) {
void**** v1 = new void*** ();
delete (new C3 ());
((C1*)(((C3*) 0)))->C1::func0();
((C1*)(((C3*) 0)))->C1::func0();
return new void*** ();

}
/* method id 404 */ void C1::func0 () {
return;

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ void C2::func4 () {
void**** v5 = new void*** ();
delete (new C2 ());
return;

}
/* method id 408 */ C2::~C2 () {
void**** v6 = new void*** ();
delete (new C2 ());
return;

}
/* method id 409 */ C2::C2 () {
C1 v7 = *(&(*((new C1 ()))));
return;

}
/* method id 410 */ void C2::func4 (C1 v11) {
C1 v12 = *((new C1 ()));
delete (new C3 ());
((C1*)(((C3*) 0)))->C1::func0();
((C1*)(((C3*) 0)))->C1::func0();
return;

}
C2::C2 (special_constructor)  {}

/* method id 411 */ C3::C3 () {
C1 v16 = *(&(*((new C1 ()))));
return;

}
/* method id 412 */ C3::~C3 () {
void**** v17 = new void*** ();
C1 v18 = *((new C1 ()));
void**** v19 = new void*** ();
delete (new C2 ());
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()), C1(special_constructor ()) {}

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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | var4: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
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
class C2    size(16)
0    +---
0    | {vfptr}
4    | var13: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
8    | var14: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | var15: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(68)
0    +---
0    | {vbptr}
4    | var28: ClassType{1}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   +---
32   +--- (virtual base class C2)
32   | {vfptr}
36   | var13: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
40   | var14: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
44   | var15: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
48   +---
48   +--- (virtual base class C1)
48   | {vfptr}
52   | {vbptr}
56   | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
60   | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
64   | var4: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

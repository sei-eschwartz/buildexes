// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void*** func0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual void* func1 ();
/* method id 403 */ C1 ();
/* method id 404 */ ~C1 ();
/* method id 405 */ virtual void* func4 (void** v5, void** v6, void** v7);
C1 (special_constructor);
void** v12;
void** v13;
void** v14;
C0 v15;
};
struct C2 : public virtual C0 {
/* method id 406 */ virtual ~C2 ();
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_0 v19;
C0 v20;
C0 v21;
abstract_0 v22;
};
struct C3 : public virtual C0, public C2, public C1 {
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ C3 ();
C3 (special_constructor);
void*** v27;
void** v28;
};
void*** func6 ();
void*** func7 (void** v30);
void** func8 (void** v31);
// definitions
/* method id 400 */ void*** C0::func0 () {
return ((void***) 0);

}
/* method id 401 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void* C1::func1 () {
void** v0 = ((void**) 0);
void** v1 = ((void**) 0);
return ((void*) 0);

}
/* method id 403 */ C1::C1 () {
return;

}
/* method id 404 */ C1::~C1 () {
void** v2 = ((void**) 0);
return;

}
/* method id 405 */ void* C1::func4 (void** v5, void** v6, void** v7) {
void** v8 = new void* ();
void** v9 = new void* ();
abstract_0 v10 = abstract_0();
abstract_0 v11 = abstract_0();
return ((void*) 0);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::~C2 () {
abstract_0 v16 = abstract_0();
abstract_0 v17 = abstract_0();
C0 v18 = *(((C0*) 0));
return;

}
/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C3::~C3 () {
return;

}
/* method id 409 */ C3::C3 () {
abstract_0 v23 = abstract_0();
C1 v24 = *(((C1*) 0));
void** v25 = new void* ();
void*** v26 = new void** ();
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()), C1(special_constructor ()) {}

void*** func6 () {
void** v29;

return ((void***) 0);

}
void*** func7 (void** v30) {

return new void** ();

}
void** func8 (void** v31) {
void** v32;
C3 v33;
C0 v34;
abstract_0 v35;

return new void* ();

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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var12: PtrType{PtrType{VoidType{}}}
12   | var13: PtrType{PtrType{VoidType{}}}
16   | var14: PtrType{PtrType{VoidType{}}}
20   | var15: ClassType{0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
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
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var19: AbstractType{0}
12   | var20: ClassType{0}
16   | var21: ClassType{0}
20   | var22: AbstractType{0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(60)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | | var19: AbstractType{0}
12   | | var20: ClassType{0}
16   | | var21: ClassType{0}
20   | | var22: AbstractType{0}
24   | +---
24   | +--- (base class C1)
24   | | {vfptr}
28   | | {vbptr}
32   | | var12: PtrType{PtrType{VoidType{}}}
36   | | var13: PtrType{PtrType{VoidType{}}}
40   | | var14: PtrType{PtrType{VoidType{}}}
44   | | var15: ClassType{0}
48   | +---
48   | var27: PtrType{DeletablePtrType{PtrType{VoidType{}}}}
52   | var28: PtrType{PtrType{VoidType{}}}
56   +---
56   +--- (virtual base class C0)
56   | {vfptr}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 56;
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
 const size_t model_offset = 0;
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

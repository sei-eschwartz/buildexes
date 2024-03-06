// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
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
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
/* method id 405 */ virtual ~C1 ();
C1 (special_constructor);
void**** v30;
void**** v31;
void**** v32;
void**** v33;
};
struct C2 : public C1 {
/* method id 406 */ virtual void* func0 (void**** v34);
/* method id 407 */ virtual void func0 ();
/* method id 408 */ C2 ();
/* method id 409 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1 v44;
abstract_1 v45;
void**** v46;
abstract_1 v47;
};
struct C3 : public virtual C1 {
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ virtual void func0 ();
/* method id 412 */ virtual void**** func0 (abstract_2 v52, abstract_1 v53, void**** v54);
/* method id 413 */ virtual void func0 (void**** v56, void**** v57);
/* method id 414 */ C3 ();
C3 (special_constructor);
void**** v58;
void**** v59;
void**** v60;
abstract_1 v61;
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
void**** v15 = new void*** ();
void**** v16 = new void*** ();
void**** v17 = new void*** ();
void**** v18 = new void*** ();
return;

}
/* method id 405 */ C1::~C1 () {
void**** v23 = new void*** ();
void**** v24 = new void*** ();
void**** v25 = new void*** ();
void**** v26 = new void*** ();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ void* C2::func0 (void**** v34) {
void**** v35 = new void*** ();
void**** v36 = new void*** ();
return ((void*) 0);

}
/* method id 407 */ void C2::func0 () {
return;

}
/* method id 408 */ C2::C2 () {
abstract_1 v37 = abstract_1();
abstract_1 v38 = abstract_1();
void**** v39 = new void*** ();
return;

}
/* method id 409 */ C2::~C2 () {
abstract_1 v40 = abstract_1();
abstract_1 v41 = abstract_1();
abstract_1 v42 = abstract_1();
abstract_1 v43 = abstract_1();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::~C3 () {
abstract_1 v48 = abstract_1();
abstract_1 v49 = abstract_1();
void**** v50 = new void*** ();
abstract_2 v51 = abstract_2();
return;

}
/* method id 411 */ void C3::func0 () {
return;

}
/* method id 412 */ void**** C3::func0 (abstract_2 v52, abstract_1 v53, void**** v54) {
abstract_1 v55 = abstract_1();
return v32;

}
/* method id 413 */ void C3::func0 (void**** v56, void**** v57) {
return;

}
/* method id 414 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(36)
0    +---
0    | {vbptr}
4    | var30: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | var31: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | var32: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var33: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
28   | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
32   | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
36   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 36;
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
0    | +--- (base class C1)
0    | | {vbptr}
4    | | var30: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | | var31: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | | var32: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | | var33: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   | +---
20   | var44: AbstractType{1}
24   | var45: AbstractType{1}
28   | var46: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
32   | var47: AbstractType{1}
36   | {vtordisp for vbase 0}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
48   | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
52   | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
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
 const size_t model_offset = 0;
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
8    | var58: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | var59: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var60: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   | var61: AbstractType{1}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
36   | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
40   | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
44   +---
44   +--- (virtual base class C1)
44   | {vbptr}
48   | var30: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
52   | var31: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
56   | var32: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
60   | var33: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
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
 const size_t model_offset = 44;
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

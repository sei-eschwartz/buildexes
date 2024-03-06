// type for special constructors
struct special_constructor {};
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void func0 ();
/* method id 401 */ virtual void* func0 (void**** v0);
/* method id 402 */ C0 ();
/* method id 403 */ virtual ~C0 ();
C0 (special_constructor);
void**** v21;
void**** v22;
void**** v23;
void**** v24;
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
C1 (special_constructor);
void**** v29;
void**** v30;
void**** v31;
void**** v32;
};
struct C2 : public C1 {
/* method id 406 */ C2 ();
C2 (special_constructor);
void**** v37;
abstract_1 v38;
abstract_1 v39;
abstract_0 v40;
};
struct C3 : public virtual C1 {
/* method id 408 */ C3 ();
C3 (special_constructor);
abstract_0 v41;
abstract_2 v42;
abstract_2 v43;
void**** v44;
};
void func5 (abstract_0 v45);
void func6 ();
abstract_4 func7 (abstract_0 v53, void*** v54, void**** v55);
void* func8 ();
// definitions
/* method id 400 */ void C0::func0 () {
return ::func6();

}
/* method id 401 */ void* C0::func0 (void**** v0) {
void**** v1 = new void*** ();
void**** v2 = new void*** ();
void**** v3 = new void*** ();
void**** v4 = new void*** ();
return ::func8();

}
/* method id 402 */ C0::C0 () {
void**** v5 = new void*** ();
void**** v6 = new void*** ();
void**** v7 = new void*** ();
void**** v8 = new void*** ();
return;

}
/* method id 403 */ C0::~C0 () {
void**** v17 = new void*** ();
void**** v18 = new void*** ();
void**** v19 = new void*** ();
void**** v20 = new void*** ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
void**** v25 = new void*** ();
void**** v26 = new void*** ();
void**** v27 = new void*** ();
void**** v28 = new void*** ();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
void**** v33 = new void*** ();
void**** v34 = new void*** ();
abstract_0 v35 = abstract_0();
abstract_0 v36 = abstract_0();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void func5 (abstract_0 v45) {
abstract_0 v46;
abstract_0 v47;
abstract_3 v48;
void**** v49;

return;

}
void func6 () {
void*** v50;
void*** v51;
void*** v52;

return ::func5(abstract_0());

}
abstract_4 func7 (abstract_0 v53, void*** v54, void**** v55) {
abstract_0 v56;

return abstract_4();

}
void* func8 () {
void*** v57;

return ((void*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var21: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | var22: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | var23: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var24: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
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
4    | var29: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | var30: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | var31: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var32: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var21: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
28   | var22: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
32   | var23: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
36   | var24: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
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
0    | +--- (base class C1)
0    | | {vbptr}
4    | | var29: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | | var30: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | | var31: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | | var32: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   | +---
20   | var37: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
24   | var38: AbstractType{1}
28   | var39: AbstractType{1}
32   | var40: AbstractType{0}
36   +---
36   +--- (virtual base class C0)
36   | {vfptr}
40   | var21: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
44   | var22: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
48   | var23: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
52   | var24: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
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
class C3    size(60)
0    +---
0    | {vbptr}
4    | var41: AbstractType{0}
8    | var42: AbstractType{2}
12   | var43: AbstractType{2}
16   | var44: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var21: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
28   | var22: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
32   | var23: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
36   | var24: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
40   +---
40   +--- (virtual base class C1)
40   | {vbptr}
44   | var29: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
48   | var30: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
52   | var31: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
56   | var32: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
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

// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct abstract_11 { int x; };
struct abstract_12 { int x; };
struct abstract_13 { int x; };
struct abstract_14 { int x; };
struct abstract_15 { int x; };
struct abstract_16 { int x; };
struct abstract_17 { int x; };
struct abstract_18 { int x; };
struct abstract_19 { int x; };
struct abstract_20 { int x; };
struct abstract_21 { int x; };
struct abstract_22 { int x; };
struct abstract_23 { int x; };
struct abstract_24 { int x; };
struct abstract_25 { int x; };
struct abstract_26 { int x; };
struct abstract_27 { int x; };
struct abstract_28 { int x; };
struct abstract_29 { int x; };
struct abstract_30 { int x; };
struct abstract_31 { int x; };
struct abstract_32 { int x; };
struct abstract_33 { int x; };
struct abstract_34 { int x; };
struct abstract_35 { int x; };
struct abstract_36 { int x; };
struct abstract_37 { int x; };
struct abstract_38 { int x; };
struct abstract_39 { int x; };
struct abstract_40 { int x; };
struct abstract_41 { int x; };
struct abstract_42 { int x; };
struct abstract_0 { int x; };
struct abstract_43 { int x; };
struct abstract_44 { int x; };
struct abstract_45 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void**** func0 (abstract_0 v0);
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_0 v6;
abstract_0 v7;
};
struct C1 : public C0 {
/* method id 403 */ C1 ();
/* method id 404 */ virtual ~C1 ();
/* method id 405 */ virtual abstract_26**** func2 (abstract_0 v21, void* v22);
/* method id 406 */ virtual void*** func3 ();
C1 (special_constructor);
void** v29;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 409 */ virtual void func0 ();
/* method id 410 */ C3 ();
C3 (special_constructor);
void* v35;
abstract_45 v36;
void** v37;
void** v38;
};
void* func7 ();
void func8 ();
void func9 (abstract_45 v39, void* v40);
void func10 (void** v41, void* v42);
// definitions
/* method id 400 */ void**** C0::func0 (abstract_0 v0) {
abstract_0 v1 = abstract_0();
return new void*** ();

}
/* method id 401 */ C0::~C0 () {
abstract_0 v2 = abstract_0();
abstract_0 v3 = abstract_0();
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
return;

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_0 v11 = abstract_0();
return;

}
/* method id 404 */ C1::~C1 () {
abstract_0 v17 = abstract_0();
abstract_0 v18 = abstract_0();
abstract_0 v19 = abstract_0();
abstract_0 v20 = abstract_0();
return;

}
/* method id 405 */ abstract_26**** C1::func2 (abstract_0 v21, void* v22) {
void* v23 = ((void*) 0);
abstract_0 v24 = abstract_0();
return new abstract_26*** ();

}
/* method id 406 */ void*** C1::func3 () {
C0 v25 = *(&(*((new C0 ()))));
void* v26 = ((void*) 0);
abstract_43 v27 = abstract_43();
void* v28 = ((void*) 0);
return new void** ();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
void* v30 = ((void*) 0);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ void C3::func0 () {
void** v31 = new void* ();
abstract_0 v32 = abstract_0();
abstract_44 v33 = abstract_44();
void* v34 = ((void*) 0);
return;

}
/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void* func7 () {

return ((void*) 0);

}
void func8 () {

return ::func10(new void* (), ((void*) 0));

}
void func9 (abstract_45 v39, void* v40) {

return;

}
void func10 (void** v41, void* v42) {

return (((C3*) 0))->C3::func0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var6: AbstractType{0}
8    | var7: AbstractType{0}
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
class C1    size(16)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var6: AbstractType{0}
8    | | var7: AbstractType{0}
12   | +---
12   | var29: DeletablePtrType{PtrType{VoidType{}}}
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
class C2    size(20)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C1)
4    | +--- (base class C0)
4    | | {vfptr}
8    | | var6: AbstractType{0}
12   | | var7: AbstractType{0}
16   | +---
16   | var29: DeletablePtrType{PtrType{VoidType{}}}
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
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var35: PtrType{VoidType{}}
12   | var36: AbstractType{45}
16   | var37: DeletablePtrType{PtrType{VoidType{}}}
20   | var38: DeletablePtrType{PtrType{VoidType{}}}
24   +---
24   +--- (virtual base class C1)
24   | +--- (base class C0)
24   | | {vfptr}
28   | | var6: AbstractType{0}
32   | | var7: AbstractType{0}
36   | +---
36   | var29: DeletablePtrType{PtrType{VoidType{}}}
40   +---
40   +--- (virtual base class C2)
40   | {vbptr}
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
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

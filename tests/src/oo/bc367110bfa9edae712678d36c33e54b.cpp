// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
void**** v5;
};
struct C2 : public virtual C0, public C1 {
/* method id 407 */ virtual void func4 (void**** v6, void**** v7, void**** v8);
/* method id 408 */ C2 ();
/* method id 409 */ void func4 (C1 v13);
/* method id 410 */ virtual void** func4 (C1 v15, abstract_0 v16, abstract_0 v17, abstract_0 v18);
C2 (special_constructor);
C1 v21;
C1 v22;
C1 v23;
C1 v24;
};
struct C3 : public virtual C0, public C2 {
/* method id 412 */ C3 ();
C3 (special_constructor);
abstract_0 v29;
};
void** func7 (void**** v30);
void func8 ();
void func9 ();
void*** func10 (C1 v31, C3 v32);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void*** C1::func2 () {
return ((void***) 0);

}
/* method id 403 */ void**** C1::func2 (void**** v0) {
void**** v1 = new void*** ();
return v3;

}
/* method id 404 */ void C1::func0 () {
return ::func9();

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ void C2::func4 (void**** v6, void**** v7, void**** v8) {
return;

}
/* method id 408 */ C2::C2 () {
C1 v9 = *(&(*((new C1 ()))));
return;

}
/* method id 409 */ void C2::func4 (C1 v13) {
C1 v14 = *((new C1 ()));
return;

}
/* method id 410 */ void** C2::func4 (C1 v15, abstract_0 v16, abstract_0 v17, abstract_0 v18) {
C1 v19 = *((new C1 ()));
void**** v20 = new void*** ();
return new void* ();

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {
void**** v25 = new void*** ();
C1 v26 = *(&(*(((C1*) 0))));
C1 v27 = *(&(*(((C1*) 0))));
abstract_1 v28 = abstract_1();
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

void** func7 (void**** v30) {

return new void* ();

}
void func8 () {

return;

}
void func9 () {

return ::func8();

}
void*** func10 (C1 v31, C3 v32) {
C3 v33;
void**** v34;

return new void** ();

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
8    | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | var4: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
20   | var5: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
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
class C2    size(140)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | | var4: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
20   | | var5: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
24   | +---
24   | var21: ClassType{1}
52   | var22: ClassType{1}
80   | var23: ClassType{1}
108  | var24: ClassType{1}
136  +---
136  +--- (virtual base class C0)
136  | {vfptr}
140  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 140;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 136;
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
class C3    size(144)
0    +---
0    | +--- (base class C2)
0    | | +--- (base class C1)
0    | | | {vfptr}
4    | | | {vbptr}
8    | | | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | | | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | | | var4: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
20   | | | var5: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
24   | | +---
24   | | var21: ClassType{1}
52   | | var22: ClassType{1}
80   | | var23: ClassType{1}
108  | | var24: ClassType{1}
136  | +---
136  | var29: AbstractType{0}
140  +---
140  +--- (virtual base class C0)
140  | {vfptr}
144  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 144;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 140;
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

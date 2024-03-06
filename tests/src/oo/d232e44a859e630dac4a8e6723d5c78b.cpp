// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
C1 (special_constructor);
};
struct C2 : public C1 {
/* method id 406 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C2 {
/* method id 408 */ void func4 ();
/* method id 409 */ virtual void**** func5 (void**** v16, void**** v17, void**** v18, void**** v19);
/* method id 410 */ virtual void* func1 ();
/* method id 411 */ virtual abstract_0 func3 (void**** v20);
/* method id 412 */ C3 ();
C3 (special_constructor);
};
abstract_0 func8 ();
void*** func9 (void**** v23);
abstract_0 func10 (void**** v24, void**** v25);
void*** func11 ();
// definitions
/* method id 400 */ void C0::func0 () {
return;

}
/* method id 401 */ void* C0::func0 (void**** v0) {
void**** v1 = new void*** ();
void**** v2 = new void*** ();
void**** v3 = new void*** ();
void**** v4 = new void*** ();
::func9(v1);
::func9(v1);
::func9(v1);
::func9(v1);
return ((void*) 0);

}
/* method id 402 */ C0::~C0 () {
void**** v5 = new void*** ();
void**** v6 = new void*** ();
void**** v7 = new void*** ();
delete (new C2 ());
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

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ void C3::func4 () {
void**** v15 = new void*** ();
return;

}
/* method id 409 */ void**** C3::func5 (void**** v16, void**** v17, void**** v18, void**** v19) {
return v18;

}
/* method id 410 */ void* C3::func1 () {
return ((void*) 0);

}
/* method id 411 */ abstract_0 C3::func3 (void**** v20) {
return ::func10(v12, v12);

}
/* method id 412 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_0 func8 () {
void**** v21;
void**** v22;

return abstract_0();

}
void*** func9 (void**** v23) {

return ((void***) 0);

}
abstract_0 func10 (void**** v24, void**** v25) {
void**** v26;
void**** v27;
abstract_1** v28;

::func9(new void*** ());
::func9(new void*** ());
::func9(new void*** ());
::func9(new void*** ());
return ::func8();

}
void*** func11 () {
void**** v29;

return new void** ();

}
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
class C1    size(20)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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
0    | +--- (base class C1)
0    | | {vbptr}
4    | +---
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
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
class C3    size(24)
0    +---
0    | {vfptr}
4    | +--- (base class C2)
4    | | +--- (base class C1)
4    | | | {vbptr}
8    | | +---
8    | +---
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
24   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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

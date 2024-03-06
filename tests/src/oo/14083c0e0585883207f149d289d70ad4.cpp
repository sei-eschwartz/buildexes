// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
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
/* method id 402 */ virtual void* func2 ();
/* method id 403 */ virtual void func0 ();
/* method id 404 */ C1 ();
C1 (special_constructor);
void** v13;
void** v14;
void** v15;
void** v16;
};
struct C2 : public C0 {
/* method id 406 */ void* func1 (void** v17, abstract_0 v18, abstract_0 v19, abstract_0 v20);
/* method id 407 */ C2 ();
C2 (special_constructor);
void** v25;
void* v26;
abstract_2 v27;
abstract_0 v28;
};
struct C3 : public virtual C2 {
/* method id 408 */ virtual void* func5 (abstract_0 v29, abstract_3 v30, abstract_3 v31, abstract_2 v32);
/* method id 409 */ C3 ();
C3 (special_constructor);
void** v37;
};
void func7 (abstract_5 v38, void** v39, abstract_1 v40);
void func8 (abstract_3 v41);
void* func9 (abstract_3 v44, void* v45, abstract_2 v46, abstract_5 v47);
void func10 (abstract_3 v49, abstract_5 v50, abstract_3 v51);
// definitions
/* method id 400 */ C0::~C0 () {
::func7(abstract_5(), new void* (), abstract_1());
::func7(abstract_5(), new void* (), abstract_1());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void* C1::func2 () {
void** v0 = ((void**) 0);
void** v1 = ((void**) 0);
void** v2 = ((void**) 0);
void** v3 = ((void**) 0);
v16 = v16;
v16 = v16;
v16 = v16;
return ((void*) 0);

}
/* method id 403 */ void C1::func0 () {
void** v4 = new void* ();
void** v5 = new void* ();
void** v6 = new void* ();
void** v7 = new void* ();
return;

}
/* method id 404 */ C1::C1 () {
void** v8 = ((void**) 0);
void** v9 = ((void**) 0);
void** v10 = ((void**) 0);
void** v11 = ((void**) 0);
v8 = v16;
v8 = v16;
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ void* C2::func1 (void** v17, abstract_0 v18, abstract_0 v19, abstract_0 v20) {
return (((C1*) 0))->C1::func2();

}
/* method id 407 */ C2::C2 () {
void** v21 = new void* ();
abstract_0 v22 = abstract_0();
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
v27 = v27;
v27 = v27;
v27 = v27;
v27 = v27;
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ void* C3::func5 (abstract_0 v29, abstract_3 v30, abstract_3 v31, abstract_2 v32) {
abstract_3 v33 = abstract_3();
abstract_4 v34 = abstract_4();
abstract_2 v35 = abstract_2();
abstract_0 v36 = abstract_0();
return v26;

}
/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func7 (abstract_5 v38, void** v39, abstract_1 v40) {

return;

}
void func8 (abstract_3 v41) {
abstract_2 v42;
abstract_2 v43;

return;

}
void* func9 (abstract_3 v44, void* v45, abstract_2 v46, abstract_5 v47) {
void** v48;

v44 = v44;
v44 = v44;
v44 = v44;
return v45;

}
void func10 (abstract_3 v49, abstract_5 v50, abstract_3 v51) {

return ::func8(v51);

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
8    | var13: PtrType{PtrType{VoidType{}}}
12   | var14: PtrType{PtrType{VoidType{}}}
16   | var15: PtrType{PtrType{VoidType{}}}
20   | var16: PtrType{PtrType{VoidType{}}}
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
class C2    size(20)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var25: PtrType{PtrType{VoidType{}}}
8    | var26: PtrType{VoidType{}}
12   | var27: AbstractType{2}
16   | var28: AbstractType{0}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var37: PtrType{PtrType{VoidType{}}}
12   +---
12   +--- (virtual base class C2)
12   | +--- (base class C0)
12   | | {vfptr}
16   | +---
16   | var25: PtrType{PtrType{VoidType{}}}
20   | var26: PtrType{VoidType{}}
24   | var27: AbstractType{2}
28   | var28: AbstractType{0}
32   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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

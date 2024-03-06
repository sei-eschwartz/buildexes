// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
/* method id 402 */ void* func2 ();
/* method id 403 */ virtual void func0 (void* v2);
C0 (special_constructor);
void* v4;
abstract_0 v5;
};
struct C1 : public virtual C0 {
/* method id 404 */ void* func3 ();
/* method id 405 */ C1 ();
/* method id 406 */ virtual void func1 ();
/* method id 407 */ virtual ~C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public C1 {
/* method id 408 */ virtual void* func2 (abstract_0 v8, abstract_0 v9);
/* method id 409 */ C2 ();
/* method id 410 */ void* func0 (void* v10, abstract_0 v11);
/* method id 411 */ virtual void* func1 (void** v19, void* v20, C1 v21, void** v22);
C2 (special_constructor);
abstract_0 v27;
void** v28;
void** v29;
void* v30;
};
void* func5 (C1 v31, abstract_0 v32);
void* func6 (C1 v33, abstract_0 v34, C1 v35);
void* func7 (abstract_0 v39, abstract_0 v40, abstract_0 v41, void** v42);
void* func8 (abstract_0 v46, void** v47, abstract_0 v48, abstract_0 v49);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C1 ());
return;

}
/* method id 401 */ C0::C0 () {
void* v0 = ((void*) 0);
return;

}
/* method id 402 */ void* C0::func2 () {
void* v1 = ((void*) 0);
return v4;

}
/* method id 403 */ void C0::func0 (void* v2) {
void* v3 = ((void*) 0);
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ void* C1::func3 () {
return v4;

}
/* method id 405 */ C1::C1 () {
return;

}
/* method id 406 */ void C1::func1 () {
void* v6 = ((void*) 0);
return;

}
/* method id 407 */ C1::~C1 () {
void* v7 = ((void*) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ void* C2::func2 (abstract_0 v8, abstract_0 v9) {
return v4;

}
/* method id 409 */ C2::C2 () {
delete (new C1 ());
return;

}
/* method id 410 */ void* C2::func0 (void* v10, abstract_0 v11) {
return v4;

}
/* method id 411 */ void* C2::func1 (void** v19, void* v20, C1 v21, void** v22) {
abstract_0 v23 = abstract_0();
void* v24 = ((void*) 0);
abstract_0 v25 = abstract_0();
abstract_0 v26 = abstract_0();
return v4;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

void* func5 (C1 v31, abstract_0 v32) {

delete (new C1 ());
return ::func7(v32, v32, v32, ((void**) 0));

}
void* func6 (C1 v33, abstract_0 v34, C1 v35) {
abstract_0 v36;
abstract_0 v37;
C1 v38;

delete (new C2 ());
return ((void*) 0);

}
void* func7 (abstract_0 v39, abstract_0 v40, abstract_0 v41, void** v42) {
abstract_0 v43;
abstract_0 v44;
C1 v45;

return ((void*) 0);

}
void* func8 (abstract_0 v46, void** v47, abstract_0 v48, abstract_0 v49) {
C1 v50;

return ((void*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var4: PtrType{VoidType{}}
8    | var5: AbstractType{0}
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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var4: PtrType{VoidType{}}
16   | var5: AbstractType{0}
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
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(36)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | +---
8    | var27: AbstractType{0}
12   | var28: PtrType{PtrType{VoidType{}}}
16   | var29: PtrType{PtrType{VoidType{}}}
20   | var30: PtrType{VoidType{}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var4: PtrType{VoidType{}}
32   | var5: AbstractType{0}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

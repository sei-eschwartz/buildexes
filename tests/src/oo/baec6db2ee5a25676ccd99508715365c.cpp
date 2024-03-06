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
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
/* method id 402 */ virtual void*** func0 ();
C0 (special_constructor);
void** v6;
void** v7;
};
struct C1 : public C0 {
/* method id 403 */ void*** func0 (void** v8, void** v9, void*** v10, void*** v11);
/* method id 404 */ void**** func0 (void** v13);
/* method id 405 */ C1 ();
/* method id 406 */ virtual ~C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 407 */ void**** func1 ();
/* method id 408 */ C2 ();
/* method id 409 */ void* func3 (void*** v25, abstract_1 v26, abstract_1 v27, C0 v28);
C2 (special_constructor);
abstract_1 v31;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 410 */ C3 ();
C3 (special_constructor);
void*** v36;
};
// definitions
/* method id 400 */ C0::~C0 () {
void** v0 = new void* ();
return;

}
/* method id 401 */ C0::C0 () {
v7 = new void* ();
v7 = new void* ();
v7 = new void* ();
v7 = new void* ();
return;

}
/* method id 402 */ void*** C0::func0 () {
void** v1 = ((void**) 0);
void** v2 = ((void**) 0);
void** v3 = ((void**) 0);
void** v4 = ((void**) 0);
delete (new C1 ());
return new void** ();

}
C0::C0 (special_constructor)  {}

/* method id 403 */ void*** C1::func0 (void** v8, void** v9, void*** v10, void*** v11) {
void*** v12 = new void** ();
delete (new C3 ());
return new void** ();

}
/* method id 404 */ void**** C1::func0 (void** v13) {
void** v14 = new void* ();
void* v15 = ((void*) 0);
void** v16 = new void* ();
void* v17 = ((void*) 0);
return new void*** ();

}
/* method id 405 */ C1::C1 () {
v6 = new void* ();
v6 = new void* ();
v6 = new void* ();
v6 = new void* ();
return;

}
/* method id 406 */ C1::~C1 () {
C0 v18 = *(&(*((new C0 ()))));
void*** v19 = new void** ();
void* v20 = ((void*) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ void**** C2::func1 () {
void*** v21 = ((void***) 0);
delete (new C2 ());
return new void*** ();

}
/* method id 408 */ C2::C2 () {
void** v22 = new void* ();
void** v23 = new void* ();
void** v24 = new void* ();
delete (new C2 ());
return;

}
/* method id 409 */ void* C2::func3 (void*** v25, abstract_1 v26, abstract_1 v27, C0 v28) {
return ((void*) 0);

}
C2::C2 (special_constructor)  {}

/* method id 410 */ C3::C3 () {
void* v32 = ((void*) 0);
abstract_2 v33 = abstract_2();
void*** v34 = new void** ();
void* v35 = ((void*) 0);
v34 = v34;
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var6: PtrType{PtrType{VoidType{}}}
8    | var7: PtrType{PtrType{VoidType{}}}
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
class C1    size(12)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var6: PtrType{PtrType{VoidType{}}}
8    | | var7: PtrType{PtrType{VoidType{}}}
12   | +---
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
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
class C2    size(4)
0    +---
0    | var31: AbstractType{1}
4    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(24)
0    +---
0    | {vbptr}
4    | var36: PtrType{DeletablePtrType{PtrType{VoidType{}}}}
8    +---
8    +--- (virtual base class C1)
8    | +--- (base class C0)
8    | | {vfptr}
12   | | var6: PtrType{PtrType{VoidType{}}}
16   | | var7: PtrType{PtrType{VoidType{}}}
20   | +---
20   +---
20   +--- (virtual base class C2)
20   | var31: AbstractType{1}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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
 const size_t model_offset = 20;
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

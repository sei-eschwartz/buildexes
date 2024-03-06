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
void** v10;
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
/* method id 407 */ virtual ~C2 ();
C2 (special_constructor);
void** v14;
};
struct C3 : public virtual C2 {
/* method id 408 */ virtual void*** func0 (void** v15, void** v16, void** v17, void** v18);
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
C3 (special_constructor);
abstract_0 v38;
void** v39;
};
void** func5 (void** v40, abstract_0 v41, abstract_0 v42, abstract_0 v43);
// definitions
/* method id 400 */ void*** C0::func0 () {
delete (new C1 ());
return ((void***) 0);

}
/* method id 401 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void* C1::func1 () {
void** v0 = ((void**) 0);
void** v1 = ((void**) 0);
delete (new C3 ());
return ((new C1 ()))->C1::func4(v10, v10, v10);

}
/* method id 403 */ C1::C1 () {
v10 = new void* ();
v10 = new void* ();
return;

}
/* method id 404 */ C1::~C1 () {
void** v2 = ((void**) 0);
v10 = new void* ();
return;

}
/* method id 405 */ void* C1::func4 (void** v5, void** v6, void** v7) {
void** v8 = new void* ();
void** v9 = new void* ();
(((C0*) 0))->C0::func0();
return ((void*) 0);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
v14 = new void* ();
v14 = new void* ();
v14 = new void* ();
v14 = new void* ();
return;

}
/* method id 407 */ C2::~C2 () {
void** v11 = new void* ();
void** v12 = new void* ();
void** v13 = new void* ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ void*** C3::func0 (void** v15, void** v16, void** v17, void** v18) {
void** v19 = new void* ();
v10 = v18;
v10 = v18;
v10 = v18;
v10 = v18;
return new void** ();

}
/* method id 409 */ C3::C3 () {
void** v20 = ((void**) 0);
abstract_0 v21 = abstract_0();
abstract_0 v22 = abstract_0();
void** v23 = ((void**) 0);
v10 = ((void**) 0);
v10 = ((void**) 0);
v10 = ((void**) 0);
v10 = ((void**) 0);
return;

}
/* method id 410 */ C3::~C3 () {
abstract_0 v24 = abstract_0();
abstract_0 v25 = abstract_0();
abstract_0 v26 = abstract_0();
abstract_0 v27 = abstract_0();
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void** func5 (void** v40, abstract_0 v41, abstract_0 v42, abstract_0 v43) {
abstract_0 v44;

return v40;

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var10: PtrType{PtrType{VoidType{}}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
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
 const size_t model_offset = 12;
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
8    | var14: PtrType{PtrType{VoidType{}}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var10: PtrType{PtrType{VoidType{}}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
8    | var38: AbstractType{0}
12   | var39: PtrType{PtrType{VoidType{}}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var10: PtrType{PtrType{VoidType{}}}
32   +---
32   +--- (virtual base class C2)
32   | {vfptr}
36   | {vbptr}
40   | var14: PtrType{PtrType{VoidType{}}}
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
 const size_t model_offset = 32;
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

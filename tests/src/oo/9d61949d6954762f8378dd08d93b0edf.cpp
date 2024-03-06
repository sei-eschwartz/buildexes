// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual void* func2 (void** v0, void** v1, void** v2, void** v3);
/* method id 403 */ C1 ();
/* method id 404 */ virtual ~C1 ();
/* method id 405 */ virtual void* func1 ();
C1 (special_constructor);
void** v32;
};
struct C2  {
/* method id 406 */ virtual void* func1 ();
/* method id 407 */ void* func1 (void** v34);
/* method id 408 */ C2 ();
C2 (special_constructor);
void** v35;
void** v36;
void** v37;
};
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C1 ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void* C1::func2 (void** v0, void** v1, void** v2, void** v3) {
void** v4 = ((void**) 0);
void** v5 = ((void**) 0);
void** v6 = ((void**) 0);
void** v7 = ((void**) 0);
delete (new C2 ());
return (((C1*) 0))->C1::func1();

}
/* method id 403 */ C1::C1 () {
void** v8 = ((void**) 0);
void** v9 = ((void**) 0);
void** v10 = ((void**) 0);
void** v11 = ((void**) 0);
return;

}
/* method id 404 */ C1::~C1 () {
void** v19 = ((void**) 0);
void** v20 = ((void**) 0);
void** v21 = ((void**) 0);
void** v22 = ((void**) 0);
return;

}
/* method id 405 */ void* C1::func1 () {
void** v30 = new void* ();
void** v31 = new void* ();
delete (new C2 ());
return ((void*) 0);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ void* C2::func1 () {
void** v33 = ((void**) 0);
return ((void*) 0);

}
/* method id 407 */ void* C2::func1 (void** v34) {
return ((void*) 0);

}
/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

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
8    | var32: PtrType{PtrType{VoidType{}}}
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
class C2    size(16)
0    +---
0    | {vfptr}
4    | var35: PtrType{PtrType{VoidType{}}}
8    | var36: PtrType{PtrType{VoidType{}}}
12   | var37: PtrType{PtrType{VoidType{}}}
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

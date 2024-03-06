// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 401 */ void func1 (void** v0);
/* method id 402 */ virtual void func0 (void** v3, void** v4, void** v5);
/* method id 403 */ C1 ();
/* method id 404 */ virtual void func0 ();
C1 (special_constructor);
};
struct C2 : public virtual C0 {
/* method id 405 */ C2 ();
C2 (special_constructor);
void** v13;
void** v14;
void** v15;
void** v16;
};
struct C3  {
/* method id 406 */ C3 ();
C3 (special_constructor);
void** v17;
void** v18;
void** v19;
};
void func5 ();
void func6 (void** v22, C3 v23);
// definitions
/* method id 400 */ C0::C0 () {
((new C1 ()))->C1::func1(new void* ());
((new C1 ()))->C1::func1(new void* ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func1 (void** v0) {
void** v1 = new void* ();
void** v2 = new void* ();
::func5();
::func5();
::func5();
::func5();
return ::func6(v1, *((new C3 ())));

}
/* method id 402 */ void C1::func0 (void** v3, void** v4, void** v5) {
void** v6 = new void* ();
void** v7 = new void* ();
void** v8 = new void* ();
void** v9 = new void* ();
return ::func6(new void* (), *(((C3*) 0)));

}
/* method id 403 */ C1::C1 () {
void** v10 = new void* ();
void** v11 = new void* ();
void** v12 = new void* ();
v10 = new void* ();
return;

}
/* method id 404 */ void C1::func0 () {
return ::func5();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

void func5 () {
void** v20;
void** v21;

((new C1 ()))->C1::func0();
return;

}
void func6 (void** v22, C3 v23) {
void** v24;
void** v25;
C3 v26;

delete (new C1 ());
return ::func5();

}
#include <iostream>
void check_driver() {
/*
class C0    size(0)
0    +---
0    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(4)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 4;
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
0    | {vbptr}
4    | var13: DeletablePtrType{PtrType{VoidType{}}}
8    | var14: DeletablePtrType{PtrType{VoidType{}}}
12   | var15: DeletablePtrType{PtrType{VoidType{}}}
16   | var16: DeletablePtrType{PtrType{VoidType{}}}
20   +---
20   +--- (virtual base class C0)
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
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(12)
0    +---
0    | var17: DeletablePtrType{PtrType{VoidType{}}}
4    | var18: DeletablePtrType{PtrType{VoidType{}}}
8    | var19: DeletablePtrType{PtrType{VoidType{}}}
12   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

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
/* method id 404 */ virtual ~C1 ();
/* method id 405 */ virtual void func3 (abstract_0 v6, abstract_0 v7, void* v8);
/* method id 406 */ C1 ();
C1 (special_constructor);
void* v11;
abstract_0 v12;
};
struct C2  {
/* method id 407 */ virtual void* func4 ();
/* method id 408 */ C2 ();
/* method id 409 */ virtual void* func0 (void* v13, abstract_0 v14);
/* method id 410 */ virtual ~C2 ();
C2 (special_constructor);
C1 v19;
C1 v20;
abstract_0 v21;
};
struct C3  {
/* method id 411 */ C3 ();
C3 (special_constructor);
C1 v22;
abstract_0 v23;
void*** v24;
void*** v25;
};
void func6 ();
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {
void* v0 = ((void*) 0);
::func6();
return;

}
/* method id 402 */ void* C0::func2 () {
void* v1 = ((void*) 0);
delete (new C1 ());
return v4;

}
/* method id 403 */ void C0::func0 (void* v2) {
void* v3 = ((void*) 0);
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::~C1 () {
return;

}
/* method id 405 */ void C1::func3 (abstract_0 v6, abstract_0 v7, void* v8) {
void* v9 = ((void*) 0);
return;

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ void* C2::func4 () {
return ((void*) 0);

}
/* method id 408 */ C2::C2 () {
(((C0*) 0))->C0::func0(((void*) 0));
v20 = *(&(v20));
v20 = *(&(v20));
return;

}
/* method id 409 */ void* C2::func0 (void* v13, abstract_0 v14) {
C1 v15 = *(&(*((new C1 ()))));
abstract_0 v16 = abstract_0();
C1 v17 = *(&(*((new C1 ()))));
delete (new C1 ());
return v13;

}
/* method id 410 */ C2::~C2 () {
C1 v18 = *((new C1 ()));
delete (new C1 ());
return;

}
C2::C2 (special_constructor)  {}

/* method id 411 */ C3::C3 () {
return;

}
C3::C3 (special_constructor)  {}

void func6 () {
void*** v26;
void* v27;
void*** v28;
abstract_0 v29;

v29 = v29;
v29 = v29;
return (((C1*) 0))->C1::func3(v29, v29, ((void*) 0));

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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var11: PtrType{VoidType{}}
12   | var12: AbstractType{0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var4: PtrType{VoidType{}}
24   | var5: AbstractType{0}
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
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(64)
0    +---
0    | {vfptr}
4    | var19: ClassType{1}
32   | var20: ClassType{1}
60   | var21: AbstractType{0}
64   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 64;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(40)
0    +---
0    | var22: ClassType{1}
28   | var23: AbstractType{0}
32   | var24: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
36   | var25: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
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

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
struct C1 : public C0 {
/* method id 402 */ C1 ();
/* method id 403 */ virtual void*** func2 (void*** v1, void*** v2, void*** v3);
/* method id 404 */ virtual void*** func3 (void*** v7);
/* method id 405 */ virtual void* func4 (abstract_0 v12, void*** v13, abstract_0 v14);
C1 (special_constructor);
void*** v17;
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
C2 (special_constructor);
void*** v18;
void*** v19;
void*** v20;
void*** v21;
};
struct C3 : public virtual C1 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual void func2 (abstract_1 v24, void*** v25, void*** v26);
C3 (special_constructor);
};
// definitions
/* method id 400 */ C0::~C0 () {
((C1*)(((C3*) 0)))->C1::func3(new void** ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
void*** v0 = new void** ();
v17 = v17;
v17 = v17;
v17 = v17;
v17 = v17;
return;

}
/* method id 403 */ void*** C1::func2 (void*** v1, void*** v2, void*** v3) {
void*** v4 = new void** ();
void*** v5 = new void** ();
void*** v6 = new void** ();
return v2;

}
/* method id 404 */ void*** C1::func3 (void*** v7) {
void*** v8 = new void** ();
void*** v9 = new void** ();
abstract_0 v10 = abstract_0();
abstract_0 v11 = abstract_0();
delete (new C3 ());
return v7;

}
/* method id 405 */ void* C1::func4 (abstract_0 v12, void*** v13, abstract_0 v14) {
C0 v15 = *(&(*((new C0 ()))));
abstract_0 v16 = abstract_0();
return ((void*) 0);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
void*** v22 = ((void***) 0);
void*** v23 = new void** ();
delete (new C0 ());
return;

}
/* method id 408 */ void C3::func2 (abstract_1 v24, void*** v25, void*** v26) {
delete (new C0 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

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
class C1    size(8)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var17: PtrType{PtrType{PtrType{VoidType{}}}}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
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
class C2    size(28)
0    +---
0    | {vbptr}
4    | var18: PtrType{PtrType{PtrType{VoidType{}}}}
8    | var19: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var20: PtrType{PtrType{PtrType{VoidType{}}}}
16   | var21: PtrType{PtrType{PtrType{VoidType{}}}}
20   +---
20   +--- (virtual base class C1)
20   | +--- (base class C0)
20   | | {vfptr}
24   | +---
24   | var17: PtrType{PtrType{PtrType{VoidType{}}}}
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
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | +--- (base class C0)
8    | | {vfptr}
12   | +---
12   | var17: PtrType{PtrType{PtrType{VoidType{}}}}
16   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 16;
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

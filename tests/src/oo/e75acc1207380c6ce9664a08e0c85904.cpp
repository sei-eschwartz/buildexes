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
/* method id 402 */ virtual void* func2 ();
/* method id 403 */ virtual void* func3 (abstract_0 v4, abstract_0 v5);
C0 (special_constructor);
void* v7;
void* v8;
abstract_0 v9;
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
C1 (special_constructor);
void* v10;
};
struct C2 : public virtual C1 {
/* method id 406 */ virtual void func5 ();
/* method id 407 */ virtual void* func1 ();
/* method id 408 */ virtual void func0 (abstract_0 v12, abstract_0 v13);
/* method id 409 */ void* func6 (abstract_0 v14, abstract_0 v15, void* v16, void* v17);
/* method id 410 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C0 {
/* method id 412 */ C3 ();
C3 (special_constructor);
};
void* func10 (abstract_0 v18, abstract_0 v19);
void* func11 (abstract_0 v22);
void* func12 (void* v23, void* v24, abstract_0 v25);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {
void* v0 = ((void*) 0);
delete (new C1 ());
return;

}
/* method id 402 */ void* C0::func2 () {
void* v1 = ((void*) 0);
void* v2 = ((void*) 0);
abstract_0 v3 = abstract_0();
delete (new C2 ());
return ::func10(abstract_0(), abstract_0());

}
/* method id 403 */ void* C0::func3 (abstract_0 v4, abstract_0 v5) {
void* v6 = ((void*) 0);
delete (new C1 ());
return v8;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ void C2::func5 () {
void* v11 = ((void*) 0);
::func11(v9);
::func11(v9);
::func11(v9);
::func11(v9);
return;

}
/* method id 407 */ void* C2::func1 () {
return v7;

}
/* method id 408 */ void C2::func0 (abstract_0 v12, abstract_0 v13) {
delete (new C2 ());
return;

}
/* method id 409 */ void* C2::func6 (abstract_0 v14, abstract_0 v15, void* v16, void* v17) {
::func10(v15, v15);
v9 = abstract_0();
::func10(v15, v15);
::func10(v15, v15);
return v8;

}
/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()) {}

void* func10 (abstract_0 v18, abstract_0 v19) {
void* v20;
abstract_0 v21;

return v20;

}
void* func11 (abstract_0 v22) {

return ::func10(v22, v22);

}
void* func12 (void* v23, void* v24, abstract_0 v25) {
void* v26;
abstract_0 v27;
void* v28;
abstract_0 v29;

v23 = v26;
v23 = v26;
return v28;

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var7: PtrType{VoidType{}}
8    | var8: PtrType{VoidType{}}
12   | var9: AbstractType{0}
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
class C1    size(24)
0    +---
0    | {vbptr}
4    | var10: PtrType{VoidType{}}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var7: PtrType{VoidType{}}
16   | var8: PtrType{VoidType{}}
20   | var9: AbstractType{0}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
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
class C2    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var7: PtrType{VoidType{}}
16   | var8: PtrType{VoidType{}}
20   | var9: AbstractType{0}
24   +---
24   +--- (virtual base class C1)
24   | {vbptr}
28   | var10: PtrType{VoidType{}}
32   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var7: PtrType{VoidType{}}
8    | | var8: PtrType{VoidType{}}
12   | | var9: AbstractType{0}
16   | +---
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
void* v0;
void* v1;
};
struct C1 : public virtual C0 {
/* method id 401 */ virtual ~C1 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
void* v5;
void* v6;
void* v7;
void* v8;
};
struct C2 : public virtual C0, public C1 {
/* method id 403 */ C2 ();
/* method id 404 */ virtual ~C2 ();
/* method id 405 */ virtual void func2 ();
C2 (special_constructor);
void* v20;
void* v21;
void* v22;
void* v23;
};
void func3 (abstract_0 v24, abstract_0 v25, void* v26, abstract_0 v27);
void func4 (void* v32);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::~C1 () {
void* v2 = ((void*) 0);
void* v3 = ((void*) 0);
void* v4 = ((void*) 0);
return;

}
/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {
void* v9 = ((void*) 0);
void* v10 = ((void*) 0);
return;

}
/* method id 404 */ C2::~C2 () {
void* v11 = ((void*) 0);
return;

}
/* method id 405 */ void C2::func2 () {
void* v16 = ((void*) 0);
void* v17 = ((void*) 0);
void* v18 = ((void*) 0);
void* v19 = ((void*) 0);
v0 = v0;
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

void func3 (abstract_0 v24, abstract_0 v25, void* v26, abstract_0 v27) {
C0 v28;
C0 v29;
C2 v30;
abstract_0 v31;

return ::func4(v26);

}
void func4 (void* v32) {

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | var0: PtrType{VoidType{}}
4    | var1: PtrType{VoidType{}}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var5: PtrType{VoidType{}}
12   | var6: PtrType{VoidType{}}
16   | var7: PtrType{VoidType{}}
20   | var8: PtrType{VoidType{}}
24   +---
24   +--- (virtual base class C0)
24   | var0: PtrType{VoidType{}}
28   | var1: PtrType{VoidType{}}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
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
class C2    size(48)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var5: PtrType{VoidType{}}
12   | | var6: PtrType{VoidType{}}
16   | | var7: PtrType{VoidType{}}
20   | | var8: PtrType{VoidType{}}
24   | +---
24   | var20: PtrType{VoidType{}}
28   | var21: PtrType{VoidType{}}
32   | var22: PtrType{VoidType{}}
36   | var23: PtrType{VoidType{}}
40   +---
40   +--- (virtual base class C0)
40   | var0: PtrType{VoidType{}}
44   | var1: PtrType{VoidType{}}
48   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
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

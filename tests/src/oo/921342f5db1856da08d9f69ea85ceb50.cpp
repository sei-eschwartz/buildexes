// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
void** v0;
void** v1;
};
struct C1  {
/* method id 401 */ virtual void func0 (void** v2);
/* method id 402 */ C1 ();
C1 (special_constructor);
void** v3;
void** v4;
void** v5;
void** v6;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 403 */ C2 ();
/* method id 404 */ virtual ~C2 ();
C2 (special_constructor);
};
struct C3 : public C0, public virtual C1 {
/* method id 405 */ virtual abstract_0*** func0 (void** v19, void* v20);
/* method id 406 */ virtual abstract_0 func1 ();
/* method id 407 */ C3 ();
C3 (special_constructor);
abstract_1 v35;
void*** v36;
abstract_4 v37;
abstract_1 v38;
};
abstract_0 func2 (void* v39, void* v40, void* v41, void* v42);
abstract_0 func3 (void* v44, abstract_3 v45, void* v46, void* v47);
void* func4 ();
void*** func5 (void* v50);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 (void** v2) {
return;

}
/* method id 402 */ C1::C1 () {
delete (new C3 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::C2 () {
return;

}
/* method id 404 */ C2::~C2 () {
void** v11 = new void* ();
void** v12 = new void* ();
void** v13 = new void* ();
void** v14 = new void* ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 405 */ abstract_0*** C3::func0 (void** v19, void* v20) {
void* v21 = ((void*) 0);
void** v22 = new void* ();
v3 = v3;
v3 = v3;
return new abstract_0** ();

}
/* method id 406 */ abstract_0 C3::func1 () {
abstract_0** v23 = new abstract_0* ();
void* v24 = ((void*) 0);
void** v25 = new void* ();
void* v26 = ((void*) 0);
return abstract_0();

}
/* method id 407 */ C3::C3 () {
abstract_1 v27 = abstract_1();
void** v28 = new void* ();
void* v29 = ((void*) 0);
abstract_2 v30 = abstract_2();
delete (new C3 ());
v4 = v0;
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

abstract_0 func2 (void* v39, void* v40, void* v41, void* v42) {
abstract_4 v43;

return abstract_0();

}
abstract_0 func3 (void* v44, abstract_3 v45, void* v46, void* v47) {
abstract_0** v48;
void** v49;

delete (new C0 ());
v47 = v44;
return ::func2(((void*) 0), ((void*) 0), ((void*) 0), ((void*) 0));

}
void* func4 () {

return ((void*) 0);

}
void*** func5 (void* v50) {

delete (new C0 ());
return ((void***) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | var0: DeletablePtrType{PtrType{VoidType{}}}
4    | var1: DeletablePtrType{PtrType{VoidType{}}}
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
class C1    size(20)
0    +---
0    | {vfptr}
4    | var3: DeletablePtrType{PtrType{VoidType{}}}
8    | var4: DeletablePtrType{PtrType{VoidType{}}}
12   | var5: DeletablePtrType{PtrType{VoidType{}}}
16   | var6: DeletablePtrType{PtrType{VoidType{}}}
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
}
/*
class C2    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var3: DeletablePtrType{PtrType{VoidType{}}}
16   | var4: DeletablePtrType{PtrType{VoidType{}}}
20   | var5: DeletablePtrType{PtrType{VoidType{}}}
24   | var6: DeletablePtrType{PtrType{VoidType{}}}
28   +---
28   +--- (virtual base class C0)
28   | var0: DeletablePtrType{PtrType{VoidType{}}}
32   | var1: DeletablePtrType{PtrType{VoidType{}}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(52)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | | var0: DeletablePtrType{PtrType{VoidType{}}}
8    | | var1: DeletablePtrType{PtrType{VoidType{}}}
12   | +---
12   | {vbptr}
16   | var35: AbstractType{1}
20   | var36: PtrType{PtrType{PtrType{VoidType{}}}}
24   | var37: AbstractType{4}
28   | var38: AbstractType{1}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | var3: DeletablePtrType{PtrType{VoidType{}}}
40   | var4: DeletablePtrType{PtrType{VoidType{}}}
44   | var5: DeletablePtrType{PtrType{VoidType{}}}
48   | var6: DeletablePtrType{PtrType{VoidType{}}}
52   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
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

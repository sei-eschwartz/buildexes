// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
/* method id 402 */ virtual void func0 ();
/* method id 403 */ virtual void func1 (abstract_0** v4);
C0 (special_constructor);
void*** v9;
void* v10;
abstract_0** v11;
};
struct C1 : public C0 {
/* method id 404 */ ~C1 ();
/* method id 405 */ virtual void* func0 (abstract_0** v15, void*** v16, void*** v17, void*** v18);
/* method id 406 */ C1 ();
/* method id 407 */ virtual void func2 (void*** v24, abstract_0** v25);
C1 (special_constructor);
};
// definitions
/* method id 400 */ C0::~C0 () {
abstract_0** v0 = new abstract_0* ();
(((C1*) 0))->C1::func2(v9, new abstract_0* ());
(((C1*) 0))->C1::func2(v9, new abstract_0* ());
v11 = v11;
v11 = v11;
return;

}
/* method id 401 */ C0::C0 () {
(((C0*) 0))->C0::func1(new abstract_0* ());
return;

}
/* method id 402 */ void C0::func0 () {
abstract_0** v1 = new abstract_0* ();
abstract_0** v2 = new abstract_0* ();
abstract_0** v3 = new abstract_0* ();
v10 = v10;
v10 = v10;
v10 = v10;
v10 = v10;
return;

}
/* method id 403 */ void C0::func1 (abstract_0** v4) {
abstract_0** v5 = new abstract_0* ();
void*** v6 = new void** ();
abstract_1 v7 = abstract_1();
abstract_1 v8 = abstract_1();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::~C1 () {
return;

}
/* method id 405 */ void* C1::func0 (abstract_0** v15, void*** v16, void*** v17, void*** v18) {
void* v19 = ((void*) 0);
return ((void*) 0);

}
/* method id 406 */ C1::C1 () {
void*** v20 = ((void***) 0);
void*** v21 = ((void***) 0);
void*** v22 = ((void***) 0);
abstract_0** v23 = new abstract_0* ();
return;

}
/* method id 407 */ void C1::func2 (void*** v24, abstract_0** v25) {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var9: PtrType{PtrType{PtrType{VoidType{}}}}
8    | var10: PtrType{VoidType{}}
12   | var11: DeletablePtrType{PtrType{AbstractType{0}}}
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
class C1    size(16)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var9: PtrType{PtrType{PtrType{VoidType{}}}}
8    | | var10: PtrType{VoidType{}}
12   | | var11: DeletablePtrType{PtrType{AbstractType{0}}}
16   | +---
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
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

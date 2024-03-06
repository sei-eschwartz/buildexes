// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 ();
/* method id 401 */ virtual abstract_1 func1 (abstract_0** v0);
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_1** v4;
abstract_0** v5;
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ virtual void func3 (abstract_1** v8, abstract_1** v9, abstract_0** v10, abstract_0** v11);
/* method id 405 */ virtual abstract_2 func4 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_1** v17;
abstract_1** v18;
};
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return abstract_0();

}
/* method id 401 */ abstract_1 C0::func1 (abstract_0** v0) {
abstract_0** v1 = new abstract_0* ();
abstract_1** v2 = ((abstract_1**) 0);
abstract_0** v3 = new abstract_0* ();
delete (new C1 ());
return abstract_1();

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::~C1 () {
abstract_0** v6 = new abstract_0* ();
delete (new C1 ());
return;

}
/* method id 404 */ void C1::func3 (abstract_1** v8, abstract_1** v9, abstract_0** v10, abstract_0** v11) {
abstract_0** v12 = new abstract_0* ();
abstract_1** v13 = ((abstract_1**) 0);
abstract_1** v14 = ((abstract_1**) 0);
delete (new C0 ());
return;

}
/* method id 405 */ abstract_2 C1::func4 () {
abstract_1** v15 = ((abstract_1**) 0);
abstract_0** v16 = new abstract_0* ();
((C0*)(((C2*) 0)))->C0::func1(v16);
((C0*)(((C2*) 0)))->C0::func1(v16);
((C0*)(((C2*) 0)))->C0::func1(v16);
((C0*)(((C2*) 0)))->C0::func1(v16);
return abstract_2();

}
/* method id 406 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var4: PtrType{PtrType{AbstractType{1}}}
8    | var5: DeletablePtrType{PtrType{AbstractType{0}}}
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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var4: PtrType{PtrType{AbstractType{1}}}
16   | var5: DeletablePtrType{PtrType{AbstractType{0}}}
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
class C2    size(28)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | +---
8    | var17: PtrType{PtrType{AbstractType{1}}}
12   | var18: PtrType{PtrType{AbstractType{1}}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var4: PtrType{PtrType{AbstractType{1}}}
24   | var5: DeletablePtrType{PtrType{AbstractType{0}}}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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

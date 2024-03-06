// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 401 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0 {
/* method id 402 */ virtual ~C2 ();
/* method id 403 */ C2 ();
C2 (special_constructor);
abstract_0** v1;
abstract_0*** v2;
abstract_0*** v3;
abstract_0** v4;
};
abstract_0** func2 (abstract_0*** v5, abstract_0** v6, abstract_6 v7);
C1** func3 (abstract_0** v12, abstract_7 v13, C0 v14, abstract_0** v15);
C0 func4 (abstract_0*** v16, abstract_8 v17, abstract_8 v18, abstract_0*** v19);
C1**** func5 (abstract_9 v20, abstract_8 v21, abstract_6 v22, C1 v23);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 402 */ C2::~C2 () {
delete (new C2 ());
return;

}
/* method id 403 */ C2::C2 () {
abstract_0** v0 = new abstract_0* ();
delete (new C0 ());
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

abstract_0** func2 (abstract_0*** v5, abstract_0** v6, abstract_6 v7) {
abstract_0*** v8;
abstract_7 v9;
abstract_0*** v10;
abstract_0*** v11;

return v6;

}
C1** func3 (abstract_0** v12, abstract_7 v13, C0 v14, abstract_0** v15) {

delete (new C1 ());
return ((C1**) 0);

}
C0 func4 (abstract_0*** v16, abstract_8 v17, abstract_8 v18, abstract_0*** v19) {

return *((new C0 ()));

}
C1**** func5 (abstract_9 v20, abstract_8 v21, abstract_6 v22, C1 v23) {

return new C1*** ();

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
class C1    size(0)
0    +---
0    | +--- (base class C0)
0    | +---
0    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 1;
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
class C2    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var1: DeletablePtrType{PtrType{AbstractType{0}}}
12   | var2: PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}
16   | var3: PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}
20   | var4: DeletablePtrType{PtrType{AbstractType{0}}}
24   +---
24   +--- (virtual base class C0)
24   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

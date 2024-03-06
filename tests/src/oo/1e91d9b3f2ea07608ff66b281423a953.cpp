// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 402 */ C1 ();
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ virtual C0 func1 (C0* v7, C0* v8);
/* method id 405 */ C0* func0 ();
C1 (special_constructor);
C0* v14;
C0*** v15;
abstract_0 v16;
};
struct C2 : public virtual C1, public C0 {
/* method id 406 */ C2 ();
C2 (special_constructor);
C0* v17;
C0** v18;
C0*** v19;
C0* v20;
};
C0* func4 ();
abstract_1 func5 (C0* v21, C0* v22);
C0 func6 ();
C0 func7 (C0* v23, C0* v24);
// definitions
/* method id 400 */ C0::~C0 () {
::func7(&(::func6()), this);
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
delete (new C2 ());
return;

}
/* method id 403 */ C1::~C1 () {
C0* v3 = ((C0*) 0);
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
C0* v6 = ((C0*) 0);
return;

}
/* method id 404 */ C0 C1::func1 (C0* v7, C0* v8) {
v15 = new C0** ();
return ::func7(v8, v8);

}
/* method id 405 */ C0* C1::func0 () {
C0** v13 = new C0* ();
return v14;

}
C1::C1 (special_constructor)  {}

/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

C0* func4 () {

return &(::func6());

}
abstract_1 func5 (C0* v21, C0* v22) {

return abstract_1();

}
C0 func6 () {

return ::func7(((C0*) 0), ((C0*) 0));

}
C0 func7 (C0* v23, C0* v24) {

return ((new C1 ()))->C1::func1(v23, v23);

}
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
4    | var14: PtrType{ClassType{0}}
8    | var15: PtrType{PtrType{PtrType{ClassType{0}}}}
12   | var16: AbstractType{0}
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
}
/*
class C2    size(40)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | {vbptr}
8    | var17: PtrType{ClassType{0}}
12   | var18: DeletablePtrType{PtrType{ClassType{0}}}
16   | var19: PtrType{PtrType{PtrType{ClassType{0}}}}
20   | var20: PtrType{ClassType{0}}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | var14: PtrType{ClassType{0}}
32   | var15: PtrType{PtrType{PtrType{ClassType{0}}}}
36   | var16: AbstractType{0}
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

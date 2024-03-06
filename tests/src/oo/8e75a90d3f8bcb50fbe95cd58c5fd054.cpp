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
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_1** v8;
C0* v9;
};
struct C2  {
/* method id 405 */ ~C2 ();
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_1** v12;
abstract_0* v13;
abstract_1** v14;
};
struct C3 : public C1, public virtual C2 {
/* method id 407 */ virtual ~C3 ();
/* method id 408 */ virtual void func1 ();
/* method id 409 */ C0 func1 (C0* v16);
/* method id 410 */ virtual abstract_5 func0 (C0* v17, C0* v18, abstract_1* v19);
/* method id 411 */ C3 ();
C3 (special_constructor);
abstract_0* v20;
abstract_0* v21;
abstract_0* v22;
abstract_1* v23;
};
abstract_1 func5 (C0* v24, C3 v25);
abstract_1 func6 ();
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C2 ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
return v9;

}
/* method id 403 */ C1::~C1 () {
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
abstract_1** v3 = new abstract_1* ();
v1 = ((C0*) 0);
v1 = ((C0*) 0);
v1 = ((C0*) 0);
v1 = ((C0*) 0);
return;

}
/* method id 404 */ C1::C1 () {
abstract_1** v4 = new abstract_1* ();
C0* v5 = &(*(((C0*) 0)));
C0* v6 = &(*(((C0*) 0)));
C0* v7 = ((C0*) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::~C2 () {
v12 = v12;
v12 = v12;
v12 = v12;
v12 = v12;
return;

}
/* method id 406 */ C2::C2 () {
abstract_0* v10 = ((abstract_0*) 0);
delete (new C1 ());
return;

}
C2::C2 (special_constructor)  {}

/* method id 407 */ C3::~C3 () {
v12 = new abstract_1* ();
v12 = new abstract_1* ();
return;

}
/* method id 408 */ void C3::func1 () {
abstract_1** v15 = new abstract_1* ();
return;

}
/* method id 409 */ C0 C3::func1 (C0* v16) {
return *(v9);

}
/* method id 410 */ abstract_5 C3::func0 (C0* v17, C0* v18, abstract_1* v19) {
v18 = v17;
return abstract_5();

}
/* method id 411 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_1 func5 (C0* v24, C3 v25) {

return abstract_1();

}
abstract_1 func6 () {

return abstract_1();

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var8: DeletablePtrType{PtrType{AbstractType{1}}}
12   | var9: PtrType{ClassType{0}}
16   +---
16   +--- (virtual base class C0)
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
class C2    size(12)
0    +---
0    | var12: DeletablePtrType{PtrType{AbstractType{1}}}
4    | var13: PtrType{AbstractType{0}}
8    | var14: DeletablePtrType{PtrType{AbstractType{1}}}
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(44)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var8: DeletablePtrType{PtrType{AbstractType{1}}}
12   | | var9: PtrType{ClassType{0}}
16   | +---
16   | var20: PtrType{AbstractType{0}}
20   | var21: PtrType{AbstractType{0}}
24   | var22: PtrType{AbstractType{0}}
28   | var23: PtrType{AbstractType{1}}
32   +---
32   +--- (virtual base class C0)
32   +---
32   +--- (virtual base class C2)
32   | var12: DeletablePtrType{PtrType{AbstractType{1}}}
36   | var13: PtrType{AbstractType{0}}
40   | var14: DeletablePtrType{PtrType{AbstractType{1}}}
44   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

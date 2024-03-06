// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
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
};
struct C3 : public virtual C1, public C2 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ virtual C0* func2 ();
C3 (special_constructor);
abstract_0* v23;
C0* v24;
abstract_0* v25;
};
abstract_0 func3 (abstract_3** v26, C0* v27, C0 v28, abstract_1** v29);
abstract_1 func4 (abstract_1** v34, C0* v35);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C1 ());
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
delete (new C0 ());
return;

}
/* method id 404 */ C1::C1 () {
abstract_1** v4 = new abstract_1* ();
C0* v5 = &(*(((C0*) 0)));
C0* v6 = &(*(((C0*) 0)));
C0* v7 = ((C0*) 0);
v6 = (C0*)(((C1*) 0));
v6 = (C0*)(((C1*) 0));
v6 = (C0*)(((C1*) 0));
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::~C2 () {
return;

}
/* method id 406 */ C2::C2 () {
return;

}
C2::C2 (special_constructor)  {}

/* method id 407 */ C3::C3 () {
abstract_2 v14 = abstract_2();
return;

}
/* method id 408 */ C3::~C3 () {
C0* v19 = (new C0 ());
abstract_3** v20 = new abstract_3* ();
C0* v21 = (new C0 ());
::func4(new abstract_1* (), (C0*)((new C1 ())));
::func4(new abstract_1* (), (C0*)((new C1 ())));
::func4(new abstract_1* (), (C0*)((new C1 ())));
::func4(new abstract_1* (), (C0*)((new C1 ())));
return;

}
/* method id 409 */ C0* C3::func2 () {
C0* v22 = (new C0 ());
v8 = new abstract_1* ();
v8 = new abstract_1* ();
v8 = new abstract_1* ();
v8 = new abstract_1* ();
return v22;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func3 (abstract_3** v26, C0* v27, C0 v28, abstract_1** v29) {
C0* v30;
abstract_0* v31;
abstract_1** v32;
abstract_0* v33;

((C1*)((new C3 ())))->C1::func2();
((C1*)((new C3 ())))->C1::func2();
((C1*)((new C3 ())))->C1::func2();
((C1*)((new C3 ())))->C1::func2();
return abstract_0();

}
abstract_1 func4 (abstract_1** v34, C0* v35) {

((C1*)((new C3 ())))->C1::func2();
((C1*)((new C3 ())))->C1::func2();
((C1*)((new C3 ())))->C1::func2();
((C1*)((new C3 ())))->C1::func2();
return abstract_1();

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var8: DeletablePtrType{PtrType{AbstractType{1}}}
12   | var9: PtrType{ClassType{0}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
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
class C2    size(0)
0    +---
0    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 1;
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
0    | +--- (base class C2)
0    | +---
0    | {vbptr}
4    | var23: PtrType{AbstractType{0}}
8    | var24: PtrType{ClassType{0}}
12   | var25: PtrType{AbstractType{0}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   | {vtordisp for vbase 1}
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var8: DeletablePtrType{PtrType{AbstractType{1}}}
36   | var9: PtrType{ClassType{0}}
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
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
 const size_t model_offset = 0;
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

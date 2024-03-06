// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_1 { int x; };
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

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ virtual C0 func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4);
/* method id 404 */ C0 func1 ();
/* method id 405 */ C1 ();
C1 (special_constructor);
C0** v9;
abstract_1 v10;
};
struct C2  {
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_1 v12;
};
struct C3 : public virtual C1 {
/* method id 409 */ virtual abstract_2 func0 (C0** v13, C0** v14);
/* method id 410 */ ~C3 ();
/* method id 411 */ C3 ();
/* method id 412 */ virtual C0* func5 (C0** v22, C0** v23, abstract_4 v24, abstract_4 v25);
C3 (special_constructor);
C0** v29;
abstract_6 v30;
};
C0* func6 (abstract_7 v31, abstract_3 v32, abstract_5 v33, abstract_0* v34);
C0* func7 (C0** v35);
C0* func8 ();
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
return (new C0 ());

}
/* method id 403 */ C0 C1::func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4) {
C0** v5 = ((C0**) 0);
delete (new C2 ());
delete (new C3 ());
return *(&(*((C0*)(((C1*) 0)))));

}
/* method id 404 */ C0 C1::func1 () {
abstract_0* v6 = ((abstract_0*) 0);
C0** v7 = ((C0**) 0);
C0** v8 = ((C0**) 0);
delete (new C1 ());
return *(((C0*) 0));

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::~C2 () {
abstract_0* v11 = new abstract_0 ();
return;

}
/* method id 408 */ C2::C2 () {
return;

}
C2::C2 (special_constructor)  {}

/* method id 409 */ abstract_2 C3::func0 (C0** v13, C0** v14) {
return abstract_2();

}
/* method id 410 */ C3::~C3 () {
C0** v15 = new C0* ();
abstract_3 v16 = abstract_3();
C0** v17 = new C0* ();
abstract_3 v18 = abstract_3();
return;

}
/* method id 411 */ C3::C3 () {
abstract_1 v19 = abstract_1();
C0** v20 = new C0* ();
C0** v21 = new C0* ();
v29 = new C0* ();
v29 = new C0* ();
delete (new C1 ());
return;

}
/* method id 412 */ C0* C3::func5 (C0** v22, C0** v23, abstract_4 v24, abstract_4 v25) {
abstract_5 v26 = abstract_5();
abstract_5 v27 = abstract_5();
C0** v28 = ((C0**) 0);
delete (new C1 ());
return ((C0*) 0);

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

C0* func6 (abstract_7 v31, abstract_3 v32, abstract_5 v33, abstract_0* v34) {

delete (new C1 ());
v33 = abstract_5();
return (new C0 ());

}
C0* func7 (C0** v35) {
abstract_3 v36;
abstract_8 v37;
abstract_5 v38;
abstract_6 v39;

return (C0*)((new C1 ()));

}
C0* func8 () {
abstract_8 v40;
abstract_9 v41;
C0** v42;
C0** v43;

return ((C0*) 0);

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
8    | var9: PtrType{PtrType{ClassType{0}}}
12   | var10: AbstractType{1}
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
class C2    size(8)
0    +---
0    | {vfptr}
4    | var12: AbstractType{1}
8    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var29: PtrType{PtrType{ClassType{0}}}
12   | var30: AbstractType{6}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var9: PtrType{PtrType{ClassType{0}}}
32   | var10: AbstractType{1}
36   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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

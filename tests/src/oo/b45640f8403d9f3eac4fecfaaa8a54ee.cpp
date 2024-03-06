// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
/* method id 403 */ abstract_0 func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4);
/* method id 404 */ C0* func2 (C0* v6, C0*** v7, C0* v8);
/* method id 405 */ void func3 (C0* v9, abstract_0* v10);
/* method id 406 */ C1 ();
C1 (special_constructor);
C0* v12;
C0* v13;
};
struct C2 : public C0 {
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ C2 ();
/* method id 410 */ C0* func0 (abstract_1 v32);
C2 (special_constructor);
abstract_0* v33;
C0* v34;
abstract_0* v35;
};
struct C3 : public virtual C1 {
/* method id 411 */ virtual C0* func1 ();
/* method id 412 */ C0* func0 (abstract_0* v37);
/* method id 413 */ virtual C0* func0 (abstract_1 v38, abstract_0* v39);
/* method id 414 */ C0* func3 ();
/* method id 415 */ C3 ();
C3 (special_constructor);
C0* v42;
};
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
delete (new C0 ());
return v12;

}
/* method id 403 */ abstract_0 C1::func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4) {
C0* v5 = &(*((new C0 ())));
delete (new C1 ());
return abstract_0();

}
/* method id 404 */ C0* C1::func2 (C0* v6, C0*** v7, C0* v8) {
delete (new C3 ());
return v6;

}
/* method id 405 */ void C1::func3 (C0* v9, abstract_0* v10) {
abstract_1 v11 = abstract_1();
return;

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::~C2 () {
C0* v14 = (new C0 ());
C0*** v15 = new C0** ();
C0* v16 = (new C0 ());
C0* v17 = (new C0 ());
return;

}
/* method id 409 */ C2::C2 () {
abstract_1 v18 = abstract_1();
C0* v19 = ((C0*) 0);
C0* v20 = ((C0*) 0);
abstract_1 v21 = abstract_1();
return;

}
/* method id 410 */ C0* C2::func0 (abstract_1 v32) {
return v34;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 411 */ C0* C3::func1 () {
abstract_0* v36 = ((abstract_0*) 0);
delete (new C3 ());
return (((C3*) 0))->C3::func0(((abstract_0*) 0));

}
/* method id 412 */ C0* C3::func0 (abstract_0* v37) {
v12 = v12;
v12 = v12;
v12 = v12;
v12 = v12;
return ((C0*) 0);

}
/* method id 413 */ C0* C3::func0 (abstract_1 v38, abstract_0* v39) {
delete (new C1 ());
return (new C0 ());

}
/* method id 414 */ C0* C3::func3 () {
C0* v40 = (new C0 ());
abstract_1 v41 = abstract_1();
delete (new C3 ());
return v40;

}
/* method id 415 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

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
8    | var12: PtrType{ClassType{0}}
12   | var13: PtrType{ClassType{0}}
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
class C2    size(16)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var33: PtrType{AbstractType{0}}
8    | var34: PtrType{ClassType{0}}
12   | var35: PtrType{AbstractType{0}}
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
/*
class C3    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var42: PtrType{ClassType{0}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var12: PtrType{ClassType{0}}
28   | var13: PtrType{ClassType{0}}
32   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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

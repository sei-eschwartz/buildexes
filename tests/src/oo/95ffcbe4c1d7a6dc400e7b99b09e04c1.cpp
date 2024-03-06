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

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2**** func0 ();
/* method id 401 */ virtual abstract_0* func1 (abstract_4 v3, abstract_4 v4);
/* method id 402 */ virtual abstract_1* func1 (abstract_3 v6);
/* method id 403 */ virtual abstract_2** func1 (abstract_4 v11, abstract_3 v12);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 405 */ virtual void* func2 (abstract_3 v14, abstract_3 v15, abstract_4 v16, abstract_4 v17);
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ virtual abstract_2 func1 ();
/* method id 408 */ virtual void func0 (abstract_4 v19, abstract_4 v20);
/* method id 409 */ C1 ();
C1 (special_constructor);
};
struct C2 : public C1 {
/* method id 410 */ C2 ();
/* method id 411 */ virtual ~C2 ();
C2 (special_constructor);
abstract_6 v34;
abstract_3 v35;
};
struct C3  {
/* method id 412 */ virtual ~C3 ();
/* method id 413 */ C3 ();
C3 (special_constructor);
abstract_0*** v37;
abstract_8 v38;
abstract_9 v39;
abstract_9 v40;
};
// definitions
/* method id 400 */ abstract_2**** C0::func0 () {
abstract_3 v0 = abstract_3();
abstract_3 v1 = abstract_3();
abstract_4 v2 = abstract_4();
return new abstract_2*** ();

}
/* method id 401 */ abstract_0* C0::func1 (abstract_4 v3, abstract_4 v4) {
abstract_3 v5 = abstract_3();
return new abstract_0 ();

}
/* method id 402 */ abstract_1* C0::func1 (abstract_3 v6) {
return ((abstract_1*) 0);

}
/* method id 403 */ abstract_2** C0::func1 (abstract_4 v11, abstract_3 v12) {
abstract_3 v13 = abstract_3();
return ((abstract_2**) 0);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ void* C1::func2 (abstract_3 v14, abstract_3 v15, abstract_4 v16, abstract_4 v17) {
return ((void*) 0);

}
/* method id 406 */ C1::~C1 () {
abstract_0* v18 = new abstract_0 ();
return;

}
/* method id 407 */ abstract_2 C1::func1 () {
return abstract_2();

}
/* method id 408 */ void C1::func0 (abstract_4 v19, abstract_4 v20) {
abstract_3 v21 = abstract_3();
abstract_3 v22 = abstract_3();
return;

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C2::C2 () {
abstract_3 v23 = abstract_3();
abstract_4 v24 = abstract_4();
abstract_6 v25 = abstract_6();
abstract_4 v26 = abstract_4();
return;

}
/* method id 411 */ C2::~C2 () {
abstract_3 v27 = abstract_3();
abstract_7 v28 = abstract_7();
abstract_7 v29 = abstract_7();
abstract_0* v30 = new abstract_0 ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::~C3 () {
abstract_8 v36 = abstract_8();
return;

}
/* method id 413 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

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
class C1    size(4)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 4;
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
class C2    size(12)
0    +---
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | +---
4    | +---
4    | var34: AbstractType{6}
8    | var35: AbstractType{3}
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
 {
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
/*
class C3    size(20)
0    +---
0    | {vfptr}
4    | var37: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
8    | var38: AbstractType{8}
12   | var39: AbstractType{9}
16   | var40: AbstractType{9}
20   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

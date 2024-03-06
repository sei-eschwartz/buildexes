// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ virtual abstract_0* func0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 403 */ C1 ();
/* method id 404 */ virtual abstract_0 func0 ();
C1 (special_constructor);
abstract_0*** v6;
abstract_0*** v7;
};
struct C2  {
/* method id 405 */ C2 ();
/* method id 406 */ virtual ~C2 ();
/* method id 407 */ virtual abstract_3 func2 ();
/* method id 408 */ virtual abstract_4 func1 (C0 v29, abstract_1 v30, abstract_1 v31, abstract_1 v32);
C2 (special_constructor);
};
struct C3 : public C0, public C2, public virtual C1 {
/* method id 409 */ virtual abstract_0 func1 ();
/* method id 410 */ C3 ();
C3 (special_constructor);
abstract_5 v38;
abstract_5 v39;
abstract_1 v40;
abstract_1 v41;
};
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C2 ());
return;

}
/* method id 401 */ abstract_0* C0::func0 () {
return new abstract_0 ();

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {
abstract_0*** v1 = ((abstract_0***) 0);
abstract_0*** v2 = new abstract_0** ();
abstract_0*** v3 = new abstract_0** ();
abstract_0*** v4 = ((abstract_0***) 0);
delete (new C3 ());
return;

}
/* method id 404 */ abstract_0 C1::func0 () {
delete (new C2 ());
return abstract_0();

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {
abstract_0*** v8 = new abstract_0** ();
abstract_0*** v9 = new abstract_0** ();
abstract_0*** v10 = new abstract_0** ();
abstract_0*** v11 = new abstract_0** ();
return;

}
/* method id 406 */ C2::~C2 () {
abstract_0*** v20 = new abstract_0** ();
return;

}
/* method id 407 */ abstract_3 C2::func2 () {
return abstract_3();

}
/* method id 408 */ abstract_4 C2::func1 (C0 v29, abstract_1 v30, abstract_1 v31, abstract_1 v32) {
abstract_1 v33 = abstract_1();
abstract_5 v34 = abstract_5();
abstract_1 v35 = abstract_1();
abstract_0*** v36 = new abstract_0** ();
return abstract_4();

}
C2::C2 (special_constructor)  {}

/* method id 409 */ abstract_0 C3::func1 () {
abstract_0*** v37 = ((abstract_0***) 0);
return abstract_0();

}
/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()), C1(special_constructor ()) {}

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | var6: PtrType{PtrType{PtrType{AbstractType{0}}}}
8    | var7: PtrType{PtrType{PtrType{AbstractType{0}}}}
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 4;
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
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | +--- (base class C2)
4    | | {vfptr}
8    | +---
8    | {vbptr}
12   | var38: AbstractType{5}
16   | var39: AbstractType{5}
20   | var40: AbstractType{1}
24   | var41: AbstractType{1}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | var6: PtrType{PtrType{PtrType{AbstractType{0}}}}
36   | var7: PtrType{PtrType{PtrType{AbstractType{0}}}}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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

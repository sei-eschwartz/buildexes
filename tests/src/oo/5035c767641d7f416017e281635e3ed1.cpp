// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual abstract_0** func0 ();
C1 (special_constructor);
abstract_0* v0;
};
struct C2 : public C1, public virtual C0 {
/* method id 403 */ virtual abstract_0 func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, C1 v4);
/* method id 404 */ abstract_0* func0 (C1 v7, abstract_1 v8, abstract_1 v9, abstract_1 v10);
/* method id 405 */ C2 ();
/* method id 406 */ virtual ~C2 ();
C2 (special_constructor);
C1 v18;
abstract_3 v19;
abstract_3 v20;
C1 v21;
};
struct C3  {
/* method id 407 */ abstract_0* func0 ();
/* method id 408 */ C3 ();
C3 (special_constructor);
C1 v24;
};
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
delete (new C3 ());
delete (new C1 ());
return;

}
/* method id 402 */ abstract_0** C1::func0 () {
delete (new C3 ());
return ((abstract_0**) 0);

}
C1::C1 (special_constructor)  {}

/* method id 403 */ abstract_0 C2::func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, C1 v4) {
C1 v5 = *(((C1*) 0));
C1 v6 = *(((C1*) 0));
delete (new C3 ());
return abstract_0();

}
/* method id 404 */ abstract_0* C2::func0 (C1 v7, abstract_1 v8, abstract_1 v9, abstract_1 v10) {
return v0;

}
/* method id 405 */ C2::C2 () {
abstract_1 v11 = abstract_1();
C1 v12 = *((new C1 ()));
abstract_2 v13 = abstract_2();
C1 v14 = *((new C1 ()));
delete (new C1 ());
return;

}
/* method id 406 */ C2::~C2 () {
C1 v16 = *(((C1*) 0));
abstract_0* v17 = new abstract_0 ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 407 */ abstract_0* C3::func0 () {
abstract_0* v22 = new abstract_0 ();
delete (new C2 ());
return v22;

}
/* method id 408 */ C3::C3 () {
C1 v23 = *(&(*((new C1 ()))));
return;

}
C3::C3 (special_constructor)  {}

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
class C1    size(8)
0    +---
0    | {vfptr}
4    | var0: PtrType{AbstractType{0}}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(36)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var0: PtrType{AbstractType{0}}
8    | +---
8    | {vbptr}
12   | var18: ClassType{1}
20   | var19: AbstractType{3}
24   | var20: AbstractType{3}
28   | var21: ClassType{1}
36   +---
36   +--- (virtual base class C0)
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(8)
0    +---
0    | var24: ClassType{1}
8    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 8;
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

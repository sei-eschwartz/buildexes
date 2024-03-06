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
/* method id 402 */ virtual ~C1 ();
C1 (special_constructor);
C0* v5;
abstract_0 v6;
};
struct C2 : public C1, public C0 {
/* method id 403 */ virtual C0 func1 (C0* v7, abstract_1 v8, abstract_1 v9, abstract_0 v10);
/* method id 404 */ virtual ~C2 ();
/* method id 405 */ C2 ();
C2 (special_constructor);
abstract_0 v19;
abstract_3 v20;
abstract_0 v21;
abstract_2 v22;
};
struct C3 : public virtual C2 {
/* method id 406 */ virtual ~C3 ();
/* method id 407 */ C3 ();
C3 (special_constructor);
};
C0 func5 (C0* v24, C0* v25);
C0 func6 ();
C0 func7 (abstract_3 v27);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
v2 = v1;
return;

}
/* method id 402 */ C1::~C1 () {
C0 v3 = *(((C0*) 0));
abstract_0 v4 = abstract_0();
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C0 C2::func1 (C0* v7, abstract_1 v8, abstract_1 v9, abstract_0 v10) {
C0* v11 = ((C0*) 0);
abstract_2 v12 = abstract_2();
C0 v13 = *((new C0 ()));
C0* v14 = ((C0*) 0);
return v13;

}
/* method id 404 */ C2::~C2 () {
C0* v15 = (new C0 ());
C0* v16 = (new C0 ());
abstract_2 v17 = abstract_2();
C0 v18 = *(&(*(((C0*) 0))));
delete (new C1 ());
return;

}
/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 406 */ C3::~C3 () {
return;

}
/* method id 407 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

C0 func5 (C0* v24, C0* v25) {
abstract_0 v26;

v24 = v25;
return *(v24);

}
C0 func6 () {

::func7(abstract_3());
::func7(abstract_3());
return ::func5(&(::func7(abstract_3())), (new C0 ()));

}
C0 func7 (abstract_3 v27) {
C0 v28;

return v28;

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | var5: PtrType{ClassType{0}}
8    | var6: AbstractType{0}
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
class C2    size(28)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var5: PtrType{ClassType{0}}
8    | | var6: AbstractType{0}
12   | +---
12   | +--- (base class C0)
12   | +---
12   | var19: AbstractType{0}
16   | var20: AbstractType{3}
20   | var21: AbstractType{0}
24   | var22: AbstractType{2}
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
 const size_t model_offset = 12;
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
0    | {vbptr}
4    +---
4    +--- (virtual base class C2)
4    | +--- (base class C1)
4    | | {vfptr}
8    | | var5: PtrType{ClassType{0}}
12   | | var6: AbstractType{0}
16   | +---
16   | +--- (base class C0)
16   | +---
16   | var19: AbstractType{0}
20   | var20: AbstractType{3}
24   | var21: AbstractType{0}
28   | var22: AbstractType{2}
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

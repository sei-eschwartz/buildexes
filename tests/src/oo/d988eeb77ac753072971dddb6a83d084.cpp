// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ C0 ();
/* method id 403 */ virtual ~C0 ();
C0 (special_constructor);
abstract_0 v13;
abstract_1 v14;
abstract_1 v15;
abstract_1 v16;
};
struct C1  {
/* method id 404 */ C1 ();
/* method id 405 */ virtual ~C1 ();
/* method id 406 */ abstract_2 func0 ();
C1 (special_constructor);
};
struct C2  {
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_2* v41;
};
struct C3 : public virtual C0, public virtual C1, public virtual C2 {
/* method id 408 */ virtual abstract_2 func2 ();
/* method id 409 */ void func0 ();
/* method id 410 */ C3 ();
C3 (special_constructor);
abstract_0 v45;
};
abstract_2 func5 (abstract_4* v46, abstract_0 v47);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
delete (new C3 ());
v15 = v5;
return abstract_2();

}
/* method id 402 */ C0::C0 () {
abstract_1 v7 = abstract_1();
abstract_1 v8 = abstract_1();
abstract_1 v9 = abstract_1();
abstract_1 v10 = abstract_1();
delete (new C1 ());
return;

}
/* method id 403 */ C0::~C0 () {
abstract_1 v11 = abstract_1();
abstract_1 v12 = abstract_1();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
abstract_1 v17 = abstract_1();
abstract_0 v18 = abstract_0();
abstract_1 v19 = abstract_1();
abstract_1 v20 = abstract_1();
delete (new C2 ());
return;

}
/* method id 405 */ C1::~C1 () {
abstract_1 v21 = abstract_1();
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
::func5(((abstract_4*) 0), abstract_0());
return;

}
/* method id 406 */ abstract_2 C1::func0 () {
abstract_2* v37 = ((abstract_2*) 0);
abstract_2* v38 = ((abstract_2*) 0);
delete (new C3 ());
return abstract_2();

}
C1::C1 (special_constructor)  {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 408 */ abstract_2 C3::func2 () {
return abstract_2();

}
/* method id 409 */ void C3::func0 () {
abstract_0 v42 = abstract_0();
C0 v43 = *(((C0*) 0));
abstract_2* v44 = new abstract_2 ();
return;

}
/* method id 410 */ C3::C3 () {
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

abstract_2 func5 (abstract_4* v46, abstract_0 v47) {
abstract_1 v48;
C0 v49;
abstract_1 v50;
abstract_3** v51;

return ((new C0 ()))->C0::func0(v48, v48);

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var13: AbstractType{0}
8    | var14: AbstractType{1}
12   | var15: AbstractType{1}
16   | var16: AbstractType{1}
20   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 20;
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
0    | {vfptr}
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
}
/*
class C2    size(4)
0    +---
0    | var41: PtrType{AbstractType{2}}
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
0    | {vfptr}
4    | {vbptr}
8    | var45: AbstractType{0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var13: AbstractType{0}
20   | var14: AbstractType{1}
24   | var15: AbstractType{1}
28   | var16: AbstractType{1}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   +---
36   +--- (virtual base class C2)
36   | var41: PtrType{AbstractType{2}}
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
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
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
 const size_t model_offset = 36;
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

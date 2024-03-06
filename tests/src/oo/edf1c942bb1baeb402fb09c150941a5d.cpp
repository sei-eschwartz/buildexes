// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v7, abstract_1 v8);
/* method id 403 */ virtual abstract_2 func1 (abstract_1 v13, abstract_4 v14, abstract_4 v15, abstract_0 v16);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1 v21;
abstract_6 v22;
abstract_4 v23;
abstract_1 v24;
};
struct C1 : public C0 {
/* method id 405 */ virtual abstract_2 func1 (abstract_5 v25);
/* method id 406 */ ~C1 ();
/* method id 407 */ C1 ();
/* method id 408 */ virtual abstract_2 func2 ();
C1 (special_constructor);
abstract_4 v34;
};
struct C2  {
/* method id 409 */ C2 ();
/* method id 410 */ virtual abstract_2 func0 ();
/* method id 411 */ virtual ~C2 ();
C2 (special_constructor);
};
struct C3 : public C2, public C1 {
/* method id 412 */ C3 ();
C3 (special_constructor);
};
abstract_2 func4 ();
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
v3 = abstract_1();
v3 = abstract_1();
v3 = abstract_1();
return ::func4();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return abstract_2();

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
return ::func4();

}
/* method id 403 */ abstract_2 C0::func1 (abstract_1 v13, abstract_4 v14, abstract_4 v15, abstract_0 v16) {
abstract_1 v17 = abstract_1();
abstract_5 v18 = abstract_5();
abstract_3 v19 = abstract_3();
abstract_1 v20 = abstract_1();
return abstract_2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func1 (abstract_5 v25) {
abstract_1 v26 = abstract_1();
abstract_6 v27 = abstract_6();
abstract_6 v28 = abstract_6();
abstract_5 v29 = abstract_5();
return ::func4();

}
/* method id 406 */ C1::~C1 () {
v34 = abstract_4();
v34 = abstract_4();
return;

}
/* method id 407 */ C1::C1 () {
abstract_0 v30 = abstract_0();
abstract_4 v31 = abstract_4();
((C1*)((new C3 ())))->C1::func1(abstract_5());
((C1*)((new C3 ())))->C1::func1(abstract_5());
((C1*)((new C3 ())))->C1::func1(abstract_5());
((C1*)((new C3 ())))->C1::func1(abstract_5());
return;

}
/* method id 408 */ abstract_2 C1::func2 () {
abstract_4 v32 = abstract_4();
abstract_4 v33 = abstract_4();
::func4();
::func4();
::func4();
return abstract_2();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::C2 () {
abstract_4 v35 = abstract_4();
v35 = abstract_4();
return;

}
/* method id 410 */ abstract_2 C2::func0 () {
return abstract_2();

}
/* method id 411 */ C2::~C2 () {
return;

}
C2::C2 (special_constructor)  {}

/* method id 412 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()), C1(special_constructor ()) {}

abstract_2 func4 () {

return ((new C2 ()))->C2::func0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var21: AbstractType{1}
8    | var22: AbstractType{6}
12   | var23: AbstractType{4}
16   | var24: AbstractType{1}
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
class C1    size(24)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var21: AbstractType{1}
8    | | var22: AbstractType{6}
12   | | var23: AbstractType{4}
16   | | var24: AbstractType{1}
20   | +---
20   | var34: AbstractType{4}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
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
class C3    size(28)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | +---
4    | +--- (base class C1)
4    | | +--- (base class C0)
4    | | | {vfptr}
8    | | | var21: AbstractType{1}
12   | | | var22: AbstractType{6}
16   | | | var23: AbstractType{4}
20   | | | var24: AbstractType{1}
24   | | +---
24   | | var34: AbstractType{4}
28   | +---
28   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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

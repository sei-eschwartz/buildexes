// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_1 func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1* v5, abstract_1* v6, abstract_1* v7);
/* method id 402 */ virtual abstract_2 func0 (abstract_1* v8);
/* method id 403 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0 {
/* method id 405 */ C2 ();
/* method id 406 */ virtual ~C2 ();
/* method id 407 */ virtual abstract_2 func1 (abstract_3 v19);
/* method id 408 */ virtual abstract_2 func1 (abstract_0 v22);
C2 (special_constructor);
abstract_0 v25;
abstract_3 v26;
};
struct C3 : public C1 {
/* method id 409 */ C3 ();
C3 (special_constructor);
abstract_4 v31;
abstract_1* v32;
abstract_5 v33;
abstract_1* v34;
};
abstract_1 func3 ();
abstract_2 func4 ();
abstract_2 func5 (abstract_0 v41, abstract_6 v42);
abstract_2 func6 ();
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3) {
abstract_1* v4 = ((abstract_1*) 0);
return abstract_1();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1* v5, abstract_1* v6, abstract_1* v7) {
return abstract_2();

}
/* method id 402 */ abstract_2 C0::func0 (abstract_1* v8) {
abstract_0 v9 = abstract_0();
abstract_3 v10 = abstract_3();
abstract_3 v11 = abstract_3();
abstract_0 v12 = abstract_0();
::func3();
::func3();
::func3();
return abstract_2();

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
abstract_0 v13 = abstract_0();
abstract_1* v14 = ((abstract_1*) 0);
abstract_1* v15 = ((abstract_1*) 0);
abstract_1* v16 = ((abstract_1*) 0);
delete (new C1 ());
return;

}
/* method id 406 */ C2::~C2 () {
abstract_1* v17 = ((abstract_1*) 0);
abstract_1* v18 = ((abstract_1*) 0);
return;

}
/* method id 407 */ abstract_2 C2::func1 (abstract_3 v19) {
abstract_3 v20 = abstract_3();
abstract_0 v21 = abstract_0();
return ::func6();

}
/* method id 408 */ abstract_2 C2::func1 (abstract_0 v22) {
abstract_1* v23 = ((abstract_1*) 0);
abstract_0 v24 = abstract_0();
return abstract_2();

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
abstract_3 v27 = abstract_3();
abstract_1* v28 = new abstract_1 ();
abstract_4 v29 = abstract_4();
abstract_1* v30 = new abstract_1 ();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_1 func3 () {
abstract_1* v35;
abstract_5 v36;
abstract_0 v37;
abstract_1* v38;

return abstract_1();

}
abstract_2 func4 () {
abstract_5 v39;
abstract_0 v40;

return abstract_2();

}
abstract_2 func5 (abstract_0 v41, abstract_6 v42) {
abstract_4 v43;
abstract_1* v44;

return ::func6();

}
abstract_2 func6 () {

return abstract_2();

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
class C1    size(8)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
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
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var25: AbstractType{0}
12   | var26: AbstractType{3}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(24)
0    +---
0    | +--- (base class C1)
0    | | {vbptr}
4    | +---
4    | var31: AbstractType{4}
8    | var32: PtrType{AbstractType{1}}
12   | var33: AbstractType{5}
16   | var34: PtrType{AbstractType{1}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 24;
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

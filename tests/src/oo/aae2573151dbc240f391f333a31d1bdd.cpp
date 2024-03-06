// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_6 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v6, abstract_2* v7, abstract_0 v8);
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_0 v9;
abstract_2* v10;
abstract_3 v11;
abstract_3 v12;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual abstract_2 func0 (abstract_1 v13, abstract_4 v14, abstract_1 v15, abstract_4 v16);
/* method id 405 */ virtual abstract_2 func1 ();
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ C1 ();
C1 (special_constructor);
};
struct C2 : public C1 {
/* method id 408 */ virtual void func2 (abstract_1 v25, abstract_0 v26);
/* method id 409 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C2 {
/* method id 410 */ virtual abstract_2 func4 (abstract_1 v27);
/* method id 411 */ virtual abstract_6 func3 (abstract_1 v29, abstract_1 v30, abstract_1 v31);
/* method id 412 */ virtual abstract_6* func0 ();
/* method id 413 */ void func5 ();
/* method id 414 */ C3 ();
C3 (special_constructor);
};
void func7 ();
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4) {
abstract_0 v5 = abstract_0();
return abstract_2();

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v6, abstract_2* v7, abstract_0 v8) {
v10 = ((abstract_2*) 0);
v10 = ((abstract_2*) 0);
return abstract_2();

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_2 C1::func0 (abstract_1 v13, abstract_4 v14, abstract_1 v15, abstract_4 v16) {
abstract_1 v17 = abstract_1();
abstract_0 v18 = abstract_0();
abstract_1 v19 = abstract_1();
abstract_5 v20 = abstract_5();
return (((C1*) 0))->C1::func1();

}
/* method id 405 */ abstract_2 C1::func1 () {
return abstract_2();

}
/* method id 406 */ C1::~C1 () {
abstract_1 v21 = abstract_1();
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
v10 = ((abstract_2*) 0);
v10 = ((abstract_2*) 0);
return;

}
/* method id 407 */ C1::C1 () {
abstract_0 v24 = abstract_0();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ void C2::func2 (abstract_1 v25, abstract_0 v26) {
return;

}
/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ abstract_2 C3::func4 (abstract_1 v27) {
abstract_0 v28 = abstract_0();
delete (new C0 ());
v12 = v11;
return abstract_2();

}
/* method id 411 */ abstract_6 C3::func3 (abstract_1 v29, abstract_1 v30, abstract_1 v31) {
return abstract_6();

}
/* method id 412 */ abstract_6* C3::func0 () {
abstract_0 v32 = abstract_0();
abstract_2* v33 = ((abstract_2*) 0);
return ((abstract_6*) 0);

}
/* method id 413 */ void C3::func5 () {
delete (new C3 ());
return ::func7();

}
/* method id 414 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func7 () {
abstract_1 v34;
abstract_0 v35;
abstract_0 v36;

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var9: AbstractType{0}
8    | var10: PtrType{AbstractType{2}}
12   | var11: AbstractType{3}
16   | var12: AbstractType{3}
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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var9: AbstractType{0}
16   | var10: PtrType{AbstractType{2}}
20   | var11: AbstractType{3}
24   | var12: AbstractType{3}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(28)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | +---
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var9: AbstractType{0}
16   | var10: PtrType{AbstractType{2}}
20   | var11: AbstractType{3}
24   | var12: AbstractType{3}
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
 }}}
/*
class C3    size(28)
0    +---
0    | +--- (base class C2)
0    | | +--- (base class C1)
0    | | | {vfptr}
4    | | | {vbptr}
8    | | +---
8    | +---
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var9: AbstractType{0}
16   | var10: PtrType{AbstractType{2}}
20   | var11: AbstractType{3}
24   | var12: AbstractType{3}
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

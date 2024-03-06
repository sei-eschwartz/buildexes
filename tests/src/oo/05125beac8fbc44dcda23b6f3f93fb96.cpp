// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_1 func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 402 */ abstract_1* func0 ();
/* method id 403 */ C1 ();
/* method id 404 */ virtual abstract_1* func1 ();
/* method id 405 */ virtual abstract_3 func1 (abstract_1** v9, abstract_1** v10, abstract_1** v11);
C1 (special_constructor);
abstract_0 v12;
};
struct C2 : public virtual C0, public C1 {
/* method id 406 */ virtual abstract_3 func2 (abstract_1** v13, abstract_0 v14);
/* method id 407 */ C2 ();
/* method id 408 */ virtual abstract_1* func1 ();
/* method id 409 */ virtual abstract_1* func0 (abstract_1** v22);
C2 (special_constructor);
abstract_1** v24;
abstract_1* v25;
};
struct C3 : public virtual C1, public virtual C0 {
/* method id 410 */ C3 ();
/* method id 411 */ virtual ~C3 ();
/* method id 412 */ virtual abstract_1** func0 ();
/* method id 413 */ abstract_1* func1 (abstract_2 v31);
C3 (special_constructor);
abstract_6 v32;
abstract_1** v33;
abstract_0 v34;
};
abstract_1* func3 ();
abstract_1** func4 ();
abstract_3 func5 (abstract_6 v38);
abstract_1** func6 (abstract_1** v43, abstract_1** v44, abstract_0 v45);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3) {
abstract_0 v4 = abstract_0();
v2 = v2;
return abstract_1();

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_1* C1::func0 () {
abstract_1** v5 = ((abstract_1**) 0);
abstract_1** v6 = ((abstract_1**) 0);
abstract_1** v7 = ((abstract_1**) 0);
delete (new C3 ());
v12 = v12;
return new abstract_1 ();

}
/* method id 403 */ C1::C1 () {
abstract_2 v8 = abstract_2();
return;

}
/* method id 404 */ abstract_1* C1::func1 () {
return ((abstract_1*) 0);

}
/* method id 405 */ abstract_3 C1::func1 (abstract_1** v9, abstract_1** v10, abstract_1** v11) {
v12 = v12;
v12 = v12;
return abstract_3();

}
C1::C1 (special_constructor)  {}

/* method id 406 */ abstract_3 C2::func2 (abstract_1** v13, abstract_0 v14) {
abstract_1* v15 = new abstract_1 ();
delete (new C0 ());
return ::func5(abstract_6());

}
/* method id 407 */ C2::C2 () {
abstract_1* v16 = ((abstract_1*) 0);
delete (new C2 ());
return;

}
/* method id 408 */ abstract_1* C2::func1 () {
abstract_4 v17 = abstract_4();
delete (new C2 ());
return new abstract_1 ();

}
/* method id 409 */ abstract_1* C2::func0 (abstract_1** v22) {
abstract_1** v23 = new abstract_1* ();
return v25;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
return;

}
/* method id 411 */ C3::~C3 () {
v34 = v34;
v34 = abstract_0();
v34 = abstract_0();
v34 = abstract_0();
return;

}
/* method id 412 */ abstract_1** C3::func0 () {
abstract_5 v30 = abstract_5();
delete (new C3 ());
return new abstract_1* ();

}
/* method id 413 */ abstract_1* C3::func1 (abstract_2 v31) {
return ((abstract_1*) 0);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

abstract_1* func3 () {

return ((abstract_1*) 0);

}
abstract_1** func4 () {
abstract_0 v35;
abstract_1** v36;
abstract_4 v37;

return v36;

}
abstract_3 func5 (abstract_6 v38) {
abstract_5 v39;
abstract_5 v40;
abstract_6 v41;
abstract_1** v42;

return abstract_3();

}
abstract_1** func6 (abstract_1** v43, abstract_1** v44, abstract_0 v45) {
C1 v46;

return ((abstract_1**) 0);

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
0    | {vfptr}
4    | var12: AbstractType{0}
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
class C2    size(24)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var12: AbstractType{0}
8    | +---
8    | {vbptr}
12   | var24: PtrType{PtrType{AbstractType{1}}}
16   | var25: PtrType{AbstractType{1}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
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
class C3    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var32: AbstractType{6}
12   | var33: PtrType{PtrType{AbstractType{1}}}
16   | var34: AbstractType{0}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | var12: AbstractType{0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
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
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

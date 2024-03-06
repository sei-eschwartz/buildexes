// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ abstract_1 func0 (abstract_1** v4, abstract_1** v5);
/* method id 403 */ virtual abstract_1 func1 (abstract_1** v6, abstract_0 v7, abstract_2 v8, abstract_1** v9);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_0 v11;
};
struct C1  {
/* method id 405 */ virtual abstract_1 func0 (abstract_2 v12, abstract_2 v13, abstract_0 v14);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_1** v18;
};
struct C2 : public C1, public C0 {
/* method id 407 */ virtual abstract_1 func4 (abstract_2 v19, abstract_1** v20, abstract_2 v21);
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ C2 ();
C2 (special_constructor);
abstract_0 v29;
abstract_0 v30;
};
struct C3 : public C2 {
/* method id 410 */ virtual void func0 ();
/* method id 411 */ virtual ~C3 ();
/* method id 412 */ C3 ();
C3 (special_constructor);
abstract_7** v36;
abstract_0 v37;
abstract_7** v38;
abstract_1* v39;
};
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
delete (new C1 ());
delete (new C0 ());
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v4, abstract_1** v5) {
v11 = v11;
v11 = v11;
v11 = v11;
v11 = v11;
return abstract_1();

}
/* method id 403 */ abstract_1 C0::func1 (abstract_1** v6, abstract_0 v7, abstract_2 v8, abstract_1** v9) {
abstract_2 v10 = abstract_2();
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func0 (abstract_2 v12, abstract_2 v13, abstract_0 v14) {
abstract_1** v15 = new abstract_1* ();
abstract_1** v16 = new abstract_1* ();
abstract_2 v17 = abstract_2();
return abstract_1();

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 407 */ abstract_1 C2::func4 (abstract_2 v19, abstract_1** v20, abstract_2 v21) {
abstract_1** v22 = new abstract_1* ();
abstract_1** v23 = new abstract_1* ();
abstract_1** v24 = new abstract_1* ();
abstract_1** v25 = new abstract_1* ();
return abstract_1();

}
/* method id 408 */ C2::~C2 () {
abstract_3 v26 = abstract_3();
abstract_0 v27 = abstract_0();
abstract_1** v28 = new abstract_1* ();
return;

}
/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 410 */ void C3::func0 () {
abstract_0 v31 = abstract_0();
abstract_0 v32 = abstract_0();
return;

}
/* method id 411 */ C3::~C3 () {
abstract_1* v33 = new abstract_1 ();
abstract_1** v34 = new abstract_1* ();
abstract_7** v35 = new abstract_7* ();
v37 = v29;
return;

}
/* method id 412 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var11: AbstractType{0}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
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
4    | var18: DeletablePtrType{PtrType{AbstractType{1}}}
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
4    | | var18: DeletablePtrType{PtrType{AbstractType{1}}}
8    | +---
8    | +--- (base class C0)
8    | | {vfptr}
12   | | var11: AbstractType{0}
16   | +---
16   | var29: AbstractType{0}
20   | var30: AbstractType{0}
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
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(40)
0    +---
0    | +--- (base class C2)
0    | | +--- (base class C1)
0    | | | {vfptr}
4    | | | var18: DeletablePtrType{PtrType{AbstractType{1}}}
8    | | +---
8    | | +--- (base class C0)
8    | | | {vfptr}
12   | | | var11: AbstractType{0}
16   | | +---
16   | | var29: AbstractType{0}
20   | | var30: AbstractType{0}
24   | +---
24   | var36: DeletablePtrType{PtrType{AbstractType{7}}}
28   | var37: AbstractType{0}
32   | var38: DeletablePtrType{PtrType{AbstractType{7}}}
36   | var39: PtrType{AbstractType{1}}
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

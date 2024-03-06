// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_1* func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2);
/* method id 401 */ C0 ();
/* method id 402 */ ~C0 ();
/* method id 403 */ abstract_1* func1 (abstract_0 v9, abstract_0 v10, abstract_1*** v11, abstract_1*** v12);
C0 (special_constructor);
abstract_0 v14;
};
struct C1  {
/* method id 404 */ abstract_1* func1 (abstract_1*** v15);
/* method id 405 */ C1 ();
/* method id 406 */ virtual abstract_1* func0 (abstract_1*** v17, abstract_0 v18, abstract_1*** v19);
/* method id 407 */ abstract_1* func1 (abstract_0 v24, abstract_0 v25, abstract_1*** v26);
C1 (special_constructor);
abstract_2 v27;
abstract_1*** v28;
abstract_0 v29;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 408 */ virtual void func1 (abstract_1*** v30);
/* method id 409 */ C2 ();
C2 (special_constructor);
abstract_0 v35;
abstract_0 v36;
};
struct C3 : public virtual C2 {
/* method id 411 */ C3 ();
C3 (special_constructor);
abstract_0 v37;
};
// definitions
/* method id 400 */ abstract_1* C0::func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2) {
abstract_0 v3 = abstract_0();
abstract_0 v4 = abstract_0();
return new abstract_1 ();

}
/* method id 401 */ C0::C0 () {
abstract_0 v5 = abstract_0();
return;

}
/* method id 402 */ C0::~C0 () {
abstract_0 v6 = abstract_0();
abstract_0 v7 = abstract_0();
abstract_0 v8 = abstract_0();
return;

}
/* method id 403 */ abstract_1* C0::func1 (abstract_0 v9, abstract_0 v10, abstract_1*** v11, abstract_1*** v12) {
abstract_1*** v13 = new abstract_1** ();
return new abstract_1 ();

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_1* C1::func1 (abstract_1*** v15) {
abstract_1*** v16 = new abstract_1** ();
return ((abstract_1*) 0);

}
/* method id 405 */ C1::C1 () {
return;

}
/* method id 406 */ abstract_1* C1::func0 (abstract_1*** v17, abstract_0 v18, abstract_1*** v19) {
abstract_0 v20 = abstract_0();
abstract_0 v21 = abstract_0();
abstract_1*** v22 = new abstract_1** ();
abstract_1*** v23 = new abstract_1** ();
return ((abstract_1*) 0);

}
/* method id 407 */ abstract_1* C1::func1 (abstract_0 v24, abstract_0 v25, abstract_1*** v26) {
return new abstract_1 ();

}
C1::C1 (special_constructor)  {}

/* method id 408 */ void C2::func1 (abstract_1*** v30) {
abstract_1** v31 = ((abstract_1**) 0);
abstract_1** v32 = ((abstract_1**) 0);
abstract_1** v33 = ((abstract_1**) 0);
abstract_1** v34 = ((abstract_1**) 0);
return;

}
/* method id 409 */ C2::C2 () {
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 411 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var14: AbstractType{0}
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
class C1    size(16)
0    +---
0    | {vfptr}
4    | var27: AbstractType{2}
8    | var28: DeletablePtrType{PtrType{PtrType{AbstractType{1}}}}
12   | var29: AbstractType{0}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var35: AbstractType{0}
12   | var36: AbstractType{0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var14: AbstractType{0}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | var27: AbstractType{2}
32   | var28: DeletablePtrType{PtrType{PtrType{AbstractType{1}}}}
36   | var29: AbstractType{0}
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
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
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(48)
0    +---
0    | {vbptr}
4    | var37: AbstractType{0}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var14: AbstractType{0}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | var27: AbstractType{2}
24   | var28: DeletablePtrType{PtrType{PtrType{AbstractType{1}}}}
28   | var29: AbstractType{0}
32   +---
32   +--- (virtual base class C2)
32   | {vfptr}
36   | {vbptr}
40   | var35: AbstractType{0}
44   | var36: AbstractType{0}
48   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
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

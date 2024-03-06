// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_4 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ virtual abstract_0* func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3);
/* method id 402 */ virtual abstract_0* func0 (abstract_0** v4, abstract_0** v5, abstract_0** v6, abstract_0** v7);
/* method id 403 */ virtual abstract_0* func0 (abstract_0** v13, abstract_1 v14, abstract_1 v15, abstract_2 v16);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_0** v17;
};
struct C1  {
/* method id 405 */ virtual abstract_0** func1 (abstract_2 v18, abstract_1 v19, abstract_1 v20, abstract_3 v21);
/* method id 406 */ abstract_4 func2 (abstract_1 v23, abstract_1 v24, C0 v25, abstract_1 v26);
/* method id 407 */ C1 ();
/* method id 408 */ virtual abstract_0** func1 (abstract_0** v28);
C1 (special_constructor);
abstract_0*** v29;
abstract_5 v30;
abstract_1 v31;
abstract_2 v32;
};
struct C2 : public C1 {
/* method id 409 */ C2 ();
C2 (special_constructor);
abstract_1 v33;
};
struct C3 : public virtual C1, public C0 {
/* method id 410 */ C3 ();
C3 (special_constructor);
abstract_0** v34;
};
abstract_4 func5 ();
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
return new abstract_0 ();

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3) {
return new abstract_0 ();

}
/* method id 402 */ abstract_0* C0::func0 (abstract_0** v4, abstract_0** v5, abstract_0** v6, abstract_0** v7) {
return new abstract_0 ();

}
/* method id 403 */ abstract_0* C0::func0 (abstract_0** v13, abstract_1 v14, abstract_1 v15, abstract_2 v16) {
return new abstract_0 ();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_0** C1::func1 (abstract_2 v18, abstract_1 v19, abstract_1 v20, abstract_3 v21) {
abstract_2 v22 = abstract_2();
return new abstract_0* ();

}
/* method id 406 */ abstract_4 C1::func2 (abstract_1 v23, abstract_1 v24, C0 v25, abstract_1 v26) {
return ::func5();

}
/* method id 407 */ C1::C1 () {
C0 v27 = *(((C0*) 0));
return;

}
/* method id 408 */ abstract_0** C1::func1 (abstract_0** v28) {
return v28;

}
C1::C1 (special_constructor)  {}

/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

abstract_4 func5 () {
abstract_1 v35;
abstract_0*** v36;
abstract_5 v37;

return abstract_4();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var17: PtrType{PtrType{AbstractType{0}}}
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
class C1    size(20)
0    +---
0    | {vfptr}
4    | var29: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
8    | var30: AbstractType{5}
12   | var31: AbstractType{1}
16   | var32: AbstractType{2}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
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
4    | | var29: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
8    | | var30: AbstractType{5}
12   | | var31: AbstractType{1}
16   | | var32: AbstractType{2}
20   | +---
20   | var33: AbstractType{1}
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
 }}}
/*
class C3    size(36)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var17: PtrType{PtrType{AbstractType{0}}}
8    | +---
8    | {vbptr}
12   | var34: PtrType{PtrType{AbstractType{0}}}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | var29: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
24   | var30: AbstractType{5}
28   | var31: AbstractType{1}
32   | var32: AbstractType{2}
36   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
 const size_t model_offset = 0;
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

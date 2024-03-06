// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2);
/* method id 401 */ virtual abstract_0 func0 (abstract_0* v7, abstract_0* v8, abstract_1 v9);
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_0* v11;
};
struct C1  {
/* method id 403 */ virtual abstract_0 func0 ();
/* method id 404 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 405 */ C2 ();
C2 (special_constructor);
abstract_1 v16;
abstract_0* v17;
};
struct C3 : public C0, public C2, public virtual C1 {
/* method id 406 */ virtual abstract_0 func0 ();
/* method id 407 */ C3 ();
C3 (special_constructor);
abstract_0* v19;
abstract_0* v20;
abstract_1 v21;
abstract_1 v22;
};
abstract_0 func5 (abstract_1 v23);
abstract_0 func6 (C3 v28, abstract_0* v29, abstract_1 v30);
abstract_0* func7 (abstract_1 v31, C3 v32);
abstract_0* func8 (C3 v36, abstract_1 v37, abstract_1 v38, abstract_4 v39);
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2) {
delete (new C1 ());
return ::func6(*(((C3*) 0)), v11, abstract_1());

}
/* method id 401 */ abstract_0 C0::func0 (abstract_0* v7, abstract_0* v8, abstract_1 v9) {
abstract_0* v10 = ((abstract_0*) 0);
return ::func6(*((new C3 ())), v8, v9);

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0 C1::func0 () {
abstract_1 v12 = abstract_1();
abstract_0* v13 = ((abstract_0*) 0);
abstract_1 v14 = abstract_1();
abstract_0* v15 = ((abstract_0*) 0);
return ::func6(*(((C3*) 0)), v15, v14);

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 406 */ abstract_0 C3::func0 () {
abstract_1 v18 = abstract_1();
return ::func6(*((new C3 ())), v20, v16);

}
/* method id 407 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()), C1(special_constructor ()) {}

abstract_0 func5 (abstract_1 v23) {
abstract_0* v24;
abstract_0* v25;
abstract_1 v26;
abstract_1 v27;

return (&(*((new C1 ()))))->C1::func0();

}
abstract_0 func6 (C3 v28, abstract_0* v29, abstract_1 v30) {

return ((new C1 ()))->C1::func0();

}
abstract_0* func7 (abstract_1 v31, C3 v32) {
abstract_4 v33;
abstract_1 v34;
abstract_0* v35;

return v35;

}
abstract_0* func8 (C3 v36, abstract_1 v37, abstract_1 v38, abstract_4 v39) {

return ((abstract_0*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var11: PtrType{AbstractType{0}}
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
class C2    size(8)
0    +---
0    | var16: AbstractType{1}
4    | var17: PtrType{AbstractType{0}}
8    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(44)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var11: PtrType{AbstractType{0}}
8    | +---
8    | +--- (base class C2)
8    | | var16: AbstractType{1}
12   | | var17: PtrType{AbstractType{0}}
16   | +---
16   | {vbptr}
20   | var19: PtrType{AbstractType{0}}
24   | var20: PtrType{AbstractType{0}}
28   | var21: AbstractType{1}
32   | var22: AbstractType{1}
36   | {vtordisp for vbase 1}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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
 const size_t model_offset = 40;
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

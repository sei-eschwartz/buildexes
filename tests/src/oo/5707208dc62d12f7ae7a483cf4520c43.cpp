// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2);
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ C0 ();
/* method id 403 */ virtual abstract_0 func0 (abstract_0* v9, abstract_0* v10, abstract_1 v11, abstract_1 v12);
C0 (special_constructor);
abstract_1 v13;
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_0* v14;
};
struct C2 : public virtual C1 {
/* method id 406 */ abstract_0 func3 (abstract_1 v15, abstract_2 v16, abstract_2 v17, abstract_1 v18);
/* method id 407 */ C2 ();
/* method id 408 */ virtual abstract_0 func1 (abstract_1 v35, abstract_3 v36);
C2 (special_constructor);
abstract_0* v47;
};
abstract_0 func6 ();
abstract_0 func7 (abstract_3 v48);
abstract_0 func8 (abstract_0* v50);
abstract_0 func9 (abstract_3 v51);
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2) {
abstract_0* v3 = ((abstract_0*) 0);
abstract_0* v4 = ((abstract_0*) 0);
abstract_0* v5 = ((abstract_0*) 0);
abstract_0* v6 = ((abstract_0*) 0);
::func8(v2);
::func8(v2);
(((C2*) 0))->C2::func1(abstract_1(), abstract_3());
(((C2*) 0))->C2::func1(abstract_1(), abstract_3());
return abstract_0();

}
/* method id 401 */ C0::~C0 () {
abstract_0* v7 = new abstract_0 ();
abstract_0* v8 = new abstract_0 ();
return;

}
/* method id 402 */ C0::C0 () {
return;

}
/* method id 403 */ abstract_0 C0::func0 (abstract_0* v9, abstract_0* v10, abstract_1 v11, abstract_1 v12) {
v9 = new abstract_0 ();
v9 = new abstract_0 ();
v9 = new abstract_0 ();
v9 = new abstract_0 ();
return abstract_0();

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ abstract_0 C2::func3 (abstract_1 v15, abstract_2 v16, abstract_2 v17, abstract_1 v18) {
abstract_2 v19 = abstract_2();
abstract_3 v20 = abstract_3();
abstract_2 v21 = abstract_2();
abstract_1 v22 = abstract_1();
::func7(abstract_3());
delete (new C2 ());
::func7(abstract_3());
return ::func7(v20);

}
/* method id 407 */ C2::C2 () {
abstract_3 v23 = abstract_3();
abstract_3 v24 = abstract_3();
abstract_1 v25 = abstract_1();
abstract_3 v26 = abstract_3();
return;

}
/* method id 408 */ abstract_0 C2::func1 (abstract_1 v35, abstract_3 v36) {
abstract_1 v37 = abstract_1();
abstract_1 v38 = abstract_1();
abstract_1 v39 = abstract_1();
abstract_1 v40 = abstract_1();
return abstract_0();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

abstract_0 func6 () {

return ::func8(((abstract_0*) 0));

}
abstract_0 func7 (abstract_3 v48) {
abstract_2 v49;

::func8(((abstract_0*) 0));
::func8(((abstract_0*) 0));
v49 = abstract_2();
::func8(((abstract_0*) 0));
return abstract_0();

}
abstract_0 func8 (abstract_0* v50) {

return ::func9(abstract_3());

}
abstract_0 func9 (abstract_3 v51) {
abstract_2 v52;
abstract_2 v53;

return abstract_0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var13: AbstractType{1}
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
0    | {vbptr}
4    | var14: PtrType{AbstractType{0}}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var13: AbstractType{1}
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
0    | {vfptr}
4    | {vbptr}
8    | var47: PtrType{AbstractType{0}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var13: AbstractType{1}
20   +---
20   +--- (virtual base class C1)
20   | {vbptr}
24   | var14: PtrType{AbstractType{0}}
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
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

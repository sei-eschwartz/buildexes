// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ abstract_1 func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_1 func0 ();
/* method id 406 */ C1 ();
/* method id 407 */ virtual abstract_1 func1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 408 */ abstract_1 func3 (abstract_1* v22);
/* method id 409 */ virtual abstract_1 func1 (C0 v25);
/* method id 410 */ C2 ();
/* method id 411 */ virtual abstract_1 func0 ();
C2 (special_constructor);
abstract_0 v26;
abstract_1* v27;
abstract_3 v28;
abstract_3 v29;
};
abstract_1 func4 (abstract_0 v30);
abstract_1 func5 ();
abstract_1 func6 (abstract_0 v34);
abstract_1 func7 (abstract_0 v36);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
delete (new C2 ());
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 () {
return abstract_1();

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7) {
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func0 () {
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_1* v10 = ((abstract_1*) 0);
abstract_0 v11 = abstract_0();
return ::func5();

}
/* method id 406 */ C1::C1 () {
abstract_1* v12 = new abstract_1 ();
abstract_2 v13 = abstract_2();
C0 v14 = *(((C0*) 0));
(((C2*) 0))->C2::func3(v12);
(((C2*) 0))->C2::func3(v12);
v14 = *((new C0 ()));
return;

}
/* method id 407 */ abstract_1 C1::func1 () {
abstract_1* v17 = ((abstract_1*) 0);
return ::func4(abstract_0());

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ abstract_1 C2::func3 (abstract_1* v22) {
C0 v23 = *(((C0*) 0));
abstract_0 v24 = abstract_0();
::func5();
return abstract_1();

}
/* method id 409 */ abstract_1 C2::func1 (C0 v25) {
return ::func5();

}
/* method id 410 */ C2::C2 () {
return;

}
/* method id 411 */ abstract_1 C2::func0 () {
return abstract_1();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

abstract_1 func4 (abstract_0 v30) {
abstract_1* v31;
abstract_0 v32;
abstract_2 v33;

v32 = v32;
return abstract_1();

}
abstract_1 func5 () {

::func4(abstract_0());
::func4(abstract_0());
::func4(abstract_0());
return abstract_1();

}
abstract_1 func6 (abstract_0 v34) {
abstract_1* v35;

::func5();
return ::func5();

}
abstract_1 func7 (abstract_0 v36) {

delete (new C0 ());
return ::func5();

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
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
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var26: AbstractType{0}
12   | var27: PtrType{AbstractType{1}}
16   | var28: AbstractType{3}
20   | var29: AbstractType{3}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
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

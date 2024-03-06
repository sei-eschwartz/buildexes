// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ C0 ();
/* method id 403 */ virtual abstract_1 func0 ();
C0 (special_constructor);
abstract_2 v8;
abstract_2 v9;
abstract_1* v10;
abstract_0 v11;
};
struct C1 : public virtual C0 {
/* method id 404 */ ~C1 ();
/* method id 405 */ virtual abstract_1 func0 (abstract_1* v16);
/* method id 406 */ C1 ();
/* method id 407 */ abstract_1 func0 (abstract_0 v21);
C1 (special_constructor);
abstract_1* v22;
abstract_0 v23;
};
struct C2  {
/* method id 408 */ C2 ();
/* method id 409 */ virtual abstract_1 func0 (abstract_0 v25);
/* method id 410 */ virtual abstract_1 func0 ();
/* method id 411 */ virtual ~C2 ();
C2 (special_constructor);
};
abstract_1 func1 (abstract_1* v27, abstract_2 v28, abstract_1* v29, abstract_2 v30);
abstract_1* func2 ();
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
abstract_2 v4 = abstract_2();
delete (new C2 ());
return ::func1(new abstract_1 (), v9, new abstract_1 (), v9);

}
/* method id 402 */ C0::C0 () {
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
return;

}
/* method id 403 */ abstract_1 C0::func0 () {
abstract_1* v7 = ((abstract_1*) 0);
return abstract_1();

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::~C1 () {
abstract_2 v12 = abstract_2();
abstract_2 v13 = abstract_2();
abstract_2 v14 = abstract_2();
abstract_2 v15 = abstract_2();
return;

}
/* method id 405 */ abstract_1 C1::func0 (abstract_1* v16) {
v9 = abstract_2();
v9 = abstract_2();
v9 = abstract_2();
v9 = abstract_2();
return ::func1(new abstract_1 (), abstract_2(), new abstract_1 (), abstract_2());

}
/* method id 406 */ C1::C1 () {
abstract_3 v17 = abstract_3();
abstract_2 v18 = abstract_2();
abstract_4 v19 = abstract_4();
abstract_2 v20 = abstract_2();
delete (new C0 ());
return;

}
/* method id 407 */ abstract_1 C1::func0 (abstract_0 v21) {
return abstract_1();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {
abstract_2 v24 = abstract_2();
delete (new C1 ());
return;

}
/* method id 409 */ abstract_1 C2::func0 (abstract_0 v25) {
::func2();
::func2();
return ::func1(new abstract_1 (), abstract_2(), new abstract_1 (), abstract_2());

}
/* method id 410 */ abstract_1 C2::func0 () {
return abstract_1();

}
/* method id 411 */ C2::~C2 () {
abstract_0 v26 = abstract_0();
return;

}
C2::C2 (special_constructor)  {}

abstract_1 func1 (abstract_1* v27, abstract_2 v28, abstract_1* v29, abstract_2 v30) {
abstract_0 v31;

v27 = new abstract_1 ();
return abstract_1();

}
abstract_1* func2 () {

return new abstract_1 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var8: AbstractType{2}
8    | var9: AbstractType{2}
12   | var10: PtrType{AbstractType{1}}
16   | var11: AbstractType{0}
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
class C1    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var22: PtrType{AbstractType{1}}
12   | var23: AbstractType{0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var8: AbstractType{2}
24   | var9: AbstractType{2}
28   | var10: PtrType{AbstractType{1}}
32   | var11: AbstractType{0}
36   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_0 func0 (abstract_0* v0);
/* method id 401 */ abstract_0 func0 (abstract_0* v2, abstract_1 v3, abstract_1 v4, abstract_2 v5);
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_1 v10;
abstract_1 v11;
abstract_3 v12;
};
struct C1 : public C0 {
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ virtual abstract_0 func2 ();
/* method id 405 */ C1 ();
/* method id 406 */ virtual abstract_0 func2 (abstract_1 v19, abstract_4 v20);
C1 (special_constructor);
abstract_5 v25;
abstract_4 v26;
abstract_1 v27;
};
struct C2  {
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_1 v28;
abstract_1 v29;
abstract_1 v30;
abstract_1 v31;
};
struct C3  {
/* method id 408 */ C3 ();
/* method id 409 */ virtual ~C3 ();
C3 (special_constructor);
};
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0) {
abstract_0* v1 = ((abstract_0*) 0);
return abstract_0();

}
/* method id 401 */ abstract_0 C0::func0 (abstract_0* v2, abstract_1 v3, abstract_1 v4, abstract_2 v5) {
abstract_2 v6 = abstract_2();
abstract_1 v7 = abstract_1();
abstract_0* v8 = new abstract_0 ();
abstract_1 v9 = abstract_1();
delete (new C2 ());
v4 = v7;
return abstract_0();

}
/* method id 402 */ C0::C0 () {
v11 = v10;
v11 = v10;
v11 = v10;
v11 = v10;
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::~C1 () {
abstract_2 v13 = abstract_2();
delete (new C1 ());
return;

}
/* method id 404 */ abstract_0 C1::func2 () {
return abstract_0();

}
/* method id 405 */ C1::C1 () {
abstract_2 v15 = abstract_2();
abstract_3 v16 = abstract_3();
abstract_4 v17 = abstract_4();
abstract_1 v18 = abstract_1();
(((C1*) 0))->C1::func2(v10, v17);
(((C1*) 0))->C1::func2(v10, v17);
(((C1*) 0))->C1::func2(v10, v17);
(((C1*) 0))->C1::func2(v10, v17);
return;

}
/* method id 406 */ abstract_0 C1::func2 (abstract_1 v19, abstract_4 v20) {
abstract_0* v21 = ((abstract_0*) 0);
abstract_1 v22 = abstract_1();
abstract_4 v23 = abstract_4();
abstract_1 v24 = abstract_1();
return abstract_0();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 408 */ C3::C3 () {
abstract_5 v32 = abstract_5();
abstract_0** v33 = new abstract_0* ();
delete (new C0 ());
return;

}
/* method id 409 */ C3::~C3 () {
return;

}
C3::C3 (special_constructor)  {}

#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | var10: AbstractType{1}
4    | var11: AbstractType{1}
8    | var12: AbstractType{3}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
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
4    | +--- (base class C0)
4    | | var10: AbstractType{1}
8    | | var11: AbstractType{1}
12   | | var12: AbstractType{3}
16   | +---
16   | var25: AbstractType{5}
20   | var26: AbstractType{4}
24   | var27: AbstractType{1}
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
class C2    size(16)
0    +---
0    | var28: AbstractType{1}
4    | var29: AbstractType{1}
8    | var30: AbstractType{1}
12   | var31: AbstractType{1}
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ virtual abstract_2* func1 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_1 v3);
/* method id 402 */ virtual abstract_3 func1 (abstract_1 v5, abstract_1 v6, abstract_1 v7);
/* method id 403 */ virtual abstract_3* func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1 v9;
};
struct C1  {
/* method id 405 */ virtual ~C1 ();
/* method id 406 */ virtual abstract_3 func1 (abstract_1 v10, abstract_0 v11);
/* method id 407 */ abstract_3** func0 ();
/* method id 408 */ C1 ();
C1 (special_constructor);
abstract_0 v14;
abstract_0 v15;
};
struct C2  {
/* method id 409 */ virtual ~C2 ();
/* method id 410 */ C2 ();
/* method id 411 */ virtual abstract_2* func1 ();
/* method id 412 */ virtual abstract_3 func3 (abstract_1 v17, abstract_1 v18, abstract_0 v19, abstract_1 v20);
C2 (special_constructor);
abstract_0 v21;
};
struct C3 : public virtual C1 {
/* method id 413 */ ~C3 ();
/* method id 414 */ virtual abstract_3 func1 (abstract_1 v22, abstract_0 v23);
/* method id 415 */ virtual abstract_3** func0 (abstract_1 v26);
/* method id 416 */ abstract_5 func5 (abstract_4 v31, abstract_0 v32, abstract_4 v33, abstract_1 v34);
/* method id 417 */ C3 ();
C3 (special_constructor);
abstract_0 v37;
};
abstract_5 func7 (abstract_0 v38, abstract_0 v39, abstract_0 v40);
abstract_3* func8 ();
abstract_3 func9 (abstract_4 v44, abstract_1 v45, abstract_0 v46, abstract_1 v47);
abstract_3 func10 ();
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ abstract_2* C0::func1 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_1 v3) {
abstract_0 v4 = abstract_0();
delete (new C2 ());
return ((abstract_2*) 0);

}
/* method id 402 */ abstract_3 C0::func1 (abstract_1 v5, abstract_1 v6, abstract_1 v7) {
delete (new C2 ());
return abstract_3();

}
/* method id 403 */ abstract_3* C0::func0 () {
abstract_0 v8 = abstract_0();
delete (new C0 ());
return new abstract_3 ();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::~C1 () {
delete (new C3 ());
return;

}
/* method id 406 */ abstract_3 C1::func1 (abstract_1 v10, abstract_0 v11) {
abstract_0 v12 = abstract_0();
delete (new C0 ());
return abstract_3();

}
/* method id 407 */ abstract_3** C1::func0 () {
abstract_0 v13 = abstract_0();
v14 = abstract_0();
return ((abstract_3**) 0);

}
/* method id 408 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 409 */ C2::~C2 () {
delete (new C1 ());
return;

}
/* method id 410 */ C2::C2 () {
abstract_1 v16 = abstract_1();
return;

}
/* method id 411 */ abstract_2* C2::func1 () {
return new abstract_2 ();

}
/* method id 412 */ abstract_3 C2::func3 (abstract_1 v17, abstract_1 v18, abstract_0 v19, abstract_1 v20) {
return abstract_3();

}
C2::C2 (special_constructor)  {}

/* method id 413 */ C3::~C3 () {
delete (new C0 ());
return;

}
/* method id 414 */ abstract_3 C3::func1 (abstract_1 v22, abstract_0 v23) {
abstract_1 v24 = abstract_1();
abstract_1 v25 = abstract_1();
v25 = abstract_1();
return abstract_3();

}
/* method id 415 */ abstract_3** C3::func0 (abstract_1 v26) {
abstract_1 v27 = abstract_1();
abstract_3* v28 = new abstract_3 ();
abstract_4 v29 = abstract_4();
abstract_4 v30 = abstract_4();
return new abstract_3* ();

}
/* method id 416 */ abstract_5 C3::func5 (abstract_4 v31, abstract_0 v32, abstract_4 v33, abstract_1 v34) {
abstract_0 v35 = abstract_0();
abstract_1 v36 = abstract_1();
return ::func7(v15, v15, v15);

}
/* method id 417 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_5 func7 (abstract_0 v38, abstract_0 v39, abstract_0 v40) {

return abstract_5();

}
abstract_3* func8 () {
abstract_3* v41;
abstract_4 v42;
abstract_1 v43;

delete (new C1 ());
return v41;

}
abstract_3 func9 (abstract_4 v44, abstract_1 v45, abstract_0 v46, abstract_1 v47) {
abstract_4 v48;

v44 = abstract_4();
return ::func10();

}
abstract_3 func10 () {
C3 v49;

::func7(abstract_0(), abstract_0(), abstract_0());
return ::func9(abstract_4(), abstract_1(), abstract_0(), abstract_1());

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var9: AbstractType{1}
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
class C1    size(12)
0    +---
0    | {vfptr}
4    | var14: AbstractType{0}
8    | var15: AbstractType{0}
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
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
0    | {vfptr}
4    | var21: AbstractType{0}
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
class C3    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var37: AbstractType{0}
12   | {vtordisp for vbase 1}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | var14: AbstractType{0}
24   | var15: AbstractType{0}
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

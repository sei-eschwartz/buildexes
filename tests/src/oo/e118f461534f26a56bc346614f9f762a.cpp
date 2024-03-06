// type for special constructors
struct special_constructor {};
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual void func1 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual void func1 (abstract_0 v7, abstract_1 v8);
/* method id 403 */ virtual void func1 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 405 */ virtual void func2 (abstract_2 v14, abstract_3 v15, abstract_1 v16, abstract_1 v17);
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ virtual void func1 ();
/* method id 408 */ C1 ();
C1 (special_constructor);
};
struct C2 : public C1 {
/* method id 409 */ virtual void func3 (abstract_1 v23, abstract_0 v24);
/* method id 410 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C2 {
/* method id 411 */ virtual void func5 (abstract_1 v25);
/* method id 412 */ virtual abstract_5 func3 (abstract_1 v27, abstract_1 v28, abstract_0 v29);
/* method id 413 */ abstract_5* func0 ();
/* method id 414 */ C3 ();
C3 (special_constructor);
abstract_6 v32;
};
abstract_5* func7 (abstract_0 v33, abstract_0 v34);
abstract_4 func8 (abstract_1 v35);
void func9 (abstract_6 v36, abstract_4* v37, abstract_3 v38, C2 v39);
// definitions
/* method id 400 */ void C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return ((new C2 ()))->C2::func3(v3, v1);

}
/* method id 401 */ void C0::func1 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return;

}
/* method id 402 */ void C0::func1 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_2 v11 = abstract_2();
abstract_2 v12 = abstract_2();
return;

}
/* method id 403 */ void C0::func1 () {
abstract_0 v13 = abstract_0();
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ void C1::func2 (abstract_2 v14, abstract_3 v15, abstract_1 v16, abstract_1 v17) {
return;

}
/* method id 406 */ C1::~C1 () {
abstract_4* v18 = new abstract_4 ();
return;

}
/* method id 407 */ void C1::func1 () {
abstract_1 v19 = abstract_1();
abstract_1 v20 = abstract_1();
abstract_1 v21 = abstract_1();
return;

}
/* method id 408 */ C1::C1 () {
abstract_0 v22 = abstract_0();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ void C2::func3 (abstract_1 v23, abstract_0 v24) {
return;

}
/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 411 */ void C3::func5 (abstract_1 v25) {
abstract_0 v26 = abstract_0();
return;

}
/* method id 412 */ abstract_5 C3::func3 (abstract_1 v27, abstract_1 v28, abstract_0 v29) {
return abstract_5();

}
/* method id 413 */ abstract_5* C3::func0 () {
abstract_4* v30 = ((abstract_4*) 0);
abstract_2 v31 = abstract_2();
return ::func7(abstract_0(), abstract_0());

}
/* method id 414 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_5* func7 (abstract_0 v33, abstract_0 v34) {

return new abstract_5 ();

}
abstract_4 func8 (abstract_1 v35) {

return abstract_4();

}
void func9 (abstract_6 v36, abstract_4* v37, abstract_3 v38, C2 v39) {
abstract_0 v40;

return ((new C0 ()))->C0::func1(abstract_1(), abstract_1());

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
class C1    size(4)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
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
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | +---
4    | +---
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
class C3    size(8)
0    +---
0    | +--- (base class C2)
0    | | +--- (base class C1)
0    | | | +--- (base class C0)
0    | | | | {vfptr}
4    | | | +---
4    | | +---
4    | +---
4    | var32: AbstractType{6}
8    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 8;
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

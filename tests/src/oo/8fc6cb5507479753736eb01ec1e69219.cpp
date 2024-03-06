// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
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
/* method id 407 */ virtual abstract_3** func0 ();
/* method id 408 */ abstract_4 func0 (abstract_1 v14, abstract_1 v15, abstract_1 v16);
/* method id 409 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public C1 {
/* method id 410 */ virtual abstract_4 func4 (abstract_1 v17, abstract_0 v18);
/* method id 411 */ C2 ();
/* method id 412 */ abstract_2 func1 ();
/* method id 413 */ virtual abstract_2* func0 (abstract_1 v27, abstract_0 v28);
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 415 */ abstract_2* func1 (abstract_5 v29, abstract_0 v30, C1 v31);
/* method id 416 */ virtual ~C3 ();
/* method id 417 */ abstract_2* func5 (abstract_1 v33, abstract_6 v34, abstract_6 v35, abstract_6 v36);
/* method id 418 */ C3 ();
C3 (special_constructor);
};
abstract_2* func6 (abstract_1 v41, abstract_6 v42);
abstract_4 func7 (abstract_1 v43, abstract_4** v44, abstract_4** v45);
abstract_4 func8 (abstract_8 v47, abstract_5 v48, abstract_1 v49);
abstract_4 func9 (abstract_5 v50);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ abstract_2* C0::func1 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_1 v3) {
abstract_0 v4 = abstract_0();
return new abstract_2 ();

}
/* method id 402 */ abstract_3 C0::func1 (abstract_1 v5, abstract_1 v6, abstract_1 v7) {
return abstract_3();

}
/* method id 403 */ abstract_3* C0::func0 () {
abstract_0 v8 = abstract_0();
return new abstract_3 ();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::~C1 () {
return;

}
/* method id 406 */ abstract_3 C1::func1 (abstract_1 v10, abstract_0 v11) {
abstract_0 v12 = abstract_0();
return abstract_3();

}
/* method id 407 */ abstract_3** C1::func0 () {
abstract_0 v13 = abstract_0();
return ((abstract_3**) 0);

}
/* method id 408 */ abstract_4 C1::func0 (abstract_1 v14, abstract_1 v15, abstract_1 v16) {
return ::func7(v15, new abstract_4* (), new abstract_4* ());

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 410 */ abstract_4 C2::func4 (abstract_1 v17, abstract_0 v18) {
abstract_2* v19 = new abstract_2 ();
return abstract_4();

}
/* method id 411 */ C2::C2 () {
abstract_2* v20 = ((abstract_2*) 0);
return;

}
/* method id 412 */ abstract_2 C2::func1 () {
C1 v21 = *(&(*((new C1 ()))));
abstract_5 v22 = abstract_5();
return abstract_2();

}
/* method id 413 */ abstract_2* C2::func0 (abstract_1 v27, abstract_0 v28) {
return ::func6(v27, abstract_6());

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 415 */ abstract_2* C3::func1 (abstract_5 v29, abstract_0 v30, C1 v31) {
abstract_0 v32 = abstract_0();
return new abstract_2 ();

}
/* method id 416 */ C3::~C3 () {
return;

}
/* method id 417 */ abstract_2* C3::func5 (abstract_1 v33, abstract_6 v34, abstract_6 v35, abstract_6 v36) {
return ((abstract_2*) 0);

}
/* method id 418 */ C3::C3 () {
abstract_2* v37 = new abstract_2 ();
abstract_1 v38 = abstract_1();
abstract_7 v39 = abstract_7();
abstract_6 v40 = abstract_6();
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_2* func6 (abstract_1 v41, abstract_6 v42) {

return new abstract_2 ();

}
abstract_4 func7 (abstract_1 v43, abstract_4** v44, abstract_4** v45) {
abstract_0 v46;

return abstract_4();

}
abstract_4 func8 (abstract_8 v47, abstract_5 v48, abstract_1 v49) {

return abstract_4();

}
abstract_4 func9 (abstract_5 v50) {
abstract_1 v51;

return abstract_4();

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
class C2    size(16)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | +---
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var9: AbstractType{1}
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
 {
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
 }} {
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
class C3    size(20)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    | var9: AbstractType{1}
12   +---
12   +--- (virtual base class C2)
12   | +--- (base class C1)
12   | | {vfptr}
16   | +---
16   | {vbptr}
20   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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

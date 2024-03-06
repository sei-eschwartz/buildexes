// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ virtual abstract_2* func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_1 v3);
/* method id 402 */ virtual abstract_3 func0 (abstract_1 v5, abstract_1 v6, abstract_1 v7);
/* method id 403 */ virtual abstract_3* func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1 v9;
};
struct C1  {
/* method id 405 */ virtual ~C1 ();
/* method id 406 */ virtual abstract_3 func1 (abstract_1 v10, abstract_0 v11);
/* method id 407 */ virtual abstract_3** func0 ();
/* method id 408 */ virtual abstract_2* func1 (abstract_0 v14);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_1 v19;
};
struct C2 : public virtual C0, public C1 {
/* method id 410 */ void func3 (abstract_1 v20, abstract_0 v21);
/* method id 411 */ virtual abstract_2* func1 (abstract_0 v23);
/* method id 412 */ void func4 ();
/* method id 413 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 415 */ abstract_2* func7 ();
/* method id 416 */ virtual abstract_2* func8 (abstract_1 v27, abstract_2** v28);
/* method id 417 */ virtual abstract_3 func9 ();
/* method id 418 */ C3 ();
C3 (special_constructor);
};
// definitions
/* method id 400 */ C0::~C0 () {
v9 = abstract_1();
v9 = abstract_1();
return;

}
/* method id 401 */ abstract_2* C0::func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_1 v3) {
abstract_0 v4 = abstract_0();
return new abstract_2 ();

}
/* method id 402 */ abstract_3 C0::func0 (abstract_1 v5, abstract_1 v6, abstract_1 v7) {
return ((new C1 ()))->C1::func1(v9, abstract_0());

}
/* method id 403 */ abstract_3* C0::func0 () {
abstract_0 v8 = abstract_0();
return ((abstract_3*) 0);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::~C1 () {
(((C3*) 0))->C3::func8(abstract_1(), new abstract_2* ());
(((C3*) 0))->C3::func8(abstract_1(), new abstract_2* ());
(((C3*) 0))->C3::func8(abstract_1(), new abstract_2* ());
(((C3*) 0))->C3::func8(abstract_1(), new abstract_2* ());
return;

}
/* method id 406 */ abstract_3 C1::func1 (abstract_1 v10, abstract_0 v11) {
abstract_0 v12 = abstract_0();
delete (new C1 ());
return abstract_3();

}
/* method id 407 */ abstract_3** C1::func0 () {
abstract_0 v13 = abstract_0();
return ((abstract_3**) 0);

}
/* method id 408 */ abstract_2* C1::func1 (abstract_0 v14) {
abstract_1 v15 = abstract_1();
abstract_0 v16 = abstract_0();
abstract_3** v17 = new abstract_3* ();
abstract_2** v18 = new abstract_2* ();
return ((abstract_2*) 0);

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 410 */ void C2::func3 (abstract_1 v20, abstract_0 v21) {
abstract_0 v22 = abstract_0();
((new C3 ()))->C3::func8(abstract_1(), new abstract_2* ());
((new C3 ()))->C3::func8(abstract_1(), new abstract_2* ());
((new C3 ()))->C3::func8(abstract_1(), new abstract_2* ());
((new C3 ()))->C3::func8(abstract_1(), new abstract_2* ());
return;

}
/* method id 411 */ abstract_2* C2::func1 (abstract_0 v23) {
abstract_1 v24 = abstract_1();
abstract_0 v25 = abstract_0();
delete (new C3 ());
return ((abstract_2*) 0);

}
/* method id 412 */ void C2::func4 () {
abstract_2** v26 = new abstract_2* ();
return;

}
/* method id 413 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 415 */ abstract_2* C3::func7 () {
return new abstract_2 ();

}
/* method id 416 */ abstract_2* C3::func8 (abstract_1 v27, abstract_2** v28) {
abstract_4 v29 = abstract_4();
return ((abstract_2*) 0);

}
/* method id 417 */ abstract_3 C3::func9 () {
abstract_4 v30 = abstract_4();
return ((new C1 ()))->C1::func1(v19, abstract_0());

}
/* method id 418 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

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
class C1    size(8)
0    +---
0    | {vfptr}
4    | var19: AbstractType{1}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(20)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var19: AbstractType{1}
8    | +---
8    | {vbptr}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var9: AbstractType{1}
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
class C3    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var9: AbstractType{1}
16   +---
16   +--- (virtual base class C2)
16   | +--- (base class C1)
16   | | {vfptr}
20   | | var19: AbstractType{1}
24   | +---
24   | {vbptr}
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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

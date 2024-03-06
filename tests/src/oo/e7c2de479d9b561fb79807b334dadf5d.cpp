// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 ();
/* method id 401 */ ~C0 ();
/* method id 402 */ virtual abstract_1 func1 (abstract_1* v1, abstract_1* v2, abstract_1* v3, abstract_2 v4);
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_1* v6;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual abstract_1 func3 (abstract_0* v7, abstract_2 v8, abstract_2 v9);
/* method id 405 */ virtual abstract_1 func4 ();
/* method id 406 */ virtual abstract_1 func1 ();
/* method id 407 */ C1 ();
C1 (special_constructor);
abstract_2 v13;
};
struct C2 : public C1 {
/* method id 409 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 411 */ abstract_1 func9 ();
/* method id 412 */ abstract_1 func4 ();
/* method id 413 */ virtual abstract_1* func10 (abstract_2 v15, abstract_1* v16);
/* method id 414 */ C3 ();
C3 (special_constructor);
};
abstract_1* func12 (abstract_2 v20, C3 v21);
abstract_1 func13 (abstract_0* v26, abstract_0* v27);
abstract_1* func14 (abstract_1* v31);
abstract_0 func15 ();
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
::func13(((abstract_0*) 0), ((abstract_0*) 0));
return ::func15();

}
/* method id 401 */ C0::~C0 () {
abstract_1* v0 = ((abstract_1*) 0);
return;

}
/* method id 402 */ abstract_1 C0::func1 (abstract_1* v1, abstract_1* v2, abstract_1* v3, abstract_2 v4) {
abstract_2 v5 = abstract_2();
return abstract_1();

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_1 C1::func3 (abstract_0* v7, abstract_2 v8, abstract_2 v9) {
::func13(((abstract_0*) 0), ((abstract_0*) 0));
::func13(((abstract_0*) 0), ((abstract_0*) 0));
return ::func13(((abstract_0*) 0), ((abstract_0*) 0));

}
/* method id 405 */ abstract_1 C1::func4 () {
C0 v10 = *((new C0 ()));
abstract_2 v11 = abstract_2();
C0 v12 = *(&(*((new C0 ()))));
return abstract_1();

}
/* method id 406 */ abstract_1 C1::func1 () {
::func14(v6);
return ::func13(new abstract_0 (), new abstract_0 ());

}
/* method id 407 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 411 */ abstract_1 C3::func9 () {
C0 v14 = *((C0*)(&(*(((C1*) 0)))));
v13 = v13;
v13 = v13;
v13 = v13;
v13 = v13;
return ((new C1 ()))->C1::func3(((abstract_0*) 0), v13, v13);

}
/* method id 412 */ abstract_1 C3::func4 () {
v6 = v6;
v6 = v6;
v6 = v6;
return abstract_1();

}
/* method id 413 */ abstract_1* C3::func10 (abstract_2 v15, abstract_1* v16) {
abstract_1** v17 = ((abstract_1**) 0);
return v16;

}
/* method id 414 */ C3::C3 () {
abstract_2 v18 = abstract_2();
abstract_1* v19 = ((abstract_1*) 0);
v18 = v18;
v18 = v18;
v18 = v18;
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_1* func12 (abstract_2 v20, C3 v21) {
C0 v22;
abstract_3 v23;
abstract_3 v24;
C3 v25;

delete (new C2 ());
return new abstract_1 ();

}
abstract_1 func13 (abstract_0* v26, abstract_0* v27) {
abstract_4 v28;
abstract_2 v29;
abstract_1* v30;

return abstract_1();

}
abstract_1* func14 (abstract_1* v31) {
C3 v32;
abstract_2 v33;
abstract_4 v34;

delete (new C2 ());
return v31;

}
abstract_0 func15 () {
abstract_2 v35;

return abstract_0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var6: PtrType{AbstractType{1}}
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
4    | {vbptr}
8    | var13: AbstractType{2}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var6: PtrType{AbstractType{1}}
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
class C2    size(20)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var13: AbstractType{2}
12   | +---
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var6: PtrType{AbstractType{1}}
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
class C3    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var6: PtrType{AbstractType{1}}
16   +---
16   | {vtordisp for vbase 2}
20   +--- (virtual base class C2)
20   | +--- (base class C1)
20   | | {vfptr}
24   | | {vbptr}
28   | | var13: AbstractType{2}
32   | +---
32   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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

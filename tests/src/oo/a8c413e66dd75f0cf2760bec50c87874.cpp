// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2);
/* method id 401 */ virtual abstract_0 func0 (abstract_0* v7, abstract_0* v8, abstract_1 v9);
/* method id 402 */ C0 ();
/* method id 403 */ virtual abstract_0* func0 ();
C0 (special_constructor);
abstract_3 v15;
};
struct C1 : public C0 {
/* method id 404 */ void func1 (abstract_1 v16, abstract_0* v17);
/* method id 405 */ virtual abstract_0* func1 (abstract_0* v19);
/* method id 406 */ abstract_0 func0 (abstract_0* v22, abstract_0* v23, abstract_0* v24);
/* method id 407 */ C1 ();
C1 (special_constructor);
abstract_1 v31;
abstract_1 v32;
abstract_1 v33;
abstract_1 v34;
};
struct C2 : public virtual C0 {
/* method id 408 */ C2 ();
/* method id 409 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1 v44;
abstract_1 v45;
abstract_1 v46;
abstract_5 v47;
};
struct C3  {
/* method id 410 */ virtual void func0 (C1 v48, C1 v49, abstract_1 v50, abstract_5 v51);
/* method id 411 */ C3 ();
C3 (special_constructor);
abstract_0* v56;
};
void func3 (abstract_0* v57);
abstract_0 func4 (abstract_4 v60, abstract_2 v61);
abstract_0* func5 ();
abstract_0* func6 (abstract_1 v66);
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2) {
return ::func4(abstract_4(), abstract_2());

}
/* method id 401 */ abstract_0 C0::func0 (abstract_0* v7, abstract_0* v8, abstract_1 v9) {
abstract_0* v10 = ((abstract_0*) 0);
v9 = v9;
v9 = v9;
return abstract_0();

}
/* method id 402 */ C0::C0 () {
abstract_2 v11 = abstract_2();
abstract_1 v12 = abstract_1();
abstract_1 v13 = abstract_1();
abstract_3 v14 = abstract_3();
v15 = v14;
v15 = v14;
v15 = v14;
v15 = v14;
return;

}
/* method id 403 */ abstract_0* C0::func0 () {
v15 = v15;
v15 = v15;
v15 = v15;
return ((abstract_0*) 0);

}
C0::C0 (special_constructor)  {}

/* method id 404 */ void C1::func1 (abstract_1 v16, abstract_0* v17) {
abstract_4 v18 = abstract_4();
delete (new C0 ());
return;

}
/* method id 405 */ abstract_0* C1::func1 (abstract_0* v19) {
abstract_0* v20 = new abstract_0 ();
abstract_0* v21 = new abstract_0 ();
v19 = ((abstract_0*) 0);
v19 = ((abstract_0*) 0);
v19 = ((abstract_0*) 0);
v19 = ((abstract_0*) 0);
return v21;

}
/* method id 406 */ abstract_0 C1::func0 (abstract_0* v22, abstract_0* v23, abstract_0* v24) {
abstract_4 v25 = abstract_4();
abstract_1 v26 = abstract_1();
::func6(v32);
::func6(v32);
return abstract_0();

}
/* method id 407 */ C1::C1 () {
abstract_2 v27 = abstract_2();
abstract_1 v28 = abstract_1();
abstract_1 v29 = abstract_1();
abstract_1 v30 = abstract_1();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {
abstract_1 v35 = abstract_1();
return;

}
/* method id 409 */ C2::~C2 () {
abstract_1 v36 = abstract_1();
abstract_1 v37 = abstract_1();
abstract_1 v38 = abstract_1();
abstract_1 v39 = abstract_1();
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ void C3::func0 (C1 v48, C1 v49, abstract_1 v50, abstract_5 v51) {
abstract_4 v52 = abstract_4();
abstract_1 v53 = abstract_1();
abstract_1 v54 = abstract_1();
abstract_0* v55 = new abstract_0 ();
return ::func3(((abstract_0*) 0));

}
/* method id 411 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

void func3 (abstract_0* v57) {
abstract_5 v58;
abstract_0* v59;

return;

}
abstract_0 func4 (abstract_4 v60, abstract_2 v61) {
abstract_2 v62;
void* v63;
abstract_6 v64;
abstract_2 v65;

return abstract_0();

}
abstract_0* func5 () {

return new abstract_0 ();

}
abstract_0* func6 (abstract_1 v66) {

return new abstract_0 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var15: AbstractType{3}
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
class C1    size(24)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var15: AbstractType{3}
8    | +---
8    | var31: AbstractType{1}
12   | var32: AbstractType{1}
16   | var33: AbstractType{1}
20   | var34: AbstractType{1}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
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
class C2    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var44: AbstractType{1}
12   | var45: AbstractType{1}
16   | var46: AbstractType{1}
20   | var47: AbstractType{5}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var15: AbstractType{3}
32   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(8)
0    +---
0    | {vfptr}
4    | var56: PtrType{AbstractType{0}}
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
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

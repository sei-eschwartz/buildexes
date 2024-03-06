// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v7, abstract_1 v8);
/* method id 403 */ virtual abstract_2 func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1 v15;
abstract_1 v16;
abstract_1 v17;
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_2 func1 (abstract_3 v18, abstract_4 v19);
/* method id 406 */ virtual abstract_2 func2 (abstract_4 v20, abstract_0 v21, abstract_0 v22);
/* method id 407 */ virtual abstract_2 func0 (abstract_1 v23, abstract_1 v24);
/* method id 408 */ virtual abstract_2 func1 (abstract_4 v26);
/* method id 409 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 410 */ virtual abstract_2 func1 ();
/* method id 411 */ C2 ();
C2 (special_constructor);
abstract_0 v28;
};
struct C3 : public C0, public C2 {
/* method id 412 */ C3 ();
C3 (special_constructor);
abstract_1 v29;
abstract_4 v30;
};
abstract_2 func6 (abstract_5 v31, abstract_1 v32, abstract_0 v33, abstract_0 v34);
abstract_2 func7 (abstract_4 v35);
abstract_2* func8 (abstract_7 v40, abstract_5 v41, abstract_1 v42, abstract_2*** v43);
abstract_2* func9 (abstract_2*** v48);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return ::func7(abstract_4());

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return ::func7(abstract_4());

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
return ::func7(abstract_4());

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_4 v13 = abstract_4();
abstract_1 v14 = abstract_1();
return abstract_2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func1 (abstract_3 v18, abstract_4 v19) {
return (((C1*) 0))->C1::func0(abstract_1(), abstract_1());

}
/* method id 406 */ abstract_2 C1::func2 (abstract_4 v20, abstract_0 v21, abstract_0 v22) {
v15 = v15;
v15 = v15;
v15 = v15;
v15 = v15;
return ::func6(abstract_5(), abstract_1(), v22, v22);

}
/* method id 407 */ abstract_2 C1::func0 (abstract_1 v23, abstract_1 v24) {
abstract_4 v25 = abstract_4();
return ::func7(v25);

}
/* method id 408 */ abstract_2 C1::func1 (abstract_4 v26) {
return abstract_2();

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ abstract_2 C2::func1 () {
abstract_0 v27 = abstract_0();
return abstract_2();

}
/* method id 411 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 412 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

abstract_2 func6 (abstract_5 v31, abstract_1 v32, abstract_0 v33, abstract_0 v34) {

delete (new C1 ());
return abstract_2();

}
abstract_2 func7 (abstract_4 v35) {
abstract_0 v36;
abstract_6 v37;
abstract_6 v38;
abstract_4 v39;

delete (new C1 ());
return (((C1*) 0))->C1::func1(abstract_3(), v39);

}
abstract_2* func8 (abstract_7 v40, abstract_5 v41, abstract_1 v42, abstract_2*** v43) {
abstract_4 v44;
abstract_1 v45;
abstract_0 v46;
abstract_1 v47;

return new abstract_2 ();

}
abstract_2* func9 (abstract_2*** v48) {
abstract_1 v49;
abstract_1 v50;
abstract_2*** v51;
abstract_1 v52;

return ((abstract_2*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var15: AbstractType{1}
8    | var16: AbstractType{1}
12   | var17: AbstractType{1}
16   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 16;
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
4    | {vbptr}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var15: AbstractType{1}
20   | var16: AbstractType{1}
24   | var17: AbstractType{1}
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
class C2    size(8)
0    +---
0    | {vfptr}
4    | var28: AbstractType{0}
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
class C3    size(32)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var15: AbstractType{1}
8    | | var16: AbstractType{1}
12   | | var17: AbstractType{1}
16   | +---
16   | +--- (base class C2)
16   | | {vfptr}
20   | | var28: AbstractType{0}
24   | +---
24   | var29: AbstractType{1}
28   | var30: AbstractType{4}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
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

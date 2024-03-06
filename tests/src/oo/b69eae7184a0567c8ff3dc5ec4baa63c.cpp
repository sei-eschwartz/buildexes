// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ C0 ();
/* method id 402 */ virtual abstract_2 func0 ();
/* method id 403 */ virtual abstract_2 func2 ();
C0 (special_constructor);
abstract_5 v15;
abstract_5 v16;
abstract_0 v17;
abstract_0 v18;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual abstract_2 func0 (C0 v19, C0 v20, abstract_1 v21);
/* method id 405 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 406 */ virtual abstract_2 func1 ();
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_5 v32;
abstract_5 v33;
};
struct C3  {
/* method id 408 */ abstract_2* func0 (C0 v34, C0 v35, abstract_1 v36);
/* method id 409 */ virtual abstract_2* func2 (C1 v38);
/* method id 410 */ C3 ();
C3 (special_constructor);
};
abstract_2* func3 (C0 v44, abstract_5 v45, C0 v46, abstract_6 v47);
abstract_2* func4 (abstract_4 v51, abstract_1 v52, abstract_4 v53);
abstract_2* func5 (abstract_1 v57);
abstract_2* func6 (abstract_0 v58);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
abstract_1 v4 = abstract_1();
abstract_3 v5 = abstract_3();
abstract_3 v6 = abstract_3();
abstract_1 v7 = abstract_1();
return abstract_2();

}
/* method id 401 */ C0::C0 () {
abstract_3 v8 = abstract_3();
return;

}
/* method id 402 */ abstract_2 C0::func0 () {
abstract_3 v9 = abstract_3();
abstract_3 v10 = abstract_3();
::func4(abstract_4(), abstract_1(), abstract_4());
::func4(abstract_4(), abstract_1(), abstract_4());
::func4(abstract_4(), abstract_1(), abstract_4());
::func4(abstract_4(), abstract_1(), abstract_4());
return abstract_2();

}
/* method id 403 */ abstract_2 C0::func2 () {
abstract_1 v11 = abstract_1();
abstract_4 v12 = abstract_4();
abstract_0 v13 = abstract_0();
abstract_0 v14 = abstract_0();
return abstract_2();

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_2 C1::func0 (C0 v19, C0 v20, abstract_1 v21) {
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
abstract_3 v24 = abstract_3();
abstract_6 v25 = abstract_6();
return abstract_2();

}
/* method id 405 */ C1::C1 () {
::func4(abstract_4(), abstract_1(), abstract_4());
::func4(abstract_4(), abstract_1(), abstract_4());
::func4(abstract_4(), abstract_1(), abstract_4());
::func4(abstract_4(), abstract_1(), abstract_4());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ abstract_2 C2::func1 () {
C0 v26 = *(((C0*) 0));
abstract_1 v27 = abstract_1();
return abstract_2();

}
/* method id 407 */ C2::C2 () {
return;

}
C2::C2 (special_constructor)  {}

/* method id 408 */ abstract_2* C3::func0 (C0 v34, C0 v35, abstract_1 v36) {
abstract_0 v37 = abstract_0();
::func4(abstract_4(), v36, abstract_4());
::func4(abstract_4(), v36, abstract_4());
::func4(abstract_4(), v36, abstract_4());
::func4(abstract_4(), v36, abstract_4());
return new abstract_2 ();

}
/* method id 409 */ abstract_2* C3::func2 (C1 v38) {
abstract_0 v39 = abstract_0();
abstract_1 v40 = abstract_1();
C0 v41 = *(((C0*) 0));
abstract_4 v42 = abstract_4();
return new abstract_2 ();

}
/* method id 410 */ C3::C3 () {
abstract_1 v43 = abstract_1();
return;

}
C3::C3 (special_constructor)  {}

abstract_2* func3 (C0 v44, abstract_5 v45, C0 v46, abstract_6 v47) {
C1 v48;
C0 v49;
abstract_1 v50;

return ((abstract_2*) 0);

}
abstract_2* func4 (abstract_4 v51, abstract_1 v52, abstract_4 v53) {
abstract_1 v54;
abstract_1 v55;
abstract_0 v56;

return ((abstract_2*) 0);

}
abstract_2* func5 (abstract_1 v57) {

::func4(abstract_4(), v57, abstract_4());
::func4(abstract_4(), v57, abstract_4());
::func4(abstract_4(), v57, abstract_4());
::func4(abstract_4(), v57, abstract_4());
return ((abstract_2*) 0);

}
abstract_2* func6 (abstract_0 v58) {
abstract_5 v59;
abstract_4 v60;

return new abstract_2 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var15: AbstractType{5}
8    | var16: AbstractType{5}
12   | var17: AbstractType{0}
16   | var18: AbstractType{0}
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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var15: AbstractType{5}
16   | var16: AbstractType{5}
20   | var17: AbstractType{0}
24   | var18: AbstractType{0}
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
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(12)
0    +---
0    | {vfptr}
4    | var32: AbstractType{5}
8    | var33: AbstractType{5}
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
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

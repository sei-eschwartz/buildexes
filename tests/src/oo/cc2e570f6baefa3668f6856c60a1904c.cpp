// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_7 { int x; };
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
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v7, abstract_1 v8);
/* method id 403 */ virtual abstract_2 func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 405 */ virtual abstract_2 func1 (abstract_3 v14, abstract_4 v15, abstract_1 v16, abstract_1 v17);
/* method id 406 */ virtual abstract_2 func0 (abstract_0 v18, abstract_3 v19, abstract_0 v20, abstract_0 v21);
/* method id 407 */ virtual abstract_2 func1 (abstract_1 v22, abstract_0 v23, abstract_0 v24);
/* method id 408 */ virtual abstract_2 func1 (abstract_1 v26);
/* method id 409 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 410 */ C2 ();
/* method id 411 */ virtual abstract_2 func1 ();
C2 (special_constructor);
abstract_0 v34;
abstract_5 v35;
abstract_0 v36;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 412 */ C3 ();
C3 (special_constructor);
abstract_1 v37;
abstract_3 v38;
abstract_0 v39;
abstract_0 v40;
};
abstract_2 func4 (abstract_5 v41, abstract_5 v42, abstract_5 v43, abstract_1 v44);
abstract_7 func5 (C3 v49, C3 v50, abstract_1 v51, abstract_6 v52);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return ::func4(abstract_5(), abstract_5(), abstract_5(), abstract_1());

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return abstract_2();

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
return ::func4(abstract_5(), abstract_5(), abstract_5(), v8);

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
return abstract_2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func1 (abstract_3 v14, abstract_4 v15, abstract_1 v16, abstract_1 v17) {
return abstract_2();

}
/* method id 406 */ abstract_2 C1::func0 (abstract_0 v18, abstract_3 v19, abstract_0 v20, abstract_0 v21) {
return abstract_2();

}
/* method id 407 */ abstract_2 C1::func1 (abstract_1 v22, abstract_0 v23, abstract_0 v24) {
abstract_1 v25 = abstract_1();
return abstract_2();

}
/* method id 408 */ abstract_2 C1::func1 (abstract_1 v26) {
abstract_4 v27 = abstract_4();
return ::func4(abstract_5(), abstract_5(), abstract_5(), v26);

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C2::C2 () {
abstract_5 v28 = abstract_5();
abstract_1 v29 = abstract_1();
abstract_0 v30 = abstract_0();
return;

}
/* method id 411 */ abstract_2 C2::func1 () {
abstract_3 v31 = abstract_3();
abstract_0 v32 = abstract_0();
abstract_4 v33 = abstract_4();
return abstract_2();

}
C2::C2 (special_constructor)  {}

/* method id 412 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_2 func4 (abstract_5 v41, abstract_5 v42, abstract_5 v43, abstract_1 v44) {
abstract_1 v45;
abstract_1 v46;
abstract_6 v47;
abstract_5 v48;

return abstract_2();

}
abstract_7 func5 (C3 v49, C3 v50, abstract_1 v51, abstract_6 v52) {
abstract_1 v53;
abstract_1 v54;
abstract_3 v55;

return abstract_7();

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
class C2    size(16)
0    +---
0    | {vfptr}
4    | var34: AbstractType{0}
8    | var35: AbstractType{5}
12   | var36: AbstractType{0}
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
class C3    size(40)
0    +---
0    | {vbptr}
4    | var37: AbstractType{1}
8    | var38: AbstractType{3}
12   | var39: AbstractType{0}
16   | var40: AbstractType{0}
20   +---
20   +--- (virtual base class C1)
20   | +--- (base class C0)
20   | | {vfptr}
24   | +---
24   +---
24   +--- (virtual base class C2)
24   | {vfptr}
28   | var34: AbstractType{0}
32   | var35: AbstractType{5}
36   | var36: AbstractType{0}
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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

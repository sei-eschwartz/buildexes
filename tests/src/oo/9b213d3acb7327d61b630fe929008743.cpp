// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
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
};
struct C1 : public virtual C0 {
/* method id 405 */ abstract_2 func0 (abstract_1 v14, abstract_1 v15);
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ C1 ();
/* method id 408 */ virtual abstract_4 func1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 409 */ virtual ~C2 ();
/* method id 410 */ C2 ();
/* method id 411 */ virtual abstract_4 func1 (abstract_0 v30);
C2 (special_constructor);
C1 v31;
abstract_1 v32;
abstract_0 v33;
abstract_3 v34;
};
struct C3  {
/* method id 412 */ C3 ();
/* method id 413 */ virtual ~C3 ();
/* method id 414 */ virtual abstract_2 func0 ();
/* method id 415 */ virtual abstract_2 func3 (abstract_1 v52, abstract_7 v53, C1 v54, abstract_1 v55);
C3 (special_constructor);
abstract_6 v56;
abstract_0 v57;
};
abstract_4 func4 (abstract_6 v58);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
(((C1*) 0))->C1::func1();
(((C1*) 0))->C1::func1();
(((C1*) 0))->C1::func1();
(((C1*) 0))->C1::func1();
return abstract_2();

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
((C1*)(((C2*) 0)))->C1::func1();
((C1*)(((C2*) 0)))->C1::func1();
((C1*)(((C2*) 0)))->C1::func1();
((C1*)(((C2*) 0)))->C1::func1();
return abstract_2();

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
return abstract_2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func0 (abstract_1 v14, abstract_1 v15) {
abstract_1 v16 = abstract_1();
abstract_1 v17 = abstract_1();
abstract_5 v18 = abstract_5();
abstract_5 v19 = abstract_5();
return abstract_2();

}
/* method id 406 */ C1::~C1 () {
return;

}
/* method id 407 */ C1::C1 () {
return;

}
/* method id 408 */ abstract_4 C1::func1 () {
return ::func4(abstract_6());

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::~C2 () {
C1 v24 = *(&(*(((C1*) 0))));
abstract_1 v25 = abstract_1();
abstract_1 v26 = abstract_1();
C1 v27 = *(&(*(((C1*) 0))));
return;

}
/* method id 410 */ C2::C2 () {
abstract_0 v28 = abstract_0();
C1 v29 = *(((C1*) 0));
return;

}
/* method id 411 */ abstract_4 C2::func1 (abstract_0 v30) {
::func4(abstract_6());
return abstract_4();

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {
abstract_1 v35 = abstract_1();
abstract_3 v36 = abstract_3();
abstract_6 v37 = abstract_6();
abstract_1 v38 = abstract_1();
(((C1*) 0))->C1::func1();
(((C1*) 0))->C1::func1();
(((C1*) 0))->C1::func1();
(((C1*) 0))->C1::func1();
return;

}
/* method id 413 */ C3::~C3 () {
abstract_1 v39 = abstract_1();
abstract_1 v40 = abstract_1();
abstract_1 v41 = abstract_1();
return;

}
/* method id 414 */ abstract_2 C3::func0 () {
abstract_6 v49 = abstract_6();
C1 v50 = *(((C1*) 0));
abstract_0 v51 = abstract_0();
return abstract_2();

}
/* method id 415 */ abstract_2 C3::func3 (abstract_1 v52, abstract_7 v53, C1 v54, abstract_1 v55) {
return abstract_2();

}
C3::C3 (special_constructor)  {}

abstract_4 func4 (abstract_6 v58) {

(((C1*) 0))->C1::func1();
(((C1*) 0))->C1::func1();
(((C1*) 0))->C1::func1();
(((C1*) 0))->C1::func1();
return abstract_4();

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
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
class C2    size(52)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var31: ClassType{1}
24   | var32: AbstractType{1}
28   | var33: AbstractType{0}
32   | var34: AbstractType{3}
36   | {vtordisp for vbase 0}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   +---
44   +--- (virtual base class C1)
44   | {vfptr}
48   | {vbptr}
52   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
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
 const size_t model_offset = 44;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(12)
0    +---
0    | {vfptr}
4    | var56: AbstractType{6}
8    | var57: AbstractType{0}
12   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 12;
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

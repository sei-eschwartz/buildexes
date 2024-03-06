// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ abstract_1 func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ abstract_1 func0 ();
/* method id 406 */ C1 ();
/* method id 407 */ ~C1 ();
C1 (special_constructor);
abstract_2 v15;
abstract_2 v16;
abstract_0 v17;
abstract_0 v18;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 408 */ C2 ();
/* method id 409 */ virtual ~C2 ();
/* method id 410 */ virtual abstract_1 func3 (abstract_0 v33, abstract_0 v34, abstract_0 v35, abstract_0 v36);
/* method id 411 */ virtual abstract_1 func2 (abstract_2 v40, abstract_2 v41, abstract_1** v42, abstract_2 v43);
C2 (special_constructor);
abstract_2 v48;
C0 v49;
abstract_2 v50;
abstract_2 v51;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 412 */ C3 ();
/* method id 413 */ ~C3 ();
/* method id 414 */ virtual abstract_1 func1 (abstract_2 v77);
/* method id 415 */ virtual abstract_1 func0 (C0 v78);
C3 (special_constructor);
abstract_0 v83;
};
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
delete (new C2 ());
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 () {
delete (new C0 ());
return abstract_1();

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7) {
delete (new C1 ());
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func0 () {
delete (new C2 ());
return abstract_1();

}
/* method id 406 */ C1::C1 () {
abstract_2 v8 = abstract_2();
abstract_2 v9 = abstract_2();
abstract_2 v10 = abstract_2();
delete (new C2 ());
return;

}
/* method id 407 */ C1::~C1 () {
abstract_0 v14 = abstract_0();
delete (new C1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {
abstract_2 v19 = abstract_2();
abstract_2 v20 = abstract_2();
abstract_0 v21 = abstract_0();
abstract_2 v22 = abstract_2();
delete (new C0 ());
return;

}
/* method id 409 */ C2::~C2 () {
abstract_2 v30 = abstract_2();
abstract_2 v31 = abstract_2();
abstract_2 v32 = abstract_2();
return;

}
/* method id 410 */ abstract_1 C2::func3 (abstract_0 v33, abstract_0 v34, abstract_0 v35, abstract_0 v36) {
abstract_2 v37 = abstract_2();
abstract_0 v38 = abstract_0();
abstract_0 v39 = abstract_0();
delete (new C0 ());
return abstract_1();

}
/* method id 411 */ abstract_1 C2::func2 (abstract_2 v40, abstract_2 v41, abstract_1** v42, abstract_2 v43) {
abstract_1** v44 = new abstract_1* ();
abstract_3 v45 = abstract_3();
abstract_2 v46 = abstract_2();
abstract_0 v47 = abstract_0();
delete (new C1 ());
return abstract_1();

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {
delete (new C1 ());
return;

}
/* method id 413 */ C3::~C3 () {
abstract_2 v60 = abstract_2();
abstract_2 v61 = abstract_2();
abstract_2 v62 = abstract_2();
abstract_2 v63 = abstract_2();
delete (new C1 ());
return;

}
/* method id 414 */ abstract_1 C3::func1 (abstract_2 v77) {
((new C1 ()))->C1::func0();
return abstract_1();

}
/* method id 415 */ abstract_1 C3::func0 (C0 v78) {
abstract_0 v79 = abstract_0();
abstract_1** v80 = new abstract_1* ();
abstract_0 v81 = abstract_0();
C0 v82 = *((C0*)(&(*(((C2*) 0)))));
delete (new C1 ());
return abstract_1();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

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
class C1    size(28)
0    +---
0    | {vbptr}
4    | var15: AbstractType{2}
8    | var16: AbstractType{2}
12   | var17: AbstractType{0}
16   | var18: AbstractType{0}
20   | {vtordisp for vbase 0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
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
 const size_t model_offset = 24;
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
8    | var48: AbstractType{2}
12   | var49: ClassType{0}
16   | var50: AbstractType{2}
20   | var51: AbstractType{2}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   +---
32   +--- (virtual base class C1)
32   | {vbptr}
36   | var15: AbstractType{2}
40   | var16: AbstractType{2}
44   | var17: AbstractType{0}
48   | var18: AbstractType{0}
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
 const size_t model_offset = 28;
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
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(64)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var83: AbstractType{0}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   +--- (virtual base class C1)
20   | {vbptr}
24   | var15: AbstractType{2}
28   | var16: AbstractType{2}
32   | var17: AbstractType{0}
36   | var18: AbstractType{0}
40   +---
40   +--- (virtual base class C2)
40   | {vfptr}
44   | {vbptr}
48   | var48: AbstractType{2}
52   | var49: ClassType{0}
56   | var50: AbstractType{2}
60   | var51: AbstractType{2}
64   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 64;
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
 const size_t model_offset = 40;
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

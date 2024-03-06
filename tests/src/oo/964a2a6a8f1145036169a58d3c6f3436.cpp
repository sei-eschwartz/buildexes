// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_4 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 (abstract_0* v0);
/* method id 401 */ C0 ();
/* method id 402 */ virtual ~C0 ();
C0 (special_constructor);
abstract_1 v13;
abstract_0* v14;
abstract_0* v15;
abstract_1 v16;
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ virtual abstract_0 func0 (abstract_1 v21);
/* method id 405 */ virtual abstract_0 func0 (abstract_1 v26, abstract_0* v27);
/* method id 406 */ virtual abstract_0 func1 (abstract_2 v31, abstract_2 v32, abstract_0* v33);
/* method id 407 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0 {
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ abstract_0 func3 (abstract_3 v41, abstract_0* v42, abstract_3 v43);
/* method id 410 */ virtual abstract_4 func0 (abstract_0* v48, abstract_1 v49);
/* method id 411 */ virtual abstract_4 func0 (abstract_5 v54);
/* method id 412 */ C2 ();
C2 (special_constructor);
abstract_0* v59;
abstract_1 v60;
abstract_1 v61;
abstract_5 v62;
};
struct C3 : public virtual C1, public C2 {
/* method id 413 */ ~C3 ();
/* method id 414 */ C3 ();
/* method id 415 */ abstract_4 func1 (abstract_2 v69, abstract_0* v70, abstract_0* v71, abstract_0* v72);
C3 (special_constructor);
abstract_0* v81;
};
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0) {
return abstract_0();

}
/* method id 401 */ C0::C0 () {
delete (new C1 ());
v16 = v16;
return;

}
/* method id 402 */ C0::~C0 () {
abstract_1 v1 = abstract_1();
abstract_1 v2 = abstract_1();
abstract_0* v3 = new abstract_0 ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::~C1 () {
abstract_1 v17 = abstract_1();
abstract_1 v18 = abstract_1();
abstract_1 v19 = abstract_1();
abstract_1 v20 = abstract_1();
delete (new C3 ());
return;

}
/* method id 404 */ abstract_0 C1::func0 (abstract_1 v21) {
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
abstract_0* v24 = new abstract_0 ();
abstract_2 v25 = abstract_2();
return abstract_0();

}
/* method id 405 */ abstract_0 C1::func0 (abstract_1 v26, abstract_0* v27) {
abstract_1 v28 = abstract_1();
abstract_1 v29 = abstract_1();
abstract_1 v30 = abstract_1();
return abstract_0();

}
/* method id 406 */ abstract_0 C1::func1 (abstract_2 v31, abstract_2 v32, abstract_0* v33) {
abstract_1 v34 = abstract_1();
abstract_1 v35 = abstract_1();
abstract_2 v36 = abstract_2();
return (((C0*) 0))->C0::func0(v15);

}
/* method id 407 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::~C2 () {
abstract_0* v37 = ((abstract_0*) 0);
abstract_2 v38 = abstract_2();
abstract_3 v39 = abstract_3();
abstract_3 v40 = abstract_3();
return;

}
/* method id 409 */ abstract_0 C2::func3 (abstract_3 v41, abstract_0* v42, abstract_3 v43) {
abstract_0* v44 = ((abstract_0*) 0);
delete (new C1 ());
return abstract_0();

}
/* method id 410 */ abstract_4 C2::func0 (abstract_0* v48, abstract_1 v49) {
return abstract_4();

}
/* method id 411 */ abstract_4 C2::func0 (abstract_5 v54) {
abstract_0* v55 = new abstract_0 ();
abstract_2 v56 = abstract_2();
abstract_0* v57 = new abstract_0 ();
abstract_5 v58 = abstract_5();
return abstract_4();

}
/* method id 412 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 413 */ C3::~C3 () {
return;

}
/* method id 414 */ C3::C3 () {
abstract_1 v63 = abstract_1();
abstract_0* v64 = ((abstract_0*) 0);
abstract_5 v65 = abstract_5();
abstract_1 v66 = abstract_1();
return;

}
/* method id 415 */ abstract_4 C3::func1 (abstract_2 v69, abstract_0* v70, abstract_0* v71, abstract_0* v72) {
abstract_1 v73 = abstract_1();
C1 v74 = *(((C1*) 0));
C1 v75 = *(((C1*) 0));
abstract_2 v76 = abstract_2();
delete (new C1 ());
return ((new C2 ()))->C2::func0(abstract_5());

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var13: AbstractType{1}
8    | var14: PtrType{AbstractType{0}}
12   | var15: PtrType{AbstractType{0}}
16   | var16: AbstractType{1}
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
12   | var13: AbstractType{1}
16   | var14: PtrType{AbstractType{0}}
20   | var15: PtrType{AbstractType{0}}
24   | var16: AbstractType{1}
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
class C2    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var59: PtrType{AbstractType{0}}
12   | var60: AbstractType{1}
16   | var61: AbstractType{1}
20   | var62: AbstractType{5}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var13: AbstractType{1}
32   | var14: PtrType{AbstractType{0}}
36   | var15: PtrType{AbstractType{0}}
40   | var16: AbstractType{1}
44   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 44;
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
class C3    size(56)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | | var59: PtrType{AbstractType{0}}
12   | | var60: AbstractType{1}
16   | | var61: AbstractType{1}
20   | | var62: AbstractType{5}
24   | +---
24   | var81: PtrType{AbstractType{0}}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   | var13: AbstractType{1}
36   | var14: PtrType{AbstractType{0}}
40   | var15: PtrType{AbstractType{0}}
44   | var16: AbstractType{1}
48   +---
48   +--- (virtual base class C1)
48   | {vfptr}
52   | {vbptr}
56   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 56;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 48;
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

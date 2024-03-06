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
/* method id 403 */ virtual abstract_2 func0 (abstract_4 v13, abstract_4 v14, abstract_0 v15, abstract_4 v16);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ abstract_2 func2 (abstract_0 v20, abstract_0 v21, abstract_0 v22, abstract_0 v23);
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ C1 ();
C1 (special_constructor);
abstract_3 v24;
abstract_0 v25;
abstract_0 v26;
};
struct C2 : public virtual C1 {
/* method id 408 */ virtual abstract_2 func4 (abstract_0 v27);
/* method id 409 */ virtual abstract_2** func0 (abstract_0 v30, abstract_5 v31, abstract_4 v32, abstract_1 v33);
/* method id 410 */ virtual abstract_2** func3 (abstract_1 v34, abstract_0 v35);
/* method id 411 */ virtual abstract_7 func4 ();
/* method id 412 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C1, public C2 {
/* method id 414 */ C3 ();
/* method id 415 */ virtual void func7 (abstract_1 v37, abstract_0 v38);
/* method id 416 */ abstract_2** func8 (abstract_1 v43, abstract_0 v44, abstract_1 v45, abstract_1 v46);
/* method id 417 */ virtual abstract_2** func9 (abstract_1 v55, abstract_1 v56, abstract_5 v57, abstract_1 v58);
C3 (special_constructor);
abstract_1 v59;
abstract_3 v60;
abstract_1 v61;
abstract_1 v62;
};
abstract_2** func11 (abstract_1 v63, abstract_1 v64, abstract_3 v65, abstract_1 v66);
abstract_2** func12 (abstract_3 v71, abstract_1 v72, abstract_0 v73);
abstract_2** func13 (abstract_1 v77, abstract_6 v78, abstract_1 v79, abstract_1 v80);
abstract_2** func14 (abstract_0 v85);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
delete (new C1 ());
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
return abstract_2();

}
/* method id 403 */ abstract_2 C0::func0 (abstract_4 v13, abstract_4 v14, abstract_0 v15, abstract_4 v16) {
abstract_5 v17 = abstract_5();
abstract_5 v18 = abstract_5();
abstract_1 v19 = abstract_1();
return abstract_2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func2 (abstract_0 v20, abstract_0 v21, abstract_0 v22, abstract_0 v23) {
return abstract_2();

}
/* method id 406 */ C1::~C1 () {
return;

}
/* method id 407 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ abstract_2 C2::func4 (abstract_0 v27) {
return abstract_2();

}
/* method id 409 */ abstract_2** C2::func0 (abstract_0 v30, abstract_5 v31, abstract_4 v32, abstract_1 v33) {
delete (new C2 ());
return new abstract_2* ();

}
/* method id 410 */ abstract_2** C2::func3 (abstract_1 v34, abstract_0 v35) {
return new abstract_2* ();

}
/* method id 411 */ abstract_7 C2::func4 () {
return abstract_7();

}
/* method id 412 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 414 */ C3::C3 () {
abstract_1 v36 = abstract_1();
return;

}
/* method id 415 */ void C3::func7 (abstract_1 v37, abstract_0 v38) {
abstract_2*** v39 = new abstract_2** ();
abstract_3 v40 = abstract_3();
abstract_1 v41 = abstract_1();
abstract_1 v42 = abstract_1();
delete (new C3 ());
return;

}
/* method id 416 */ abstract_2** C3::func8 (abstract_1 v43, abstract_0 v44, abstract_1 v45, abstract_1 v46) {
abstract_1 v47 = abstract_1();
abstract_5 v48 = abstract_5();
abstract_2*** v49 = ((abstract_2***) 0);
abstract_1 v50 = abstract_1();
return new abstract_2* ();

}
/* method id 417 */ abstract_2** C3::func9 (abstract_1 v55, abstract_1 v56, abstract_5 v57, abstract_1 v58) {
v24 = v60;
v24 = v60;
return new abstract_2* ();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_2** func11 (abstract_1 v63, abstract_1 v64, abstract_3 v65, abstract_1 v66) {
abstract_1 v67;
abstract_0 v68;
abstract_1 v69;
abstract_0 v70;

v68 = abstract_0();
v68 = abstract_0();
v68 = abstract_0();
v68 = abstract_0();
return new abstract_2* ();

}
abstract_2** func12 (abstract_3 v71, abstract_1 v72, abstract_0 v73) {
abstract_1 v74;
abstract_1 v75;
abstract_0 v76;

delete (new C2 ());
return new abstract_2* ();

}
abstract_2** func13 (abstract_1 v77, abstract_6 v78, abstract_1 v79, abstract_1 v80) {
abstract_3 v81;
abstract_1 v82;
abstract_1 v83;
abstract_0 v84;

return new abstract_2* ();

}
abstract_2** func14 (abstract_0 v85) {
abstract_1 v86;
abstract_1 v87;
abstract_0 v88;

return new abstract_2* ();

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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var24: AbstractType{3}
12   | var25: AbstractType{0}
16   | var26: AbstractType{0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
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
 const size_t model_offset = 20;
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
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | {vbptr}
20   | var24: AbstractType{3}
24   | var25: AbstractType{0}
28   | var26: AbstractType{0}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(48)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | +---
8    | var59: AbstractType{1}
12   | var60: AbstractType{3}
16   | var61: AbstractType{1}
20   | var62: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var24: AbstractType{3}
40   | var25: AbstractType{0}
44   | var26: AbstractType{0}
48   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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

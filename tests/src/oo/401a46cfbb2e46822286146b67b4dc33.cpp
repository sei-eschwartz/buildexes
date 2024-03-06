// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
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
/* method id 405 */ abstract_2 func0 (abstract_1 v14, abstract_1 v15, abstract_1 v16, abstract_3 v17);
/* method id 406 */ virtual abstract_2 func2 (abstract_0 v18, abstract_0 v19, abstract_3 v20, abstract_3 v21);
/* method id 407 */ virtual ~C1 ();
/* method id 408 */ virtual abstract_2 func2 (C0 v28, C0 v29, C0 v30);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_1 v35;
abstract_2** v36;
abstract_2** v37;
abstract_1 v38;
};
struct C2 : public virtual C1 {
/* method id 410 */ C2 ();
/* method id 411 */ virtual ~C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 412 */ C3 ();
C3 (special_constructor);
abstract_1 v53;
abstract_1 v54;
abstract_1 v55;
abstract_5 v56;
};
abstract_2 func6 (C3 v57);
abstract_2 func7 (abstract_3 v62, abstract_1 v63, abstract_1 v64, C3 v65);
abstract_2 func8 (abstract_1 v66, C3 v67, abstract_1 v68, C3 v69);
abstract_2 func9 (abstract_1 v74, abstract_2** v75, abstract_1 v76, abstract_1 v77);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
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
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
delete (new C2 ());
return abstract_2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func0 (abstract_1 v14, abstract_1 v15, abstract_1 v16, abstract_3 v17) {
return abstract_2();

}
/* method id 406 */ abstract_2 C1::func2 (abstract_0 v18, abstract_0 v19, abstract_3 v20, abstract_3 v21) {
abstract_3 v22 = abstract_3();
abstract_1 v23 = abstract_1();
return abstract_2();

}
/* method id 407 */ C1::~C1 () {
abstract_1 v24 = abstract_1();
abstract_1 v25 = abstract_1();
abstract_1 v26 = abstract_1();
abstract_1 v27 = abstract_1();
return;

}
/* method id 408 */ abstract_2 C1::func2 (C0 v28, C0 v29, C0 v30) {
abstract_1 v31 = abstract_1();
abstract_1 v32 = abstract_1();
abstract_3 v33 = abstract_3();
abstract_4 v34 = abstract_4();
return abstract_2();

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C2::C2 () {
abstract_1 v39 = abstract_1();
abstract_1 v40 = abstract_1();
delete (new C1 ());
return;

}
/* method id 411 */ C2::~C2 () {
abstract_2** v45 = new abstract_2* ();
abstract_1 v46 = abstract_1();
abstract_1 v47 = abstract_1();
abstract_1 v48 = abstract_1();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_2 func6 (C3 v57) {
C3 v58;
abstract_1 v59;
C0 v60;
abstract_1 v61;

return abstract_2();

}
abstract_2 func7 (abstract_3 v62, abstract_1 v63, abstract_1 v64, C3 v65) {

return abstract_2();

}
abstract_2 func8 (abstract_1 v66, C3 v67, abstract_1 v68, C3 v69) {
abstract_1 v70;
abstract_1 v71;
C0 v72;
abstract_1 v73;

return abstract_2();

}
abstract_2 func9 (abstract_1 v74, abstract_2** v75, abstract_1 v76, abstract_1 v77) {
abstract_1 v78;
abstract_1 v79;
abstract_1 v80;
abstract_1 v81;

return abstract_2();

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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var35: AbstractType{1}
12   | var36: DeletablePtrType{PtrType{AbstractType{2}}}
16   | var37: DeletablePtrType{PtrType{AbstractType{2}}}
20   | var38: AbstractType{1}
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
class C2    size(32)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | {vbptr}
16   | var35: AbstractType{1}
20   | var36: DeletablePtrType{PtrType{AbstractType{2}}}
24   | var37: DeletablePtrType{PtrType{AbstractType{2}}}
28   | var38: AbstractType{1}
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
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(52)
0    +---
0    | {vbptr}
4    | var53: AbstractType{1}
8    | var54: AbstractType{1}
12   | var55: AbstractType{1}
16   | var56: AbstractType{5}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var35: AbstractType{1}
36   | var36: DeletablePtrType{PtrType{AbstractType{2}}}
40   | var37: DeletablePtrType{PtrType{AbstractType{2}}}
44   | var38: AbstractType{1}
48   +---
48   +--- (virtual base class C2)
48   | {vbptr}
52   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
 const size_t model_offset = 48;
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

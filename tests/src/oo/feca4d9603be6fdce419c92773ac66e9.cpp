// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_5 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 ();
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_1 v1;
abstract_0* v2;
abstract_1 v3;
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual abstract_0 func0 (abstract_0* v4, abstract_1 v5, abstract_0* v6, abstract_0* v7);
/* method id 404 */ C1 ();
/* method id 405 */ virtual ~C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 406 */ virtual abstract_5 func2 (abstract_4 v15, abstract_0* v16);
/* method id 407 */ virtual abstract_5 func1 ();
/* method id 408 */ ~C2 ();
/* method id 409 */ C2 ();
C2 (special_constructor);
abstract_5* v29;
abstract_2 v30;
abstract_0* v31;
abstract_0* v32;
};
struct C3 : public virtual C2 {
/* method id 410 */ virtual abstract_5 func2 (abstract_4 v33, abstract_4 v34, abstract_0* v35);
/* method id 411 */ virtual ~C3 ();
/* method id 412 */ C3 ();
/* method id 413 */ virtual abstract_0 func4 (abstract_2 v46, C1 v47, abstract_1 v48);
C3 (special_constructor);
abstract_7 v52;
C1 v53;
};
abstract_5 func5 (abstract_2 v54, abstract_1 v55);
abstract_5 func6 (abstract_0* v58, C3 v59);
abstract_0 func7 (C1 v60, C1 v61, abstract_0* v62, abstract_0* v63);
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return abstract_0();

}
/* method id 401 */ C0::~C0 () {
abstract_1 v0 = abstract_1();
return;

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0 C1::func0 (abstract_0* v4, abstract_1 v5, abstract_0* v6, abstract_0* v7) {
abstract_0* v8 = new abstract_0 ();
abstract_2 v9 = abstract_2();
abstract_0* v10 = new abstract_0 ();
abstract_2 v11 = abstract_2();
return abstract_0();

}
/* method id 404 */ C1::C1 () {
abstract_3 v12 = abstract_3();
return;

}
/* method id 405 */ C1::~C1 () {
abstract_4 v14 = abstract_4();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ abstract_5 C2::func2 (abstract_4 v15, abstract_0* v16) {
C1 v17 = *((new C1 ()));
abstract_3 v18 = abstract_3();
abstract_2 v19 = abstract_2();
abstract_4 v20 = abstract_4();
return abstract_5();

}
/* method id 407 */ abstract_5 C2::func1 () {
abstract_6 v21 = abstract_6();
abstract_6 v22 = abstract_6();
abstract_4 v23 = abstract_4();
abstract_0* v24 = ((abstract_0*) 0);
return ::func6(((abstract_0*) 0), *(((C3*) 0)));

}
/* method id 408 */ C2::~C2 () {
abstract_1 v25 = abstract_1();
C1 v26 = *(&(*(((C1*) 0))));
abstract_4 v27 = abstract_4();
abstract_6 v28 = abstract_6();
return;

}
/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 410 */ abstract_5 C3::func2 (abstract_4 v33, abstract_4 v34, abstract_0* v35) {
C1 v36 = *(&(*((new C1 ()))));
abstract_0* v37 = new abstract_0 ();
abstract_5* v38 = new abstract_5 ();
return abstract_5();

}
/* method id 411 */ C3::~C3 () {
abstract_3 v39 = abstract_3();
abstract_0* v40 = new abstract_0 ();
abstract_0* v41 = new abstract_0 ();
C1 v42 = *((new C1 ()));
return;

}
/* method id 412 */ C3::C3 () {
abstract_6 v43 = abstract_6();
abstract_7 v44 = abstract_7();
abstract_0* v45 = ((abstract_0*) 0);
return;

}
/* method id 413 */ abstract_0 C3::func4 (abstract_2 v46, C1 v47, abstract_1 v48) {
abstract_0* v49 = new abstract_0 ();
abstract_5* v50 = ((abstract_5*) 0);
C1 v51 = *(&(*((new C1 ()))));
return ::func7(v47, v51, ((abstract_0*) 0), ((abstract_0*) 0));

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_5 func5 (abstract_2 v54, abstract_1 v55) {
abstract_4 v56;
abstract_0* v57;

return ::func6(v57, *(((C3*) 0)));

}
abstract_5 func6 (abstract_0* v58, C3 v59) {

return abstract_5();

}
abstract_0 func7 (C1 v60, C1 v61, abstract_0* v62, abstract_0* v63) {
abstract_8 v64;
abstract_1 v65;
abstract_1 v66;
abstract_7 v67;

return abstract_0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var1: AbstractType{1}
8    | var2: PtrType{AbstractType{0}}
12   | var3: AbstractType{1}
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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var1: AbstractType{1}
16   | var2: PtrType{AbstractType{0}}
20   | var3: AbstractType{1}
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
class C2    size(48)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var29: PtrType{AbstractType{5}}
12   | var30: AbstractType{2}
16   | var31: PtrType{AbstractType{0}}
20   | var32: PtrType{AbstractType{0}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var1: AbstractType{1}
32   | var2: PtrType{AbstractType{0}}
36   | var3: AbstractType{1}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | {vbptr}
48   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 48;
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
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(84)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var52: AbstractType{7}
12   | var53: ClassType{1}
36   +---
36   +--- (virtual base class C0)
36   | {vfptr}
40   | var1: AbstractType{1}
44   | var2: PtrType{AbstractType{0}}
48   | var3: AbstractType{1}
52   +---
52   +--- (virtual base class C1)
52   | {vfptr}
56   | {vbptr}
60   +---
60   +--- (virtual base class C2)
60   | {vfptr}
64   | {vbptr}
68   | var29: PtrType{AbstractType{5}}
72   | var30: AbstractType{2}
76   | var31: PtrType{AbstractType{0}}
80   | var32: PtrType{AbstractType{0}}
84   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 84;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 60;
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

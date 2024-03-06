// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 ();
/* method id 401 */ ~C0 ();
/* method id 402 */ virtual abstract_0 func0 (abstract_1* v1, abstract_1* v2, abstract_1* v3, abstract_1* v4);
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_1* v5;
abstract_1* v6;
abstract_1* v7;
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
/* method id 405 */ virtual abstract_1 func2 (abstract_2 v14, abstract_1* v15);
C1 (special_constructor);
C0 v24;
C0 v25;
C0 v26;
C0 v27;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
/* method id 408 */ virtual ~C2 ();
C2 (special_constructor);
C0 v40;
C0 v41;
C0 v42;
C0 v43;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual abstract_0 func0 ();
/* method id 411 */ virtual ~C3 ();
C3 (special_constructor);
abstract_2 v94;
C0 v95;
};
abstract_1 func5 (abstract_1* v96);
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
delete (new C1 ());
return abstract_0();

}
/* method id 401 */ C0::~C0 () {
abstract_1* v0 = ((abstract_1*) 0);
::func5(v5);
::func5(v5);
return;

}
/* method id 402 */ abstract_0 C0::func0 (abstract_1* v1, abstract_1* v2, abstract_1* v3, abstract_1* v4) {
delete (new C3 ());
return abstract_0();

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
C0 v8 = *(&(*((new C0 ()))));
delete (new C3 ());
return;

}
/* method id 405 */ abstract_1 C1::func2 (abstract_2 v14, abstract_1* v15) {
abstract_2 v16 = abstract_2();
C0 v17 = *(((C0*) 0));
abstract_2 v18 = abstract_2();
C0 v19 = *(((C0*) 0));
delete (new C1 ());
return abstract_1();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
C0 v28 = *(((C0*) 0));
C0 v29 = *(((C0*) 0));
abstract_2 v30 = abstract_2();
C0 v31 = *(((C0*) 0));
delete (new C1 ());
return;

}
/* method id 408 */ C2::~C2 () {
C0 v36 = *((new C0 ()));
C0 v37 = *((new C0 ()));
C0 v38 = *((new C0 ()));
C0 v39 = *((new C0 ()));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
abstract_2 v44 = abstract_2();
abstract_2 v45 = abstract_2();
C0 v46 = *(((C0*) 0));
C0 v47 = *(((C0*) 0));
return;

}
/* method id 410 */ abstract_0 C3::func0 () {
abstract_1* v48 = new abstract_1 ();
delete (new C3 ());
return abstract_0();

}
/* method id 411 */ C3::~C3 () {
C0 v49 = *(((C0*) 0));
abstract_1* v50 = ((abstract_1*) 0);
C0 v51 = *(((C0*) 0));
C0 v52 = *(((C0*) 0));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_1 func5 (abstract_1* v96) {
C0 v97;
C0 v98;
abstract_2 v99;
C0 v100;

delete (new C3 ());
return abstract_1();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var5: PtrType{AbstractType{1}}
8    | var6: PtrType{AbstractType{1}}
12   | var7: PtrType{AbstractType{1}}
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
class C1    size(88)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var24: ClassType{0}
24   | var25: ClassType{0}
40   | var26: ClassType{0}
56   | var27: ClassType{0}
72   +---
72   +--- (virtual base class C0)
72   | {vfptr}
76   | var5: PtrType{AbstractType{1}}
80   | var6: PtrType{AbstractType{1}}
84   | var7: PtrType{AbstractType{1}}
88   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 88;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 72;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(160)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var40: ClassType{0}
24   | var41: ClassType{0}
40   | var42: ClassType{0}
56   | var43: ClassType{0}
72   +---
72   +--- (virtual base class C0)
72   | {vfptr}
76   | var5: PtrType{AbstractType{1}}
80   | var6: PtrType{AbstractType{1}}
84   | var7: PtrType{AbstractType{1}}
88   +---
88   +--- (virtual base class C1)
88   | {vfptr}
92   | {vbptr}
96   | var24: ClassType{0}
112  | var25: ClassType{0}
128  | var26: ClassType{0}
144  | var27: ClassType{0}
160  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 160;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 88;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(188)
0    +---
0    | {vbptr}
4    | var94: AbstractType{2}
8    | var95: ClassType{0}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   | var5: PtrType{AbstractType{1}}
36   | var6: PtrType{AbstractType{1}}
40   | var7: PtrType{AbstractType{1}}
44   +---
44   +--- (virtual base class C1)
44   | {vfptr}
48   | {vbptr}
52   | var24: ClassType{0}
68   | var25: ClassType{0}
84   | var26: ClassType{0}
100  | var27: ClassType{0}
116  +---
116  +--- (virtual base class C2)
116  | {vfptr}
120  | {vbptr}
124  | var40: ClassType{0}
140  | var41: ClassType{0}
156  | var42: ClassType{0}
172  | var43: ClassType{0}
188  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 188;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 44;
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
 const size_t model_offset = 116;
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

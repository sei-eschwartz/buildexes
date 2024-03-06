// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ virtual abstract_1 func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual abstract_1* func1 (abstract_0 v4, abstract_0 v5, abstract_0 v6);
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_0 v19;
abstract_0 v20;
abstract_0 v21;
abstract_0 v22;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual abstract_1 func0 (abstract_0 v23, abstract_0 v24, abstract_0 v25, abstract_0 v26);
/* method id 405 */ C1 ();
/* method id 406 */ virtual ~C1 ();
C1 (special_constructor);
abstract_0 v52;
abstract_0 v53;
abstract_0 v54;
abstract_0 v55;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ virtual void func2 ();
/* method id 410 */ virtual void func1 ();
C2 (special_constructor);
C1 v93;
C1 v94;
C1 v95;
C1 v96;
};
struct C3 : public virtual C0, public virtual C2 {
/* method id 411 */ C3 ();
/* method id 412 */ virtual abstract_3 func1 (abstract_0 v97, abstract_2 v98, abstract_0 v99);
/* method id 413 */ virtual abstract_3 func3 (C1 v100, abstract_0 v101);
/* method id 414 */ ~C3 ();
C3 (special_constructor);
abstract_0 v105;
abstract_2 v106;
C1 v107;
};
abstract_1* func4 (abstract_2 v108, C1 v109, C1 v110, abstract_0 v111);
abstract_3 func5 ();
// definitions
/* method id 400 */ C0::~C0 () {
v19 = v20;
return;

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return abstract_1();

}
/* method id 402 */ abstract_1* C0::func1 (abstract_0 v4, abstract_0 v5, abstract_0 v6) {
abstract_0 v7 = abstract_0();
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
delete (new C3 ());
return new abstract_1 ();

}
/* method id 403 */ C0::C0 () {
abstract_0 v15 = abstract_0();
abstract_0 v16 = abstract_0();
abstract_0 v17 = abstract_0();
abstract_0 v18 = abstract_0();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_1 C1::func0 (abstract_0 v23, abstract_0 v24, abstract_0 v25, abstract_0 v26) {
abstract_0 v27 = abstract_0();
abstract_0 v28 = abstract_0();
abstract_0 v29 = abstract_0();
return abstract_1();

}
/* method id 405 */ C1::C1 () {
abstract_0 v30 = abstract_0();
abstract_0 v31 = abstract_0();
abstract_0 v32 = abstract_0();
abstract_0 v33 = abstract_0();
return;

}
/* method id 406 */ C1::~C1 () {
abstract_0 v34 = abstract_0();
delete (new C2 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_0 v56 = abstract_0();
abstract_0 v57 = abstract_0();
abstract_0 v58 = abstract_0();
abstract_0 v59 = abstract_0();
v95 = *(((C1*) 0));
v95 = *(((C1*) 0));
return;

}
/* method id 408 */ C2::~C2 () {
abstract_0 v74 = abstract_0();
abstract_0 v75 = abstract_0();
abstract_0 v76 = abstract_0();
abstract_0 v77 = abstract_0();
return;

}
/* method id 409 */ void C2::func2 () {
abstract_0 v82 = abstract_0();
abstract_0 v83 = abstract_0();
abstract_0 v84 = abstract_0();
return;

}
/* method id 410 */ void C2::func1 () {
C1 v89 = *((new C1 ()));
C1 v90 = *((new C1 ()));
C1 v91 = *((new C1 ()));
C1 v92 = *((new C1 ()));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 411 */ C3::C3 () {
return;

}
/* method id 412 */ abstract_3 C3::func1 (abstract_0 v97, abstract_2 v98, abstract_0 v99) {
return ::func5();

}
/* method id 413 */ abstract_3 C3::func3 (C1 v100, abstract_0 v101) {
return ::func5();

}
/* method id 414 */ C3::~C3 () {
C1 v102 = *(((C1*) 0));
C1 v103 = *(((C1*) 0));
abstract_2 v104 = abstract_2();
::func5();
::func5();
v21 = abstract_0();
v21 = abstract_0();
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

abstract_1* func4 (abstract_2 v108, C1 v109, C1 v110, abstract_0 v111) {
C1 v112;

return new abstract_1 ();

}
abstract_3 func5 () {
abstract_0 v113;
abstract_0 v114;
abstract_2 v115;
abstract_4 v116;

return abstract_3();

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var19: AbstractType{0}
8    | var20: AbstractType{0}
12   | var21: AbstractType{0}
16   | var22: AbstractType{0}
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
class C1    size(48)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var52: AbstractType{0}
12   | var53: AbstractType{0}
16   | var54: AbstractType{0}
20   | var55: AbstractType{0}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   | var19: AbstractType{0}
36   | var20: AbstractType{0}
40   | var21: AbstractType{0}
44   | var22: AbstractType{0}
48   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(248)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var93: ClassType{1}
56   | var94: ClassType{1}
104  | var95: ClassType{1}
152  | var96: ClassType{1}
200  | {vtordisp for vbase 0}
204  +---
204  +--- (virtual base class C0)
204  | {vfptr}
208  | var19: AbstractType{0}
212  | var20: AbstractType{0}
216  | var21: AbstractType{0}
220  | var22: AbstractType{0}
224  +---
224  +--- (virtual base class C1)
224  | {vfptr}
228  | {vbptr}
232  | var52: AbstractType{0}
236  | var53: AbstractType{0}
240  | var54: AbstractType{0}
244  | var55: AbstractType{0}
248  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 248;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 224;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(312)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var105: AbstractType{0}
12   | var106: AbstractType{2}
16   | var107: ClassType{1}
64   | {vtordisp for vbase 0}
68   +---
68   +--- (virtual base class C0)
68   | {vfptr}
72   | var19: AbstractType{0}
76   | var20: AbstractType{0}
80   | var21: AbstractType{0}
84   | var22: AbstractType{0}
88   +---
88   +--- (virtual base class C1)
88   | {vfptr}
92   | {vbptr}
96   | var52: AbstractType{0}
100  | var53: AbstractType{0}
104  | var54: AbstractType{0}
108  | var55: AbstractType{0}
112  +---
112  +--- (virtual base class C2)
112  | {vfptr}
116  | {vbptr}
120  | var93: ClassType{1}
168  | var94: ClassType{1}
216  | var95: ClassType{1}
264  | var96: ClassType{1}
312  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 312;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 68;
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
 const size_t model_offset = 112;
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

// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
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
abstract_0 v87;
abstract_0 v88;
abstract_0 v89;
abstract_0 v90;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
/* method id 408 */ virtual void func2 ();
/* method id 409 */ virtual ~C2 ();
/* method id 410 */ virtual void func1 ();
C2 (special_constructor);
C1 v105;
C1 v106;
C1 v107;
C1 v108;
};
struct C3 : public virtual C0, public virtual C2 {
/* method id 411 */ C3 ();
/* method id 412 */ virtual abstract_3 func1 (abstract_0 v109, abstract_2 v110, abstract_0 v111);
/* method id 413 */ virtual abstract_3 func3 (C1 v112, abstract_0 v113);
/* method id 414 */ virtual abstract_3 func4 (C1 v114, abstract_2 v115, abstract_0 v116, C1 v117);
C3 (special_constructor);
abstract_2 v122;
C1 v123;
C1 v124;
C1 v125;
};
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C3 ());
return;

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3) {
delete (new C1 ());
return abstract_1();

}
/* method id 402 */ abstract_1* C0::func1 (abstract_0 v4, abstract_0 v5, abstract_0 v6) {
abstract_0 v7 = abstract_0();
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
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
abstract_0 v38 = abstract_0();
abstract_0 v39 = abstract_0();
abstract_0 v40 = abstract_0();
abstract_0 v41 = abstract_0();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_0 v91 = abstract_0();
abstract_0 v92 = abstract_0();
abstract_0 v93 = abstract_0();
return;

}
/* method id 408 */ void C2::func2 () {
abstract_0 v94 = abstract_0();
abstract_0 v95 = abstract_0();
abstract_0 v96 = abstract_0();
delete (new C1 ());
return;

}
/* method id 409 */ C2::~C2 () {
abstract_0 v97 = abstract_0();
abstract_0 v98 = abstract_0();
abstract_0 v99 = abstract_0();
C1 v100 = *(((C1*) 0));
delete (new C2 ());
return;

}
/* method id 410 */ void C2::func1 () {
C1 v101 = *((new C1 ()));
C1 v102 = *((new C1 ()));
C1 v103 = *((new C1 ()));
C1 v104 = *((new C1 ()));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 411 */ C3::C3 () {
return;

}
/* method id 412 */ abstract_3 C3::func1 (abstract_0 v109, abstract_2 v110, abstract_0 v111) {
return abstract_3();

}
/* method id 413 */ abstract_3 C3::func3 (C1 v112, abstract_0 v113) {
return abstract_3();

}
/* method id 414 */ abstract_3 C3::func4 (C1 v114, abstract_2 v115, abstract_0 v116, C1 v117) {
C1 v118 = *((new C1 ()));
abstract_0 v119 = abstract_0();
C1 v120 = *((new C1 ()));
C1 v121 = *((new C1 ()));
return abstract_3();

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

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
8    | var87: AbstractType{0}
12   | var88: AbstractType{0}
16   | var89: AbstractType{0}
20   | var90: AbstractType{0}
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
8    | var105: ClassType{1}
56   | var106: ClassType{1}
104  | var107: ClassType{1}
152  | var108: ClassType{1}
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
232  | var87: AbstractType{0}
236  | var88: AbstractType{0}
240  | var89: AbstractType{0}
244  | var90: AbstractType{0}
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
class C3    size(404)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var122: AbstractType{2}
12   | var123: ClassType{1}
60   | var124: ClassType{1}
108  | var125: ClassType{1}
156  | {vtordisp for vbase 0}
160  +---
160  +--- (virtual base class C0)
160  | {vfptr}
164  | var19: AbstractType{0}
168  | var20: AbstractType{0}
172  | var21: AbstractType{0}
176  | var22: AbstractType{0}
180  +---
180  +--- (virtual base class C1)
180  | {vfptr}
184  | {vbptr}
188  | var87: AbstractType{0}
192  | var88: AbstractType{0}
196  | var89: AbstractType{0}
200  | var90: AbstractType{0}
204  +---
204  +--- (virtual base class C2)
204  | {vfptr}
208  | {vbptr}
212  | var105: ClassType{1}
260  | var106: ClassType{1}
308  | var107: ClassType{1}
356  | var108: ClassType{1}
404  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 404;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 160;
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
 const size_t model_offset = 204;
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

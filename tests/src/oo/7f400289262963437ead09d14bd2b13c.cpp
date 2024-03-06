// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_0 { int x; };
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
abstract_0 v104;
};
struct C3 : public virtual C1 {
/* method id 411 */ ~C3 ();
/* method id 412 */ abstract_1* func1 (C1 v105, abstract_0 v106);
/* method id 413 */ C3 ();
C3 (special_constructor);
C1 v113;
C1 v114;
C1 v115;
};
abstract_2 func3 (C1 v116, abstract_0 v117, C1 v118, C1 v119);
// definitions
/* method id 400 */ C0::~C0 () {
v19 = abstract_0();
v19 = abstract_0();
v19 = abstract_0();
v19 = abstract_0();
return;

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3) {
v0 = v20;
v0 = v20;
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
v20 = v17;
v20 = v17;
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
return;

}
/* method id 410 */ void C2::func1 () {
C1 v101 = *(((C1*) 0));
C1 v102 = *(&(*((new C1 ()))));
C1 v103 = *(((C1*) 0));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 411 */ C3::~C3 () {
v87 = v19;
v87 = v19;
return;

}
/* method id 412 */ abstract_1* C3::func1 (C1 v105, abstract_0 v106) {
C1 v107 = *(((C1*) 0));
C1 v108 = *(((C1*) 0));
return ((abstract_1*) 0);

}
/* method id 413 */ C3::C3 () {
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_2 func3 (C1 v116, abstract_0 v117, C1 v118, C1 v119) {

v119 = v118;
v119 = v118;
v119 = v118;
return abstract_2();

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
class C2    size(60)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var104: AbstractType{0}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var19: AbstractType{0}
24   | var20: AbstractType{0}
28   | var21: AbstractType{0}
32   | var22: AbstractType{0}
36   +---
36   +--- (virtual base class C1)
36   | {vfptr}
40   | {vbptr}
44   | var87: AbstractType{0}
48   | var88: AbstractType{0}
52   | var89: AbstractType{0}
56   | var90: AbstractType{0}
60   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 60;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(196)
0    +---
0    | {vbptr}
4    | var113: ClassType{1}
52   | var114: ClassType{1}
100  | var115: ClassType{1}
148  | {vtordisp for vbase 0}
152  +---
152  +--- (virtual base class C0)
152  | {vfptr}
156  | var19: AbstractType{0}
160  | var20: AbstractType{0}
164  | var21: AbstractType{0}
168  | var22: AbstractType{0}
172  +---
172  +--- (virtual base class C1)
172  | {vfptr}
176  | {vbptr}
180  | var87: AbstractType{0}
184  | var88: AbstractType{0}
188  | var89: AbstractType{0}
192  | var90: AbstractType{0}
196  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 196;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 172;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

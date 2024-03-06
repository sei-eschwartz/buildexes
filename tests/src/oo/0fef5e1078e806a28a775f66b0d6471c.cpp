// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
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
abstract_0 v99;
abstract_0 v100;
abstract_0 v101;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
/* method id 408 */ virtual void func3 ();
C2 (special_constructor);
abstract_0 v113;
abstract_0 v114;
};
struct C3 : public virtual C2 {
/* method id 410 */ virtual abstract_1* func5 (abstract_0 v115, C2 v116, C2 v117, C2 v118);
/* method id 411 */ C3 ();
/* method id 412 */ virtual ~C3 ();
C3 (special_constructor);
C2 v133;
C2 v134;
C2 v135;
C2 v136;
};
abstract_1* func6 (C2 v137, C2 v138, C2 v139, C2 v140);
abstract_1* func7 ();
abstract_1 func8 ();
// definitions
/* method id 400 */ C0::~C0 () {
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
return ((abstract_1*) 0);

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
return ::func8();

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
abstract_0 v102 = abstract_0();
abstract_0 v103 = abstract_0();
abstract_0 v104 = abstract_0();
abstract_0 v105 = abstract_0();
return;

}
/* method id 408 */ void C2::func3 () {
abstract_0 v110 = abstract_0();
abstract_0 v111 = abstract_0();
abstract_0 v112 = abstract_0();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ abstract_1* C3::func5 (abstract_0 v115, C2 v116, C2 v117, C2 v118) {
C2 v119 = *(&(*(((C2*) 0))));
C2 v120 = *(&(*(((C2*) 0))));
return ((abstract_1*) 0);

}
/* method id 411 */ C3::C3 () {
C2 v121 = *(&(*((new C2 ()))));
C2 v122 = *(&(*((new C2 ()))));
C2 v123 = *(&(*((new C2 ()))));
C2 v124 = *(&(*((new C2 ()))));
return;

}
/* method id 412 */ C3::~C3 () {
C2 v125 = *(((C2*) 0));
C2 v126 = *(((C2*) 0));
C2 v127 = *(((C2*) 0));
C2 v128 = *(((C2*) 0));
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_1* func6 (C2 v137, C2 v138, C2 v139, C2 v140) {
C2 v141;
C2 v142;
C2 v143;
C2 v144;

return ((abstract_1*) 0);

}
abstract_1* func7 () {

return new abstract_1 ();

}
abstract_1 func8 () {

return abstract_1();

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
class C1    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var99: AbstractType{0}
12   | var100: AbstractType{0}
16   | var101: AbstractType{0}
20   | {vtordisp for vbase 0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var19: AbstractType{0}
32   | var20: AbstractType{0}
36   | var21: AbstractType{0}
40   | var22: AbstractType{0}
44   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 44;
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
class C2    size(60)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var113: AbstractType{0}
12   | var114: AbstractType{0}
16   | {vtordisp for vbase 0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var19: AbstractType{0}
28   | var20: AbstractType{0}
32   | var21: AbstractType{0}
36   | var22: AbstractType{0}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | {vbptr}
48   | var99: AbstractType{0}
52   | var100: AbstractType{0}
56   | var101: AbstractType{0}
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
class C3    size(308)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var133: ClassType{2}
68   | var134: ClassType{2}
128  | var135: ClassType{2}
188  | var136: ClassType{2}
248  | {vtordisp for vbase 0}
252  +---
252  +--- (virtual base class C0)
252  | {vfptr}
256  | var19: AbstractType{0}
260  | var20: AbstractType{0}
264  | var21: AbstractType{0}
268  | var22: AbstractType{0}
272  +---
272  +--- (virtual base class C1)
272  | {vfptr}
276  | {vbptr}
280  | var99: AbstractType{0}
284  | var100: AbstractType{0}
288  | var101: AbstractType{0}
292  +---
292  +--- (virtual base class C2)
292  | {vfptr}
296  | {vbptr}
300  | var113: AbstractType{0}
304  | var114: AbstractType{0}
308  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 308;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 292;
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

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void func0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ C1 ();
/* method id 403 */ virtual void func1 (C0 v7, abstract_0 v8, C0 v9, abstract_1 v10);
C1 (special_constructor);
abstract_0 v15;
abstract_0 v16;
abstract_0 v17;
abstract_0 v18;
};
struct C2 : public virtual C1 {
/* method id 404 */ C2 ();
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ virtual void func1 (void* v55);
/* method id 407 */ virtual void func1 (abstract_0 v57, abstract_0 v58, abstract_0 v59, abstract_0 v60);
C2 (special_constructor);
abstract_0 v61;
abstract_0 v62;
abstract_0 v63;
abstract_0 v64;
};
struct C3 : public virtual C2 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ virtual void func1 (abstract_0 v162, abstract_0 v163);
C3 (special_constructor);
abstract_0 v330;
abstract_0 v331;
abstract_0 v332;
abstract_0 v333;
};
void func2 (abstract_0 v334, abstract_0 v335, C0 v336, abstract_0 v337);
void func3 (C0 v340, abstract_0 v341, abstract_0 v342, abstract_0 v343);
void func4 (C0 v344, abstract_0 v345, abstract_0 v346);
void func5 (abstract_0 v350, abstract_0 v351, abstract_0 v352, abstract_0 v353);
// definitions
/* method id 400 */ void C0::func0 () {
void* v0 = ((void*) 0);
abstract_0 v1 = abstract_0();
void* v2 = ((void*) 0);
abstract_0 v3 = abstract_0();
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
void* v4 = ((void*) 0);
abstract_0 v5 = abstract_0();
return;

}
/* method id 403 */ void C1::func1 (C0 v7, abstract_0 v8, C0 v9, abstract_1 v10) {
abstract_0 v11 = abstract_0();
abstract_2 v12 = abstract_2();
abstract_0 v13 = abstract_0();
void* v14 = ((void*) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {
abstract_0 v19 = abstract_0();
abstract_0 v20 = abstract_0();
abstract_0 v21 = abstract_0();
C0 v22 = *(((C0*) 0));
return;

}
/* method id 405 */ C2::~C2 () {
abstract_0 v35 = abstract_0();
abstract_0 v36 = abstract_0();
abstract_0 v37 = abstract_0();
C0 v38 = *(((C0*) 0));
delete (new C1 ());
return;

}
/* method id 406 */ void C2::func1 (void* v55) {
void* v56 = ((void*) 0);
return;

}
/* method id 407 */ void C2::func1 (abstract_0 v57, abstract_0 v58, abstract_0 v59, abstract_0 v60) {
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
abstract_0 v65 = abstract_0();
abstract_0 v66 = abstract_0();
abstract_0 v67 = abstract_0();
C0 v68 = *(((C0*) 0));
return;

}
/* method id 409 */ C3::~C3 () {
abstract_0 v81 = abstract_0();
abstract_0 v82 = abstract_0();
abstract_0 v83 = abstract_0();
C0 v84 = *(((C0*) 0));
return;

}
/* method id 410 */ void C3::func1 (abstract_0 v162, abstract_0 v163) {
abstract_0 v164 = abstract_0();
C0 v165 = *(((C0*) 0));
abstract_0 v166 = abstract_0();
abstract_0 v167 = abstract_0();
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func2 (abstract_0 v334, abstract_0 v335, C0 v336, abstract_0 v337) {
abstract_0 v338;
abstract_0 v339;

return ::func4(v336, abstract_0(), abstract_0());

}
void func3 (C0 v340, abstract_0 v341, abstract_0 v342, abstract_0 v343) {

return ::func4(v340, v343, v343);

}
void func4 (C0 v344, abstract_0 v345, abstract_0 v346) {
abstract_0 v347;
abstract_0 v348;
abstract_0 v349;

return;

}
void func5 (abstract_0 v350, abstract_0 v351, abstract_0 v352, abstract_0 v353) {
abstract_0 v354;
abstract_0 v355;
C0 v356;
abstract_0 v357;

return;

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
8    | var15: AbstractType{0}
12   | var16: AbstractType{0}
16   | var17: AbstractType{0}
20   | var18: AbstractType{0}
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
8    | var61: AbstractType{0}
12   | var62: AbstractType{0}
16   | var63: AbstractType{0}
20   | var64: AbstractType{0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var15: AbstractType{0}
40   | var16: AbstractType{0}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(76)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var330: AbstractType{0}
12   | var331: AbstractType{0}
16   | var332: AbstractType{0}
20   | var333: AbstractType{0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var15: AbstractType{0}
40   | var16: AbstractType{0}
44   | var17: AbstractType{0}
48   | var18: AbstractType{0}
52   +---
52   +--- (virtual base class C2)
52   | {vfptr}
56   | {vbptr}
60   | var61: AbstractType{0}
64   | var62: AbstractType{0}
68   | var63: AbstractType{0}
72   | var64: AbstractType{0}
76   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 76;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 52;
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

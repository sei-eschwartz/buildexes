// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual abstract_1 func0 (abstract_0 v8, abstract_0 v9);
/* method id 403 */ virtual ~C0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_2 v18;
abstract_2 v19;
abstract_2 v20;
abstract_2 v21;
};
struct C1  {
/* method id 405 */ C1 ();
/* method id 406 */ virtual ~C1 ();
C1 (special_constructor);
C0 v181;
C0 v182;
C0 v183;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 407 */ C2 ();
/* method id 408 */ virtual ~C2 ();
C2 (special_constructor);
abstract_2 v203;
abstract_2 v204;
};
struct C3 : public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
C3 (special_constructor);
abstract_2 v234;
C0 v235;
C0 v236;
abstract_2 v237;
};
abstract_1 func3 ();
abstract_1 func4 (abstract_2 v240, abstract_2 v241, abstract_2 v242, abstract_2 v243);
abstract_1 func5 (abstract_2 v248, abstract_2 v249, abstract_2 v250, abstract_2 v251);
abstract_1 func6 (abstract_2 v256, abstract_2 v257, abstract_2 v258);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
::func6(abstract_2(), abstract_2(), abstract_2());
::func6(abstract_2(), abstract_2(), abstract_2());
::func6(abstract_2(), abstract_2(), abstract_2());
::func6(abstract_2(), abstract_2(), abstract_2());
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
abstract_0 v7 = abstract_0();
delete (new C3 ());
v1 = v1;
delete (new C2 ());
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 (abstract_0 v8, abstract_0 v9) {
abstract_2 v10 = abstract_2();
abstract_0 v11 = abstract_0();
abstract_0 v12 = abstract_0();
abstract_0 v13 = abstract_0();
delete (new C3 ());
delete (new C0 ());
return ::func3();

}
/* method id 403 */ C0::~C0 () {
abstract_2 v14 = abstract_2();
abstract_2 v15 = abstract_2();
abstract_2 v16 = abstract_2();
abstract_2 v17 = abstract_2();
delete (new C0 ());
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {
abstract_2 v22 = abstract_2();
abstract_2 v23 = abstract_2();
abstract_2 v24 = abstract_2();
delete (new C3 ());
return;

}
/* method id 406 */ C1::~C1 () {
abstract_2 v28 = abstract_2();
abstract_2 v29 = abstract_2();
abstract_2 v30 = abstract_2();
abstract_2 v31 = abstract_2();
delete (new C3 ());
delete (new C1 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 407 */ C2::C2 () {
abstract_2 v184 = abstract_2();
abstract_2 v185 = abstract_2();
C0 v186 = *((new C0 ()));
C0 v187 = *((new C0 ()));
delete (new C1 ());
return;

}
/* method id 408 */ C2::~C2 () {
abstract_2 v193 = abstract_2();
abstract_2 v194 = abstract_2();
abstract_2 v195 = abstract_2();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
delete (new C3 ());
return;

}
/* method id 410 */ C3::~C3 () {
C0 v217 = *((new C0 ()));
abstract_2 v218 = abstract_2();
abstract_2 v219 = abstract_2();
abstract_2 v220 = abstract_2();
delete (new C2 ());
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_1 func3 () {
abstract_2 v238;
abstract_2 v239;

return abstract_1();

}
abstract_1 func4 (abstract_2 v240, abstract_2 v241, abstract_2 v242, abstract_2 v243) {
abstract_2 v244;
abstract_2 v245;
abstract_2 v246;
abstract_2 v247;

delete (new C1 ());
return ::func5(v241, v241, v241, v241);

}
abstract_1 func5 (abstract_2 v248, abstract_2 v249, abstract_2 v250, abstract_2 v251) {
C0 v252;
C0 v253;
abstract_2 v254;
abstract_2 v255;

return ::func6(v249, v249, v249);

}
abstract_1 func6 (abstract_2 v256, abstract_2 v257, abstract_2 v258) {
abstract_2 v259;
abstract_2 v260;

delete (new C1 ());
return ::func4(abstract_2(), abstract_2(), abstract_2(), abstract_2());

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var18: AbstractType{2}
8    | var19: AbstractType{2}
12   | var20: AbstractType{2}
16   | var21: AbstractType{2}
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
class C1    size(64)
0    +---
0    | {vfptr}
4    | var181: ClassType{0}
24   | var182: ClassType{0}
44   | var183: ClassType{0}
64   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 64;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(96)
0    +---
0    | {vbptr}
4    | var203: AbstractType{2}
8    | var204: AbstractType{2}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | var181: ClassType{0}
36   | var182: ClassType{0}
56   | var183: ClassType{0}
76   +---
76   +--- (virtual base class C0)
76   | {vfptr}
80   | var18: AbstractType{2}
84   | var19: AbstractType{2}
88   | var20: AbstractType{2}
92   | var21: AbstractType{2}
96   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 96;
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 76;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(148)
0    +---
0    | {vbptr}
4    | var234: AbstractType{2}
8    | var235: ClassType{0}
28   | var236: ClassType{0}
48   | var237: AbstractType{2}
52   +---
52   +--- (virtual base class C1)
52   | {vfptr}
56   | var181: ClassType{0}
76   | var182: ClassType{0}
96   | var183: ClassType{0}
116  +---
116  +--- (virtual base class C0)
116  | {vfptr}
120  | var18: AbstractType{2}
124  | var19: AbstractType{2}
128  | var20: AbstractType{2}
132  | var21: AbstractType{2}
136  +---
136  +--- (virtual base class C2)
136  | {vbptr}
140  | var203: AbstractType{2}
144  | var204: AbstractType{2}
148  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 148;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 136;
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

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
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_2 v18;
abstract_2 v19;
abstract_2 v20;
abstract_2 v21;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual ~C1 ();
/* method id 405 */ C1 ();
C1 (special_constructor);
C0 v178;
C0 v179;
C0 v180;
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_2 v185;
abstract_2 v186;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual ~C3 ();
C3 (special_constructor);
abstract_2 v241;
abstract_2 v242;
};
abstract_1 func2 (C0 v243, abstract_2 v244, abstract_2 v245, abstract_2 v246);
abstract_1 func3 (abstract_2 v247, abstract_2 v248);
abstract_1 func4 (abstract_2 v251, abstract_2 v252, abstract_2 v253, abstract_2 v254);
abstract_1 func5 (abstract_2 v259, abstract_2 v260, abstract_2 v261, C0 v262);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
abstract_0 v7 = abstract_0();
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 (abstract_0 v8, abstract_0 v9) {
abstract_2 v10 = abstract_2();
abstract_0 v11 = abstract_0();
abstract_0 v12 = abstract_0();
abstract_0 v13 = abstract_0();
return ::func3(v20, v20);

}
/* method id 403 */ C0::C0 () {
abstract_2 v14 = abstract_2();
abstract_2 v15 = abstract_2();
abstract_2 v16 = abstract_2();
abstract_0 v17 = abstract_0();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::~C1 () {
abstract_2 v22 = abstract_2();
abstract_0 v23 = abstract_0();
abstract_2 v24 = abstract_2();
abstract_2 v25 = abstract_2();
delete (new C1 ());
return;

}
/* method id 405 */ C1::C1 () {
abstract_2 v26 = abstract_2();
abstract_0 v27 = abstract_0();
abstract_2 v28 = abstract_2();
abstract_2 v29 = abstract_2();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
abstract_2 v181 = abstract_2();
abstract_2 v182 = abstract_2();
abstract_2 v183 = abstract_2();
abstract_0 v184 = abstract_0();
delete (new C2 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
abstract_2 v187 = abstract_2();
abstract_2 v188 = abstract_2();
abstract_2 v189 = abstract_2();
abstract_2 v190 = abstract_2();
return;

}
/* method id 409 */ C3::~C3 () {
abstract_2 v211 = abstract_2();
abstract_2 v212 = abstract_2();
abstract_2 v213 = abstract_2();
abstract_2 v214 = abstract_2();
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_1 func2 (C0 v243, abstract_2 v244, abstract_2 v245, abstract_2 v246) {

return abstract_1();

}
abstract_1 func3 (abstract_2 v247, abstract_2 v248) {
abstract_2 v249;
abstract_2 v250;

return ::func4(v248, v248, v248, v248);

}
abstract_1 func4 (abstract_2 v251, abstract_2 v252, abstract_2 v253, abstract_2 v254) {
abstract_2 v255;
abstract_2 v256;
abstract_2 v257;
abstract_2 v258;

return ::func3(v257, v257);

}
abstract_1 func5 (abstract_2 v259, abstract_2 v260, abstract_2 v261, C0 v262) {
C0 v263;
abstract_2 v264;
abstract_2 v265;
abstract_2 v266;

return abstract_1();

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
class C1    size(88)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var178: ClassType{0}
28   | var179: ClassType{0}
48   | var180: ClassType{0}
68   +---
68   +--- (virtual base class C0)
68   | {vfptr}
72   | var18: AbstractType{2}
76   | var19: AbstractType{2}
80   | var20: AbstractType{2}
84   | var21: AbstractType{2}
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
 const size_t model_offset = 68;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(100)
0    +---
0    | {vbptr}
4    | var185: AbstractType{2}
8    | var186: AbstractType{2}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var18: AbstractType{2}
20   | var19: AbstractType{2}
24   | var20: AbstractType{2}
28   | var21: AbstractType{2}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   | var178: ClassType{0}
60   | var179: ClassType{0}
80   | var180: ClassType{0}
100  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 100;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(112)
0    +---
0    | {vbptr}
4    | var241: AbstractType{2}
8    | var242: AbstractType{2}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var18: AbstractType{2}
20   | var19: AbstractType{2}
24   | var20: AbstractType{2}
28   | var21: AbstractType{2}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   | var178: ClassType{0}
60   | var179: ClassType{0}
80   | var180: ClassType{0}
100  +---
100  +--- (virtual base class C2)
100  | {vbptr}
104  | var185: AbstractType{2}
108  | var186: AbstractType{2}
112  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 112;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
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
 const size_t model_offset = 100;
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

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
/* method id 400 */ C0 ();
C0 (special_constructor);
abstract_0 v0;
abstract_0 v1;
abstract_0 v2;
abstract_0 v3;
};
struct C1 : public virtual C0 {
/* method id 401 */ virtual abstract_1 func0 ();
/* method id 402 */ C1 ();
/* method id 403 */ virtual abstract_1 func0 (abstract_0 v4, abstract_0 v5);
/* method id 404 */ virtual abstract_1 func1 (C0 v9, abstract_0 v10, abstract_0 v11);
C1 (special_constructor);
C0 v12;
abstract_2 v13;
};
struct C2 : public virtual C1 {
/* method id 405 */ C2 ();
/* method id 406 */ ~C2 ();
C2 (special_constructor);
C0 v193;
C0 v194;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 407 */ C3 ();
C3 (special_constructor);
C0 v204;
C0 v205;
C0 v206;
};
abstract_1 func3 (C0 v207, C0 v208, C0 v209, C0 v210);
abstract_1 func4 (C0 v215, C0 v216, C0 v217);
abstract_1 func5 (C0 v222, C0 v223, C0 v224, C0 v225);
abstract_1 func6 (C0 v230);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ abstract_1 C1::func0 () {
::func4(v12, v12, v12);
::func4(v12, v12, v12);
::func4(v12, v12, v12);
::func4(v12, v12, v12);
return ::func4(*((new C0 ())), v12, v12);

}
/* method id 402 */ C1::C1 () {
return;

}
/* method id 403 */ abstract_1 C1::func0 (abstract_0 v4, abstract_0 v5) {
C0 v6 = *(&(*((new C0 ()))));
C0 v7 = *(&(*((new C0 ()))));
C0 v8 = *(&(*((new C0 ()))));
::func4(v6, v6, v6);
::func4(v6, v6, v6);
::func4(v6, v6, v6);
::func4(v6, v6, v6);
return ::func4(*((new C0 ())), v6, v6);

}
/* method id 404 */ abstract_1 C1::func1 (C0 v9, abstract_0 v10, abstract_0 v11) {
return ::func4(v9, v9, v9);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
C0 v14 = *(&(*((new C0 ()))));
C0 v15 = *(&(*((new C0 ()))));
C0 v16 = *(&(*((new C0 ()))));
C0 v17 = *(&(*((new C0 ()))));
return;

}
/* method id 406 */ C2::~C2 () {
C0 v18 = *(((C0*) 0));
C0 v19 = *(((C0*) 0));
C0 v20 = *(((C0*) 0));
C0 v21 = *(((C0*) 0));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_1 func3 (C0 v207, C0 v208, C0 v209, C0 v210) {
C0 v211;
C0 v212;
C0 v213;
C0 v214;

return abstract_1();

}
abstract_1 func4 (C0 v215, C0 v216, C0 v217) {
C0 v218;
C0 v219;
C0 v220;
C0 v221;

return ::func5(v216, v216, v216, v216);

}
abstract_1 func5 (C0 v222, C0 v223, C0 v224, C0 v225) {
C0 v226;
abstract_2 v227;
C0 v228;
C0 v229;

return ::func4(v223, v223, v223);

}
abstract_1 func6 (C0 v230) {
C0 v231;
C0 v232;
C0 v233;
C0 v234;

return ::func4(v234, v234, v234);

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var0: AbstractType{0}
4    | var1: AbstractType{0}
8    | var2: AbstractType{0}
12   | var3: AbstractType{0}
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
class C1    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var12: ClassType{0}
24   | var13: AbstractType{2}
28   +---
28   +--- (virtual base class C0)
28   | var0: AbstractType{0}
32   | var1: AbstractType{0}
36   | var2: AbstractType{0}
40   | var3: AbstractType{0}
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
class C2    size(80)
0    +---
0    | {vbptr}
4    | var193: ClassType{0}
20   | var194: ClassType{0}
36   +---
36   +--- (virtual base class C0)
36   | var0: AbstractType{0}
40   | var1: AbstractType{0}
44   | var2: AbstractType{0}
48   | var3: AbstractType{0}
52   +---
52   +--- (virtual base class C1)
52   | {vfptr}
56   | {vbptr}
60   | var12: ClassType{0}
76   | var13: AbstractType{2}
80   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 80;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 52;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(132)
0    +---
0    | {vbptr}
4    | var204: ClassType{0}
20   | var205: ClassType{0}
36   | var206: ClassType{0}
52   +---
52   +--- (virtual base class C0)
52   | var0: AbstractType{0}
56   | var1: AbstractType{0}
60   | var2: AbstractType{0}
64   | var3: AbstractType{0}
68   +---
68   +--- (virtual base class C1)
68   | {vfptr}
72   | {vbptr}
76   | var12: ClassType{0}
92   | var13: AbstractType{2}
96   +---
96   +--- (virtual base class C2)
96   | {vbptr}
100  | var193: ClassType{0}
116  | var194: ClassType{0}
132  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 132;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 68;
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
 const size_t model_offset = 96;
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

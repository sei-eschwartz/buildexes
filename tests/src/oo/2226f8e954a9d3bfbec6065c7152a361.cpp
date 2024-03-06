// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual abstract_0 func1 ();
/* method id 403 */ C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
C0 v2;
C0 v3;
};
struct C2  {
/* method id 405 */ abstract_0 func2 ();
/* method id 406 */ C2 ();
/* method id 407 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1 v228;
abstract_1 v229;
C0 v230;
C0 v231;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 408 */ C3 ();
C3 (special_constructor);
C1 v236;
C1 v237;
C1 v238;
C1 v239;
};
abstract_0 func5 (C1 v240);
abstract_0 func6 (abstract_1 v244, abstract_1 v245, C1 v246, C1 v247);
abstract_0 func7 (abstract_1 v252, C1 v253, C1 v254, C1 v255);
abstract_0 func8 (C1 v260, C1 v261, C1 v262, abstract_1 v263);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0 C1::func1 () {
return abstract_0();

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ abstract_0 C2::func2 () {
return abstract_0();

}
/* method id 406 */ C2::C2 () {
delete (new C1 ());
return;

}
/* method id 407 */ C2::~C2 () {
C1 v16 = *(&(*(((C1*) 0))));
C1 v17 = *(&(*(((C1*) 0))));
C1 v18 = *(&(*(((C1*) 0))));
C0 v19 = *(((C0*) 0));
return;

}
C2::C2 (special_constructor)  {}

/* method id 408 */ C3::C3 () {
C1 v232 = *(((C1*) 0));
C1 v233 = *(((C1*) 0));
C1 v234 = *(((C1*) 0));
C1 v235 = *(((C1*) 0));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func5 (C1 v240) {
C1 v241;
C1 v242;
C1 v243;

return abstract_0();

}
abstract_0 func6 (abstract_1 v244, abstract_1 v245, C1 v246, C1 v247) {
C1 v248;
abstract_1 v249;
C1 v250;
C1 v251;

return abstract_0();

}
abstract_0 func7 (abstract_1 v252, C1 v253, C1 v254, C1 v255) {
C1 v256;
C1 v257;
C1 v258;
C1 v259;

delete (new C2 ());
return (((C1*) 0))->C1::func1();

}
abstract_0 func8 (C1 v260, C1 v261, C1 v262, abstract_1 v263) {
C1 v264;
C1 v265;

return (((C1*) 0))->C1::func1();

}
#include <iostream>
void check_driver() {
/*
class C0    size(0)
0    +---
0    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var0: ClassType{0}
9    | var1: ClassType{0}
10   | var2: ClassType{0}
11   | var3: ClassType{0}
12   +---
12   +--- (virtual base class C0)
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(16)
0    +---
0    | {vfptr}
4    | var228: AbstractType{1}
8    | var229: AbstractType{1}
12   | var230: ClassType{0}
13   | var231: ClassType{0}
14   | alignment: 
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(80)
0    +---
0    | {vbptr}
4    | var236: ClassType{1}
16   | var237: ClassType{1}
28   | var238: ClassType{1}
40   | var239: ClassType{1}
52   +---
52   +--- (virtual base class C0)
52   +---
52   +--- (virtual base class C1)
52   | {vfptr}
56   | {vbptr}
60   | var0: ClassType{0}
61   | var1: ClassType{0}
62   | var2: ClassType{0}
63   | var3: ClassType{0}
64   +---
64   +--- (virtual base class C2)
64   | {vfptr}
68   | var228: AbstractType{1}
72   | var229: AbstractType{1}
76   | var230: ClassType{0}
77   | var231: ClassType{0}
78   | alignment: 
80   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 80;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 52;
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
 const size_t model_offset = 64;
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

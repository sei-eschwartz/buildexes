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
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
abstract_0 v0;
abstract_0 v1;
abstract_0 v2;
abstract_0 v3;
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual abstract_1 func1 ();
/* method id 403 */ C1 ();
/* method id 404 */ virtual abstract_1 func0 (abstract_0 v4, abstract_0 v5);
/* method id 405 */ virtual abstract_1 func2 (C0 v9, abstract_0 v10, abstract_0 v11);
C1 (special_constructor);
C0 v12;
abstract_2 v13;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
/* method id 408 */ ~C2 ();
C2 (special_constructor);
C0 v234;
C0 v235;
C1 v236;
C0 v237;
};
struct C3 : public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
C3 (special_constructor);
C0 v272;
C0 v273;
C1 v274;
C0 v275;
};
abstract_1 func4 (C0 v276, C0 v277, abstract_2 v278, C0 v279);
abstract_1 func5 (C1 v284);
abstract_1 func6 (C0 v287, C0 v288, C1 v289, C0 v290);
abstract_1 func7 (C1 v295, C0 v296, C0 v297, C0 v298);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_1 C1::func1 () {
return abstract_1();

}
/* method id 403 */ C1::C1 () {
return;

}
/* method id 404 */ abstract_1 C1::func0 (abstract_0 v4, abstract_0 v5) {
C0 v6 = *(&(*((new C0 ()))));
C0 v7 = *(&(*((new C0 ()))));
C0 v8 = *(&(*((new C0 ()))));
return abstract_1();

}
/* method id 405 */ abstract_1 C1::func2 (C0 v9, abstract_0 v10, abstract_0 v11) {
return abstract_1();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
C0 v14 = *(&(*((new C0 ()))));
C0 v15 = *(&(*((new C0 ()))));
C0 v16 = *(&(*((new C0 ()))));
C0 v17 = *(&(*((new C0 ()))));
return;

}
/* method id 408 */ C2::~C2 () {
C0 v18 = *(((C0*) 0));
C0 v19 = *(((C0*) 0));
C0 v20 = *(((C0*) 0));
C0 v21 = *(((C0*) 0));
delete (new C2 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
C0 v238 = *(((C0*) 0));
abstract_2 v239 = abstract_2();
C0 v240 = *(((C0*) 0));
C0 v241 = *(((C0*) 0));
return;

}
/* method id 410 */ C3::~C3 () {
C0 v254 = *((new C0 ()));
C0 v255 = *((new C0 ()));
C0 v256 = *((new C0 ()));
C1 v257 = *((new C1 ()));
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_1 func4 (C0 v276, C0 v277, abstract_2 v278, C0 v279) {
C0 v280;
C0 v281;
C0 v282;
abstract_2 v283;

return abstract_1();

}
abstract_1 func5 (C1 v284) {
C0 v285;
C1 v286;

return ::func6(v285, v285, v286, v285);

}
abstract_1 func6 (C0 v287, C0 v288, C1 v289, C0 v290) {
abstract_2 v291;
C0 v292;
C0 v293;
C1 v294;

return abstract_1();

}
abstract_1 func7 (C1 v295, C0 v296, C0 v297, C0 v298) {
C1 v299;
C0 v300;
C0 v301;
C0 v302;

return ::func5(v299);

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var0: AbstractType{0}
8    | var1: AbstractType{0}
12   | var2: AbstractType{0}
16   | var3: AbstractType{0}
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
class C1    size(52)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var12: ClassType{0}
28   | var13: AbstractType{2}
32   +---
32   +--- (virtual base class C0)
32   | {vfptr}
36   | var0: AbstractType{0}
40   | var1: AbstractType{0}
44   | var2: AbstractType{0}
48   | var3: AbstractType{0}
52   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(168)
0    +---
0    | {vbptr}
4    | var234: ClassType{0}
24   | var235: ClassType{0}
44   | var236: ClassType{1}
96   | var237: ClassType{0}
116  +---
116  +--- (virtual base class C0)
116  | {vfptr}
120  | var0: AbstractType{0}
124  | var1: AbstractType{0}
128  | var2: AbstractType{0}
132  | var3: AbstractType{0}
136  +---
136  +--- (virtual base class C1)
136  | {vfptr}
140  | {vbptr}
144  | var12: ClassType{0}
164  | var13: AbstractType{2}
168  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 168;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 136;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(284)
0    +---
0    | {vbptr}
4    | var272: ClassType{0}
24   | var273: ClassType{0}
44   | var274: ClassType{1}
96   | var275: ClassType{0}
116  +---
116  +--- (virtual base class C0)
116  | {vfptr}
120  | var0: AbstractType{0}
124  | var1: AbstractType{0}
128  | var2: AbstractType{0}
132  | var3: AbstractType{0}
136  +---
136  +--- (virtual base class C1)
136  | {vfptr}
140  | {vbptr}
144  | var12: ClassType{0}
164  | var13: AbstractType{2}
168  +---
168  +--- (virtual base class C2)
168  | {vbptr}
172  | var234: ClassType{0}
192  | var235: ClassType{0}
212  | var236: ClassType{1}
264  | var237: ClassType{0}
284  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 284;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 168;
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

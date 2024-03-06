// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ C0 ();
C0 (special_constructor);
abstract_0 v8;
abstract_1 v9;
abstract_1 v10;
abstract_1 v11;
};
struct C1 : public virtual C0 {
/* method id 402 */ C1 ();
/* method id 403 */ void func0 (abstract_1 v13, abstract_0 v14);
/* method id 404 */ virtual void func1 (abstract_0 v16);
/* method id 405 */ virtual ~C1 ();
C1 (special_constructor);
abstract_1 v21;
abstract_3 v22;
abstract_1 v23;
abstract_3 v24;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 406 */ C2 ();
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ virtual void func1 (abstract_1 v148, abstract_3 v149);
C2 (special_constructor);
abstract_1 v174;
abstract_1 v175;
abstract_3 v176;
abstract_1 v177;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ C3 ();
/* method id 411 */ virtual void func1 (abstract_0 v238, C0 v239);
/* method id 412 */ virtual void func1 (abstract_1 v252, abstract_3 v253);
C3 (special_constructor);
abstract_1 v258;
abstract_1 v259;
C0 v260;
abstract_1 v261;
};
abstract_2 func2 (abstract_1 v262, abstract_1 v263, abstract_3 v264);
void func3 (C0 v267, abstract_1 v268, abstract_1 v269, abstract_3 v270);
void func4 (abstract_1 v271, abstract_3 v272, abstract_3 v273);
void func5 (abstract_1 v277, abstract_1 v278, abstract_1 v279, abstract_1 v280);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
abstract_0 v4 = abstract_0();
abstract_1 v5 = abstract_1();
abstract_1 v6 = abstract_1();
abstract_1 v7 = abstract_1();
return ::func2(v11, v11, abstract_3());

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
C0 v12 = *(&(*((new C0 ()))));
return;

}
/* method id 403 */ void C1::func0 (abstract_1 v13, abstract_0 v14) {
abstract_3 v15 = abstract_3();
return ::func4(v10, v22, v22);

}
/* method id 404 */ void C1::func1 (abstract_0 v16) {
abstract_1 v17 = abstract_1();
return ::func4(v10, v24, v24);

}
/* method id 405 */ C1::~C1 () {
abstract_1 v18 = abstract_1();
abstract_1 v19 = abstract_1();
abstract_3 v20 = abstract_3();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
abstract_1 v25 = abstract_1();
abstract_1 v26 = abstract_1();
abstract_1 v27 = abstract_1();
abstract_1 v28 = abstract_1();
delete (new C2 ());
return;

}
/* method id 407 */ C2::~C2 () {
abstract_1 v29 = abstract_1();
abstract_1 v30 = abstract_1();
abstract_1 v31 = abstract_1();
abstract_1 v32 = abstract_1();
delete (new C1 ());
return;

}
/* method id 408 */ void C2::func1 (abstract_1 v148, abstract_3 v149) {
abstract_1 v150 = abstract_1();
C0 v151 = *(((C0*) 0));
abstract_1 v152 = abstract_1();
abstract_3 v153 = abstract_3();
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 409 */ C3::~C3 () {
abstract_1 v178 = abstract_1();
abstract_1 v179 = abstract_1();
abstract_1 v180 = abstract_1();
abstract_1 v181 = abstract_1();
return;

}
/* method id 410 */ C3::C3 () {
abstract_1 v182 = abstract_1();
C0 v183 = *((new C0 ()));
abstract_1 v184 = abstract_1();
abstract_1 v185 = abstract_1();
return;

}
/* method id 411 */ void C3::func1 (abstract_0 v238, C0 v239) {
abstract_1 v240 = abstract_1();
abstract_1 v241 = abstract_1();
abstract_1 v242 = abstract_1();
abstract_1 v243 = abstract_1();
return ::func4(abstract_1(), v22, v22);

}
/* method id 412 */ void C3::func1 (abstract_1 v252, abstract_3 v253) {
abstract_1 v254 = abstract_1();
C0 v255 = *(((C0*) 0));
abstract_1 v256 = abstract_1();
abstract_3 v257 = abstract_3();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_2 func2 (abstract_1 v262, abstract_1 v263, abstract_3 v264) {
abstract_1 v265;
abstract_3 v266;

::func4(v263, v266, v266);
return abstract_2();

}
void func3 (C0 v267, abstract_1 v268, abstract_1 v269, abstract_3 v270) {

return;

}
void func4 (abstract_1 v271, abstract_3 v272, abstract_3 v273) {
abstract_1 v274;
abstract_1 v275;
abstract_3 v276;

return;

}
void func5 (abstract_1 v277, abstract_1 v278, abstract_1 v279, abstract_1 v280) {
abstract_1 v281;
abstract_1 v282;
abstract_3 v283;
abstract_1 v284;

return (((C1*) 0))->C1::func1(abstract_0());

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var8: AbstractType{0}
8    | var9: AbstractType{1}
12   | var10: AbstractType{1}
16   | var11: AbstractType{1}
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
8    | var21: AbstractType{1}
12   | var22: AbstractType{3}
16   | var23: AbstractType{1}
20   | var24: AbstractType{3}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var8: AbstractType{0}
32   | var9: AbstractType{1}
36   | var10: AbstractType{1}
40   | var11: AbstractType{1}
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
class C2    size(68)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var174: AbstractType{1}
12   | var175: AbstractType{1}
16   | var176: AbstractType{3}
20   | var177: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var8: AbstractType{0}
32   | var9: AbstractType{1}
36   | var10: AbstractType{1}
40   | var11: AbstractType{1}
44   +---
44   +--- (virtual base class C1)
44   | {vfptr}
48   | {vbptr}
52   | var21: AbstractType{1}
56   | var22: AbstractType{3}
60   | var23: AbstractType{1}
64   | var24: AbstractType{3}
68   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 68;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 44;
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
0    | {vfptr}
4    | {vbptr}
8    | var258: AbstractType{1}
12   | var259: AbstractType{1}
16   | var260: ClassType{0}
36   | var261: AbstractType{1}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   | var8: AbstractType{0}
48   | var9: AbstractType{1}
52   | var10: AbstractType{1}
56   | var11: AbstractType{1}
60   +---
60   +--- (virtual base class C1)
60   | {vfptr}
64   | {vbptr}
68   | var21: AbstractType{1}
72   | var22: AbstractType{3}
76   | var23: AbstractType{1}
80   | var24: AbstractType{3}
84   +---
84   | {vtordisp for vbase 2}
88   +--- (virtual base class C2)
88   | {vfptr}
92   | {vbptr}
96   | var174: AbstractType{1}
100  | var175: AbstractType{1}
104  | var176: AbstractType{3}
108  | var177: AbstractType{1}
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
 const size_t model_offset = 60;
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
 const size_t model_offset = 88;
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

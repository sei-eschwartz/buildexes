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
/* method id 400 */ abstract_0 func0 (abstract_0* v0);
/* method id 401 */ abstract_0 func0 ();
/* method id 402 */ virtual abstract_0 func0 (abstract_1 v6, abstract_0* v7, abstract_0* v8, abstract_2 v9);
/* method id 403 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual abstract_0 func0 ();
/* method id 405 */ C1 ();
/* method id 406 */ virtual ~C1 ();
C1 (special_constructor);
abstract_1 v48;
abstract_1 v49;
abstract_1 v50;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
/* method id 408 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1 v127;
abstract_1 v128;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ virtual abstract_0 func0 (abstract_1 v232, C0 v233);
C3 (special_constructor);
abstract_1 v249;
abstract_1 v250;
abstract_1 v251;
abstract_1 v252;
};
abstract_0 func1 (abstract_1 v253, abstract_1 v254, abstract_1 v255, abstract_1 v256);
abstract_0 func2 (abstract_1 v261, C0 v262);
abstract_0 func3 (abstract_1 v267, abstract_1 v268, C0 v269, abstract_1 v270);
abstract_0 func4 (abstract_1 v275, abstract_1 v276, abstract_2 v277, abstract_1 v278);
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0) {
abstract_0* v1 = ((abstract_0*) 0);
return ::func4(abstract_1(), abstract_1(), abstract_2(), abstract_1());

}
/* method id 401 */ abstract_0 C0::func0 () {
abstract_0* v2 = ((abstract_0*) 0);
abstract_0* v3 = ((abstract_0*) 0);
abstract_0* v4 = ((abstract_0*) 0);
abstract_0* v5 = ((abstract_0*) 0);
return ::func2(abstract_1(), *((new C0 ())));

}
/* method id 402 */ abstract_0 C0::func0 (abstract_1 v6, abstract_0* v7, abstract_0* v8, abstract_2 v9) {
return abstract_0();

}
/* method id 403 */ C0::C0 () {
abstract_2 v10 = abstract_2();
abstract_2 v11 = abstract_2();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_0 C1::func0 () {
abstract_2 v12 = abstract_2();
abstract_1 v13 = abstract_1();
abstract_0* v14 = ((abstract_0*) 0);
return ::func4(abstract_1(), abstract_1(), v12, abstract_1());

}
/* method id 405 */ C1::C1 () {
abstract_1 v15 = abstract_1();
abstract_1 v16 = abstract_1();
abstract_1 v17 = abstract_1();
abstract_1 v18 = abstract_1();
return;

}
/* method id 406 */ C1::~C1 () {
abstract_2 v32 = abstract_2();
abstract_1 v33 = abstract_1();
abstract_1 v34 = abstract_1();
abstract_1 v35 = abstract_1();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_1 v51 = abstract_1();
abstract_1 v52 = abstract_1();
abstract_1 v53 = abstract_1();
abstract_1 v54 = abstract_1();
delete (new C1 ());
return;

}
/* method id 408 */ C2::~C2 () {
abstract_1 v79 = abstract_1();
abstract_1 v80 = abstract_1();
abstract_1 v81 = abstract_1();
abstract_1 v82 = abstract_1();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
abstract_1 v129 = abstract_1();
abstract_1 v130 = abstract_1();
abstract_1 v131 = abstract_1();
abstract_1 v132 = abstract_1();
delete (new C1 ());
return;

}
/* method id 410 */ C3::~C3 () {
abstract_1 v133 = abstract_1();
abstract_1 v134 = abstract_1();
abstract_1 v135 = abstract_1();
abstract_1 v136 = abstract_1();
return;

}
/* method id 411 */ abstract_0 C3::func0 (abstract_1 v232, C0 v233) {
abstract_1 v234 = abstract_1();
abstract_1 v235 = abstract_1();
abstract_1 v236 = abstract_1();
abstract_1 v237 = abstract_1();
delete (new C1 ());
return ::func2(v48, *(((C0*) 0)));

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func1 (abstract_1 v253, abstract_1 v254, abstract_1 v255, abstract_1 v256) {
abstract_1 v257;
abstract_2 v258;
abstract_1 v259;
C0 v260;

(((C3*) 0))->C3::func0(abstract_1(), v260);
(((C3*) 0))->C3::func0(abstract_1(), v260);
(((C3*) 0))->C3::func0(abstract_1(), v260);
(((C3*) 0))->C3::func0(abstract_1(), v260);
return ::func3(abstract_1(), abstract_1(), v260, abstract_1());

}
abstract_0 func2 (abstract_1 v261, C0 v262) {
abstract_1 v263;
abstract_1 v264;
C0 v265;
abstract_1 v266;

return abstract_0();

}
abstract_0 func3 (abstract_1 v267, abstract_1 v268, C0 v269, abstract_1 v270) {
abstract_2 v271;
abstract_1 v272;
abstract_1 v273;
C0 v274;

return (((C1*) 0))->C1::func0();

}
abstract_0 func4 (abstract_1 v275, abstract_1 v276, abstract_2 v277, abstract_1 v278) {
abstract_1 v279;
C0 v280;
abstract_1 v281;
C0 v282;

return ::func2(v275, v282);

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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var48: AbstractType{1}
12   | var49: AbstractType{1}
16   | var50: AbstractType{1}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(36)
0    +---
0    | {vbptr}
4    | var127: AbstractType{1}
8    | var128: AbstractType{1}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var48: AbstractType{1}
28   | var49: AbstractType{1}
32   | var50: AbstractType{1}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(60)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var249: AbstractType{1}
12   | var250: AbstractType{1}
16   | var251: AbstractType{1}
20   | var252: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var48: AbstractType{1}
40   | var49: AbstractType{1}
44   | var50: AbstractType{1}
48   +---
48   +--- (virtual base class C2)
48   | {vbptr}
52   | var127: AbstractType{1}
56   | var128: AbstractType{1}
60   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 60;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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
 const size_t model_offset = 48;
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

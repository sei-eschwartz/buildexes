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
C2 (special_constructor);
abstract_1 v96;
abstract_1 v97;
abstract_3 v98;
abstract_1 v99;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ C3 ();
/* method id 410 */ virtual void func1 (abstract_1 v154, abstract_3 v155);
C3 (special_constructor);
abstract_1 v180;
abstract_1 v181;
abstract_3 v182;
abstract_1 v183;
};
void func2 (abstract_1 v184, abstract_1 v185, C0 v186, abstract_1 v187);
void func3 (abstract_1 v192, abstract_1 v193, abstract_1 v194, C0 v195);
void func4 (abstract_1 v199, abstract_1 v200, abstract_1 v201, abstract_1 v202);
void func5 (abstract_1 v206, abstract_1 v207, abstract_1 v208, abstract_1 v209);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
abstract_0 v4 = abstract_0();
abstract_1 v5 = abstract_1();
abstract_1 v6 = abstract_1();
abstract_1 v7 = abstract_1();
return abstract_2();

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
C0 v12 = *(&(*((new C0 ()))));
delete (new C1 ());
return;

}
/* method id 403 */ void C1::func0 (abstract_1 v13, abstract_0 v14) {
abstract_3 v15 = abstract_3();
return;

}
/* method id 404 */ void C1::func1 (abstract_0 v16) {
abstract_1 v17 = abstract_1();
return;

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
delete (new C1 ());
return;

}
/* method id 407 */ C2::~C2 () {
abstract_1 v29 = abstract_1();
abstract_1 v30 = abstract_1();
abstract_1 v31 = abstract_1();
abstract_1 v32 = abstract_1();
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 408 */ C3::~C3 () {
abstract_1 v100 = abstract_1();
abstract_1 v101 = abstract_1();
abstract_1 v102 = abstract_1();
abstract_1 v103 = abstract_1();
return;

}
/* method id 409 */ C3::C3 () {
abstract_1 v104 = abstract_1();
C0 v105 = *((new C0 ()));
abstract_1 v106 = abstract_1();
abstract_1 v107 = abstract_1();
return;

}
/* method id 410 */ void C3::func1 (abstract_1 v154, abstract_3 v155) {
abstract_1 v156 = abstract_1();
C0 v157 = *(((C0*) 0));
abstract_1 v158 = abstract_1();
abstract_3 v159 = abstract_3();
delete (new C3 ());
return ::func3(v21, v21, v21, v157);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void func2 (abstract_1 v184, abstract_1 v185, C0 v186, abstract_1 v187) {
abstract_1 v188;
abstract_1 v189;
abstract_1 v190;
C0 v191;

return;

}
void func3 (abstract_1 v192, abstract_1 v193, abstract_1 v194, C0 v195) {
abstract_1 v196;
abstract_1 v197;
abstract_3 v198;

return ::func4(abstract_1(), abstract_1(), abstract_1(), abstract_1());

}
void func4 (abstract_1 v199, abstract_1 v200, abstract_1 v201, abstract_1 v202) {
C0 v203;
abstract_1 v204;
abstract_3 v205;

delete (new C1 ());
return;

}
void func5 (abstract_1 v206, abstract_1 v207, abstract_1 v208, abstract_1 v209) {
abstract_1 v210;
C0 v211;
abstract_1 v212;
abstract_3 v213;

return;

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
class C2    size(64)
0    +---
0    | {vbptr}
4    | var96: AbstractType{1}
8    | var97: AbstractType{1}
12   | var98: AbstractType{3}
16   | var99: AbstractType{1}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var8: AbstractType{0}
28   | var9: AbstractType{1}
32   | var10: AbstractType{1}
36   | var11: AbstractType{1}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | {vbptr}
48   | var21: AbstractType{1}
52   | var22: AbstractType{3}
56   | var23: AbstractType{1}
60   | var24: AbstractType{3}
64   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 64;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
class C3    size(88)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var180: AbstractType{1}
12   | var181: AbstractType{1}
16   | var182: AbstractType{3}
20   | var183: AbstractType{1}
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
68   +--- (virtual base class C2)
68   | {vbptr}
72   | var96: AbstractType{1}
76   | var97: AbstractType{1}
80   | var98: AbstractType{3}
84   | var99: AbstractType{1}
88   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 88;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 44;
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
 const size_t model_offset = 68;
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

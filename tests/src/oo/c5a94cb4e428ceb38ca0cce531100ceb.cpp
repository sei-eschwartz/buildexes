// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2);
/* method id 401 */ C0 ();
/* method id 402 */ virtual abstract_0* func1 (abstract_0* v6, abstract_0* v7, abstract_0* v8);
/* method id 403 */ virtual ~C0 ();
C0 (special_constructor);
abstract_0* v17;
abstract_0* v18;
abstract_0* v19;
abstract_0* v20;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual ~C1 ();
/* method id 405 */ C1 ();
/* method id 406 */ abstract_0* func1 (abstract_0* v39, abstract_0* v40);
C1 (special_constructor);
abstract_0* v110;
abstract_0* v111;
abstract_0* v112;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_0* v117;
abstract_0* v118;
abstract_0* v119;
abstract_0* v120;
};
struct C3 : public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ virtual abstract_0* func1 (abstract_0* v179, abstract_0* v180, abstract_0* v181, abstract_0* v182);
/* method id 412 */ virtual void func1 ();
C3 (special_constructor);
abstract_0* v252;
abstract_0* v253;
abstract_0* v254;
abstract_0* v255;
};
void func3 (abstract_0* v256, abstract_0* v257, abstract_0* v258, abstract_0* v259);
abstract_0* func4 (abstract_0* v264, abstract_0* v265, abstract_0* v266, abstract_0* v267);
void func5 (abstract_0* v272, abstract_0* v273, abstract_0* v274, abstract_0* v275);
void func6 (abstract_0* v280, abstract_0* v281, abstract_0* v282, abstract_0* v283);
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2) {
return abstract_0();

}
/* method id 401 */ C0::C0 () {
abstract_0* v3 = ((abstract_0*) 0);
delete (new C1 ());
return;

}
/* method id 402 */ abstract_0* C0::func1 (abstract_0* v6, abstract_0* v7, abstract_0* v8) {
abstract_0* v9 = new abstract_0 ();
abstract_0* v10 = new abstract_0 ();
abstract_0* v11 = new abstract_0 ();
abstract_0* v12 = new abstract_0 ();
delete (new C1 ());
return v10;

}
/* method id 403 */ C0::~C0 () {
abstract_0* v13 = new abstract_0 ();
abstract_0* v14 = new abstract_0 ();
abstract_0* v15 = new abstract_0 ();
abstract_0* v16 = new abstract_0 ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::~C1 () {
abstract_0* v21 = new abstract_0 ();
abstract_0* v22 = new abstract_0 ();
abstract_0* v23 = new abstract_0 ();
abstract_0* v24 = new abstract_0 ();
return;

}
/* method id 405 */ C1::C1 () {
return;

}
/* method id 406 */ abstract_0* C1::func1 (abstract_0* v39, abstract_0* v40) {
return v112;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_0* v113 = ((abstract_0*) 0);
abstract_0* v114 = ((abstract_0*) 0);
abstract_0* v115 = ((abstract_0*) 0);
abstract_0* v116 = ((abstract_0*) 0);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
return;

}
/* method id 410 */ C3::~C3 () {
abstract_0* v137 = ((abstract_0*) 0);
abstract_0* v138 = ((abstract_0*) 0);
abstract_0* v139 = ((abstract_0*) 0);
return;

}
/* method id 411 */ abstract_0* C3::func1 (abstract_0* v179, abstract_0* v180, abstract_0* v181, abstract_0* v182) {
abstract_0* v183 = new abstract_0 ();
abstract_0* v184 = new abstract_0 ();
abstract_0* v185 = new abstract_0 ();
abstract_0* v186 = new abstract_0 ();
delete (new C2 ());
return v18;

}
/* method id 412 */ void C3::func1 () {
abstract_0* v248 = new abstract_0 ();
abstract_0* v249 = new abstract_0 ();
abstract_0* v250 = new abstract_0 ();
abstract_0* v251 = new abstract_0 ();
delete (new C1 ());
return ::func5(new abstract_0 (), new abstract_0 (), new abstract_0 (), new abstract_0 ());

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func3 (abstract_0* v256, abstract_0* v257, abstract_0* v258, abstract_0* v259) {
abstract_0* v260;
abstract_0* v261;
abstract_0* v262;
abstract_0* v263;

delete (new C1 ());
return;

}
abstract_0* func4 (abstract_0* v264, abstract_0* v265, abstract_0* v266, abstract_0* v267) {
abstract_0* v268;
abstract_0* v269;
abstract_0* v270;
abstract_0* v271;

return v265;

}
void func5 (abstract_0* v272, abstract_0* v273, abstract_0* v274, abstract_0* v275) {
abstract_0* v276;
abstract_0* v277;
abstract_0* v278;
abstract_0* v279;

delete (new C2 ());
return ::func3(v273, v273, v273, v273);

}
void func6 (abstract_0* v280, abstract_0* v281, abstract_0* v282, abstract_0* v283) {
abstract_0* v284;
abstract_0* v285;
abstract_0* v286;

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var17: PtrType{AbstractType{0}}
8    | var18: PtrType{AbstractType{0}}
12   | var19: PtrType{AbstractType{0}}
16   | var20: PtrType{AbstractType{0}}
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
class C1    size(36)
0    +---
0    | {vbptr}
4    | var110: PtrType{AbstractType{0}}
8    | var111: PtrType{AbstractType{0}}
12   | var112: PtrType{AbstractType{0}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var17: PtrType{AbstractType{0}}
24   | var18: PtrType{AbstractType{0}}
28   | var19: PtrType{AbstractType{0}}
32   | var20: PtrType{AbstractType{0}}
36   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(56)
0    +---
0    | {vbptr}
4    | var117: PtrType{AbstractType{0}}
8    | var118: PtrType{AbstractType{0}}
12   | var119: PtrType{AbstractType{0}}
16   | var120: PtrType{AbstractType{0}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var17: PtrType{AbstractType{0}}
28   | var18: PtrType{AbstractType{0}}
32   | var19: PtrType{AbstractType{0}}
36   | var20: PtrType{AbstractType{0}}
40   +---
40   +--- (virtual base class C1)
40   | {vbptr}
44   | var110: PtrType{AbstractType{0}}
48   | var111: PtrType{AbstractType{0}}
52   | var112: PtrType{AbstractType{0}}
56   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 56;
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
class C3    size(80)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var252: PtrType{AbstractType{0}}
12   | var253: PtrType{AbstractType{0}}
16   | var254: PtrType{AbstractType{0}}
20   | var255: PtrType{AbstractType{0}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var17: PtrType{AbstractType{0}}
32   | var18: PtrType{AbstractType{0}}
36   | var19: PtrType{AbstractType{0}}
40   | var20: PtrType{AbstractType{0}}
44   +---
44   +--- (virtual base class C1)
44   | {vbptr}
48   | var110: PtrType{AbstractType{0}}
52   | var111: PtrType{AbstractType{0}}
56   | var112: PtrType{AbstractType{0}}
60   +---
60   +--- (virtual base class C2)
60   | {vbptr}
64   | var117: PtrType{AbstractType{0}}
68   | var118: PtrType{AbstractType{0}}
72   | var119: PtrType{AbstractType{0}}
76   | var120: PtrType{AbstractType{0}}
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 60;
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

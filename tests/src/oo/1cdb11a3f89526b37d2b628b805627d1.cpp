// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 ();
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ C0 ();
/* method id 403 */ virtual abstract_0** func0 (abstract_0*** v9, abstract_0*** v10, abstract_0* v11, abstract_0*** v12);
C0 (special_constructor);
abstract_0*** v17;
abstract_0*** v18;
abstract_0*** v19;
abstract_0*** v20;
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
/* method id 405 */ virtual ~C1 ();
/* method id 406 */ virtual abstract_0** func0 (abstract_0*** v96);
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_0*** v134;
abstract_0*** v135;
abstract_0*** v136;
abstract_0*** v137;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ virtual abstract_0** func0 (abstract_0*** v141);
/* method id 412 */ virtual abstract_0** func0 (C0 v155);
C3 (special_constructor);
abstract_0*** v157;
C0 v158;
abstract_0*** v159;
abstract_0*** v160;
};
abstract_0* func1 (abstract_0*** v161);
abstract_1 func2 (abstract_0*** v166, abstract_0* v167, abstract_0*** v168);
abstract_0* func3 (abstract_0*** v173, abstract_0*** v174, abstract_0*** v175, C0 v176);
abstract_0* func4 (abstract_0*** v180, abstract_0*** v181);
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
abstract_0* v0 = new abstract_0 ();
abstract_0* v1 = new abstract_0 ();
return abstract_0();

}
/* method id 401 */ C0::~C0 () {
abstract_0* v2 = new abstract_0 ();
abstract_0* v3 = ((abstract_0*) 0);
abstract_0*** v4 = ((abstract_0***) 0);
return;

}
/* method id 402 */ C0::C0 () {
abstract_0* v5 = ((abstract_0*) 0);
abstract_0*** v6 = new abstract_0** ();
abstract_0* v7 = ((abstract_0*) 0);
abstract_0*** v8 = new abstract_0** ();
return;

}
/* method id 403 */ abstract_0** C0::func0 (abstract_0*** v9, abstract_0*** v10, abstract_0* v11, abstract_0*** v12) {
abstract_0*** v13 = ((abstract_0***) 0);
abstract_0*** v14 = ((abstract_0***) 0);
abstract_0*** v15 = ((abstract_0***) 0);
abstract_0*** v16 = ((abstract_0***) 0);
return new abstract_0* ();

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
abstract_0* v21 = ((abstract_0*) 0);
abstract_0*** v22 = new abstract_0** ();
abstract_0*** v23 = new abstract_0** ();
abstract_0*** v24 = new abstract_0** ();
delete (new C1 ());
return;

}
/* method id 405 */ C1::~C1 () {
abstract_0*** v29 = ((abstract_0***) 0);
abstract_0*** v30 = ((abstract_0***) 0);
abstract_0*** v31 = ((abstract_0***) 0);
return;

}
/* method id 406 */ abstract_0** C1::func0 (abstract_0*** v96) {
abstract_0*** v97 = ((abstract_0***) 0);
delete (new C1 ());
return new abstract_0* ();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::~C2 () {
abstract_0*** v122 = ((abstract_0***) 0);
abstract_0*** v123 = ((abstract_0***) 0);
abstract_0*** v124 = ((abstract_0***) 0);
abstract_0*** v125 = ((abstract_0***) 0);
return;

}
/* method id 408 */ C2::C2 () {
abstract_0*** v126 = ((abstract_0***) 0);
abstract_0*** v127 = ((abstract_0***) 0);
abstract_0* v128 = new abstract_0 ();
abstract_0*** v129 = ((abstract_0***) 0);
::func4(new abstract_0** (), new abstract_0** ());
::func4(new abstract_0** (), new abstract_0** ());
::func4(new abstract_0** (), new abstract_0** ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
abstract_0*** v138 = ((abstract_0***) 0);
return;

}
/* method id 410 */ C3::~C3 () {
abstract_0*** v139 = ((abstract_0***) 0);
return;

}
/* method id 411 */ abstract_0** C3::func0 (abstract_0*** v141) {
abstract_0*** v142 = new abstract_0** ();
abstract_0*** v143 = new abstract_0** ();
C0 v144 = *(((C0*) 0));
return new abstract_0* ();

}
/* method id 412 */ abstract_0** C3::func0 (C0 v155) {
abstract_0*** v156 = ((abstract_0***) 0);
delete (new C1 ());
return new abstract_0* ();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func1 (abstract_0*** v161) {
abstract_0*** v162;
abstract_0*** v163;
abstract_0*** v164;
abstract_0*** v165;

return new abstract_0 ();

}
abstract_1 func2 (abstract_0*** v166, abstract_0* v167, abstract_0*** v168) {
C0 v169;
C0 v170;
abstract_0* v171;
abstract_0* v172;

return abstract_1();

}
abstract_0* func3 (abstract_0*** v173, abstract_0*** v174, abstract_0*** v175, C0 v176) {
abstract_0*** v177;
abstract_0*** v178;
abstract_0*** v179;

return new abstract_0 ();

}
abstract_0* func4 (abstract_0*** v180, abstract_0*** v181) {
abstract_0*** v182;
abstract_0*** v183;
abstract_0*** v184;
abstract_0*** v185;

return new abstract_0 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var17: PtrType{PtrType{PtrType{AbstractType{0}}}}
8    | var18: PtrType{PtrType{PtrType{AbstractType{0}}}}
12   | var19: PtrType{PtrType{PtrType{AbstractType{0}}}}
16   | var20: PtrType{PtrType{PtrType{AbstractType{0}}}}
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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var17: PtrType{PtrType{PtrType{AbstractType{0}}}}
16   | var18: PtrType{PtrType{PtrType{AbstractType{0}}}}
20   | var19: PtrType{PtrType{PtrType{AbstractType{0}}}}
24   | var20: PtrType{PtrType{PtrType{AbstractType{0}}}}
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
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(48)
0    +---
0    | {vbptr}
4    | var134: PtrType{PtrType{PtrType{AbstractType{0}}}}
8    | var135: PtrType{PtrType{PtrType{AbstractType{0}}}}
12   | var136: PtrType{PtrType{PtrType{AbstractType{0}}}}
16   | var137: PtrType{PtrType{PtrType{AbstractType{0}}}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var17: PtrType{PtrType{PtrType{AbstractType{0}}}}
28   | var18: PtrType{PtrType{PtrType{AbstractType{0}}}}
32   | var19: PtrType{PtrType{PtrType{AbstractType{0}}}}
36   | var20: PtrType{PtrType{PtrType{AbstractType{0}}}}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | {vbptr}
48   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 48;
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
class C3    size(92)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var157: PtrType{PtrType{PtrType{AbstractType{0}}}}
12   | var158: ClassType{0}
32   | var159: PtrType{PtrType{PtrType{AbstractType{0}}}}
36   | var160: PtrType{PtrType{PtrType{AbstractType{0}}}}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   | var17: PtrType{PtrType{PtrType{AbstractType{0}}}}
48   | var18: PtrType{PtrType{PtrType{AbstractType{0}}}}
52   | var19: PtrType{PtrType{PtrType{AbstractType{0}}}}
56   | var20: PtrType{PtrType{PtrType{AbstractType{0}}}}
60   +---
60   | {vtordisp for vbase 1}
64   +--- (virtual base class C1)
64   | {vfptr}
68   | {vbptr}
72   +---
72   +--- (virtual base class C2)
72   | {vbptr}
76   | var134: PtrType{PtrType{PtrType{AbstractType{0}}}}
80   | var135: PtrType{PtrType{PtrType{AbstractType{0}}}}
84   | var136: PtrType{PtrType{PtrType{AbstractType{0}}}}
88   | var137: PtrType{PtrType{PtrType{AbstractType{0}}}}
92   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 92;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 64;
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
 const size_t model_offset = 72;
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

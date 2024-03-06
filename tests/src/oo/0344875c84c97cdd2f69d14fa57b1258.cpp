// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ virtual C0 func0 (C0* v7, C0* v8);
C1 (special_constructor);
C0* v10;
abstract_0 v11;
C0* v12;
C0* v13;
};
struct C2 : public virtual C1, public C0 {
/* method id 404 */ C2 ();
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ virtual C0 func1 (C0* v29, abstract_0 v30);
/* method id 407 */ virtual C0 func0 (C1 v70, C0* v71, C0* v72, abstract_0 v73);
C2 (special_constructor);
C0* v78;
C0* v79;
C0* v80;
C0* v81;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual ~C3 ();
C3 (special_constructor);
C0* v155;
C0* v156;
C0* v157;
C0* v158;
};
C0 func3 (C0* v159, C0* v160, C1 v161, C1 v162);
C0 func4 (C0* v167, C0* v168, C0* v169, C0* v170);
C0 func5 (C0* v175, C0* v176, C0* v177, C0* v178);
C0 func6 (C0* v183, C0* v184, C1 v185, C0* v186);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = ((C0*) 0);
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
C0* v6 = ((C0*) 0);
return;

}
/* method id 403 */ C0 C1::func0 (C0* v7, C0* v8) {
return *(v13);

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::C2 () {
C0* v14 = (new C0 ());
C0* v15 = (new C0 ());
C0* v16 = (new C0 ());
C0* v17 = (new C0 ());
return;

}
/* method id 405 */ C2::~C2 () {
C0* v18 = (new C0 ());
C0* v19 = (new C0 ());
C0* v20 = (new C0 ());
C0* v21 = (new C0 ());
delete (new C1 ());
return;

}
/* method id 406 */ C0 C2::func1 (C0* v29, abstract_0 v30) {
abstract_0 v31 = abstract_0();
C0* v32 = ((C0*) 0);
return ::func4(v13, v13, v13, v13);

}
/* method id 407 */ C0 C2::func0 (C1 v70, C0* v71, C0* v72, abstract_0 v73) {
C0* v74 = (new C0 ());
abstract_0 v75 = abstract_0();
C1 v76 = *(&(*(((C1*) 0))));
abstract_0 v77 = abstract_0();
return *((new C0 ()));

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
C0* v82 = &(*((new C0 ())));
C0* v83 = &(*((new C0 ())));
C0* v84 = &(*((new C0 ())));
C0* v85 = &(*((new C0 ())));
return;

}
/* method id 409 */ C3::~C3 () {
C0* v113 = ((C0*) 0);
abstract_0 v114 = abstract_0();
C0* v115 = ((C0*) 0);
C0* v116 = ((C0*) 0);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

C0 func3 (C0* v159, C0* v160, C1 v161, C1 v162) {
C0* v163;
C0* v164;
C0* v165;
C1 v166;

return *(v165);

}
C0 func4 (C0* v167, C0* v168, C0* v169, C0* v170) {
C0* v171;
C0* v172;
C0* v173;
C0* v174;

return *(v168);

}
C0 func5 (C0* v175, C0* v176, C0* v177, C0* v178) {
C0* v179;
C1 v180;
C0* v181;
C0* v182;

return *(v176);

}
C0 func6 (C0* v183, C0* v184, C1 v185, C0* v186) {

return *(v183);

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | var10: PtrType{ClassType{0}}
8    | var11: AbstractType{0}
12   | var12: PtrType{ClassType{0}}
16   | var13: PtrType{ClassType{0}}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(44)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | {vbptr}
8    | var78: PtrType{ClassType{0}}
12   | var79: PtrType{ClassType{0}}
16   | var80: PtrType{ClassType{0}}
20   | var81: PtrType{ClassType{0}}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | var10: PtrType{ClassType{0}}
32   | var11: AbstractType{0}
36   | var12: PtrType{ClassType{0}}
40   | var13: PtrType{ClassType{0}}
44   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(64)
0    +---
0    | {vbptr}
4    | var155: PtrType{ClassType{0}}
8    | var156: PtrType{ClassType{0}}
12   | var157: PtrType{ClassType{0}}
16   | var158: PtrType{ClassType{0}}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | var10: PtrType{ClassType{0}}
28   | var11: AbstractType{0}
32   | var12: PtrType{ClassType{0}}
36   | var13: PtrType{ClassType{0}}
40   +---
40   +--- (virtual base class C2)
40   | {vfptr}
44   | +--- (base class C0)
44   | +---
44   | {vbptr}
48   | var78: PtrType{ClassType{0}}
52   | var79: PtrType{ClassType{0}}
56   | var80: PtrType{ClassType{0}}
60   | var81: PtrType{ClassType{0}}
64   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 64;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
 const size_t model_offset = 40;
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

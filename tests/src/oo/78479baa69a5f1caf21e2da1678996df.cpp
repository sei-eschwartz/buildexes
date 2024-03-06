// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ virtual abstract_0 func1 (abstract_0** v0, abstract_0** v1, abstract_0** v2, abstract_0** v3);
C0 (special_constructor);
abstract_1 v8;
abstract_1 v9;
abstract_0** v10;
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual abstract_0 func0 (abstract_1 v11, abstract_0** v12);
/* method id 404 */ C1 ();
/* method id 405 */ virtual ~C1 ();
/* method id 406 */ virtual abstract_0 func1 (abstract_1 v90, abstract_1 v91);
C1 (special_constructor);
abstract_1 v96;
abstract_2 v97;
abstract_1 v98;
abstract_1 v99;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_1 v108;
abstract_1 v109;
abstract_1 v110;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ virtual abstract_0 func0 (abstract_2 v123, abstract_1 v124);
/* method id 412 */ virtual abstract_0 func1 (abstract_1 v126, abstract_0** v127);
C3 (special_constructor);
abstract_1 v132;
};
abstract_0 func3 (abstract_4 v133, abstract_4 v134, abstract_1 v135);
abstract_0 func4 (abstract_3 v136);
// definitions
/* method id 400 */ C0::C0 () {
return;

}
/* method id 401 */ C0::~C0 () {
return;

}
/* method id 402 */ abstract_0 C0::func1 (abstract_0** v0, abstract_0** v1, abstract_0** v2, abstract_0** v3) {
abstract_0** v4 = new abstract_0* ();
abstract_0** v5 = new abstract_0* ();
abstract_0** v6 = new abstract_0* ();
abstract_0** v7 = new abstract_0* ();
delete (new C3 ());
v10 = v4;
return abstract_0();

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0 C1::func0 (abstract_1 v11, abstract_0** v12) {
abstract_1 v13 = abstract_1();
abstract_1 v14 = abstract_1();
abstract_0** v15 = new abstract_0* ();
abstract_1 v16 = abstract_1();
::func3(abstract_4(), abstract_4(), abstract_1());
v9 = v13;
::func3(abstract_4(), abstract_4(), abstract_1());
return ::func4(abstract_3());

}
/* method id 404 */ C1::C1 () {
abstract_1 v17 = abstract_1();
abstract_1 v18 = abstract_1();
abstract_1 v19 = abstract_1();
abstract_1 v20 = abstract_1();
v10 = v10;
v10 = v10;
v10 = v10;
v8 = abstract_1();
return;

}
/* method id 405 */ C1::~C1 () {
abstract_1 v21 = abstract_1();
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
delete (new C1 ());
v98 = v22;
return;

}
/* method id 406 */ abstract_0 C1::func1 (abstract_1 v90, abstract_1 v91) {
abstract_2 v92 = abstract_2();
abstract_1 v93 = abstract_1();
abstract_1 v94 = abstract_1();
abstract_1 v95 = abstract_1();
v8 = v8;
return ((new C1 ()))->C1::func0(v9, v10);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_2 v100 = abstract_2();
abstract_1 v101 = abstract_1();
abstract_1 v102 = abstract_1();
abstract_1 v103 = abstract_1();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
abstract_2 v111 = abstract_2();
abstract_1 v112 = abstract_1();
abstract_1 v113 = abstract_1();
abstract_1 v114 = abstract_1();
return;

}
/* method id 410 */ C3::~C3 () {
abstract_2 v115 = abstract_2();
abstract_1 v116 = abstract_1();
abstract_1 v117 = abstract_1();
abstract_1 v118 = abstract_1();
return;

}
/* method id 411 */ abstract_0 C3::func0 (abstract_2 v123, abstract_1 v124) {
abstract_0** v125 = new abstract_0* ();
v97 = abstract_2();
v97 = abstract_2();
v10 = v125;
v109 = v8;
return abstract_0();

}
/* method id 412 */ abstract_0 C3::func1 (abstract_1 v126, abstract_0** v127) {
abstract_0** v128 = new abstract_0* ();
abstract_2 v129 = abstract_2();
abstract_3 v130 = abstract_3();
abstract_3 v131 = abstract_3();
return abstract_0();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func3 (abstract_4 v133, abstract_4 v134, abstract_1 v135) {

return ::func4(abstract_3());

}
abstract_0 func4 (abstract_3 v136) {
abstract_1 v137;
abstract_1 v138;
abstract_5 v139;
abstract_3 v140;

delete (new C0 ());
return abstract_0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var8: AbstractType{1}
8    | var9: AbstractType{1}
12   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
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
class C1    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var96: AbstractType{1}
12   | var97: AbstractType{2}
16   | var98: AbstractType{1}
20   | var99: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var8: AbstractType{1}
32   | var9: AbstractType{1}
36   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
40   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 40;
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
class C2    size(56)
0    +---
0    | {vbptr}
4    | var108: AbstractType{1}
8    | var109: AbstractType{1}
12   | var110: AbstractType{1}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var8: AbstractType{1}
24   | var9: AbstractType{1}
28   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   | var96: AbstractType{1}
44   | var97: AbstractType{2}
48   | var98: AbstractType{1}
52   | var99: AbstractType{1}
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
class C3    size(68)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var132: AbstractType{1}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var8: AbstractType{1}
20   | var9: AbstractType{1}
24   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var96: AbstractType{1}
40   | var97: AbstractType{2}
44   | var98: AbstractType{1}
48   | var99: AbstractType{1}
52   +---
52   +--- (virtual base class C2)
52   | {vbptr}
56   | var108: AbstractType{1}
60   | var109: AbstractType{1}
64   | var110: AbstractType{1}
68   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 68;
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
 const size_t model_offset = 52;
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

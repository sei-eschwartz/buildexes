// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ virtual void** func1 ();
/* method id 402 */ C0 ();
/* method id 403 */ virtual abstract_1*** func0 (abstract_0 v3, abstract_0 v4, abstract_0 v5, abstract_0 v6);
C0 (special_constructor);
abstract_0 v7;
};
struct C1 : public C0 {
/* method id 404 */ ~C1 ();
/* method id 405 */ virtual void* func1 (abstract_0 v8, abstract_0 v9, abstract_0 v10, abstract_0 v11);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_0 v20;
abstract_0 v21;
abstract_0 v22;
abstract_0 v23;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
/* method id 408 */ ~C2 ();
C2 (special_constructor);
C1 v97;
C1 v98;
C1 v99;
};
struct C3 : public virtual C1 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
C3 (special_constructor);
C1 v122;
C1 v123;
C1 v124;
};
abstract_1 func3 (C1 v125, C1 v126, C1 v127, C1 v128);
abstract_1* func4 (C1 v133, abstract_0 v134, C1 v135, C1 v136);
abstract_1* func5 (C1 v141, C1 v142, C1 v143, C1 v144);
abstract_1* func6 (C1 v149, C1 v150, C1 v151, C1 v152);
// definitions
/* method id 400 */ C0::~C0 () {
abstract_0 v0 = abstract_0();
abstract_0 v1 = abstract_0();
return;

}
/* method id 401 */ void** C0::func1 () {
delete (new C1 ());
return new void* ();

}
/* method id 402 */ C0::C0 () {
abstract_0 v2 = abstract_0();
return;

}
/* method id 403 */ abstract_1*** C0::func0 (abstract_0 v3, abstract_0 v4, abstract_0 v5, abstract_0 v6) {
delete (new C1 ());
return ((abstract_1***) 0);

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::~C1 () {
return;

}
/* method id 405 */ void* C1::func1 (abstract_0 v8, abstract_0 v9, abstract_0 v10, abstract_0 v11) {
abstract_0 v12 = abstract_0();
abstract_0 v13 = abstract_0();
abstract_0 v14 = abstract_0();
abstract_0 v15 = abstract_0();
return ((void*) 0);

}
/* method id 406 */ C1::C1 () {
abstract_0 v16 = abstract_0();
abstract_0 v17 = abstract_0();
abstract_0 v18 = abstract_0();
abstract_0 v19 = abstract_0();
delete (new C2 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_0 v24 = abstract_0();
abstract_0 v25 = abstract_0();
abstract_0 v26 = abstract_0();
abstract_0 v27 = abstract_0();
return;

}
/* method id 408 */ C2::~C2 () {
abstract_0 v28 = abstract_0();
abstract_0 v29 = abstract_0();
abstract_0 v30 = abstract_0();
abstract_0 v31 = abstract_0();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
C1 v100 = *(&(*((new C1 ()))));
C1 v101 = *(&(*((new C1 ()))));
C1 v102 = *(&(*((new C1 ()))));
C1 v103 = *(&(*((new C1 ()))));
return;

}
/* method id 410 */ C3::~C3 () {
C1 v104 = *(((C1*) 0));
C1 v105 = *(((C1*) 0));
C1 v106 = *(((C1*) 0));
C1 v107 = *(((C1*) 0));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_1 func3 (C1 v125, C1 v126, C1 v127, C1 v128) {
C1 v129;
C1 v130;
C1 v131;
C1 v132;

delete (new C1 ());
return abstract_1();

}
abstract_1* func4 (C1 v133, abstract_0 v134, C1 v135, C1 v136) {
C1 v137;
C1 v138;
abstract_0 v139;
C1 v140;

return ((abstract_1*) 0);

}
abstract_1* func5 (C1 v141, C1 v142, C1 v143, C1 v144) {
C1 v145;
C1 v146;
abstract_0 v147;
C1 v148;

delete (new C3 ());
return new abstract_1 ();

}
abstract_1* func6 (C1 v149, C1 v150, C1 v151, C1 v152) {
C1 v153;
abstract_0 v154;
C1 v155;
C1 v156;

return new abstract_1 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var7: AbstractType{0}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
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
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var7: AbstractType{0}
8    | +---
8    | var20: AbstractType{0}
12   | var21: AbstractType{0}
16   | var22: AbstractType{0}
20   | var23: AbstractType{0}
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
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(100)
0    +---
0    | {vbptr}
4    | var97: ClassType{1}
28   | var98: ClassType{1}
52   | var99: ClassType{1}
76   +---
76   +--- (virtual base class C1)
76   | +--- (base class C0)
76   | | {vfptr}
80   | | var7: AbstractType{0}
84   | +---
84   | var20: AbstractType{0}
88   | var21: AbstractType{0}
92   | var22: AbstractType{0}
96   | var23: AbstractType{0}
100  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 100;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 76;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(100)
0    +---
0    | {vbptr}
4    | var122: ClassType{1}
28   | var123: ClassType{1}
52   | var124: ClassType{1}
76   +---
76   +--- (virtual base class C1)
76   | +--- (base class C0)
76   | | {vfptr}
80   | | var7: AbstractType{0}
84   | +---
84   | var20: AbstractType{0}
88   | var21: AbstractType{0}
92   | var22: AbstractType{0}
96   | var23: AbstractType{0}
100  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 100;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 76;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

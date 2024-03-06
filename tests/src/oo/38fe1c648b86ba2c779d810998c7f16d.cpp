// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
};
struct C2 : public virtual C1 {
/* method id 402 */ C2 ();
/* method id 403 */ virtual ~C2 ();
/* method id 404 */ virtual abstract_0* func0 (C0 v25);
C2 (special_constructor);
C0 v27;
C0 v28;
C0 v29;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 405 */ C3 ();
/* method id 406 */ virtual ~C3 ();
C3 (special_constructor);
C2 v125;
C2 v126;
C2 v127;
};
abstract_0 func1 (C2 v128, C2 v129, C2 v130);
abstract_0* func2 (C2 v133, C2 v134, C2 v135, C2 v136);
abstract_0* func3 (C2 v141, C2 v142, C2 v143, C2 v144);
abstract_0* func4 (abstract_1 v149, C2 v150, C2 v151, C2 v152);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 402 */ C2::C2 () {
C0 v2 = *(((C0*) 0));
C0 v3 = *(((C0*) 0));
C0 v4 = *(((C0*) 0));
C0 v5 = *(((C0*) 0));
return;

}
/* method id 403 */ C2::~C2 () {
C0 v14 = *(&(*((new C0 ()))));
C0 v15 = *(&(*((new C0 ()))));
C0 v16 = *(&(*((new C0 ()))));
v28 = *(((C0*) 0));
return;

}
/* method id 404 */ abstract_0* C2::func0 (C0 v25) {
C0 v26 = *(((C0*) 0));
return ((abstract_0*) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
C0 v30 = *((new C0 ()));
C0 v31 = *((new C0 ()));
C0 v32 = *((new C0 ()));
C0 v33 = *((new C0 ()));
return;

}
/* method id 406 */ C3::~C3 () {
C0 v35 = *(&(*(((C0*) 0))));
C0 v36 = *(&(*(((C0*) 0))));
C0 v37 = *(&(*(((C0*) 0))));
C0 v38 = *(&(*(((C0*) 0))));
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func1 (C2 v128, C2 v129, C2 v130) {
C2 v131;
C2 v132;

return abstract_0();

}
abstract_0* func2 (C2 v133, C2 v134, C2 v135, C2 v136) {
abstract_1 v137;
C2 v138;
C2 v139;
C2 v140;

return ((abstract_0*) 0);

}
abstract_0* func3 (C2 v141, C2 v142, C2 v143, C2 v144) {
abstract_1 v145;
abstract_1 v146;
C2 v147;
C2 v148;

delete (new C0 ());
return ((abstract_0*) 0);

}
abstract_0* func4 (abstract_1 v149, C2 v150, C2 v151, C2 v152) {
C2 v153;
C2 v154;
C2 v155;
C2 v156;

return ((abstract_0*) 0);

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
class C1    size(8)
0    +---
0    | {vbptr}
4    | var0: ClassType{0}
5    | var1: ClassType{0}
6    | alignment: 
8    +---
8    +--- (virtual base class C0)
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
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
class C2    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var27: ClassType{0}
9    | var28: ClassType{0}
10   | var29: ClassType{0}
11   | alignment: 
12   +---
12   +--- (virtual base class C0)
12   +---
12   +--- (virtual base class C1)
12   | {vbptr}
16   | var0: ClassType{0}
17   | var1: ClassType{0}
18   | alignment: 
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(84)
0    +---
0    | {vbptr}
4    | var125: ClassType{2}
24   | var126: ClassType{2}
44   | var127: ClassType{2}
64   +---
64   +--- (virtual base class C0)
64   +---
64   +--- (virtual base class C1)
64   | {vbptr}
68   | var0: ClassType{0}
69   | var1: ClassType{0}
70   | alignment: 
72   +---
72   +--- (virtual base class C2)
72   | {vfptr}
76   | {vbptr}
80   | var27: ClassType{0}
81   | var28: ClassType{0}
82   | var29: ClassType{0}
83   | alignment: 
84   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 84;
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

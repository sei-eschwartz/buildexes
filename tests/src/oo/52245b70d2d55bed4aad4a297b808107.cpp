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
abstract_0* v0;
};
struct C1  {
/* method id 401 */ virtual abstract_0 func0 ();
/* method id 402 */ abstract_0 func0 (abstract_0* v4, abstract_0* v5);
/* method id 403 */ C1 ();
C1 (special_constructor);
abstract_0* v14;
abstract_0* v15;
abstract_0* v16;
abstract_0* v17;
};
struct C2 : public virtual C1 {
/* method id 404 */ C2 ();
C2 (special_constructor);
abstract_0* v52;
abstract_0* v53;
abstract_0* v54;
};
struct C3 : public virtual C1, public virtual C2, public virtual C0 {
/* method id 405 */ C3 ();
/* method id 406 */ virtual ~C3 ();
/* method id 407 */ virtual void func1 ();
C3 (special_constructor);
abstract_1 v119;
abstract_1 v120;
abstract_1 v121;
abstract_1 v122;
};
void func2 ();
void func3 (abstract_1 v125);
void func4 (abstract_1 v129, abstract_0* v130, abstract_1 v131, abstract_1 v132);
void func5 (abstract_0* v137, abstract_1 v138, abstract_1 v139, abstract_1 v140);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ abstract_0 C1::func0 () {
abstract_0* v1 = ((abstract_0*) 0);
abstract_0* v2 = new abstract_0 ();
abstract_0* v3 = ((abstract_0*) 0);
return abstract_0();

}
/* method id 402 */ abstract_0 C1::func0 (abstract_0* v4, abstract_0* v5) {
abstract_0* v6 = ((abstract_0*) 0);
abstract_0* v7 = ((abstract_0*) 0);
abstract_0* v8 = ((abstract_0*) 0);
abstract_0* v9 = ((abstract_0*) 0);
return abstract_0();

}
/* method id 403 */ C1::C1 () {
abstract_0* v10 = new abstract_0 ();
abstract_0* v11 = new abstract_0 ();
abstract_0* v12 = new abstract_0 ();
abstract_0* v13 = new abstract_0 ();
return;

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::C2 () {
abstract_0* v18 = ((abstract_0*) 0);
abstract_0* v19 = ((abstract_0*) 0);
abstract_0* v20 = ((abstract_0*) 0);
abstract_0* v21 = ((abstract_0*) 0);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
abstract_0* v55 = ((abstract_0*) 0);
abstract_0* v56 = ((abstract_0*) 0);
abstract_0* v57 = ((abstract_0*) 0);
return;

}
/* method id 406 */ C3::~C3 () {
abstract_0* v70 = ((abstract_0*) 0);
abstract_0* v71 = ((abstract_0*) 0);
abstract_0* v72 = ((abstract_0*) 0);
abstract_0* v73 = ((abstract_0*) 0);
return;

}
/* method id 407 */ void C3::func1 () {
abstract_0* v105 = ((abstract_0*) 0);
abstract_0* v106 = ((abstract_0*) 0);
abstract_0* v107 = ((abstract_0*) 0);
return ::func5(new abstract_0 (), v120, v120, v120);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()), C0(special_constructor ()) {}

void func2 () {
abstract_1 v123;
abstract_1 v124;

return ::func5(new abstract_0 (), abstract_1(), abstract_1(), abstract_1());

}
void func3 (abstract_1 v125) {
abstract_1 v126;
abstract_1 v127;
abstract_1 v128;

return ::func4(v125, ((abstract_0*) 0), v125, v125);

}
void func4 (abstract_1 v129, abstract_0* v130, abstract_1 v131, abstract_1 v132) {
abstract_1 v133;
abstract_1 v134;
abstract_1 v135;
abstract_1 v136;

return ::func3(v131);

}
void func5 (abstract_0* v137, abstract_1 v138, abstract_1 v139, abstract_1 v140) {
abstract_1 v141;
abstract_1 v142;
abstract_1 v143;
abstract_1 v144;

return ::func3(v140);

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | var0: PtrType{AbstractType{0}}
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
class C1    size(20)
0    +---
0    | {vfptr}
4    | var14: PtrType{AbstractType{0}}
8    | var15: PtrType{AbstractType{0}}
12   | var16: PtrType{AbstractType{0}}
16   | var17: PtrType{AbstractType{0}}
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
class C2    size(36)
0    +---
0    | {vbptr}
4    | var52: PtrType{AbstractType{0}}
8    | var53: PtrType{AbstractType{0}}
12   | var54: PtrType{AbstractType{0}}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | var14: PtrType{AbstractType{0}}
24   | var15: PtrType{AbstractType{0}}
28   | var16: PtrType{AbstractType{0}}
32   | var17: PtrType{AbstractType{0}}
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
class C3    size(64)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var119: AbstractType{1}
12   | var120: AbstractType{1}
16   | var121: AbstractType{1}
20   | var122: AbstractType{1}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | var14: PtrType{AbstractType{0}}
32   | var15: PtrType{AbstractType{0}}
36   | var16: PtrType{AbstractType{0}}
40   | var17: PtrType{AbstractType{0}}
44   +---
44   +--- (virtual base class C2)
44   | {vbptr}
48   | var52: PtrType{AbstractType{0}}
52   | var53: PtrType{AbstractType{0}}
56   | var54: PtrType{AbstractType{0}}
60   +---
60   +--- (virtual base class C0)
60   | var0: PtrType{AbstractType{0}}
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
 const size_t model_offset = 24;
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
 const size_t model_offset = 44;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 60;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

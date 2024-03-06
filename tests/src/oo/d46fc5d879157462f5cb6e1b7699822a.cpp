// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ virtual abstract_1 func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual abstract_1* func1 (abstract_0 v4, abstract_0 v5, abstract_0 v6);
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_0 v19;
abstract_0 v20;
abstract_0 v21;
abstract_0 v22;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual abstract_1 func0 (abstract_0 v23, abstract_0 v24, abstract_0 v25, abstract_0 v26);
/* method id 405 */ C1 ();
/* method id 406 */ virtual ~C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 407 */ virtual abstract_1* func0 (abstract_1** v98, abstract_1** v99, abstract_1** v100, abstract_1** v101);
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C0, public virtual C1, public virtual C2 {
/* method id 410 */ C3 ();
/* method id 411 */ virtual ~C3 ();
C3 (special_constructor);
C2 v135;
C2 v136;
abstract_1** v137;
abstract_1*** v138;
};
abstract_1* func4 (abstract_1*** v139, abstract_0 v140);
abstract_1** func5 (abstract_1*** v145, abstract_1** v146, abstract_1** v147, abstract_1** v148);
abstract_1* func6 (C2 v153, abstract_1** v154, abstract_1** v155, abstract_1*** v156);
abstract_1* func7 (abstract_1** v159, abstract_1** v160, C2 v161, abstract_1** v162);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3) {
delete (new C1 ());
return abstract_1();

}
/* method id 402 */ abstract_1* C0::func1 (abstract_0 v4, abstract_0 v5, abstract_0 v6) {
abstract_0 v7 = abstract_0();
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
delete (new C1 ());
return new abstract_1 ();

}
/* method id 403 */ C0::C0 () {
abstract_0 v15 = abstract_0();
abstract_0 v16 = abstract_0();
abstract_0 v17 = abstract_0();
abstract_0 v18 = abstract_0();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_1 C1::func0 (abstract_0 v23, abstract_0 v24, abstract_0 v25, abstract_0 v26) {
abstract_0 v27 = abstract_0();
abstract_0 v28 = abstract_0();
abstract_0 v29 = abstract_0();
delete (new C1 ());
v20 = v24;
return abstract_1();

}
/* method id 405 */ C1::C1 () {
abstract_0 v30 = abstract_0();
abstract_0 v31 = abstract_0();
abstract_0 v32 = abstract_0();
abstract_0 v33 = abstract_0();
delete (new C2 ());
return;

}
/* method id 406 */ C1::~C1 () {
abstract_0 v38 = abstract_0();
abstract_0 v39 = abstract_0();
abstract_0 v40 = abstract_0();
abstract_0 v41 = abstract_0();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ abstract_1* C2::func0 (abstract_1** v98, abstract_1** v99, abstract_1** v100, abstract_1** v101) {
abstract_1** v102 = ((abstract_1**) 0);
abstract_1** v103 = ((abstract_1**) 0);
abstract_1** v104 = ((abstract_1**) 0);
delete (new C1 ());
return ((abstract_1*) 0);

}
/* method id 408 */ C2::~C2 () {
abstract_1** v105 = ((abstract_1**) 0);
abstract_1** v106 = ((abstract_1**) 0);
abstract_0 v107 = abstract_0();
abstract_1** v108 = ((abstract_1**) 0);
v21 = v21;
v21 = v21;
return;

}
/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
abstract_0 v109 = abstract_0();
abstract_0 v110 = abstract_0();
abstract_1** v111 = ((abstract_1**) 0);
abstract_1** v112 = ((abstract_1**) 0);
return;

}
/* method id 411 */ C3::~C3 () {
abstract_1** v117 = ((abstract_1**) 0);
abstract_1** v118 = ((abstract_1**) 0);
abstract_1** v119 = ((abstract_1**) 0);
abstract_1** v120 = ((abstract_1**) 0);
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

abstract_1* func4 (abstract_1*** v139, abstract_0 v140) {
C2 v141;
abstract_1** v142;
abstract_1** v143;
abstract_1*** v144;

return new abstract_1 ();

}
abstract_1** func5 (abstract_1*** v145, abstract_1** v146, abstract_1** v147, abstract_1** v148) {
abstract_1** v149;
abstract_1** v150;
C2 v151;
abstract_1** v152;

return v147;

}
abstract_1* func6 (C2 v153, abstract_1** v154, abstract_1** v155, abstract_1*** v156) {
abstract_1** v157;
abstract_1*** v158;

return ((abstract_1*) 0);

}
abstract_1* func7 (abstract_1** v159, abstract_1** v160, C2 v161, abstract_1** v162) {
abstract_1** v163;
abstract_1*** v164;
abstract_1** v165;
abstract_1*** v166;

delete (new C2 ());
return ((abstract_1*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var19: AbstractType{0}
8    | var20: AbstractType{0}
12   | var21: AbstractType{0}
16   | var22: AbstractType{0}
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
class C1    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var19: AbstractType{0}
20   | var20: AbstractType{0}
24   | var21: AbstractType{0}
28   | var22: AbstractType{0}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var19: AbstractType{0}
20   | var20: AbstractType{0}
24   | var21: AbstractType{0}
28   | var22: AbstractType{0}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
class C3    size(132)
0    +---
0    | {vbptr}
4    | var135: ClassType{2}
44   | var136: ClassType{2}
84   | var137: PtrType{PtrType{AbstractType{1}}}
88   | var138: DeletablePtrType{PtrType{PtrType{AbstractType{1}}}}
92   | {vtordisp for vbase 0}
96   +---
96   +--- (virtual base class C0)
96   | {vfptr}
100  | var19: AbstractType{0}
104  | var20: AbstractType{0}
108  | var21: AbstractType{0}
112  | var22: AbstractType{0}
116  +---
116  +--- (virtual base class C1)
116  | {vfptr}
120  | {vbptr}
124  +---
124  +--- (virtual base class C2)
124  | {vfptr}
128  | {vbptr}
132  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 132;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 96;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 116;
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
 const size_t model_offset = 124;
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

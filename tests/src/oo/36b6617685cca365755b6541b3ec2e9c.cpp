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
/* method id 401 */ ~C0 ();
/* method id 402 */ virtual abstract_1 func0 (abstract_1* v1, abstract_1* v2, abstract_1* v3, abstract_1* v4);
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_1* v13;
abstract_1* v14;
abstract_1* v15;
abstract_1* v16;
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
/* method id 405 */ virtual ~C1 ();
C1 (special_constructor);
C0 v41;
C0 v42;
C0 v43;
C0 v44;
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
/* method id 407 */ virtual ~C2 ();
C2 (special_constructor);
C0 v54;
C0 v55;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 408 */ C3 ();
/* method id 409 */ ~C3 ();
C3 (special_constructor);
C0 v84;
C0 v85;
C0 v86;
C0 v87;
};
abstract_1 func1 (C0 v88, C0 v89, C0 v90, C0 v91);
abstract_1 func2 (C0 v96, C0 v97, C0 v98, C0 v99);
abstract_0 func3 (C0 v104, C0 v105, C0 v106, C0 v107);
abstract_1 func4 (abstract_1* v112, C0 v113, C0 v114);
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return abstract_0();

}
/* method id 401 */ C0::~C0 () {
abstract_1* v0 = ((abstract_1*) 0);
v13 = v0;
v13 = v0;
return;

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1* v1, abstract_1* v2, abstract_1* v3, abstract_1* v4) {
abstract_1* v5 = ((abstract_1*) 0);
abstract_1* v6 = ((abstract_1*) 0);
abstract_1* v7 = ((abstract_1*) 0);
abstract_1* v8 = ((abstract_1*) 0);
return abstract_1();

}
/* method id 403 */ C0::C0 () {
abstract_1* v9 = ((abstract_1*) 0);
abstract_1* v10 = ((abstract_1*) 0);
abstract_1* v11 = ((abstract_1*) 0);
abstract_1* v12 = ((abstract_1*) 0);
v12 = new abstract_1 ();
v12 = new abstract_1 ();
v12 = v12;
v12 = new abstract_1 ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
delete (new C1 ());
return;

}
/* method id 405 */ C1::~C1 () {
abstract_1* v18 = ((abstract_1*) 0);
abstract_1* v19 = ((abstract_1*) 0);
abstract_1* v20 = ((abstract_1*) 0);
abstract_1* v21 = ((abstract_1*) 0);
delete (new C1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
delete (new C1 ());
delete (new C3 ());
return;

}
/* method id 407 */ C2::~C2 () {
C0 v50 = *((new C0 ()));
C0 v51 = *((new C0 ()));
C0 v52 = *((new C0 ()));
C0 v53 = *((new C0 ()));
v15 = v14;
v15 = new abstract_1 ();
v15 = v14;
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
C0 v56 = *(((C0*) 0));
C0 v57 = *(((C0*) 0));
C0 v58 = *(((C0*) 0));
C0 v59 = *(((C0*) 0));
return;

}
/* method id 409 */ C3::~C3 () {
C0 v68 = *(((C0*) 0));
C0 v69 = *(((C0*) 0));
C0 v70 = *(((C0*) 0));
abstract_1* v71 = new abstract_1 ();
delete (new C0 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_1 func1 (C0 v88, C0 v89, C0 v90, C0 v91) {
C0 v92;
abstract_1* v93;
C0 v94;
C0 v95;

delete (new C2 ());
return ::func4(v93, v88, v88);

}
abstract_1 func2 (C0 v96, C0 v97, C0 v98, C0 v99) {
C0 v100;
C0 v101;
C0 v102;
abstract_1* v103;

return ::func4(v103, v96, v96);

}
abstract_0 func3 (C0 v104, C0 v105, C0 v106, C0 v107) {
C0 v108;
C0 v109;
C0 v110;
C0 v111;

return abstract_0();

}
abstract_1 func4 (abstract_1* v112, C0 v113, C0 v114) {
C0 v115;
C0 v116;
C0 v117;

return abstract_1();

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var13: PtrType{AbstractType{1}}
8    | var14: PtrType{AbstractType{1}}
12   | var15: PtrType{AbstractType{1}}
16   | var16: PtrType{AbstractType{1}}
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
class C1    size(108)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var41: ClassType{0}
28   | var42: ClassType{0}
48   | var43: ClassType{0}
68   | var44: ClassType{0}
88   +---
88   +--- (virtual base class C0)
88   | {vfptr}
92   | var13: PtrType{AbstractType{1}}
96   | var14: PtrType{AbstractType{1}}
100  | var15: PtrType{AbstractType{1}}
104  | var16: PtrType{AbstractType{1}}
108  +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 108;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 88;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(152)
0    +---
0    | {vbptr}
4    | var54: ClassType{0}
24   | var55: ClassType{0}
44   +---
44   +--- (virtual base class C0)
44   | {vfptr}
48   | var13: PtrType{AbstractType{1}}
52   | var14: PtrType{AbstractType{1}}
56   | var15: PtrType{AbstractType{1}}
60   | var16: PtrType{AbstractType{1}}
64   +---
64   +--- (virtual base class C1)
64   | {vfptr}
68   | {vbptr}
72   | var41: ClassType{0}
92   | var42: ClassType{0}
112  | var43: ClassType{0}
132  | var44: ClassType{0}
152  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 152;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 64;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(236)
0    +---
0    | {vbptr}
4    | var84: ClassType{0}
24   | var85: ClassType{0}
44   | var86: ClassType{0}
64   | var87: ClassType{0}
84   +---
84   +--- (virtual base class C0)
84   | {vfptr}
88   | var13: PtrType{AbstractType{1}}
92   | var14: PtrType{AbstractType{1}}
96   | var15: PtrType{AbstractType{1}}
100  | var16: PtrType{AbstractType{1}}
104  +---
104  +--- (virtual base class C1)
104  | {vfptr}
108  | {vbptr}
112  | var41: ClassType{0}
132  | var42: ClassType{0}
152  | var43: ClassType{0}
172  | var44: ClassType{0}
192  +---
192  +--- (virtual base class C2)
192  | {vbptr}
196  | var54: ClassType{0}
216  | var55: ClassType{0}
236  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 236;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 104;
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
 const size_t model_offset = 192;
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

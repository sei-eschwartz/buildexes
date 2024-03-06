// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 (abstract_0* v0);
/* method id 401 */ virtual abstract_0 func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4);
/* method id 402 */ virtual abstract_0 func0 ();
/* method id 403 */ virtual ~C0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1 v5;
abstract_0* v6;
abstract_1 v7;
abstract_1 v8;
};
struct C1  {
/* method id 405 */ virtual abstract_0 func0 (abstract_1 v9, abstract_0* v10, abstract_0* v11);
/* method id 406 */ C1 ();
C1 (special_constructor);
C0 v23;
C0 v24;
abstract_0* v25;
C0 v26;
};
struct C2 : public virtual C1, public C0 {
/* method id 407 */ C2 ();
C2 (special_constructor);
C0 v28;
abstract_1 v29;
abstract_0* v30;
abstract_1 v31;
};
struct C3 : public virtual C1 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual abstract_2 func1 (abstract_2* v33);
/* method id 410 */ virtual abstract_2 func0 (abstract_0* v34, abstract_1 v35);
/* method id 411 */ virtual abstract_2 func0 (C2 v40, abstract_1 v41, abstract_0* v42);
C3 (special_constructor);
abstract_1 v45;
abstract_1 v46;
C0 v47;
abstract_1 v48;
};
abstract_2 func3 (abstract_1 v49, abstract_1 v50, abstract_1 v51, abstract_1 v52);
abstract_0 func4 (abstract_1 v57, abstract_1 v58, abstract_1 v59, abstract_1 v60);
abstract_0 func5 (abstract_1 v65, abstract_1 v66, abstract_1 v67, abstract_1 v68);
abstract_2 func6 (abstract_1 v73, abstract_1 v74, abstract_1 v75, abstract_1 v76);
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0) {
return abstract_0();

}
/* method id 401 */ abstract_0 C0::func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4) {
return ::func5(v7, abstract_1(), abstract_1(), abstract_1());

}
/* method id 402 */ abstract_0 C0::func0 () {
return ::func5(v7, v7, v7, v7);

}
/* method id 403 */ C0::~C0 () {
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_0 C1::func0 (abstract_1 v9, abstract_0* v10, abstract_0* v11) {
return ::func5(v9, v9, v9, v9);

}
/* method id 406 */ C1::C1 () {
abstract_1 v12 = abstract_1();
abstract_0* v13 = new abstract_0 ();
return;

}
C1::C1 (special_constructor)  {}

/* method id 407 */ C2::C2 () {
abstract_2* v27 = new abstract_2 ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
abstract_2* v32 = ((abstract_2*) 0);
return;

}
/* method id 409 */ abstract_2 C3::func1 (abstract_2* v33) {
return abstract_2();

}
/* method id 410 */ abstract_2 C3::func0 (abstract_0* v34, abstract_1 v35) {
abstract_1 v36 = abstract_1();
abstract_1 v37 = abstract_1();
abstract_1 v38 = abstract_1();
C2 v39 = *(((C2*) 0));
return abstract_2();

}
/* method id 411 */ abstract_2 C3::func0 (C2 v40, abstract_1 v41, abstract_0* v42) {
C2 v43 = *(((C2*) 0));
C0 v44 = *(&(*((new C0 ()))));
return abstract_2();

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_2 func3 (abstract_1 v49, abstract_1 v50, abstract_1 v51, abstract_1 v52) {
abstract_1 v53;
C0 v54;
abstract_1 v55;
abstract_1 v56;

return abstract_2();

}
abstract_0 func4 (abstract_1 v57, abstract_1 v58, abstract_1 v59, abstract_1 v60) {
abstract_1 v61;
abstract_1 v62;
abstract_1 v63;
abstract_1 v64;

delete (new C2 ());
return ((new C1 ()))->C1::func0(v58, new abstract_0 (), new abstract_0 ());

}
abstract_0 func5 (abstract_1 v65, abstract_1 v66, abstract_1 v67, abstract_1 v68) {
abstract_1 v69;
abstract_1 v70;
abstract_1 v71;
abstract_1 v72;

return abstract_0();

}
abstract_2 func6 (abstract_1 v73, abstract_1 v74, abstract_1 v75, abstract_1 v76) {
abstract_1 v77;
abstract_1 v78;
abstract_1 v79;
abstract_1 v80;

delete (new C1 ());
return ::func3(v76, v76, v76, v76);

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var5: AbstractType{1}
8    | var6: PtrType{AbstractType{0}}
12   | var7: AbstractType{1}
16   | var8: AbstractType{1}
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
class C1    size(68)
0    +---
0    | {vfptr}
4    | var23: ClassType{0}
24   | var24: ClassType{0}
44   | var25: PtrType{AbstractType{0}}
48   | var26: ClassType{0}
68   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 68;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(124)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var5: AbstractType{1}
8    | | var6: PtrType{AbstractType{0}}
12   | | var7: AbstractType{1}
16   | | var8: AbstractType{1}
20   | +---
20   | {vbptr}
24   | var28: ClassType{0}
44   | var29: AbstractType{1}
48   | var30: PtrType{AbstractType{0}}
52   | var31: AbstractType{1}
56   +---
56   +--- (virtual base class C1)
56   | {vfptr}
60   | var23: ClassType{0}
80   | var24: ClassType{0}
100  | var25: PtrType{AbstractType{0}}
104  | var26: ClassType{0}
124  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 124;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 56;
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
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(108)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var45: AbstractType{1}
12   | var46: AbstractType{1}
16   | var47: ClassType{0}
36   | var48: AbstractType{1}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | var23: ClassType{0}
64   | var24: ClassType{0}
84   | var25: PtrType{AbstractType{0}}
88   | var26: ClassType{0}
108  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 108;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
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

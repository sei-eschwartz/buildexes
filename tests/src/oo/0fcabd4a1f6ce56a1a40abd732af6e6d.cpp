// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v7, abstract_1 v8);
/* method id 403 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual abstract_2 func0 (abstract_0 v17, abstract_4 v18);
/* method id 405 */ C1 ();
C1 (special_constructor);
abstract_5 v21;
abstract_5 v22;
abstract_0 v23;
abstract_1 v24;
};
struct C2  {
/* method id 406 */ abstract_2 func1 (abstract_1 v25, abstract_2** v26, abstract_1 v27);
/* method id 407 */ void func2 (abstract_1 v28, abstract_0 v29);
/* method id 408 */ virtual void func1 (abstract_0 v31);
/* method id 409 */ virtual void func2 (abstract_1 v33, abstract_2** v34, abstract_1 v35, abstract_1 v36);
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_1 v37;
abstract_1 v38;
abstract_1 v39;
abstract_1 v40;
};
struct C3 : public virtual C2, public virtual C1 {
/* method id 411 */ C3 ();
/* method id 412 */ virtual ~C3 ();
/* method id 413 */ virtual void func1 (abstract_1 v67, abstract_3 v68);
C3 (special_constructor);
abstract_1 v81;
abstract_1 v82;
abstract_0 v83;
};
void func4 (abstract_1 v84, abstract_0 v85, abstract_1 v86, abstract_1 v87);
void func5 (abstract_6 v92, abstract_1 v93, abstract_2** v94, abstract_1 v95);
void func6 (abstract_1 v100, abstract_1 v101, abstract_2** v102, abstract_1 v103);
void func7 (abstract_0 v108);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
delete (new C1 ());
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
delete (new C1 ());
return abstract_2();

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
return abstract_2();

}
/* method id 403 */ C0::C0 () {
abstract_1 v13 = abstract_1();
abstract_4 v14 = abstract_4();
abstract_1 v15 = abstract_1();
abstract_5 v16 = abstract_5();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_2 C1::func0 (abstract_0 v17, abstract_4 v18) {
abstract_5 v19 = abstract_5();
abstract_0 v20 = abstract_0();
return abstract_2();

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ abstract_2 C2::func1 (abstract_1 v25, abstract_2** v26, abstract_1 v27) {
return (((C1*) 0))->C1::func0(abstract_0(), abstract_4());

}
/* method id 407 */ void C2::func2 (abstract_1 v28, abstract_0 v29) {
abstract_6 v30 = abstract_6();
return;

}
/* method id 408 */ void C2::func1 (abstract_0 v31) {
abstract_2** v32 = new abstract_2* ();
return;

}
/* method id 409 */ void C2::func2 (abstract_1 v33, abstract_2** v34, abstract_1 v35, abstract_1 v36) {
return;

}
/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 411 */ C3::C3 () {
abstract_3 v41 = abstract_3();
abstract_1 v42 = abstract_1();
abstract_1 v43 = abstract_1();
abstract_0 v44 = abstract_0();
return;

}
/* method id 412 */ C3::~C3 () {
abstract_1 v47 = abstract_1();
abstract_6 v48 = abstract_6();
abstract_1 v49 = abstract_1();
abstract_1 v50 = abstract_1();
::func7(abstract_0());
::func7(abstract_0());
::func7(abstract_0());
::func7(abstract_0());
return;

}
/* method id 413 */ void C3::func1 (abstract_1 v67, abstract_3 v68) {
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()), C1(special_constructor ()) {}

void func4 (abstract_1 v84, abstract_0 v85, abstract_1 v86, abstract_1 v87) {
abstract_5 v88;
abstract_6 v89;
abstract_1 v90;
abstract_2** v91;

delete (new C1 ());
return ::func6(v87, v87, v91, v87);

}
void func5 (abstract_6 v92, abstract_1 v93, abstract_2** v94, abstract_1 v95) {
abstract_3 v96;
abstract_1 v97;
abstract_1 v98;
abstract_0 v99;

return;

}
void func6 (abstract_1 v100, abstract_1 v101, abstract_2** v102, abstract_1 v103) {
abstract_1 v104;
abstract_3 v105;
abstract_1 v106;
abstract_0 v107;

return;

}
void func7 (abstract_0 v108) {
abstract_1 v109;
abstract_1 v110;
abstract_0 v111;
abstract_1 v112;

return ::func5(abstract_6(), v109, new abstract_2* (), v109);

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | {vfptr}
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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var21: AbstractType{5}
12   | var22: AbstractType{5}
16   | var23: AbstractType{0}
20   | var24: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
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
class C2    size(20)
0    +---
0    | {vfptr}
4    | var37: AbstractType{1}
8    | var38: AbstractType{1}
12   | var39: AbstractType{1}
16   | var40: AbstractType{1}
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
}
/*
class C3    size(68)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var81: AbstractType{1}
12   | var82: AbstractType{1}
16   | var83: AbstractType{0}
20   +---
20   +--- (virtual base class C2)
20   | {vfptr}
24   | var37: AbstractType{1}
28   | var38: AbstractType{1}
32   | var39: AbstractType{1}
36   | var40: AbstractType{1}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   +---
44   +--- (virtual base class C1)
44   | {vfptr}
48   | {vbptr}
52   | var21: AbstractType{5}
56   | var22: AbstractType{5}
60   | var23: AbstractType{0}
64   | var24: AbstractType{1}
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 44;
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

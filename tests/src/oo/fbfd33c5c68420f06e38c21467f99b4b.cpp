// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v7, abstract_1 v8);
/* method id 403 */ virtual abstract_2 func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_2 func0 (abstract_1 v14, abstract_1 v15, abstract_1 v16, abstract_3 v17);
/* method id 406 */ virtual abstract_2 func1 ();
/* method id 407 */ virtual abstract_2 func2 (abstract_1 v22, abstract_1 v23, abstract_3 v24, abstract_1 v25);
/* method id 408 */ virtual abstract_2 func0 (abstract_3 v30, abstract_1 v31, abstract_3 v32);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_0 v33;
abstract_4 v34;
};
struct C2 : public virtual C1 {
/* method id 410 */ virtual abstract_2 func4 (abstract_4 v35, abstract_0 v36);
/* method id 411 */ virtual ~C2 ();
/* method id 412 */ C2 ();
/* method id 413 */ virtual abstract_2 func5 ();
C2 (special_constructor);
abstract_1 v58;
abstract_0 v59;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 414 */ C3 ();
/* method id 415 */ abstract_2 func5 ();
/* method id 416 */ virtual abstract_2 func5 (abstract_1 v81, abstract_4 v82);
C3 (special_constructor);
abstract_1 v95;
abstract_1 v96;
abstract_4 v97;
};
abstract_2 func7 (abstract_1 v98, abstract_4 v99);
abstract_2 func8 (abstract_1 v102, abstract_4 v103);
abstract_2 func9 (abstract_3 v106, abstract_1 v107, abstract_1 v108, abstract_4 v109);
abstract_2 func10 (abstract_1 v110, abstract_4 v111, abstract_1 v112, abstract_4 v113);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return ::func8(abstract_1(), abstract_4());

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return abstract_2();

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
return abstract_2();

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
return abstract_2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func0 (abstract_1 v14, abstract_1 v15, abstract_1 v16, abstract_3 v17) {
return ::func8(v14, v34);

}
/* method id 406 */ abstract_2 C1::func1 () {
abstract_3 v18 = abstract_3();
abstract_1 v19 = abstract_1();
abstract_1 v20 = abstract_1();
abstract_1 v21 = abstract_1();
delete (new C2 ());
return abstract_2();

}
/* method id 407 */ abstract_2 C1::func2 (abstract_1 v22, abstract_1 v23, abstract_3 v24, abstract_1 v25) {
abstract_3 v26 = abstract_3();
abstract_1 v27 = abstract_1();
abstract_1 v28 = abstract_1();
abstract_1 v29 = abstract_1();
v33 = abstract_0();
return abstract_2();

}
/* method id 408 */ abstract_2 C1::func0 (abstract_3 v30, abstract_1 v31, abstract_3 v32) {
return ::func7(v31, v34);

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ abstract_2 C2::func4 (abstract_4 v35, abstract_0 v36) {
abstract_4 v37 = abstract_4();
abstract_1 v38 = abstract_1();
abstract_3 v39 = abstract_3();
abstract_1 v40 = abstract_1();
delete (new C3 ());
return abstract_2();

}
/* method id 411 */ C2::~C2 () {
abstract_1 v41 = abstract_1();
abstract_1 v42 = abstract_1();
abstract_3 v43 = abstract_3();
abstract_1 v44 = abstract_1();
return;

}
/* method id 412 */ C2::C2 () {
abstract_1 v45 = abstract_1();
abstract_1 v46 = abstract_1();
abstract_1 v47 = abstract_1();
abstract_1 v48 = abstract_1();
return;

}
/* method id 413 */ abstract_2 C2::func5 () {
return ::func8(v58, v34);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 414 */ C3::C3 () {
abstract_1 v60 = abstract_1();
abstract_4 v61 = abstract_4();
abstract_1 v62 = abstract_1();
abstract_1 v63 = abstract_1();
v33 = abstract_0();
v33 = abstract_0();
v33 = abstract_0();
v33 = abstract_0();
return;

}
/* method id 415 */ abstract_2 C3::func5 () {
abstract_1 v73 = abstract_1();
abstract_1 v74 = abstract_1();
abstract_0 v75 = abstract_0();
abstract_1 v76 = abstract_1();
delete (new C1 ());
return ::func10(v58, v97, v58, v97);

}
/* method id 416 */ abstract_2 C3::func5 (abstract_1 v81, abstract_4 v82) {
abstract_1 v83 = abstract_1();
abstract_1 v84 = abstract_1();
abstract_1 v85 = abstract_1();
abstract_1 v86 = abstract_1();
v33 = v33;
v33 = v33;
v33 = v33;
v33 = v33;
return abstract_2();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_2 func7 (abstract_1 v98, abstract_4 v99) {
abstract_1 v100;
abstract_4 v101;

return ::func8(abstract_1(), v101);

}
abstract_2 func8 (abstract_1 v102, abstract_4 v103) {
abstract_1 v104;
abstract_4 v105;

return abstract_2();

}
abstract_2 func9 (abstract_3 v106, abstract_1 v107, abstract_1 v108, abstract_4 v109) {

return ::func7(abstract_1(), v109);

}
abstract_2 func10 (abstract_1 v110, abstract_4 v111, abstract_1 v112, abstract_4 v113) {
abstract_1 v114;
abstract_1 v115;
abstract_4 v116;
abstract_1 v117;

delete (new C2 ());
return ::func8(v110, v113);

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var33: AbstractType{0}
12   | var34: AbstractType{4}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
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
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var58: AbstractType{1}
12   | var59: AbstractType{0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var33: AbstractType{0}
32   | var34: AbstractType{4}
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
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(60)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var95: AbstractType{1}
12   | var96: AbstractType{1}
16   | var97: AbstractType{4}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var33: AbstractType{0}
36   | var34: AbstractType{4}
40   +---
40   | {vtordisp for vbase 2}
44   +--- (virtual base class C2)
44   | {vfptr}
48   | {vbptr}
52   | var58: AbstractType{1}
56   | var59: AbstractType{0}
60   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 60;
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

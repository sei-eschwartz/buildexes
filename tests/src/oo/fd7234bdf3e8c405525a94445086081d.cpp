// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
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
abstract_1 v17;
abstract_1 v18;
abstract_4 v19;
abstract_4 v20;
};
struct C1 : public C0 {
/* method id 405 */ C1 ();
/* method id 406 */ virtual abstract_2 func1 ();
/* method id 407 */ virtual abstract_2 func0 (abstract_1 v34, abstract_3 v35, abstract_1 v36, abstract_5 v37);
/* method id 408 */ virtual abstract_2 func4 (abstract_4 v50, abstract_4 v51);
C1 (special_constructor);
abstract_1 v52;
abstract_1 v53;
abstract_7 v54;
abstract_5 v55;
};
struct C2 : public C1 {
/* method id 409 */ virtual abstract_2 func0 (abstract_6 v56, abstract_0 v57);
/* method id 410 */ virtual abstract_2 func1 (abstract_5 v59, abstract_3 v60);
/* method id 411 */ C2 ();
C2 (special_constructor);
abstract_0 v65;
};
struct C3 : public virtual C0 {
/* method id 412 */ virtual ~C3 ();
/* method id 413 */ C3 ();
/* method id 414 */ virtual abstract_2 func5 ();
C3 (special_constructor);
abstract_1 v96;
abstract_1 v97;
};
abstract_2 func6 (abstract_3 v98, abstract_1 v99, abstract_1 v100, abstract_1 v101);
abstract_2 func7 (abstract_1 v106, abstract_1 v107, abstract_3 v108, abstract_1 v109);
abstract_2 func8 (abstract_1 v112, abstract_1 v113);
abstract_2 func9 (abstract_2* v116, abstract_1 v117, abstract_7 v118, abstract_6 v119);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return ::func7(v2, v2, abstract_3(), v2);

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
return ::func7(v8, v8, v11, v8);

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_1 v13 = abstract_1();
abstract_3 v14 = abstract_3();
abstract_3 v15 = abstract_3();
abstract_1 v16 = abstract_1();
return ::func7(v16, v16, v15, v16);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {
abstract_3 v21 = abstract_3();
abstract_3 v22 = abstract_3();
return;

}
/* method id 406 */ abstract_2 C1::func1 () {
abstract_3 v26 = abstract_3();
abstract_0 v27 = abstract_0();
abstract_1 v28 = abstract_1();
abstract_1 v29 = abstract_1();
return ::func7(v17, v17, v26, v17);

}
/* method id 407 */ abstract_2 C1::func0 (abstract_1 v34, abstract_3 v35, abstract_1 v36, abstract_5 v37) {
abstract_3 v38 = abstract_3();
abstract_1 v39 = abstract_1();
abstract_0 v40 = abstract_0();
abstract_6 v41 = abstract_6();
return ::func7(v53, v53, v38, v53);

}
/* method id 408 */ abstract_2 C1::func4 (abstract_4 v50, abstract_4 v51) {
return ::func7(v17, v17, abstract_3(), v17);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ abstract_2 C2::func0 (abstract_6 v56, abstract_0 v57) {
abstract_0 v58 = abstract_0();
return ::func7(v53, v53, abstract_3(), v53);

}
/* method id 410 */ abstract_2 C2::func1 (abstract_5 v59, abstract_3 v60) {
abstract_0 v61 = abstract_0();
abstract_7 v62 = abstract_7();
abstract_8 v63 = abstract_8();
abstract_4 v64 = abstract_4();
return ::func7(v17, v17, v60, v17);

}
/* method id 411 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::~C3 () {
abstract_1 v66 = abstract_1();
C1 v67 = *(((C1*) 0));
abstract_1 v68 = abstract_1();
C2 v69 = *(((C2*) 0));
return;

}
/* method id 413 */ C3::C3 () {
abstract_6 v70 = abstract_6();
C1 v71 = *(&(*((new C1 ()))));
abstract_1 v72 = abstract_1();
abstract_6 v73 = abstract_6();
return;

}
/* method id 414 */ abstract_2 C3::func5 () {
abstract_1 v74 = abstract_1();
abstract_1 v75 = abstract_1();
abstract_3 v76 = abstract_3();
abstract_1 v77 = abstract_1();
return abstract_2();

}
C3::C3 (special_constructor) : C0(special_constructor ()) {}

abstract_2 func6 (abstract_3 v98, abstract_1 v99, abstract_1 v100, abstract_1 v101) {
abstract_1 v102;
abstract_1 v103;
abstract_1 v104;
abstract_1 v105;

return ::func8(abstract_1(), abstract_1());

}
abstract_2 func7 (abstract_1 v106, abstract_1 v107, abstract_3 v108, abstract_1 v109) {
abstract_1 v110;
abstract_1 v111;

return ::func8(v107, v107);

}
abstract_2 func8 (abstract_1 v112, abstract_1 v113) {
abstract_1 v114;
abstract_1 v115;

return abstract_2();

}
abstract_2 func9 (abstract_2* v116, abstract_1 v117, abstract_7 v118, abstract_6 v119) {

return ((new C1 ()))->C1::func4(abstract_4(), abstract_4());

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var17: AbstractType{1}
8    | var18: AbstractType{1}
12   | var19: AbstractType{4}
16   | var20: AbstractType{4}
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
class C1    size(36)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var17: AbstractType{1}
8    | | var18: AbstractType{1}
12   | | var19: AbstractType{4}
16   | | var20: AbstractType{4}
20   | +---
20   | var52: AbstractType{1}
24   | var53: AbstractType{1}
28   | var54: AbstractType{7}
32   | var55: AbstractType{5}
36   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 36;
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
class C2    size(40)
0    +---
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | | var17: AbstractType{1}
8    | | | var18: AbstractType{1}
12   | | | var19: AbstractType{4}
16   | | | var20: AbstractType{4}
20   | | +---
20   | | var52: AbstractType{1}
24   | | var53: AbstractType{1}
28   | | var54: AbstractType{7}
32   | | var55: AbstractType{5}
36   | +---
36   | var65: AbstractType{0}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var96: AbstractType{1}
12   | var97: AbstractType{1}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var17: AbstractType{1}
24   | var18: AbstractType{1}
28   | var19: AbstractType{4}
32   | var20: AbstractType{4}
36   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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

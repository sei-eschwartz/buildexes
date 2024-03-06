// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
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
/* method id 405 */ virtual abstract_2 func0 (abstract_1 v14, abstract_1 v15);
/* method id 406 */ virtual abstract_4 func0 (abstract_3 v20);
/* method id 407 */ virtual abstract_2 func0 (abstract_5 v25);
/* method id 408 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 409 */ C2 ();
/* method id 410 */ virtual ~C2 ();
C2 (special_constructor);
};
struct C3 : public C0, public virtual C2 {
/* method id 411 */ virtual abstract_4 func0 (abstract_2* v57, abstract_0 v58);
/* method id 412 */ C3 ();
/* method id 413 */ virtual abstract_4 func2 (abstract_6 v67, abstract_1 v68, abstract_3 v69, abstract_1 v70);
/* method id 414 */ virtual ~C3 ();
C3 (special_constructor);
abstract_2* v101;
abstract_1 v102;
abstract_6 v103;
abstract_1 v104;
};
abstract_4 func3 (abstract_0 v105);
abstract_4 func4 (abstract_1 v110, abstract_7 v111, abstract_1 v112, abstract_1 v113);
abstract_4 func5 (abstract_1 v118, abstract_6 v119, abstract_1 v120, abstract_1 v121);
abstract_4 func6 (abstract_1 v126, abstract_7 v127, abstract_1 v128, abstract_1 v129);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
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
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
return abstract_2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func0 (abstract_1 v14, abstract_1 v15) {
abstract_1 v16 = abstract_1();
abstract_1 v17 = abstract_1();
abstract_5 v18 = abstract_5();
abstract_5 v19 = abstract_5();
return abstract_2();

}
/* method id 406 */ abstract_4 C1::func0 (abstract_3 v20) {
abstract_5 v21 = abstract_5();
abstract_3 v22 = abstract_3();
abstract_5 v23 = abstract_5();
abstract_0 v24 = abstract_0();
return ::func6(abstract_1(), abstract_7(), abstract_1(), abstract_1());

}
/* method id 407 */ abstract_2 C1::func0 (abstract_5 v25) {
abstract_5 v26 = abstract_5();
abstract_2* v27 = new abstract_2 ();
abstract_1 v28 = abstract_1();
abstract_1 v29 = abstract_1();
return abstract_2();

}
/* method id 408 */ C1::C1 () {
abstract_0 v30 = abstract_0();
abstract_6 v31 = abstract_6();
abstract_3 v32 = abstract_3();
abstract_1 v33 = abstract_1();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::C2 () {
abstract_5 v34 = abstract_5();
abstract_1 v35 = abstract_1();
abstract_1 v36 = abstract_1();
return;

}
/* method id 410 */ C2::~C2 () {
abstract_1 v37 = abstract_1();
abstract_1 v38 = abstract_1();
abstract_1 v39 = abstract_1();
abstract_1 v40 = abstract_1();
delete (new C1 ());
return;

}
C2::C2 (special_constructor)  {}

/* method id 411 */ abstract_4 C3::func0 (abstract_2* v57, abstract_0 v58) {
abstract_2* v59 = ((abstract_2*) 0);
abstract_1 v60 = abstract_1();
abstract_3 v61 = abstract_3();
abstract_1 v62 = abstract_1();
return abstract_4();

}
/* method id 412 */ C3::C3 () {
abstract_7 v63 = abstract_7();
abstract_1 v64 = abstract_1();
abstract_1 v65 = abstract_1();
abstract_0 v66 = abstract_0();
return;

}
/* method id 413 */ abstract_4 C3::func2 (abstract_6 v67, abstract_1 v68, abstract_3 v69, abstract_1 v70) {
abstract_1 v71 = abstract_1();
abstract_6 v72 = abstract_6();
abstract_1 v73 = abstract_1();
abstract_1 v74 = abstract_1();
return ::func4(abstract_1(), abstract_7(), abstract_1(), abstract_1());

}
/* method id 414 */ C3::~C3 () {
abstract_1 v99 = abstract_1();
abstract_0 v100 = abstract_0();
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

abstract_4 func3 (abstract_0 v105) {
abstract_1 v106;
abstract_5 v107;
abstract_1 v108;
abstract_7 v109;

delete (new C1 ());
return (((C1*) 0))->C1::func0(abstract_3());

}
abstract_4 func4 (abstract_1 v110, abstract_7 v111, abstract_1 v112, abstract_1 v113) {
abstract_6 v114;
abstract_1 v115;
abstract_1 v116;
abstract_1 v117;

return abstract_4();

}
abstract_4 func5 (abstract_1 v118, abstract_6 v119, abstract_1 v120, abstract_1 v121) {
abstract_1 v122;
abstract_1 v123;
abstract_3 v124;
abstract_1 v125;

return (((C1*) 0))->C1::func0(abstract_3());

}
abstract_4 func6 (abstract_1 v126, abstract_7 v127, abstract_1 v128, abstract_1 v129) {
abstract_0 v130;
abstract_1 v131;
abstract_3 v132;
abstract_1 v133;

return abstract_4();

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
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
class C2    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(28)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | {vbptr}
8    | var101: PtrType{AbstractType{2}}
12   | var102: AbstractType{1}
16   | var103: AbstractType{6}
20   | var104: AbstractType{1}
24   +---
24   +--- (virtual base class C2)
24   | {vfptr}
28   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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

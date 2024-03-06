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
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct abstract_11 { int x; };
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
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_2* v20;
abstract_0 v21;
abstract_0 v22;
};
struct C2 : public virtual C1 {
/* method id 407 */ virtual abstract_2 func3 (abstract_0 v23);
/* method id 408 */ abstract_2 func0 (abstract_0 v24);
/* method id 409 */ C2 ();
/* method id 410 */ abstract_2 func1 ();
C2 (special_constructor);
abstract_0 v30;
abstract_1 v31;
C1 v32;
abstract_6 v33;
};
struct C3 : public C2 {
/* method id 411 */ C3 ();
/* method id 412 */ abstract_4 func2 (C1 v36, C1 v37, abstract_6 v38, abstract_3 v39);
/* method id 413 */ virtual ~C3 ();
C3 (special_constructor);
abstract_0 v42;
};
abstract_2 func6 (abstract_10 v43, abstract_1 v44, abstract_3 v45, C1 v46);
abstract_4 func7 ();
abstract_2 func8 (C1 v53);
abstract_4 func9 (abstract_1 v58, abstract_1 v59, abstract_1 v60, abstract_3 v61);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return ::func8(*((new C1 ())));

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return ::func8(*((new C1 ())));

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
return ::func8(*(((C1*) 0)));

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
return ::func8(*((new C1 ())));

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func0 (abstract_1 v14, abstract_1 v15) {
abstract_1 v16 = abstract_1();
abstract_1 v17 = abstract_1();
abstract_5 v18 = abstract_5();
abstract_5 v19 = abstract_5();
delete (new C1 ());
return abstract_2();

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ abstract_2 C2::func3 (abstract_0 v23) {
return ::func6(abstract_10(), abstract_1(), abstract_3(), v32);

}
/* method id 408 */ abstract_2 C2::func0 (abstract_0 v24) {
abstract_6 v25 = abstract_6();
return ::func6(abstract_10(), v31, abstract_3(), v32);

}
/* method id 409 */ C2::C2 () {
abstract_7 v26 = abstract_7();
return;

}
/* method id 410 */ abstract_2 C2::func1 () {
C1 v28 = *(&(*((new C1 ()))));
abstract_8 v29 = abstract_8();
return abstract_2();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 411 */ C3::C3 () {
abstract_7 v34 = abstract_7();
return;

}
/* method id 412 */ abstract_4 C3::func2 (C1 v36, C1 v37, abstract_6 v38, abstract_3 v39) {
v22 = v22;
v22 = v22;
return ::func9(v31, v31, v31, abstract_3());

}
/* method id 413 */ C3::~C3 () {
C1 v40 = *(((C1*) 0));
abstract_9 v41 = abstract_9();
delete (new C3 ());
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_2 func6 (abstract_10 v43, abstract_1 v44, abstract_3 v45, C1 v46) {
abstract_11 v47;
abstract_1 v48;
abstract_0 v49;

return (((C1*) 0))->C1::func0(abstract_1(), abstract_1());

}
abstract_4 func7 () {
abstract_0 v50;
abstract_1 v51;
abstract_2* v52;

return abstract_4();

}
abstract_2 func8 (C1 v53) {
abstract_3 v54;
abstract_7 v55;
C1 v56;
abstract_6 v57;

return ((new C1 ()))->C1::func0(abstract_1(), abstract_1());

}
abstract_4 func9 (abstract_1 v58, abstract_1 v59, abstract_1 v60, abstract_3 v61) {
abstract_1 v62;
abstract_1 v63;
C1 v64;
abstract_1 v65;

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
class C1    size(24)
0    +---
0    | {vbptr}
4    | var20: PtrType{AbstractType{2}}
8    | var21: AbstractType{0}
12   | var22: AbstractType{0}
16   | {vtordisp for vbase 0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
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
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(68)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var30: AbstractType{0}
12   | var31: AbstractType{1}
16   | var32: ClassType{1}
40   | var33: AbstractType{6}
44   | {vtordisp for vbase 0}
48   +---
48   +--- (virtual base class C0)
48   | {vfptr}
52   +---
52   +--- (virtual base class C1)
52   | {vbptr}
56   | var20: PtrType{AbstractType{2}}
60   | var21: AbstractType{0}
64   | var22: AbstractType{0}
68   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 68;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 52;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(72)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | | var30: AbstractType{0}
12   | | var31: AbstractType{1}
16   | | var32: ClassType{1}
40   | | var33: AbstractType{6}
44   | +---
44   | var42: AbstractType{0}
48   | {vtordisp for vbase 0}
52   +---
52   +--- (virtual base class C0)
52   | {vfptr}
56   +---
56   +--- (virtual base class C1)
56   | {vbptr}
60   | var20: PtrType{AbstractType{2}}
64   | var21: AbstractType{0}
68   | var22: AbstractType{0}
72   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 72;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

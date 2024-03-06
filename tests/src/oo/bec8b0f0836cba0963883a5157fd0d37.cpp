// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
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
abstract_3 v14;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual ~C1 ();
/* method id 405 */ abstract_2 func1 (abstract_3 v16, abstract_1 v17);
/* method id 406 */ C1 ();
/* method id 407 */ virtual abstract_2 func1 ();
C1 (special_constructor);
abstract_0 v20;
};
struct C2  {
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_1 v25;
abstract_1 v26;
abstract_1 v27;
abstract_1 v28;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ abstract_2 func1 (abstract_3 v33, abstract_1 v34);
/* method id 411 */ virtual abstract_2 func1 ();
/* method id 412 */ virtual abstract_2 func0 (abstract_1 v42, abstract_4 v43, abstract_1 v44, abstract_4 v45);
C3 (special_constructor);
abstract_1 v49;
};
abstract_2 func4 (abstract_1 v50, abstract_5 v51, abstract_1 v52, abstract_3 v53);
abstract_2 func5 (abstract_1 v58, abstract_1 v59, abstract_1 v60, abstract_1 v61);
abstract_2 func6 (abstract_1 v66, abstract_1 v67, abstract_3 v68, abstract_1 v69);
abstract_2 func7 (abstract_1 v74, abstract_5 v75, abstract_2* v76, abstract_5 v77);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
delete (new C2 ());
return ::func5(v5, v5, v5, v5);

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
delete (new C1 ());
return (&(*((new C1 ()))))->C1::func1();

}
/* method id 403 */ C0::C0 () {
abstract_3 v13 = abstract_3();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::~C1 () {
abstract_0 v15 = abstract_0();
delete (new C1 ());
return;

}
/* method id 405 */ abstract_2 C1::func1 (abstract_3 v16, abstract_1 v17) {
abstract_1 v18 = abstract_1();
abstract_0 v19 = abstract_0();
return ::func7(abstract_1(), abstract_5(), new abstract_2 (), abstract_5());

}
/* method id 406 */ C1::C1 () {
return;

}
/* method id 407 */ abstract_2 C1::func1 () {
return abstract_2();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {
abstract_1 v21 = abstract_1();
abstract_3 v22 = abstract_3();
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
delete (new C2 ());
return;

}
C2::C2 (special_constructor)  {}

/* method id 409 */ C3::C3 () {
abstract_1 v29 = abstract_1();
abstract_1 v30 = abstract_1();
abstract_1 v31 = abstract_1();
abstract_1 v32 = abstract_1();
(((C1*) 0))->C1::func1(v14, abstract_1());
(((C1*) 0))->C1::func1(v14, abstract_1());
(((C1*) 0))->C1::func1(v14, abstract_1());
return;

}
/* method id 410 */ abstract_2 C3::func1 (abstract_3 v33, abstract_1 v34) {
abstract_3 v35 = abstract_3();
abstract_3 v36 = abstract_3();
abstract_3 v37 = abstract_3();
delete (new C1 ());
return ::func7(abstract_1(), abstract_5(), new abstract_2 (), abstract_5());

}
/* method id 411 */ abstract_2 C3::func1 () {
abstract_0 v38 = abstract_0();
abstract_2* v39 = new abstract_2 ();
abstract_2* v40 = new abstract_2 ();
abstract_1 v41 = abstract_1();
return abstract_2();

}
/* method id 412 */ abstract_2 C3::func0 (abstract_1 v42, abstract_4 v43, abstract_1 v44, abstract_4 v45) {
abstract_5 v46 = abstract_5();
abstract_1 v47 = abstract_1();
abstract_1 v48 = abstract_1();
return abstract_2();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_2 func4 (abstract_1 v50, abstract_5 v51, abstract_1 v52, abstract_3 v53) {
abstract_2* v54;
abstract_5 v55;
abstract_5 v56;
abstract_1 v57;

return (((C3*) 0))->C3::func1(v53, v52);

}
abstract_2 func5 (abstract_1 v58, abstract_1 v59, abstract_1 v60, abstract_1 v61) {
abstract_3 v62;
abstract_1 v63;
abstract_1 v64;
abstract_1 v65;

delete (new C0 ());
return ::func4(abstract_1(), abstract_5(), abstract_1(), v62);

}
abstract_2 func6 (abstract_1 v66, abstract_1 v67, abstract_3 v68, abstract_1 v69) {
abstract_1 v70;
abstract_1 v71;
abstract_1 v72;
abstract_2* v73;

v68 = v68;
delete (new C2 ());
return abstract_2();

}
abstract_2 func7 (abstract_1 v74, abstract_5 v75, abstract_2* v76, abstract_5 v77) {
abstract_2* v78;
abstract_2* v79;
abstract_1 v80;
abstract_5 v81;

return abstract_2();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var14: AbstractType{3}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
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
8    | var20: AbstractType{0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var14: AbstractType{3}
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
class C2    size(16)
0    +---
0    | var25: AbstractType{1}
4    | var26: AbstractType{1}
8    | var27: AbstractType{1}
12   | var28: AbstractType{1}
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(52)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var49: AbstractType{1}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var14: AbstractType{3}
20   +---
20   | {vtordisp for vbase 1}
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var20: AbstractType{0}
36   +---
36   +--- (virtual base class C2)
36   | var25: AbstractType{1}
40   | var26: AbstractType{1}
44   | var27: AbstractType{1}
48   | var28: AbstractType{1}
52   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 52;
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
 const size_t model_offset = 36;
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

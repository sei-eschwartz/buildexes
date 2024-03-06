// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
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
/* method id 407 */ virtual abstract_1* func0 ();
C1 (special_constructor);
abstract_0 v49;
abstract_0 v50;
abstract_2 v51;
abstract_2 v52;
};
struct C2 : public virtual C1 {
/* method id 408 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C0, public virtual C1, public virtual C2 {
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ abstract_1* func0 ();
/* method id 412 */ C3 ();
/* method id 413 */ abstract_1* func4 ();
C3 (special_constructor);
abstract_3 v55;
abstract_0 v56;
abstract_2 v57;
abstract_0 v58;
};
abstract_1* func5 (abstract_2 v59, abstract_2 v60, abstract_2 v61, abstract_3 v62);
abstract_1* func6 (abstract_2 v65, abstract_2 v66, abstract_2 v67, abstract_2 v68);
abstract_4 func7 ();
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return abstract_1();

}
/* method id 402 */ abstract_1* C0::func1 (abstract_0 v4, abstract_0 v5, abstract_0 v6) {
abstract_0 v7 = abstract_0();
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
v8 = v5;
v8 = v5;
return ::func6(abstract_2(), abstract_2(), abstract_2(), abstract_2());

}
/* method id 403 */ C0::C0 () {
abstract_0 v15 = abstract_0();
abstract_0 v16 = abstract_0();
abstract_0 v17 = abstract_0();
abstract_0 v18 = abstract_0();
v17 = abstract_0();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_1 C1::func0 (abstract_0 v23, abstract_0 v24, abstract_0 v25, abstract_0 v26) {
abstract_0 v27 = abstract_0();
abstract_0 v28 = abstract_0();
abstract_0 v29 = abstract_0();
delete (new C2 ());
return abstract_1();

}
/* method id 405 */ C1::C1 () {
abstract_0 v30 = abstract_0();
abstract_0 v31 = abstract_0();
abstract_0 v32 = abstract_0();
abstract_0 v33 = abstract_0();
return;

}
/* method id 406 */ C1::~C1 () {
abstract_0 v38 = abstract_0();
abstract_0 v39 = abstract_0();
abstract_0 v40 = abstract_0();
abstract_0 v41 = abstract_0();
return;

}
/* method id 407 */ abstract_1* C1::func0 () {
v19 = v20;
v19 = v20;
return new abstract_1 ();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::~C3 () {
return;

}
/* method id 411 */ abstract_1* C3::func0 () {
abstract_3 v53 = abstract_3();
return new abstract_1 ();

}
/* method id 412 */ C3::C3 () {
return;

}
/* method id 413 */ abstract_1* C3::func4 () {
abstract_2 v54 = abstract_2();
return new abstract_1 ();

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

abstract_1* func5 (abstract_2 v59, abstract_2 v60, abstract_2 v61, abstract_3 v62) {
abstract_2 v63;
abstract_2 v64;

v59 = abstract_2();
v59 = abstract_2();
return (((C1*) 0))->C1::func0();

}
abstract_1* func6 (abstract_2 v65, abstract_2 v66, abstract_2 v67, abstract_2 v68) {
abstract_2 v69;
abstract_2 v70;
abstract_2 v71;
abstract_2 v72;

return ((abstract_1*) 0);

}
abstract_4 func7 () {
abstract_5 v73;

return abstract_4();

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
class C1    size(48)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var49: AbstractType{0}
12   | var50: AbstractType{0}
16   | var51: AbstractType{2}
20   | var52: AbstractType{2}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   | var19: AbstractType{0}
36   | var20: AbstractType{0}
40   | var21: AbstractType{0}
44   | var22: AbstractType{0}
48   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(52)
0    +---
0    | {vbptr}
4    | {vtordisp for vbase 0}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var19: AbstractType{0}
16   | var20: AbstractType{0}
20   | var21: AbstractType{0}
24   | var22: AbstractType{0}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var49: AbstractType{0}
40   | var50: AbstractType{0}
44   | var51: AbstractType{2}
48   | var52: AbstractType{2}
52   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(76)
0    +---
0    | {vbptr}
4    | var55: AbstractType{3}
8    | var56: AbstractType{0}
12   | var57: AbstractType{2}
16   | var58: AbstractType{0}
20   | {vtordisp for vbase 0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var19: AbstractType{0}
32   | var20: AbstractType{0}
36   | var21: AbstractType{0}
40   | var22: AbstractType{0}
44   +---
44   | {vtordisp for vbase 1}
48   +--- (virtual base class C1)
48   | {vfptr}
52   | {vbptr}
56   | var49: AbstractType{0}
60   | var50: AbstractType{0}
64   | var51: AbstractType{2}
68   | var52: AbstractType{2}
72   +---
72   +--- (virtual base class C2)
72   | {vbptr}
76   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 76;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
 const size_t model_offset = 48;
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
 const size_t model_offset = 72;
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

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2);
/* method id 401 */ virtual abstract_0 func0 (abstract_0* v7, abstract_0* v8, abstract_1 v9);
/* method id 402 */ C0 ();
/* method id 403 */ virtual abstract_0* func0 ();
C0 (special_constructor);
abstract_3 v15;
};
struct C1 : public C0 {
/* method id 404 */ void func1 (abstract_1 v16, abstract_0* v17);
/* method id 405 */ virtual abstract_0* func1 (abstract_0* v19);
/* method id 406 */ void func0 (abstract_1 v22);
/* method id 407 */ C1 ();
C1 (special_constructor);
abstract_4 v26;
abstract_4 v27;
};
struct C2  {
/* method id 408 */ virtual void func1 (abstract_1 v28, abstract_1 v29);
/* method id 409 */ C2 ();
/* method id 410 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1 v53;
abstract_1 v54;
abstract_1 v55;
abstract_1 v56;
};
struct C3 : public virtual C2, public virtual C1 {
/* method id 411 */ C3 ();
/* method id 412 */ virtual void func1 (abstract_1 v72, abstract_1 v73);
/* method id 413 */ virtual ~C3 ();
/* method id 414 */ abstract_0* func1 (abstract_4 v92, abstract_0* v93, abstract_3 v94);
C3 (special_constructor);
abstract_5 v95;
abstract_4 v96;
abstract_1 v97;
abstract_1 v98;
};
abstract_0 func2 (abstract_1 v99, abstract_1 v100, abstract_2 v101, abstract_1 v102);
abstract_0* func3 ();
abstract_0* func4 (abstract_4 v108);
abstract_0 func5 ();
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2) {
delete (new C1 ());
return ::func2(abstract_1(), abstract_1(), abstract_2(), abstract_1());

}
/* method id 401 */ abstract_0 C0::func0 (abstract_0* v7, abstract_0* v8, abstract_1 v9) {
abstract_0* v10 = ((abstract_0*) 0);
v9 = abstract_1();
v9 = abstract_1();
v9 = abstract_1();
v9 = abstract_1();
return abstract_0();

}
/* method id 402 */ C0::C0 () {
abstract_2 v11 = abstract_2();
abstract_1 v12 = abstract_1();
abstract_1 v13 = abstract_1();
abstract_3 v14 = abstract_3();
return;

}
/* method id 403 */ abstract_0* C0::func0 () {
delete (new C1 ());
return new abstract_0 ();

}
C0::C0 (special_constructor)  {}

/* method id 404 */ void C1::func1 (abstract_1 v16, abstract_0* v17) {
abstract_4 v18 = abstract_4();
return;

}
/* method id 405 */ abstract_0* C1::func1 (abstract_0* v19) {
abstract_0* v20 = new abstract_0 ();
abstract_0* v21 = new abstract_0 ();
return v20;

}
/* method id 406 */ void C1::func0 (abstract_1 v22) {
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
delete (new C3 ());
return;

}
/* method id 407 */ C1::C1 () {
abstract_1 v25 = abstract_1();
v27 = v26;
v27 = v26;
v27 = v26;
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ void C2::func1 (abstract_1 v28, abstract_1 v29) {
abstract_1 v30 = abstract_1();
abstract_1 v31 = abstract_1();
abstract_1 v32 = abstract_1();
abstract_1 v33 = abstract_1();
return (((C1*) 0))->C1::func0(abstract_1());

}
/* method id 409 */ C2::C2 () {
abstract_1 v34 = abstract_1();
abstract_1 v35 = abstract_1();
abstract_1 v36 = abstract_1();
abstract_1 v37 = abstract_1();
return;

}
/* method id 410 */ C2::~C2 () {
abstract_1 v38 = abstract_1();
abstract_1 v39 = abstract_1();
abstract_1 v40 = abstract_1();
abstract_1 v41 = abstract_1();
return;

}
C2::C2 (special_constructor)  {}

/* method id 411 */ C3::C3 () {
abstract_1 v57 = abstract_1();
abstract_1 v58 = abstract_1();
abstract_2 v59 = abstract_2();
abstract_1 v60 = abstract_1();
return;

}
/* method id 412 */ void C3::func1 (abstract_1 v72, abstract_1 v73) {
abstract_2 v74 = abstract_2();
abstract_1 v75 = abstract_1();
abstract_1 v76 = abstract_1();
abstract_1 v77 = abstract_1();
v27 = abstract_4();
v27 = abstract_4();
delete (new C1 ());
return;

}
/* method id 413 */ C3::~C3 () {
abstract_1 v78 = abstract_1();
abstract_1 v79 = abstract_1();
delete (new C1 ());
return;

}
/* method id 414 */ abstract_0* C3::func1 (abstract_4 v92, abstract_0* v93, abstract_3 v94) {
v55 = abstract_1();
return v93;

}
C3::C3 (special_constructor) : C2(special_constructor ()), C1(special_constructor ()) {}

abstract_0 func2 (abstract_1 v99, abstract_1 v100, abstract_2 v101, abstract_1 v102) {
abstract_4 v103;
abstract_1 v104;

delete (new C1 ());
return ::func5();

}
abstract_0* func3 () {
abstract_1 v105;
abstract_6 v106;
abstract_1 v107;

delete (new C3 ());
return new abstract_0 ();

}
abstract_0* func4 (abstract_4 v108) {
abstract_5 v109;
abstract_7 v110;
abstract_5 v111;
abstract_4 v112;

v112 = v108;
return new abstract_0 ();

}
abstract_0 func5 () {
abstract_1 v113;
abstract_1 v114;
abstract_2 v115;
abstract_1 v116;

v113 = v113;
v113 = v113;
v113 = v113;
return ((new C0 ()))->C0::func0(new abstract_0 (), new abstract_0 (), v114);

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var15: AbstractType{3}
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
class C1    size(16)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var15: AbstractType{3}
8    | +---
8    | var26: AbstractType{4}
12   | var27: AbstractType{4}
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
class C2    size(20)
0    +---
0    | {vfptr}
4    | var53: AbstractType{1}
8    | var54: AbstractType{1}
12   | var55: AbstractType{1}
16   | var56: AbstractType{1}
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
class C3    size(60)
0    +---
0    | {vbptr}
4    | var95: AbstractType{5}
8    | var96: AbstractType{4}
12   | var97: AbstractType{1}
16   | var98: AbstractType{1}
20   | {vtordisp for vbase 2}
24   +---
24   +--- (virtual base class C2)
24   | {vfptr}
28   | var53: AbstractType{1}
32   | var54: AbstractType{1}
36   | var55: AbstractType{1}
40   | var56: AbstractType{1}
44   +---
44   +--- (virtual base class C1)
44   | +--- (base class C0)
44   | | {vfptr}
48   | | var15: AbstractType{3}
52   | +---
52   | var26: AbstractType{4}
56   | var27: AbstractType{4}
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

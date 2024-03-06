// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
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
/* method id 403 */ virtual abstract_2 func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_2 func0 (abstract_1 v14, abstract_1 v15);
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ void func1 ();
/* method id 408 */ virtual abstract_4 func0 (abstract_5 v27, abstract_1 v28, abstract_5 v29);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_2* v32;
abstract_1 v33;
abstract_4*** v34;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 410 */ virtual abstract_4 func0 (abstract_4*** v35, abstract_1 v36);
/* method id 411 */ C2 ();
/* method id 412 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1 v40;
abstract_1 v41;
abstract_4*** v42;
abstract_4*** v43;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 413 */ C3 ();
/* method id 414 */ virtual abstract_4 func2 (abstract_1 v54, abstract_1 v55);
/* method id 415 */ virtual abstract_7 func0 (abstract_1 v80, abstract_6 v81, abstract_2* v82, abstract_0 v83);
/* method id 416 */ virtual abstract_8 func0 (abstract_1 v84, abstract_4*** v85, abstract_6 v86);
C3 (special_constructor);
abstract_0 v87;
};
abstract_4** func4 (abstract_0 v88);
abstract_4* func5 ();
abstract_2 func6 ();
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return ::func6();

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
return ::func6();

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
return ::func6();

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
/* method id 406 */ C1::~C1 () {
abstract_1 v20 = abstract_1();
abstract_1 v21 = abstract_1();
abstract_1 v22 = abstract_1();
return;

}
/* method id 407 */ void C1::func1 () {
abstract_5 v23 = abstract_5();
abstract_0 v24 = abstract_0();
abstract_1 v25 = abstract_1();
abstract_5 v26 = abstract_5();
delete (new C2 ());
return;

}
/* method id 408 */ abstract_4 C1::func0 (abstract_5 v27, abstract_1 v28, abstract_5 v29) {
abstract_1 v30 = abstract_1();
abstract_1 v31 = abstract_1();
::func4(abstract_0());
return (((C3*) 0))->C3::func2(abstract_1(), abstract_1());

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ abstract_4 C2::func0 (abstract_4*** v35, abstract_1 v36) {
abstract_0 v37 = abstract_0();
delete (new C0 ());
return abstract_4();

}
/* method id 411 */ C2::C2 () {
abstract_1 v38 = abstract_1();
return;

}
/* method id 412 */ C2::~C2 () {
abstract_1 v39 = abstract_1();
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 413 */ C3::C3 () {
return;

}
/* method id 414 */ abstract_4 C3::func2 (abstract_1 v54, abstract_1 v55) {
abstract_4*** v56 = new abstract_4** ();
abstract_1 v57 = abstract_1();
abstract_1 v58 = abstract_1();
abstract_1 v59 = abstract_1();
return abstract_4();

}
/* method id 415 */ abstract_7 C3::func0 (abstract_1 v80, abstract_6 v81, abstract_2* v82, abstract_0 v83) {
delete (new C1 ());
return abstract_7();

}
/* method id 416 */ abstract_8 C3::func0 (abstract_1 v84, abstract_4*** v85, abstract_6 v86) {
return abstract_8();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_4** func4 (abstract_0 v88) {

return ((abstract_4**) 0);

}
abstract_4* func5 () {
abstract_2* v89;
abstract_4*** v90;
abstract_1 v91;

return ((abstract_4*) 0);

}
abstract_2 func6 () {

delete (new C1 ());
return (((C0*) 0))->C0::func0();

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
8    | var32: PtrType{AbstractType{2}}
12   | var33: AbstractType{1}
16   | var34: PtrType{PtrType{PtrType{AbstractType{4}}}}
20   | {vtordisp for vbase 0}
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
class C2    size(52)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var40: AbstractType{1}
12   | var41: AbstractType{1}
16   | var42: PtrType{PtrType{PtrType{AbstractType{4}}}}
20   | var43: PtrType{PtrType{PtrType{AbstractType{4}}}}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   | var32: PtrType{AbstractType{2}}
44   | var33: AbstractType{1}
48   | var34: PtrType{PtrType{PtrType{AbstractType{4}}}}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(64)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var87: AbstractType{0}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var32: PtrType{AbstractType{2}}
32   | var33: AbstractType{1}
36   | var34: PtrType{PtrType{PtrType{AbstractType{4}}}}
40   +---
40   +--- (virtual base class C2)
40   | {vfptr}
44   | {vbptr}
48   | var40: AbstractType{1}
52   | var41: AbstractType{1}
56   | var42: PtrType{PtrType{PtrType{AbstractType{4}}}}
60   | var43: PtrType{PtrType{PtrType{AbstractType{4}}}}
64   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 64;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
 const size_t model_offset = 40;
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

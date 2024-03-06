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
/* method id 402 */ C0 ();
/* method id 403 */ virtual abstract_2 func0 (abstract_3 v8);
C0 (special_constructor);
abstract_1 v9;
abstract_1 v10;
abstract_1 v11;
abstract_1 v12;
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
/* method id 405 */ abstract_2 func0 (abstract_1 v21, abstract_2** v22, abstract_1 v23);
/* method id 406 */ void func1 (abstract_1 v24, abstract_0 v25);
/* method id 407 */ virtual void func1 (abstract_0 v27);
C1 (special_constructor);
abstract_1 v29;
};
struct C2 : public virtual C1 {
/* method id 408 */ C2 ();
/* method id 409 */ virtual void func1 (abstract_1 v34, abstract_1 v35);
/* method id 410 */ virtual void* func0 ();
/* method id 411 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1 v57;
abstract_1 v58;
C0 v59;
abstract_1 v60;
};
struct C3 : public virtual C2 {
/* method id 412 */ C3 ();
/* method id 413 */ virtual ~C3 ();
/* method id 414 */ virtual void func1 ();
/* method id 415 */ abstract_2 func0 (abstract_0 v82, abstract_4 v83, abstract_0 v84);
C3 (special_constructor);
abstract_4 v86;
abstract_1 v87;
C0 v88;
abstract_2** v89;
};
void func3 (abstract_2** v90);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return abstract_2();

}
/* method id 402 */ C0::C0 () {
abstract_0 v7 = abstract_0();
return;

}
/* method id 403 */ abstract_2 C0::func0 (abstract_3 v8) {
v8 = abstract_3();
v8 = abstract_3();
v8 = abstract_3();
v8 = abstract_3();
return abstract_2();

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
abstract_1 v13 = abstract_1();
abstract_1 v14 = abstract_1();
abstract_3 v15 = abstract_3();
abstract_3 v16 = abstract_3();
return;

}
/* method id 405 */ abstract_2 C1::func0 (abstract_1 v21, abstract_2** v22, abstract_1 v23) {
return abstract_2();

}
/* method id 406 */ void C1::func1 (abstract_1 v24, abstract_0 v25) {
abstract_4 v26 = abstract_4();
return;

}
/* method id 407 */ void C1::func1 (abstract_0 v27) {
abstract_4 v28 = abstract_4();
delete (new C3 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {
abstract_1 v30 = abstract_1();
abstract_3 v31 = abstract_3();
abstract_1 v32 = abstract_1();
abstract_1 v33 = abstract_1();
return;

}
/* method id 409 */ void C2::func1 (abstract_1 v34, abstract_1 v35) {
abstract_4 v36 = abstract_4();
abstract_1 v37 = abstract_1();
abstract_1 v38 = abstract_1();
abstract_1 v39 = abstract_1();
return ::func3(new abstract_2* ());

}
/* method id 410 */ void* C2::func0 () {
return ((void*) 0);

}
/* method id 411 */ C2::~C2 () {
abstract_3 v56 = abstract_3();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {
abstract_1 v61 = abstract_1();
return;

}
/* method id 413 */ C3::~C3 () {
abstract_4 v76 = abstract_4();
abstract_1 v77 = abstract_1();
abstract_1 v78 = abstract_1();
abstract_1 v79 = abstract_1();
delete (new C1 ());
return;

}
/* method id 414 */ void C3::func1 () {
abstract_0 v80 = abstract_0();
abstract_0 v81 = abstract_0();
return ::func3(v89);

}
/* method id 415 */ abstract_2 C3::func0 (abstract_0 v82, abstract_4 v83, abstract_0 v84) {
abstract_0 v85 = abstract_0();
return abstract_2();

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func3 (abstract_2** v90) {

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var9: AbstractType{1}
8    | var10: AbstractType{1}
12   | var11: AbstractType{1}
16   | var12: AbstractType{1}
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
class C1    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var29: AbstractType{1}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var9: AbstractType{1}
20   | var10: AbstractType{1}
24   | var11: AbstractType{1}
28   | var12: AbstractType{1}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
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
class C2    size(72)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var57: AbstractType{1}
12   | var58: AbstractType{1}
16   | var59: ClassType{0}
36   | var60: AbstractType{1}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   | var9: AbstractType{1}
48   | var10: AbstractType{1}
52   | var11: AbstractType{1}
56   | var12: AbstractType{1}
60   +---
60   +--- (virtual base class C1)
60   | {vfptr}
64   | {vbptr}
68   | var29: AbstractType{1}
72   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 72;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 60;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(112)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var86: AbstractType{4}
12   | var87: AbstractType{1}
16   | var88: ClassType{0}
36   | var89: DeletablePtrType{PtrType{AbstractType{2}}}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   | var9: AbstractType{1}
48   | var10: AbstractType{1}
52   | var11: AbstractType{1}
56   | var12: AbstractType{1}
60   +---
60   +--- (virtual base class C1)
60   | {vfptr}
64   | {vbptr}
68   | var29: AbstractType{1}
72   +---
72   +--- (virtual base class C2)
72   | {vfptr}
76   | {vbptr}
80   | var57: AbstractType{1}
84   | var58: AbstractType{1}
88   | var59: ClassType{0}
108  | var60: AbstractType{1}
112  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 112;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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

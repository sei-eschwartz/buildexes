// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ virtual abstract_0 func0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual abstract_0 func0 ();
/* method id 404 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 406 */ C2 ();
/* method id 407 */ abstract_0 func1 (abstract_1* v16, abstract_2 v17, C1 v18);
C2 (special_constructor);
abstract_1* v21;
C1 v22;
C1 v23;
};
struct C3 : public virtual C2, public C1 {
/* method id 408 */ C3 ();
C3 (special_constructor);
abstract_2 v40;
abstract_1* v41;
C1 v42;
};
abstract_4 func4 ();
abstract_5 func5 ();
abstract_1 func6 ();
abstract_5 func7 (abstract_1* v44);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C1 ());
return;

}
/* method id 401 */ abstract_0 C0::func0 () {
abstract_1* v0 = new abstract_1 ();
abstract_1* v1 = new abstract_1 ();
abstract_1* v2 = new abstract_1 ();
abstract_2 v3 = abstract_2();
v1 = ((abstract_1*) 0);
delete (new C0 ());
v1 = ((abstract_1*) 0);
return abstract_0();

}
/* method id 402 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0 C1::func0 () {
::func5();
::func5();
delete (new C1 ());
return abstract_0();

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
abstract_2 v7 = abstract_2();
abstract_2 v8 = abstract_2();
delete (new C2 ());
v23 = v22;
return;

}
/* method id 407 */ abstract_0 C2::func1 (abstract_1* v16, abstract_2 v17, C1 v18) {
abstract_1* v19 = new abstract_1 ();
abstract_2 v20 = abstract_2();
return abstract_0();

}
C2::C2 (special_constructor)  {}

/* method id 408 */ C3::C3 () {
abstract_2 v24 = abstract_2();
abstract_2 v25 = abstract_2();
C1 v26 = *(&(*(((C1*) 0))));
abstract_2 v27 = abstract_2();
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()), C1(special_constructor ()) {}

abstract_4 func4 () {

return abstract_4();

}
abstract_5 func5 () {
abstract_1* v43;

delete (new C1 ());
return abstract_5();

}
abstract_1 func6 () {

return abstract_1();

}
abstract_5 func7 (abstract_1* v44) {
abstract_2 v45;
abstract_2 v46;
abstract_2 v47;
abstract_3 v48;

delete (new C2 ());
return ::func5();

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
class C1    size(12)
0    +---
0    | {vbptr}
4    | {vtordisp for vbase 0}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(28)
0    +---
0    | var21: PtrType{AbstractType{1}}
4    | var22: ClassType{1}
16   | var23: ClassType{1}
28   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 28;
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
0    | +--- (base class C1)
0    | | {vbptr}
4    | +---
4    | var40: AbstractType{2}
8    | var41: PtrType{AbstractType{1}}
12   | var42: ClassType{1}
24   +---
24   +--- (virtual base class C2)
24   | var21: PtrType{AbstractType{1}}
28   | var22: ClassType{1}
40   | var23: ClassType{1}
52   +---
52   | {vtordisp for vbase 0}
56   +--- (virtual base class C0)
56   | {vfptr}
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
 const size_t model_offset = 0;
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

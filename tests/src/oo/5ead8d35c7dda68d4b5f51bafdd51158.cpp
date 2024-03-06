// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_3 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2, abstract_0* v3);
/* method id 401 */ C0 ();
/* method id 402 */ virtual abstract_0 func0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 403 */ virtual abstract_0 func0 ();
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_0* v13;
};
struct C2 : public C0, public virtual C1 {
/* method id 405 */ C2 ();
/* method id 406 */ abstract_0 func0 ();
C2 (special_constructor);
abstract_1 v17;
abstract_1 v18;
abstract_1 v19;
abstract_1 v20;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 407 */ virtual abstract_0 func0 ();
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ C3 ();
C3 (special_constructor);
abstract_0* v25;
abstract_2 v26;
abstract_1 v27;
abstract_1 v28;
};
abstract_0 func2 (abstract_1 v29);
abstract_3 func3 (abstract_1 v31);
abstract_0 func4 (abstract_0* v32);
abstract_0 func5 (abstract_0* v37, C3 v38, C3 v39);
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2, abstract_0* v3) {
abstract_0* v4 = ((abstract_0*) 0);
return ::func4(v2);

}
/* method id 401 */ C0::C0 () {
abstract_0* v5 = ((abstract_0*) 0);
abstract_0* v6 = ((abstract_0*) 0);
return;

}
/* method id 402 */ abstract_0 C0::func0 () {
abstract_0* v7 = ((abstract_0*) 0);
return abstract_0();

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0 C1::func0 () {
abstract_0* v12 = ((abstract_0*) 0);
return abstract_0();

}
/* method id 404 */ C1::C1 () {
return;

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {
abstract_0* v14 = ((abstract_0*) 0);
return;

}
/* method id 406 */ abstract_0 C2::func0 () {
abstract_1 v15 = abstract_1();
abstract_1 v16 = abstract_1();
return ::func4(new abstract_0 ());

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 407 */ abstract_0 C3::func0 () {
return abstract_0();

}
/* method id 408 */ C3::~C3 () {
abstract_1 v21 = abstract_1();
abstract_1 v22 = abstract_1();
abstract_2 v23 = abstract_2();
abstract_2 v24 = abstract_2();
return;

}
/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func2 (abstract_1 v29) {
abstract_2 v30;

return ::func4(new abstract_0 ());

}
abstract_3 func3 (abstract_1 v31) {

return abstract_3();

}
abstract_0 func4 (abstract_0* v32) {
abstract_1 v33;
abstract_1 v34;
C3 v35;
C3 v36;

return ::func2(v33);

}
abstract_0 func5 (abstract_0* v37, C3 v38, C3 v39) {
C3 v40;
abstract_2 v41;
abstract_0* v42;
C3 v43;

return abstract_0();

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
class C1    size(8)
0    +---
0    | {vfptr}
4    | var13: PtrType{AbstractType{0}}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(36)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | {vbptr}
8    | var17: AbstractType{1}
12   | var18: AbstractType{1}
16   | var19: AbstractType{1}
20   | var20: AbstractType{1}
24   | {vtordisp for vbase 1}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | var13: PtrType{AbstractType{0}}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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
class C3    size(64)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var25: PtrType{AbstractType{0}}
12   | var26: AbstractType{2}
16   | var27: AbstractType{1}
20   | var28: AbstractType{1}
24   | {vtordisp for vbase 1}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | var13: PtrType{AbstractType{0}}
36   +---
36   | {vtordisp for vbase 2}
40   +--- (virtual base class C2)
40   | +--- (base class C0)
40   | | {vfptr}
44   | +---
44   | {vbptr}
48   | var17: AbstractType{1}
52   | var18: AbstractType{1}
56   | var19: AbstractType{1}
60   | var20: AbstractType{1}
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
 const size_t model_offset = 28;
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

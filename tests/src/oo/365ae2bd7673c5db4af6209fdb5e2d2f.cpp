// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ virtual abstract_0 func2 (abstract_0* v1, abstract_0* v2, C0 v3);
/* method id 404 */ abstract_0 func3 (C0 v4);
/* method id 405 */ virtual abstract_0 func4 (C0 v9, abstract_0* v10);
/* method id 406 */ C1 ();
C1 (special_constructor);
C0 v12;
C0 v13;
abstract_0* v14;
abstract_0* v15;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
C0 v16;
C0 v17;
abstract_1 v18;
C0 v19;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual abstract_0 func4 (abstract_1 v24, abstract_0* v25);
/* method id 411 */ virtual ~C3 ();
C3 (special_constructor);
abstract_1 v41;
};
// definitions
/* method id 400 */ C0::~C0 () {
(((C3*) 0))->C3::func4(abstract_1(), new abstract_0 ());
(((C3*) 0))->C3::func4(abstract_1(), new abstract_0 ());
(((C3*) 0))->C3::func4(abstract_1(), new abstract_0 ());
(((C3*) 0))->C3::func4(abstract_1(), new abstract_0 ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::~C1 () {
abstract_0* v0 = new abstract_0 ();
return;

}
/* method id 403 */ abstract_0 C1::func2 (abstract_0* v1, abstract_0* v2, C0 v3) {
return abstract_0();

}
/* method id 404 */ abstract_0 C1::func3 (C0 v4) {
C0 v5 = *(((C0*) 0));
C0 v6 = *(((C0*) 0));
abstract_1 v7 = abstract_1();
abstract_0* v8 = new abstract_0 ();
return abstract_0();

}
/* method id 405 */ abstract_0 C1::func4 (C0 v9, abstract_0* v10) {
abstract_0* v11 = ((abstract_0*) 0);
delete (new C3 ());
return abstract_0();

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
C0 v20 = *(((C0*) 0));
C0 v21 = *(((C0*) 0));
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
return;

}
/* method id 410 */ abstract_0 C3::func4 (abstract_1 v24, abstract_0* v25) {
return (((C1*) 0))->C1::func2(v25, v25, v12);

}
/* method id 411 */ C3::~C3 () {
C0 v26 = *((new C0 ()));
C0 v27 = *((new C0 ()));
C0 v28 = *((new C0 ()));
C0 v29 = *((new C0 ()));
delete (new C2 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

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
8    | var12: ClassType{0}
12   | var13: ClassType{0}
16   | var14: PtrType{AbstractType{0}}
20   | var15: PtrType{AbstractType{0}}
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
class C2    size(48)
0    +---
0    | {vbptr}
4    | var16: ClassType{0}
8    | var17: ClassType{0}
12   | var18: AbstractType{1}
16   | var19: ClassType{0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var12: ClassType{0}
36   | var13: ClassType{0}
40   | var14: PtrType{AbstractType{0}}
44   | var15: PtrType{AbstractType{0}}
48   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(60)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var41: AbstractType{1}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var12: ClassType{0}
28   | var13: ClassType{0}
32   | var14: PtrType{AbstractType{0}}
36   | var15: PtrType{AbstractType{0}}
40   +---
40   +--- (virtual base class C2)
40   | {vbptr}
44   | var16: ClassType{0}
48   | var17: ClassType{0}
52   | var18: AbstractType{1}
56   | var19: ClassType{0}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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

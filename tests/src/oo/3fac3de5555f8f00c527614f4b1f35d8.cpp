// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ abstract_0 func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4);
/* method id 404 */ C0* func2 (C0* v6, C0*** v7, C0* v8);
/* method id 405 */ void func3 (C0* v9, abstract_0* v10);
/* method id 406 */ C1 ();
C1 (special_constructor);
C0*** v12;
C0* v13;
abstract_0* v14;
C0* v15;
};
struct C2 : public virtual C0, public C1 {
/* method id 408 */ C2 ();
C2 (special_constructor);
C0* v16;
C0* v17;
C0*** v18;
C0* v19;
};
struct C3 : public virtual C2 {
/* method id 410 */ C3 ();
/* method id 411 */ void func3 (C0*** v21, C0* v22, abstract_0* v23, C0* v24);
/* method id 412 */ virtual C0* func1 (C0*** v26, C0*** v27, C0* v28, abstract_0* v29);
C3 (special_constructor);
C1 v34;
C0* v35;
C0* v36;
};
// definitions
/* method id 400 */ C0::~C0 () {
((new C1 ()))->C1::func3(this, ((abstract_0*) 0));
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
delete (new C2 ());
return v15;

}
/* method id 403 */ abstract_0 C1::func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4) {
C0* v5 = &(*((new C0 ())));
return abstract_0();

}
/* method id 404 */ C0* C1::func2 (C0* v6, C0*** v7, C0* v8) {
return v13;

}
/* method id 405 */ void C1::func3 (C0* v9, abstract_0* v10) {
abstract_0* v11 = new abstract_0 ();
delete (new C0 ());
return;

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
C0*** v20 = new C0** ();
delete (new C1 ());
return;

}
/* method id 411 */ void C3::func3 (C0*** v21, C0* v22, abstract_0* v23, C0* v24) {
C0* v25 = &(*((new C0 ())));
return;

}
/* method id 412 */ C0* C3::func1 (C0*** v26, C0*** v27, C0* v28, abstract_0* v29) {
C0*** v30 = new C0** ();
C1 v31 = *(((C1*) 0));
C0* v32 = (new C0 ());
abstract_0* v33 = new abstract_0 ();
return v15;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

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
8    | var12: DeletablePtrType{PtrType{PtrType{ClassType{0}}}}
12   | var13: PtrType{ClassType{0}}
16   | var14: PtrType{AbstractType{0}}
20   | var15: PtrType{ClassType{0}}
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
class C2    size(44)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var12: DeletablePtrType{PtrType{PtrType{ClassType{0}}}}
12   | | var13: PtrType{ClassType{0}}
16   | | var14: PtrType{AbstractType{0}}
20   | | var15: PtrType{ClassType{0}}
24   | +---
24   | var16: PtrType{ClassType{0}}
28   | var17: PtrType{ClassType{0}}
32   | var18: DeletablePtrType{PtrType{PtrType{ClassType{0}}}}
36   | var19: PtrType{ClassType{0}}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
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
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(88)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var34: ClassType{1}
36   | var35: PtrType{ClassType{0}}
40   | var36: PtrType{ClassType{0}}
44   +---
44   +--- (virtual base class C0)
44   | {vfptr}
48   +---
48   +--- (virtual base class C2)
48   | +--- (base class C1)
48   | | {vfptr}
52   | | {vbptr}
56   | | var12: DeletablePtrType{PtrType{PtrType{ClassType{0}}}}
60   | | var13: PtrType{ClassType{0}}
64   | | var14: PtrType{AbstractType{0}}
68   | | var15: PtrType{ClassType{0}}
72   | +---
72   | var16: PtrType{ClassType{0}}
76   | var17: PtrType{ClassType{0}}
80   | var18: DeletablePtrType{PtrType{PtrType{ClassType{0}}}}
84   | var19: PtrType{ClassType{0}}
88   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 88;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 48;
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

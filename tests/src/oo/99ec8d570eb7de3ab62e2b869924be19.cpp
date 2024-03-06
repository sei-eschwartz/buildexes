// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_0 func0 ();
/* method id 401 */ virtual abstract_0 func0 (abstract_0** v0);
/* method id 402 */ virtual ~C0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_0** v14;
abstract_0** v15;
abstract_0** v16;
abstract_0** v17;
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_0** v18;
abstract_0** v19;
abstract_0** v20;
abstract_0** v21;
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_0** v22;
abstract_0** v23;
abstract_0** v24;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual abstract_0 func1 (abstract_0** v29, abstract_0** v30);
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ void func5 ();
C3 (special_constructor);
};
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return abstract_0();

}
/* method id 401 */ abstract_0 C0::func0 (abstract_0** v0) {
abstract_0** v1 = new abstract_0* ();
return abstract_0();

}
/* method id 402 */ C0::~C0 () {
abstract_0** v2 = new abstract_0* ();
abstract_0** v3 = new abstract_0* ();
abstract_0** v4 = new abstract_0* ();
abstract_0** v5 = new abstract_0* ();
return;

}
/* method id 403 */ C0::C0 () {
abstract_0** v10 = new abstract_0* ();
abstract_0** v11 = new abstract_0* ();
abstract_0** v12 = new abstract_0* ();
abstract_0** v13 = new abstract_0* ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
abstract_0** v25 = new abstract_0* ();
abstract_0** v26 = new abstract_0* ();
abstract_0** v27 = new abstract_0* ();
abstract_0** v28 = new abstract_0* ();
return;

}
/* method id 409 */ abstract_0 C3::func1 (abstract_0** v29, abstract_0** v30) {
abstract_0** v31 = new abstract_0* ();
abstract_0** v32 = new abstract_0* ();
abstract_0** v33 = new abstract_0* ();
abstract_0** v34 = new abstract_0* ();
return abstract_0();

}
/* method id 410 */ C3::~C3 () {
abstract_0** v43 = new abstract_0* ();
abstract_0** v44 = new abstract_0* ();
return;

}
/* method id 411 */ void C3::func5 () {
abstract_0** v177 = new abstract_0* ();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var14: DeletablePtrType{PtrType{AbstractType{0}}}
8    | var15: DeletablePtrType{PtrType{AbstractType{0}}}
12   | var16: DeletablePtrType{PtrType{AbstractType{0}}}
16   | var17: DeletablePtrType{PtrType{AbstractType{0}}}
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
class C1    size(40)
0    +---
0    | {vbptr}
4    | var18: DeletablePtrType{PtrType{AbstractType{0}}}
8    | var19: DeletablePtrType{PtrType{AbstractType{0}}}
12   | var20: DeletablePtrType{PtrType{AbstractType{0}}}
16   | var21: DeletablePtrType{PtrType{AbstractType{0}}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var14: DeletablePtrType{PtrType{AbstractType{0}}}
28   | var15: DeletablePtrType{PtrType{AbstractType{0}}}
32   | var16: DeletablePtrType{PtrType{AbstractType{0}}}
36   | var17: DeletablePtrType{PtrType{AbstractType{0}}}
40   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 40;
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
class C2    size(56)
0    +---
0    | {vbptr}
4    | var22: DeletablePtrType{PtrType{AbstractType{0}}}
8    | var23: DeletablePtrType{PtrType{AbstractType{0}}}
12   | var24: DeletablePtrType{PtrType{AbstractType{0}}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var14: DeletablePtrType{PtrType{AbstractType{0}}}
24   | var15: DeletablePtrType{PtrType{AbstractType{0}}}
28   | var16: DeletablePtrType{PtrType{AbstractType{0}}}
32   | var17: DeletablePtrType{PtrType{AbstractType{0}}}
36   +---
36   +--- (virtual base class C1)
36   | {vbptr}
40   | var18: DeletablePtrType{PtrType{AbstractType{0}}}
44   | var19: DeletablePtrType{PtrType{AbstractType{0}}}
48   | var20: DeletablePtrType{PtrType{AbstractType{0}}}
52   | var21: DeletablePtrType{PtrType{AbstractType{0}}}
56   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 56;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
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
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var14: DeletablePtrType{PtrType{AbstractType{0}}}
16   | var15: DeletablePtrType{PtrType{AbstractType{0}}}
20   | var16: DeletablePtrType{PtrType{AbstractType{0}}}
24   | var17: DeletablePtrType{PtrType{AbstractType{0}}}
28   +---
28   +--- (virtual base class C1)
28   | {vbptr}
32   | var18: DeletablePtrType{PtrType{AbstractType{0}}}
36   | var19: DeletablePtrType{PtrType{AbstractType{0}}}
40   | var20: DeletablePtrType{PtrType{AbstractType{0}}}
44   | var21: DeletablePtrType{PtrType{AbstractType{0}}}
48   +---
48   +--- (virtual base class C2)
48   | {vbptr}
52   | var22: DeletablePtrType{PtrType{AbstractType{0}}}
56   | var23: DeletablePtrType{PtrType{AbstractType{0}}}
60   | var24: DeletablePtrType{PtrType{AbstractType{0}}}
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

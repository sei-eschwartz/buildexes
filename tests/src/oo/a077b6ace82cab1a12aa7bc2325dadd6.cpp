// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
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
/* method id 403 */ C1 ();
C1 (special_constructor);
abstract_0* v1;
C0* v2;
C0* v3;
abstract_0*** v4;
};
struct C2 : public virtual C1 {
/* method id 405 */ abstract_0** func1 ();
/* method id 406 */ abstract_0** func4 ();
/* method id 407 */ C2 ();
C2 (special_constructor);
C0*** v12;
abstract_0* v13;
C0*** v14;
};
struct C3 : public C2 {
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ virtual abstract_1 func0 (abstract_0* v18, C0* v19);
/* method id 411 */ C3 ();
C3 (special_constructor);
abstract_0*** v28;
C0*** v29;
C0* v30;
C0* v31;
};
abstract_0 func6 (abstract_3 v32, abstract_3 v33);
C0* func7 (abstract_2 v34, abstract_0*** v35, C0* v36);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
return v3;

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ abstract_0** C2::func1 () {
C0* v5 = (new C0 ());
C0* v6 = (new C0 ());
abstract_0*** v7 = ((abstract_0***) 0);
::func7(abstract_2(), v7, v6);
::func7(abstract_2(), v7, v6);
::func7(abstract_2(), v7, v6);
return ((abstract_0**) 0);

}
/* method id 406 */ abstract_0** C2::func4 () {
abstract_0* v8 = ((abstract_0*) 0);
abstract_0* v9 = ((abstract_0*) 0);
C0*** v10 = new C0** ();
C0* v11 = (C0*)(((C1*) 0));
return ((abstract_0**) 0);

}
/* method id 407 */ C2::C2 () {
::func7(abstract_2(), v4, v3);
::func7(abstract_2(), v4, v3);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::~C3 () {
C0* v15 = ((C0*) 0);
C0* v16 = ((C0*) 0);
C0* v17 = ((C0*) 0);
(((C3*) 0))->C3::func0(v13, (new C0 ()));
(((C3*) 0))->C3::func0(v13, (new C0 ()));
(((C3*) 0))->C3::func0(v13, (new C0 ()));
(((C3*) 0))->C3::func0(v13, (new C0 ()));
return;

}
/* method id 410 */ abstract_1 C3::func0 (abstract_0* v18, C0* v19) {
return abstract_1();

}
/* method id 411 */ C3::C3 () {
abstract_0*** v24 = new abstract_0** ();
abstract_0* v25 = ((abstract_0*) 0);
abstract_3 v26 = abstract_3();
C0* v27 = &(*(&(*((new C0 ())))));
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_0 func6 (abstract_3 v32, abstract_3 v33) {

::func7(abstract_2(), ((abstract_0***) 0), (new C0 ()));
::func7(abstract_2(), ((abstract_0***) 0), (new C0 ()));
::func7(abstract_2(), ((abstract_0***) 0), (new C0 ()));
::func7(abstract_2(), ((abstract_0***) 0), (new C0 ()));
return abstract_0();

}
C0* func7 (abstract_2 v34, abstract_0*** v35, C0* v36) {
abstract_0*** v37;
C0* v38;
C0* v39;

v37 = ((abstract_0***) 0);
v37 = ((abstract_0***) 0);
v37 = ((abstract_0***) 0);
v37 = ((abstract_0***) 0);
return v36;

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
8    | var1: PtrType{AbstractType{0}}
12   | var2: PtrType{ClassType{0}}
16   | var3: PtrType{ClassType{0}}
20   | var4: PtrType{PtrType{PtrType{AbstractType{0}}}}
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
0    | {vbptr}
4    | var12: DeletablePtrType{PtrType{PtrType{ClassType{0}}}}
8    | var13: PtrType{AbstractType{0}}
12   | var14: DeletablePtrType{PtrType{PtrType{ClassType{0}}}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var1: PtrType{AbstractType{0}}
32   | var2: PtrType{ClassType{0}}
36   | var3: PtrType{ClassType{0}}
40   | var4: PtrType{PtrType{PtrType{AbstractType{0}}}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
4    | +--- (base class C2)
4    | | {vbptr}
8    | | var12: DeletablePtrType{PtrType{PtrType{ClassType{0}}}}
12   | | var13: PtrType{AbstractType{0}}
16   | | var14: DeletablePtrType{PtrType{PtrType{ClassType{0}}}}
20   | +---
20   | var28: PtrType{PtrType{PtrType{AbstractType{0}}}}
24   | var29: DeletablePtrType{PtrType{PtrType{ClassType{0}}}}
28   | var30: PtrType{ClassType{0}}
32   | var31: PtrType{ClassType{0}}
36   +---
36   +--- (virtual base class C0)
36   | {vfptr}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | {vbptr}
48   | var1: PtrType{AbstractType{0}}
52   | var2: PtrType{ClassType{0}}
56   | var3: PtrType{ClassType{0}}
60   | var4: PtrType{PtrType{PtrType{AbstractType{0}}}}
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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

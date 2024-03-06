// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct abstract_11 { int x; };
struct abstract_12 { int x; };
struct abstract_13 { int x; };
struct abstract_14 { int x; };
struct abstract_15 { int x; };
struct abstract_16 { int x; };
struct abstract_17 { int x; };
struct abstract_1 { int x; };
struct abstract_18 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
abstract_0** v1;
abstract_0** v2;
abstract_0** v3;
abstract_0** v4;
};
struct C1  {
/* method id 401 */ ~C1 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 403 */ virtual ~C2 ();
/* method id 404 */ virtual void func2 ();
/* method id 405 */ virtual abstract_0 func0 ();
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_1 v10;
};
struct C3 : public virtual C0, public virtual C1, public virtual C2 {
/* method id 407 */ virtual ~C3 ();
/* method id 408 */ virtual abstract_2 func4 (abstract_0** v11, abstract_0** v12, abstract_0** v13);
/* method id 409 */ virtual void func2 ();
/* method id 410 */ abstract_0* func0 (abstract_1 v18, abstract_0** v19, abstract_1 v20, C2 v21);
/* method id 411 */ C3 ();
C3 (special_constructor);
C2 v22;
abstract_1 v23;
abstract_0** v24;
};
abstract_0* func6 (abstract_1 v25, C2 v26, C2 v27);
abstract_17 func7 (abstract_1 v32, abstract_1 v33, abstract_0*** v34, abstract_1 v35);
void func8 ();
// definitions
/* method id 400 */ C0::C0 () {
abstract_0** v0 = ((abstract_0**) 0);
delete (new C1 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::~C1 () {
delete (new C1 ());
return;

}
/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::~C2 () {
return;

}
/* method id 404 */ void C2::func2 () {
abstract_0** v5 = ((abstract_0**) 0);
abstract_0** v6 = ((abstract_0**) 0);
abstract_0** v7 = ((abstract_0**) 0);
delete (new C1 ());
return ::func8();

}
/* method id 405 */ abstract_0 C2::func0 () {
abstract_0** v8 = ((abstract_0**) 0);
abstract_0** v9 = ((abstract_0**) 0);
return abstract_0();

}
/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 407 */ C3::~C3 () {
return;

}
/* method id 408 */ abstract_2 C3::func4 (abstract_0** v11, abstract_0** v12, abstract_0** v13) {
return abstract_2();

}
/* method id 409 */ void C3::func2 () {
abstract_1 v14 = abstract_1();
abstract_1 v15 = abstract_1();
abstract_1 v16 = abstract_1();
abstract_1 v17 = abstract_1();
delete (new C2 ());
return;

}
/* method id 410 */ abstract_0* C3::func0 (abstract_1 v18, abstract_0** v19, abstract_1 v20, C2 v21) {
delete (new C0 ());
return ((abstract_0*) 0);

}
/* method id 411 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func6 (abstract_1 v25, C2 v26, C2 v27) {
C2 v28;
abstract_1 v29;
abstract_1 v30;
C2 v31;

v26 = v31;
v26 = v31;
return ((abstract_0*) 0);

}
abstract_17 func7 (abstract_1 v32, abstract_1 v33, abstract_0*** v34, abstract_1 v35) {

delete (new C2 ());
return abstract_17();

}
void func8 () {
abstract_18 v36;

return (&(*(((C3*) 0))))->C3::func2();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var1: PtrType{PtrType{AbstractType{0}}}
4    | var2: PtrType{PtrType{AbstractType{0}}}
8    | var3: PtrType{PtrType{AbstractType{0}}}
12   | var4: PtrType{PtrType{AbstractType{0}}}
16   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(0)
0    +---
0    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var10: AbstractType{1}
12   +---
12   +--- (virtual base class C0)
12   | var1: PtrType{PtrType{AbstractType{0}}}
16   | var2: PtrType{PtrType{AbstractType{0}}}
20   | var3: PtrType{PtrType{AbstractType{0}}}
24   | var4: PtrType{PtrType{AbstractType{0}}}
28   +---
28   +--- (virtual base class C1)
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
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
class C3    size(76)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var22: ClassType{2}
36   | var23: AbstractType{1}
40   | var24: PtrType{PtrType{AbstractType{0}}}
44   +---
44   +--- (virtual base class C0)
44   | var1: PtrType{PtrType{AbstractType{0}}}
48   | var2: PtrType{PtrType{AbstractType{0}}}
52   | var3: PtrType{PtrType{AbstractType{0}}}
56   | var4: PtrType{PtrType{AbstractType{0}}}
60   +---
60   +--- (virtual base class C1)
60   +---
60   | {vtordisp for vbase 2}
64   +--- (virtual base class C2)
64   | {vfptr}
68   | {vbptr}
72   | var10: AbstractType{1}
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
 const size_t model_offset = 44;
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
 const size_t model_offset = 60;
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
 const size_t model_offset = 64;
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

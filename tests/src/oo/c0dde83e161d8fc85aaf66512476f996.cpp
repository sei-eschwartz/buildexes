// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 ();
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_1 v1;
abstract_0* v2;
abstract_1 v3;
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual abstract_0* func0 (abstract_0* v4, abstract_1 v5);
/* method id 404 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0 {
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_1 v6;
abstract_0* v7;
abstract_0* v8;
abstract_0* v9;
};
struct C3 : public virtual C0, public virtual C1, public virtual C2 {
/* method id 408 */ virtual abstract_0 func1 (abstract_0* v10);
/* method id 409 */ virtual abstract_0* func1 (abstract_0* v11, abstract_1 v12);
/* method id 410 */ virtual abstract_0* func1 (abstract_0** v16, abstract_1 v17);
/* method id 411 */ void func3 (abstract_0* v18, abstract_0** v19, abstract_1 v20);
/* method id 412 */ C3 ();
C3 (special_constructor);
abstract_0* v22;
abstract_1 v23;
abstract_0* v24;
abstract_1 v25;
};
abstract_0* func8 ();
void func9 (abstract_1 v26, abstract_0* v27, abstract_0* v28, abstract_0** v29);
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return abstract_0();

}
/* method id 401 */ C0::~C0 () {
abstract_1 v0 = abstract_1();
delete (new C0 ());
return;

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0* C1::func0 (abstract_0* v4, abstract_1 v5) {
return v4;

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ abstract_0 C3::func1 (abstract_0* v10) {
return abstract_0();

}
/* method id 409 */ abstract_0* C3::func1 (abstract_0* v11, abstract_1 v12) {
abstract_0** v13 = ((abstract_0**) 0);
abstract_0* v14 = ((abstract_0*) 0);
abstract_1 v15 = abstract_1();
::func8();
return v2;

}
/* method id 410 */ abstract_0* C3::func1 (abstract_0** v16, abstract_1 v17) {
v3 = v1;
v3 = v1;
v2 = v2;
v2 = v2;
return v2;

}
/* method id 411 */ void C3::func3 (abstract_0* v18, abstract_0** v19, abstract_1 v20) {
abstract_0** v21 = ((abstract_0**) 0);
return;

}
/* method id 412 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func8 () {

return (((C3*) 0))->C3::func1(new abstract_0* (), abstract_1());

}
void func9 (abstract_1 v26, abstract_0* v27, abstract_0* v28, abstract_0** v29) {
abstract_1 v30;

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var1: AbstractType{1}
8    | var2: PtrType{AbstractType{0}}
12   | var3: AbstractType{1}
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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var1: AbstractType{1}
16   | var2: PtrType{AbstractType{0}}
20   | var3: AbstractType{1}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
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
class C2    size(36)
0    +---
0    | {vbptr}
4    | var6: AbstractType{1}
8    | var7: PtrType{AbstractType{0}}
12   | var8: PtrType{AbstractType{0}}
16   | var9: PtrType{AbstractType{0}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var1: AbstractType{1}
28   | var2: PtrType{AbstractType{0}}
32   | var3: AbstractType{1}
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
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(68)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var22: PtrType{AbstractType{0}}
12   | var23: AbstractType{1}
16   | var24: PtrType{AbstractType{0}}
20   | var25: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var1: AbstractType{1}
32   | var2: PtrType{AbstractType{0}}
36   | var3: AbstractType{1}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | {vbptr}
48   +---
48   +--- (virtual base class C2)
48   | {vbptr}
52   | var6: AbstractType{1}
56   | var7: PtrType{AbstractType{0}}
60   | var8: PtrType{AbstractType{0}}
64   | var9: PtrType{AbstractType{0}}
68   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 68;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
 const size_t model_offset = 40;
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

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
abstract_1 v3;
abstract_1 v4;
abstract_0 v5;
};
struct C1 : public virtual C0 {
/* method id 402 */ void func2 (abstract_0 v6, abstract_0 v7, abstract_1 v8, abstract_0 v9);
/* method id 403 */ void func1 ();
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_1 v10;
};
struct C2  {
/* method id 406 */ virtual ~C2 ();
/* method id 407 */ C2 ();
/* method id 408 */ void func5 ();
/* method id 409 */ virtual void* func2 (abstract_1 v12, abstract_1 v13, C1 v14);
C2 (special_constructor);
C1 v19;
C1 v20;
abstract_1 v21;
abstract_1 v22;
};
struct C3 : public virtual C2, public virtual C1 {
/* method id 410 */ C3 ();
/* method id 411 */ void func6 ();
C3 (special_constructor);
};
// definitions
/* method id 400 */ C0::~C0 () {
v3 = abstract_1();
v3 = abstract_1();
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void C1::func2 (abstract_0 v6, abstract_0 v7, abstract_1 v8, abstract_0 v9) {
return;

}
/* method id 403 */ void C1::func1 () {
return;

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::~C2 () {
(&(v19))->C1::func1();
v20 = v19;
(&(v19))->C1::func1();
v20 = v19;
return;

}
/* method id 407 */ C2::C2 () {
v20 = v19;
v20 = v19;
v20 = v19;
return;

}
/* method id 408 */ void C2::func5 () {
abstract_1 v11 = abstract_1();
return;

}
/* method id 409 */ void* C2::func2 (abstract_1 v12, abstract_1 v13, C1 v14) {
abstract_1 v15 = abstract_1();
abstract_1 v16 = abstract_1();
abstract_1 v17 = abstract_1();
abstract_1 v18 = abstract_1();
return ((void*) 0);

}
C2::C2 (special_constructor)  {}

/* method id 410 */ C3::C3 () {
return;

}
/* method id 411 */ void C3::func6 () {
return ((new C1 ()))->C1::func1();

}
C3::C3 (special_constructor) : C2(special_constructor ()), C1(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var3: AbstractType{1}
8    | var4: AbstractType{1}
12   | var5: AbstractType{0}
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
0    | {vbptr}
4    | var10: AbstractType{1}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var3: AbstractType{1}
16   | var4: AbstractType{1}
20   | var5: AbstractType{0}
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
class C2    size(60)
0    +---
0    | {vfptr}
4    | var19: ClassType{1}
28   | var20: ClassType{1}
52   | var21: AbstractType{1}
56   | var22: AbstractType{1}
60   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 60;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(88)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C2)
4    | {vfptr}
8    | var19: ClassType{1}
32   | var20: ClassType{1}
56   | var21: AbstractType{1}
60   | var22: AbstractType{1}
64   +---
64   +--- (virtual base class C0)
64   | {vfptr}
68   | var3: AbstractType{1}
72   | var4: AbstractType{1}
76   | var5: AbstractType{0}
80   +---
80   +--- (virtual base class C1)
80   | {vbptr}
84   | var10: AbstractType{1}
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
 const size_t model_offset = 4;
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
 const size_t model_offset = 80;
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

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ void func0 (void** v0, abstract_0 v1, void** v2, abstract_0 v3);
/* method id 401 */ C0 ();
/* method id 402 */ virtual void func0 ();
/* method id 403 */ virtual void func1 (abstract_0 v7);
C0 (special_constructor);
abstract_0 v12;
abstract_1 v13;
abstract_1 v14;
void** v15;
};
struct C1  {
/* method id 404 */ C1 ();
/* method id 405 */ void func0 (abstract_1 v16, abstract_1 v17, abstract_0 v18, abstract_0 v19);
/* method id 406 */ virtual void* func1 (void* v20, abstract_1 v21, abstract_0 v22, abstract_0 v23);
C1 (special_constructor);
};
struct C2  {
/* method id 407 */ C2 ();
/* method id 408 */ ~C2 ();
C2 (special_constructor);
abstract_0 v181;
abstract_0 v182;
abstract_1 v183;
};
struct C3 : public virtual C1, public virtual C2, public C0 {
/* method id 409 */ C3 ();
C3 (special_constructor);
abstract_0 v205;
abstract_0 v206;
abstract_1 v207;
abstract_0 v208;
};
void* func3 (abstract_1 v209);
void* func4 (abstract_1 v213, abstract_0 v214, abstract_0 v215, abstract_0 v216);
void* func5 (abstract_0 v219, abstract_0 v220, abstract_0 v221, abstract_0 v222);
// definitions
/* method id 400 */ void C0::func0 (void** v0, abstract_0 v1, void** v2, abstract_0 v3) {
return;

}
/* method id 401 */ C0::C0 () {
delete (new C2 ());
return;

}
/* method id 402 */ void C0::func0 () {
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
return;

}
/* method id 403 */ void C0::func1 (abstract_0 v7) {
abstract_0 v8 = abstract_0();
void* v9 = ((void*) 0);
abstract_1 v10 = abstract_1();
abstract_1 v11 = abstract_1();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
return;

}
/* method id 405 */ void C1::func0 (abstract_1 v16, abstract_1 v17, abstract_0 v18, abstract_0 v19) {
return;

}
/* method id 406 */ void* C1::func1 (void* v20, abstract_1 v21, abstract_0 v22, abstract_0 v23) {
abstract_1 v24 = abstract_1();
return ((void*) 0);

}
C1::C1 (special_constructor)  {}

/* method id 407 */ C2::C2 () {
void** v25 = new void* ();
abstract_0 v26 = abstract_0();
abstract_1 v27 = abstract_1();
abstract_0 v28 = abstract_0();
delete (new C0 ());
return;

}
/* method id 408 */ C2::~C2 () {
abstract_0 v41 = abstract_0();
abstract_0 v42 = abstract_0();
abstract_0 v43 = abstract_0();
abstract_0 v44 = abstract_0();
return;

}
C2::C2 (special_constructor)  {}

/* method id 409 */ C3::C3 () {
void* v184 = ((void*) 0);
abstract_0 v185 = abstract_0();
abstract_0 v186 = abstract_0();
abstract_1 v187 = abstract_1();
delete (new C0 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()), C0(special_constructor ()) {}

void* func3 (abstract_1 v209) {
abstract_0 v210;
abstract_0 v211;
abstract_1 v212;

return ((void*) 0);

}
void* func4 (abstract_1 v213, abstract_0 v214, abstract_0 v215, abstract_0 v216) {
abstract_0 v217;
abstract_1 v218;

return ((void*) 0);

}
void* func5 (abstract_0 v219, abstract_0 v220, abstract_0 v221, abstract_0 v222) {
abstract_0 v223;
void* v224;
abstract_0 v225;
abstract_1 v226;

delete (new C2 ());
return v224;

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var12: AbstractType{0}
8    | var13: AbstractType{1}
12   | var14: AbstractType{1}
16   | var15: DeletablePtrType{PtrType{VoidType{}}}
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
class C1    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(12)
0    +---
0    | var181: AbstractType{0}
4    | var182: AbstractType{0}
8    | var183: AbstractType{1}
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(56)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var12: AbstractType{0}
8    | | var13: AbstractType{1}
12   | | var14: AbstractType{1}
16   | | var15: DeletablePtrType{PtrType{VoidType{}}}
20   | +---
20   | {vbptr}
24   | var205: AbstractType{0}
28   | var206: AbstractType{0}
32   | var207: AbstractType{1}
36   | var208: AbstractType{0}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   +---
44   +--- (virtual base class C2)
44   | var181: AbstractType{0}
48   | var182: AbstractType{0}
52   | var183: AbstractType{1}
56   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 56;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
 const size_t model_offset = 44;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_6 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_0 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct abstract_7 { int x; };
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
/* method id 402 */ C1 ();
C1 (special_constructor);
C0 v1;
abstract_0 v2;
};
struct C2 : public virtual C1 {
/* method id 404 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C1 {
/* method id 406 */ C3 ();
/* method id 407 */ virtual void** func2 (C2 v5, abstract_0 v6, C2 v7, C2 v8);
/* method id 408 */ virtual void func0 ();
/* method id 409 */ virtual abstract_4 func0 (abstract_0 v18, C1 v19, C0 v20, abstract_0 v21);
C3 (special_constructor);
C0 v24;
C1 v25;
C1 v26;
C0 v27;
};
void func8 (C0 v28, abstract_5 v29, abstract_6* v30);
void** func9 (C2 v31);
void** func10 (abstract_8** v35);
abstract_9 func11 (abstract_0 v40);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
C0 v0 = *(&(*(((C0*) 0))));
::func8(v1, abstract_5(), ((abstract_6*) 0));
::func8(v1, abstract_5(), ((abstract_6*) 0));
v0 = v0;
::func8(v1, abstract_5(), ((abstract_6*) 0));
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
C0 v3 = *(((C0*) 0));
return;

}
/* method id 407 */ void** C3::func2 (C2 v5, abstract_0 v6, C2 v7, C2 v8) {
return new void* ();

}
/* method id 408 */ void C3::func0 () {
abstract_3 v13 = abstract_3();
abstract_0 v14 = abstract_0();
abstract_3 v15 = abstract_3();
C1 v16 = *((C1*)(((C2*) 0)));
v2 = abstract_0();
return;

}
/* method id 409 */ abstract_4 C3::func0 (abstract_0 v18, C1 v19, C0 v20, abstract_0 v21) {
C1 v22 = *(&(*((new C1 ()))));
abstract_0 v23 = abstract_0();
return abstract_4();

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void func8 (C0 v28, abstract_5 v29, abstract_6* v30) {

return;

}
void** func9 (C2 v31) {
abstract_7 v32;
abstract_0 v33;
C0 v34;

v34 = *((new C0 ()));
return new void* ();

}
void** func10 (abstract_8** v35) {
void** v36;
void** v37;
abstract_0 v38;
C2 v39;

v36 = v37;
v36 = v37;
v36 = v37;
v36 = v37;
return new void* ();

}
abstract_9 func11 (abstract_0 v40) {
abstract_0 v41;
C1 v42;

return abstract_9();

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
class C1    size(16)
0    +---
0    | {vbptr}
4    | var1: ClassType{0}
8    | var2: AbstractType{0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(20)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    +---
8    +--- (virtual base class C1)
8    | {vbptr}
12   | var1: ClassType{0}
16   | var2: AbstractType{0}
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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
4    | +--- (base class C1)
4    | | {vbptr}
8    | | var1: ClassType{0}
12   | | var2: AbstractType{0}
16   | +---
16   | var24: ClassType{0}
20   | var25: ClassType{1}
36   | var26: ClassType{1}
52   | var27: ClassType{0}
56   +---
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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

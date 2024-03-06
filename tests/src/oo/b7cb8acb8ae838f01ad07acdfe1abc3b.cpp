// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ abstract_0 func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3, abstract_0** v4);
/* method id 402 */ ~C0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual abstract_0* func1 ();
/* method id 405 */ void func2 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_0** v9;
abstract_0** v10;
};
struct C2 : public C0 {
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ virtual void func0 ();
/* method id 410 */ C2 ();
C2 (special_constructor);
C1 v23;
C1 v24;
C1 v25;
C1 v26;
};
struct C3 : public virtual C1 {
/* method id 411 */ C3 ();
C3 (special_constructor);
C1 v27;
C1 v28;
C1 v29;
C1 v30;
};
abstract_0* func8 (C1 v31, C1 v32, abstract_0** v33, C1 v34);
abstract_2 func9 ();
abstract_0* func10 (abstract_3 v36);
abstract_0* func11 (C1 v38);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
return new abstract_0 ();

}
/* method id 401 */ abstract_0 C0::func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3, abstract_0** v4) {
abstract_0** v5 = new abstract_0* ();
v1 = v1;
return abstract_0();

}
/* method id 402 */ C0::~C0 () {
::func11(*((new C1 ())));
return;

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_0* C1::func1 () {
return new abstract_0 ();

}
/* method id 405 */ void C1::func2 () {
abstract_0** v6 = ((abstract_0**) 0);
abstract_0** v7 = ((abstract_0**) 0);
abstract_0** v8 = ((abstract_0**) 0);
delete (new C1 ());
return;

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::~C2 () {
v24 = v24;
v24 = v24;
return;

}
/* method id 409 */ void C2::func0 () {
C1 v11 = *(((C1*) 0));
C1 v12 = *(&(*(((C1*) 0))));
C1 v13 = *(&(*(((C1*) 0))));
C1 v14 = *(&(*(((C1*) 0))));
return;

}
/* method id 410 */ C2::C2 () {
C1 v15 = *(((C1*) 0));
C1 v16 = *(((C1*) 0));
C1 v17 = *(((C1*) 0));
C1 v18 = *(((C1*) 0));
delete (new C1 ());
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 411 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0* func8 (C1 v31, C1 v32, abstract_0** v33, C1 v34) {
abstract_1 v35;

v34 = v31;
v34 = v31;
v34 = v31;
return ((abstract_0*) 0);

}
abstract_2 func9 () {

delete (new C1 ());
return abstract_2();

}
abstract_0* func10 (abstract_3 v36) {
abstract_1 v37;

delete (new C0 ());
return ((abstract_0*) 0);

}
abstract_0* func11 (C1 v38) {

delete (new C2 ());
return ((abstract_0*) 0);

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var9: PtrType{PtrType{AbstractType{0}}}
12   | var10: PtrType{PtrType{AbstractType{0}}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(84)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var23: ClassType{1}
24   | var24: ClassType{1}
44   | var25: ClassType{1}
64   | var26: ClassType{1}
84   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 84;
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
 }}}
/*
class C3    size(104)
0    +---
0    | {vbptr}
4    | var27: ClassType{1}
24   | var28: ClassType{1}
44   | var29: ClassType{1}
64   | var30: ClassType{1}
84   +---
84   +--- (virtual base class C0)
84   | {vfptr}
88   +---
88   +--- (virtual base class C1)
88   | {vfptr}
92   | {vbptr}
96   | var9: PtrType{PtrType{AbstractType{0}}}
100  | var10: PtrType{PtrType{AbstractType{0}}}
104  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 104;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 88;
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

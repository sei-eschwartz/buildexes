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
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ virtual C0 func0 (C0* v7, C0* v8);
C1 (special_constructor);
C0* v10;
abstract_0 v11;
C0* v12;
C0* v13;
};
struct C2 : public virtual C1, public C0 {
/* method id 404 */ C2 ();
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ virtual C0 func2 (C0* v42, C0* v43, C1 v44);
C2 (special_constructor);
C1 v48;
C0* v49;
C1 v50;
};
struct C3 : public C1 {
/* method id 407 */ virtual ~C3 ();
/* method id 408 */ C3 ();
C3 (special_constructor);
};
C0 func3 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
delete (new C3 ());
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = ((C0*) 0);
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
C0* v6 = ((C0*) 0);
delete (new C1 ());
return;

}
/* method id 403 */ C0 C1::func0 (C0* v7, C0* v8) {
v7 = v7;
v7 = v7;
return ::func3();

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::C2 () {
C0* v14 = (new C0 ());
C0* v15 = (new C0 ());
C0* v16 = (new C0 ());
C0* v17 = (new C0 ());
::func3();
return;

}
/* method id 405 */ C2::~C2 () {
C0* v18 = (new C0 ());
C0* v19 = (new C0 ());
C0* v20 = (new C0 ());
C0* v21 = (new C0 ());
delete (new C2 ());
return;

}
/* method id 406 */ C0 C2::func2 (C0* v42, C0* v43, C1 v44) {
abstract_0 v45 = abstract_0();
C0* v46 = ((C0*) 0);
::func3();
return ::func3();

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 407 */ C3::~C3 () {
abstract_0 v51 = abstract_0();
(((C1*) 0))->C1::func0(((C0*) 0), ((C0*) 0));
return;

}
/* method id 408 */ C3::C3 () {
::func3();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

C0 func3 () {
abstract_2 v66;
C0* v67;
abstract_3 v68;
abstract_0 v69;

return *(v67);

}
#include <iostream>
void check_driver() {
/*
class C0    size(0)
0    +---
0    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 1;
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
4    | var10: PtrType{ClassType{0}}
8    | var11: AbstractType{0}
12   | var12: PtrType{ClassType{0}}
16   | var13: PtrType{ClassType{0}}
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
}
/*
class C2    size(72)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | {vbptr}
8    | var48: ClassType{1}
28   | var49: PtrType{ClassType{0}}
32   | var50: ClassType{1}
52   +---
52   +--- (virtual base class C1)
52   | {vfptr}
56   | var10: PtrType{ClassType{0}}
60   | var11: AbstractType{0}
64   | var12: PtrType{ClassType{0}}
68   | var13: PtrType{ClassType{0}}
72   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 72;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 52;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(20)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var10: PtrType{ClassType{0}}
8    | | var11: AbstractType{0}
12   | | var12: PtrType{ClassType{0}}
16   | | var13: PtrType{ClassType{0}}
20   | +---
20   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

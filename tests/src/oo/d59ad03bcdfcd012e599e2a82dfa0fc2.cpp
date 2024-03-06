// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
C1 (special_constructor);
C0 v8;
abstract_1 v9;
C0* v10;
C0 v11;
};
struct C2 : public C1 {
/* method id 403 */ virtual ~C2 ();
/* method id 404 */ C2 ();
/* method id 405 */ virtual C0 func0 (C0 v14, C0 v15, abstract_0 v16, abstract_1 v17);
C2 (special_constructor);
};
struct C3 : public virtual C2, public virtual C0 {
/* method id 406 */ abstract_2 func0 (abstract_1 v18);
/* method id 407 */ C3 ();
C3 (special_constructor);
C0* v23;
C0* v24;
abstract_0 v25;
};
abstract_2 func3 (abstract_0 v26);
abstract_2 func4 ();
C0 func5 (C0* v27, C0* v28, C3 v29, C3 v30);
abstract_2 func6 (abstract_0 v32, abstract_1 v33);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = ((C0*) 0);
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
C0* v6 = ((C0*) 0);
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::~C2 () {
C0* v12 = ((C0*) 0);
return;

}
/* method id 404 */ C2::C2 () {
abstract_1 v13 = abstract_1();
return;

}
/* method id 405 */ C0 C2::func0 (C0 v14, C0 v15, abstract_0 v16, abstract_1 v17) {
return *(v10);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ abstract_2 C3::func0 (abstract_1 v18) {
C0* v19 = ((C0*) 0);
abstract_3 v20 = abstract_3();
C0* v21 = (new C0 ());
abstract_3 v22 = abstract_3();
return abstract_2();

}
/* method id 407 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()), C0(special_constructor ()) {}

abstract_2 func3 (abstract_0 v26) {

return abstract_2();

}
abstract_2 func4 () {

return ::func3(abstract_0());

}
C0 func5 (C0* v27, C0* v28, C3 v29, C3 v30) {
abstract_1 v31;

return *((new C0 ()));

}
abstract_2 func6 (abstract_0 v32, abstract_1 v33) {

return abstract_2();

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
4    | var8: ClassType{0}
5    | alignment: 
8    | var9: AbstractType{1}
12   | var10: PtrType{ClassType{0}}
16   | var11: ClassType{0}
17   | alignment: 
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
class C2    size(20)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var8: ClassType{0}
5    | | alignment: 
8    | | var9: AbstractType{1}
12   | | var10: PtrType{ClassType{0}}
16   | | var11: ClassType{0}
17   | | alignment: 
20   | +---
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
class C3    size(40)
0    +---
0    | {vbptr}
4    | var23: PtrType{ClassType{0}}
8    | var24: PtrType{ClassType{0}}
12   | var25: AbstractType{0}
16   +---
16   +--- (virtual base class C2)
16   | +--- (base class C1)
16   | | {vfptr}
20   | | var8: ClassType{0}
21   | | alignment: 
24   | | var9: AbstractType{1}
28   | | var10: PtrType{ClassType{0}}
32   | | var11: ClassType{0}
33   | | alignment: 
36   | +---
36   +---
36   | alignment: Additional padding between virtual bases 2, which ends with a zero-sized object, and 0, which leads with zero sized base.
40   +--- (virtual base class C0)
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
 const size_t model_offset = 40;
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

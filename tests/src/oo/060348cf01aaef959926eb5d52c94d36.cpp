// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_0 { int x; };
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
abstract_0 v4;
C0* v5;
C0 v6;
};
struct C2  {
/* method id 403 */ virtual abstract_1 func0 (C0 v7, C0* v8, C0 v9, C0* v10);
/* method id 404 */ C2 ();
C2 (special_constructor);
C0 v15;
C0 v16;
C0 v17;
C0* v18;
};
struct C3 : public C1, public virtual C2, public virtual C0 {
/* method id 405 */ C3 ();
C3 (special_constructor);
abstract_0 v41;
C0 v42;
};
abstract_2 func2 (C0* v43, abstract_0 v44);
C0 func3 (C0 v45);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
::func3(*(&(v6)));
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = (new C0 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ abstract_1 C2::func0 (C0 v7, C0* v8, C0 v9, C0* v10) {
C0 v11 = *((new C0 ()));
C0* v12 = ((C0*) 0);
C0* v13 = ((C0*) 0);
C0* v14 = ((C0*) 0);
delete (new C1 ());
return abstract_1();

}
/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 405 */ C3::C3 () {
C0* v19 = ((C0*) 0);
C0* v20 = ((C0*) 0);
::func3(*(v19));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()), C0(special_constructor ()) {}

abstract_2 func2 (C0* v43, abstract_0 v44) {

return abstract_2();

}
C0 func3 (C0 v45) {
abstract_0 v46;
C0 v47;

delete (new C1 ());
return *(((C0*) 0));

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | var4: AbstractType{0}
8    | var5: PtrType{ClassType{0}}
12   | var6: ClassType{0}
13   | alignment: 
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
}
/*
class C2    size(12)
0    +---
0    | {vfptr}
4    | var15: ClassType{0}
5    | var16: ClassType{0}
6    | var17: ClassType{0}
7    | alignment: 
8    | var18: PtrType{ClassType{0}}
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
class C3    size(44)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var4: AbstractType{0}
8    | | var5: PtrType{ClassType{0}}
12   | | var6: ClassType{0}
13   | | alignment: 
16   | +---
16   | {vbptr}
20   | var41: AbstractType{0}
24   | var42: ClassType{0}
25   | alignment: 
28   +---
28   +--- (virtual base class C2)
28   | {vfptr}
32   | var15: ClassType{0}
33   | var16: ClassType{0}
34   | var17: ClassType{0}
35   | alignment: 
36   | var18: PtrType{ClassType{0}}
40   +---
40   | alignment: Additional padding between virtual bases 2, which ends with a zero-sized object, and 0, which leads with zero sized base.
44   +--- (virtual base class C0)
44   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 44;
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
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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
 const size_t model_offset = 44;
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

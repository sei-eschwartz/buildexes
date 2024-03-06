// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
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
C0* v45;
C0* v46;
C0 v47;
};
abstract_1 func2 (C0* v48, C0 v49, C0 v50);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
::func2((new C0 ()), v6, v6);
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
::func2(((C0*) 0), v11, v11);
delete (new C3 ());
::func2(((C0*) 0), v11, v11);
return ::func2(v18, *(v18), v11);

}
/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 405 */ C3::C3 () {
C0* v19 = ((C0*) 0);
C0* v20 = ((C0*) 0);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()), C0(special_constructor ()) {}

abstract_1 func2 (C0* v48, C0 v49, C0 v50) {
abstract_1* v51;
abstract_0 v52;

delete (new C1 ());
return abstract_1();

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
class C3    size(48)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var4: AbstractType{0}
8    | | var5: PtrType{ClassType{0}}
12   | | var6: ClassType{0}
13   | | alignment: 
16   | +---
16   | {vbptr}
20   | var45: PtrType{ClassType{0}}
24   | var46: PtrType{ClassType{0}}
28   | var47: ClassType{0}
29   | alignment: 
32   +---
32   +--- (virtual base class C2)
32   | {vfptr}
36   | var15: ClassType{0}
37   | var16: ClassType{0}
38   | var17: ClassType{0}
39   | alignment: 
40   | var18: PtrType{ClassType{0}}
44   +---
44   | alignment: Additional padding between virtual bases 2, which ends with a zero-sized object, and 0, which leads with zero sized base.
48   +--- (virtual base class C0)
48   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 48;
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
 const size_t model_offset = 32;
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
 const size_t model_offset = 48;
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

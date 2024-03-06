// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ abstract_1 func0 (abstract_1** v4, abstract_1** v5);
/* method id 403 */ virtual ~C0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1** v7;
abstract_2 v8;
};
struct C1 : public C0 {
/* method id 405 */ C1 ();
C1 (special_constructor);
abstract_2 v9;
abstract_2 v10;
abstract_0 v11;
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_2 v12;
abstract_0 v13;
C1 v14;
};
struct C3 : public C2 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual ~C3 ();
C3 (special_constructor);
abstract_1** v18;
abstract_1** v19;
};
abstract_3 func5 (C1 v20, C1 v21, abstract_1** v22, abstract_1** v23);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v4, abstract_1** v5) {
return abstract_1();

}
/* method id 403 */ C0::~C0 () {
abstract_0 v6 = abstract_0();
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
delete (new C3 ());
return;

}
/* method id 408 */ C3::~C3 () {
abstract_1** v15 = new abstract_1* ();
abstract_0 v16 = abstract_0();
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_3 func5 (C1 v20, C1 v21, abstract_1** v22, abstract_1** v23) {
abstract_4 v24;

return abstract_3();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var7: DeletablePtrType{PtrType{AbstractType{1}}}
8    | var8: AbstractType{2}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
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
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var7: DeletablePtrType{PtrType{AbstractType{1}}}
8    | | var8: AbstractType{2}
12   | +---
12   | var9: AbstractType{2}
16   | var10: AbstractType{2}
20   | var11: AbstractType{0}
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
 const size_t model_offset = 0;
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
0    | {vbptr}
4    | var12: AbstractType{2}
8    | var13: AbstractType{0}
12   | var14: ClassType{1}
36   +---
36   +--- (virtual base class C1)
36   | +--- (base class C0)
36   | | {vfptr}
40   | | var7: DeletablePtrType{PtrType{AbstractType{1}}}
44   | | var8: AbstractType{2}
48   | +---
48   | var9: AbstractType{2}
52   | var10: AbstractType{2}
56   | var11: AbstractType{0}
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
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(68)
0    +---
0    | +--- (base class C2)
0    | | {vbptr}
4    | | var12: AbstractType{2}
8    | | var13: AbstractType{0}
12   | | var14: ClassType{1}
36   | +---
36   | var18: DeletablePtrType{PtrType{AbstractType{1}}}
40   | var19: DeletablePtrType{PtrType{AbstractType{1}}}
44   +---
44   +--- (virtual base class C1)
44   | +--- (base class C0)
44   | | {vfptr}
48   | | var7: DeletablePtrType{PtrType{AbstractType{1}}}
52   | | var8: AbstractType{2}
56   | +---
56   | var9: AbstractType{2}
60   | var10: AbstractType{2}
64   | var11: AbstractType{0}
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

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
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ virtual abstract_1 func0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_0**** v1;
};
struct C1 : public virtual C0 {
/* method id 403 */ C1 ();
C1 (special_constructor);
abstract_0**** v2;
abstract_2 v3;
abstract_2 v4;
abstract_2 v5;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 405 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 407 */ virtual void** func0 (abstract_2 v6);
/* method id 408 */ C3 ();
C3 (special_constructor);
C1 v11;
abstract_0**** v12;
};
void*** func8 (abstract_0**** v13);
void*** func9 (abstract_2 v18, abstract_2 v19, abstract_2 v20);
void*** func10 (abstract_0**** v23);
void**** func11 (C1 v24, C1 v25, abstract_2 v26);
// definitions
/* method id 400 */ C0::~C0 () {
abstract_0**** v0 = new abstract_0*** ();
v0 = v1;
v0 = v1;
return;

}
/* method id 401 */ abstract_1 C0::func0 () {
return abstract_1();

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 407 */ void** C3::func0 (abstract_2 v6) {
abstract_2 v7 = abstract_2();
void*** v8 = ((void***) 0);
abstract_3 v9 = abstract_3();
abstract_3 v10 = abstract_3();
return new void* ();

}
/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void*** func8 (abstract_0**** v13) {
abstract_0**** v14;
abstract_0**** v15;
abstract_0**** v16;
abstract_0**** v17;

delete (new C2 ());
return new void** ();

}
void*** func9 (abstract_2 v18, abstract_2 v19, abstract_2 v20) {
void*** v21;
abstract_0**** v22;

return ((void***) 0);

}
void*** func10 (abstract_0**** v23) {

return new void** ();

}
void**** func11 (C1 v24, C1 v25, abstract_2 v26) {
void*** v27;
abstract_0**** v28;
abstract_0**** v29;
abstract_0**** v30;

return new void*** ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var1: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(28)
0    +---
0    | {vbptr}
4    | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
8    | var3: AbstractType{2}
12   | var4: AbstractType{2}
16   | var5: AbstractType{2}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var1: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(32)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    | var1: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
12   +---
12   +--- (virtual base class C1)
12   | {vbptr}
16   | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
20   | var3: AbstractType{2}
24   | var4: AbstractType{2}
28   | var5: AbstractType{2}
32   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(72)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var11: ClassType{1}
36   | var12: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   | var1: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
48   +---
48   +--- (virtual base class C1)
48   | {vbptr}
52   | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
56   | var3: AbstractType{2}
60   | var4: AbstractType{2}
64   | var5: AbstractType{2}
68   +---
68   +--- (virtual base class C2)
68   | {vbptr}
72   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 72;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 68;
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

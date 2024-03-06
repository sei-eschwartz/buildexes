// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
abstract_0**** v0;
abstract_0**** v1;
abstract_0**** v2;
abstract_0**** v3;
};
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
C1 (special_constructor);
abstract_0**** v4;
abstract_0**** v5;
abstract_0**** v6;
};
struct C2 : public virtual C1 {
/* method id 402 */ C2 ();
/* method id 403 */ virtual ~C2 ();
C2 (special_constructor);
abstract_0**** v39;
abstract_0**** v40;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 404 */ C3 ();
/* method id 405 */ ~C3 ();
C3 (special_constructor);
abstract_0**** v83;
abstract_1 v84;
abstract_1 v85;
abstract_1 v86;
};
void** func2 (abstract_1 v87, abstract_2 v88, abstract_2 v89, abstract_0**** v90);
abstract_0 func3 (abstract_2 v92, abstract_3 v93, abstract_1 v94);
abstract_0 func4 (abstract_1 v96, abstract_0**** v97);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 402 */ C2::C2 () {
abstract_0**** v7 = new abstract_0*** ();
abstract_0**** v8 = new abstract_0*** ();
abstract_0**** v9 = new abstract_0*** ();
abstract_0**** v10 = new abstract_0*** ();
v2 = new abstract_0*** ();
v2 = new abstract_0*** ();
v2 = new abstract_0*** ();
v2 = new abstract_0*** ();
return;

}
/* method id 403 */ C2::~C2 () {
abstract_0**** v20 = new abstract_0*** ();
abstract_0**** v21 = new abstract_0*** ();
abstract_0**** v22 = new abstract_0*** ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 404 */ C3::C3 () {
abstract_0**** v41 = new abstract_0*** ();
abstract_0**** v42 = new abstract_0*** ();
abstract_0**** v43 = new abstract_0*** ();
abstract_0**** v44 = new abstract_0*** ();
delete (new C1 ());
return;

}
/* method id 405 */ C3::~C3 () {
abstract_0**** v45 = new abstract_0*** ();
abstract_0**** v46 = new abstract_0*** ();
abstract_0**** v47 = new abstract_0*** ();
abstract_0**** v48 = new abstract_0*** ();
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void** func2 (abstract_1 v87, abstract_2 v88, abstract_2 v89, abstract_0**** v90) {
C1 v91;

v88 = v89;
v88 = v89;
return new void* ();

}
abstract_0 func3 (abstract_2 v92, abstract_3 v93, abstract_1 v94) {
abstract_0**** v95;

return abstract_0();

}
abstract_0 func4 (abstract_1 v96, abstract_0**** v97) {
abstract_1 v98;
abstract_4 v99;
abstract_4 v100;
abstract_3 v101;

return abstract_0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var0: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
4    | var1: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
8    | var2: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
12   | var3: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
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
class C1    size(32)
0    +---
0    | {vbptr}
4    | var4: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
8    | var5: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
12   | var6: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
16   +---
16   +--- (virtual base class C0)
16   | var0: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
20   | var1: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
24   | var2: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
28   | var3: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
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
class C2    size(48)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var39: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
12   | var40: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
16   +---
16   +--- (virtual base class C0)
16   | var0: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
20   | var1: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
24   | var2: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
28   | var3: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
32   +---
32   +--- (virtual base class C1)
32   | {vbptr}
36   | var4: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
40   | var5: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
44   | var6: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
48   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
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
0    | {vbptr}
4    | var83: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
8    | var84: AbstractType{1}
12   | var85: AbstractType{1}
16   | var86: AbstractType{1}
20   +---
20   +--- (virtual base class C0)
20   | var0: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
24   | var1: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
28   | var2: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
32   | var3: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
36   +---
36   +--- (virtual base class C1)
36   | {vbptr}
40   | var4: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
44   | var5: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
48   | var6: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
52   +---
52   +--- (virtual base class C2)
52   | {vfptr}
56   | {vbptr}
60   | var39: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
64   | var40: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{0}}}}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
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
 const size_t model_offset = 52;
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

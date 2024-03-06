// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 402 */ C2 ();
C2 (special_constructor);
C1**** v0;
C1**** v1;
C1**** v2;
C1**** v3;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 403 */ C3 ();
/* method id 404 */ virtual ~C3 ();
C3 (special_constructor);
C1**** v24;
C1**** v25;
C1**** v26;
};
C1*** func3 (C1**** v27, C1**** v28, C1**** v29, C1**** v30);
C1** func4 (C2 v35, C2 v36, C2 v37, C2 v38);
abstract_0* func5 (C2 v39, C2 v40, C2 v41, C2 v42);
C1*** func6 (C2 v47, C2 v48, C2 v49, C2 v50);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 402 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 403 */ C3::C3 () {
delete (new C1 ());
return;

}
/* method id 404 */ C3::~C3 () {
C1**** v8 = new C1*** ();
C1**** v9 = new C1*** ();
C1**** v10 = new C1*** ();
C1**** v11 = new C1*** ();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

C1*** func3 (C1**** v27, C1**** v28, C1**** v29, C1**** v30) {
C1**** v31;
C1**** v32;
C1**** v33;
C1**** v34;

return ((C1***) 0);

}
C1** func4 (C2 v35, C2 v36, C2 v37, C2 v38) {

return new C1* ();

}
abstract_0* func5 (C2 v39, C2 v40, C2 v41, C2 v42) {
C2 v43;
C2 v44;
C2 v45;
C2 v46;

return new abstract_0 ();

}
C1*** func6 (C2 v47, C2 v48, C2 v49, C2 v50) {
C2 v51;
C2 v52;
C1**** v53;
C2 v54;

return new C1** ();

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
class C1    size(4)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
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
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(16)
0    +---
0    | var0: DeletablePtrType{PtrType{DeletablePtrType{PtrType{ClassType{1}}}}}
4    | var1: DeletablePtrType{PtrType{DeletablePtrType{PtrType{ClassType{1}}}}}
8    | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{ClassType{1}}}}}
12   | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{ClassType{1}}}}}
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var24: DeletablePtrType{PtrType{DeletablePtrType{PtrType{ClassType{1}}}}}
12   | var25: DeletablePtrType{PtrType{DeletablePtrType{PtrType{ClassType{1}}}}}
16   | var26: DeletablePtrType{PtrType{DeletablePtrType{PtrType{ClassType{1}}}}}
20   +---
20   +--- (virtual base class C0)
20   +---
20   +--- (virtual base class C1)
20   | {vbptr}
24   +---
24   +--- (virtual base class C2)
24   | var0: DeletablePtrType{PtrType{DeletablePtrType{PtrType{ClassType{1}}}}}
28   | var1: DeletablePtrType{PtrType{DeletablePtrType{PtrType{ClassType{1}}}}}
32   | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{ClassType{1}}}}}
36   | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{ClassType{1}}}}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
 const size_t model_offset = 24;
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

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
/* method id 402 */ virtual void*** func2 ();
/* method id 403 */ void**** func2 (void**** v0);
/* method id 404 */ void func0 ();
/* method id 405 */ C1 ();
C1 (special_constructor);
void**** v2;
void**** v3;
void**** v4;
void**** v5;
};
struct C2 : public virtual C0, public C1 {
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ C2 ();
/* method id 409 */ virtual void** func5 (abstract_0 v13, void**** v14);
C2 (special_constructor);
C1 v23;
C1 v24;
C1 v25;
C1 v26;
};
struct C3 : public virtual C0, public virtual C2 {
/* method id 410 */ C3 ();
C3 (special_constructor);
C1 v39;
C1 v40;
C1 v41;
C1 v42;
};
void** func7 (C1 v43, C1 v44, abstract_0 v45, abstract_0 v46);
void** func8 (C1 v51);
void** func9 (void**** v52);
void** func10 (C1 v57, C1 v58, C1 v59, void**** v60);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void*** C1::func2 () {
return new void** ();

}
/* method id 403 */ void**** C1::func2 (void**** v0) {
void**** v1 = new void*** ();
return v0;

}
/* method id 404 */ void C1::func0 () {
return;

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::~C2 () {
void**** v6 = new void*** ();
return;

}
/* method id 408 */ C2::C2 () {
C1 v7 = *(&(*((new C1 ()))));
delete (new C2 ());
return;

}
/* method id 409 */ void** C2::func5 (abstract_0 v13, void**** v14) {
abstract_0 v15 = abstract_0();
C1 v16 = *(((C1*) 0));
abstract_0 v17 = abstract_0();
C1 v18 = *(((C1*) 0));
return new void* ();

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
abstract_0 v27 = abstract_0();
C1 v28 = *(((C1*) 0));
C1 v29 = *(((C1*) 0));
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

void** func7 (C1 v43, C1 v44, abstract_0 v45, abstract_0 v46) {
C1 v47;
C1 v48;
C1 v49;
abstract_0 v50;

::func9(new void*** ());
::func9(new void*** ());
::func9(new void*** ());
::func9(new void*** ());
return new void* ();

}
void** func8 (C1 v51) {

delete (new C1 ());
return new void* ();

}
void** func9 (void**** v52) {
C1 v53;
void**** v54;
C1 v55;
C1 v56;

return new void* ();

}
void** func10 (C1 v57, C1 v58, C1 v59, void**** v60) {
C1 v61;
C1 v62;

::func8(v57);
::func8(v57);
::func8(v57);
::func8(v57);
return new void* ();

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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | var4: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
20   | var5: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
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
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(140)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | | var4: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
20   | | var5: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
24   | +---
24   | var23: ClassType{1}
52   | var24: ClassType{1}
80   | var25: ClassType{1}
108  | var26: ClassType{1}
136  +---
136  +--- (virtual base class C0)
136  | {vfptr}
140  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 140;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 136;
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
class C3    size(256)
0    +---
0    | {vbptr}
4    | var39: ClassType{1}
32   | var40: ClassType{1}
60   | var41: ClassType{1}
88   | var42: ClassType{1}
116  +---
116  +--- (virtual base class C0)
116  | {vfptr}
120  +---
120  +--- (virtual base class C2)
120  | +--- (base class C1)
120  | | {vfptr}
124  | | {vbptr}
128  | | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
132  | | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
136  | | var4: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
140  | | var5: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
144  | +---
144  | var23: ClassType{1}
172  | var24: ClassType{1}
200  | var25: ClassType{1}
228  | var26: ClassType{1}
256  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 256;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 116;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 120;
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

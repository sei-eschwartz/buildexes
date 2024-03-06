// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void func0 ();
/* method id 401 */ virtual void* func0 (void**** v0);
/* method id 402 */ virtual ~C0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
void**** v15;
void**** v16;
void**** v17;
void**** v18;
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
/* method id 405 */ ~C1 ();
/* method id 406 */ void func0 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ virtual void func1 ();
/* method id 409 */ virtual void* func0 (void**** v54);
/* method id 410 */ virtual void func0 ();
/* method id 411 */ C2 ();
C2 (special_constructor);
abstract_0 v55;
abstract_0 v56;
abstract_0 v57;
abstract_0 v58;
};
struct C3 : public C2 {
/* method id 412 */ void func0 ();
/* method id 413 */ C3 ();
C3 (special_constructor);
abstract_0 v60;
abstract_0 v61;
abstract_0 v62;
};
void func5 ();
void** func6 (abstract_3 v67, abstract_3 v68, abstract_1* v69);
void*** func7 (abstract_0 v74, abstract_0 v75, void**** v76, C3 v77);
// definitions
/* method id 400 */ void C0::func0 () {
delete (new C3 ());
v15 = v17;
return ::func5();

}
/* method id 401 */ void* C0::func0 (void**** v0) {
void**** v1 = new void*** ();
void**** v2 = new void*** ();
void**** v3 = new void*** ();
void**** v4 = new void*** ();
return ((void*) 0);

}
/* method id 402 */ C0::~C0 () {
void**** v5 = new void*** ();
void**** v6 = new void*** ();
return;

}
/* method id 403 */ C0::C0 () {
void**** v11 = new void*** ();
void**** v12 = new void*** ();
void**** v13 = new void*** ();
void**** v14 = new void*** ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
void**** v19 = new void*** ();
void**** v20 = new void*** ();
void**** v21 = new void*** ();
void**** v22 = new void*** ();
return;

}
/* method id 405 */ C1::~C1 () {
abstract_0 v35 = abstract_0();
abstract_0 v36 = abstract_0();
void**** v37 = new void*** ();
v18 = v17;
v18 = v17;
return;

}
/* method id 406 */ void C1::func0 () {
abstract_0 v47 = abstract_0();
abstract_0 v48 = abstract_0();
void**** v49 = new void*** ();
abstract_0 v50 = abstract_0();
::func6(abstract_3(), abstract_3(), new abstract_1 ());
::func6(abstract_3(), abstract_3(), new abstract_1 ());
::func6(abstract_3(), abstract_3(), new abstract_1 ());
::func6(abstract_3(), abstract_3(), new abstract_1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::~C2 () {
return;

}
/* method id 408 */ void C2::func1 () {
abstract_0 v51 = abstract_0();
void**** v52 = new void*** ();
void**** v53 = new void*** ();
return;

}
/* method id 409 */ void* C2::func0 (void**** v54) {
return ((void*) 0);

}
/* method id 410 */ void C2::func0 () {
return;

}
/* method id 411 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 412 */ void C3::func0 () {
abstract_0 v59 = abstract_0();
return;

}
/* method id 413 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func5 () {
abstract_0 v63;
abstract_0 v64;
void**** v65;
abstract_3 v66;

return;

}
void** func6 (abstract_3 v67, abstract_3 v68, abstract_1* v69) {
abstract_1* v70;
C3 v71;
abstract_0 v72;
abstract_0 v73;

delete (new C1 ());
return new void* ();

}
void*** func7 (abstract_0 v74, abstract_0 v75, void**** v76, C3 v77) {
abstract_0 v78;

return ((void***) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var15: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | var16: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | var17: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var18: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 20;
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
4    | {vtordisp for vbase 0}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var15: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var16: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   | var17: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
24   | var18: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
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
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(52)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var55: AbstractType{0}
12   | var56: AbstractType{0}
16   | var57: AbstractType{0}
20   | var58: AbstractType{0}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   | var15: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
36   | var16: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
40   | var17: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
44   | var18: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
48   +---
48   +--- (virtual base class C1)
48   | {vbptr}
52   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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
 const size_t model_offset = 48;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(64)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | | var55: AbstractType{0}
12   | | var56: AbstractType{0}
16   | | var57: AbstractType{0}
20   | | var58: AbstractType{0}
24   | +---
24   | var60: AbstractType{0}
28   | var61: AbstractType{0}
32   | var62: AbstractType{0}
36   | {vtordisp for vbase 0}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   | var15: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
48   | var16: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
52   | var17: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
56   | var18: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
60   +---
60   +--- (virtual base class C1)
60   | {vbptr}
64   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 64;
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

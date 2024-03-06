// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
void**** v12;
void**** v13;
void**** v14;
void**** v15;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual ~C1 ();
/* method id 405 */ C1 ();
C1 (special_constructor);
void**** v26;
void**** v27;
void**** v28;
void**** v29;
};
struct C2 : public C1 {
/* method id 406 */ virtual void* func0 (void**** v30);
/* method id 407 */ virtual void func0 ();
/* method id 408 */ C2 ();
/* method id 409 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1 v40;
abstract_1 v41;
void**** v42;
abstract_1 v43;
};
struct C3 : public virtual C1 {
/* method id 410 */ C3 ();
/* method id 411 */ virtual void func0 ();
C3 (special_constructor);
abstract_1 v47;
void**** v48;
abstract_1 v49;
abstract_1 v50;
};
void* func2 (abstract_1 v51, abstract_1 v52, void**** v53, abstract_1 v54);
abstract_0 func3 (abstract_1 v56, abstract_1 v57, abstract_1 v58, abstract_1 v59);
void* func4 (abstract_1 v64, abstract_1 v65, void**** v66, abstract_1 v67);
void* func5 (abstract_1 v69);
// definitions
/* method id 400 */ void C0::func0 () {
return;

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
void**** v7 = new void*** ();
void**** v8 = new void*** ();
return;

}
/* method id 403 */ C0::C0 () {
void**** v9 = new void*** ();
void**** v10 = new void*** ();
void**** v11 = new void*** ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::~C1 () {
void**** v16 = new void*** ();
void**** v17 = new void*** ();
void**** v18 = new void*** ();
return;

}
/* method id 405 */ C1::C1 () {
void**** v19 = new void*** ();
void**** v20 = new void*** ();
void**** v21 = new void*** ();
void**** v22 = new void*** ();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ void* C2::func0 (void**** v30) {
void**** v31 = new void*** ();
void**** v32 = new void*** ();
return ::func2(abstract_1(), abstract_1(), v29, abstract_1());

}
/* method id 407 */ void C2::func0 () {
return;

}
/* method id 408 */ C2::C2 () {
abstract_1 v33 = abstract_1();
abstract_1 v34 = abstract_1();
void**** v35 = new void*** ();
return;

}
/* method id 409 */ C2::~C2 () {
abstract_1 v36 = abstract_1();
abstract_1 v37 = abstract_1();
abstract_1 v38 = abstract_1();
abstract_1 v39 = abstract_1();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
abstract_1 v44 = abstract_1();
abstract_1 v45 = abstract_1();
return;

}
/* method id 411 */ void C3::func0 () {
void**** v46 = new void*** ();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void* func2 (abstract_1 v51, abstract_1 v52, void**** v53, abstract_1 v54) {
abstract_1 v55;

return ::func5(v52);

}
abstract_0 func3 (abstract_1 v56, abstract_1 v57, abstract_1 v58, abstract_1 v59) {
abstract_1 v60;
abstract_1 v61;
abstract_1 v62;
void**** v63;

return abstract_0();

}
void* func4 (abstract_1 v64, abstract_1 v65, void**** v66, abstract_1 v67) {
abstract_1 v68;

return ((void*) 0);

}
void* func5 (abstract_1 v69) {

return ::func4(v69, v69, new void*** (), v69);

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var15: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
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
class C1    size(40)
0    +---
0    | {vbptr}
4    | var26: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | var27: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | var28: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var29: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
28   | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
32   | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
36   | var15: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
40   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 40;
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
class C2    size(60)
0    +---
0    | +--- (base class C1)
0    | | {vbptr}
4    | | var26: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | | var27: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | | var28: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | | var29: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   | +---
20   | var40: AbstractType{1}
24   | var41: AbstractType{1}
28   | var42: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
32   | var43: AbstractType{1}
36   | {vtordisp for vbase 0}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
48   | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
52   | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
56   | var15: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
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
class C3    size(64)
0    +---
0    | {vbptr}
4    | var47: AbstractType{1}
8    | var48: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | var49: AbstractType{1}
16   | var50: AbstractType{1}
20   | {vtordisp for vbase 0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
32   | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
36   | var14: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
40   | var15: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
44   +---
44   +--- (virtual base class C1)
44   | {vbptr}
48   | var26: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
52   | var27: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
56   | var28: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
60   | var29: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 44;
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

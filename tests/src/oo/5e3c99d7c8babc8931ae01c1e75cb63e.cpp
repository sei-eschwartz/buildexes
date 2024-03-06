// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
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
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ C1 ();
/* method id 405 */ virtual abstract_1 func0 (abstract_0* v8, abstract_0* v9, C0* v10, abstract_0* v11);
C1 (special_constructor);
C0 v12;
C0* v13;
C0* v14;
C0 v15;
};
struct C2 : public C1 {
/* method id 406 */ C2 ();
C2 (special_constructor);
C0* v16;
};
struct C3 : public virtual C2 {
/* method id 408 */ virtual C0 func0 (C0* v17, C0 v18, C0* v19, C0 v20);
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ virtual abstract_0 func4 ();
C3 (special_constructor);
abstract_3** v41;
C0* v42;
C0* v43;
C0 v44;
};
abstract_3 func6 (C0* v45, abstract_3** v46, C0* v47, abstract_1** v48);
C0** func7 (C0* v52, C0* v53, abstract_5 v54);
C0** func8 (C0* v58, C0* v59, C0 v60, C0* v61);
C0* func9 (abstract_3** v63, C0* v64, abstract_1** v65, C0* v66);
// definitions
/* method id 400 */ C0::~C0 () {
::func7(this, this, abstract_5());
::func7(this, this, abstract_5());
::func7(this, this, abstract_5());
::func7(this, this, abstract_5());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
::func7(v13, v13, abstract_5());
::func7(v13, v13, abstract_5());
::func7(v13, v13, abstract_5());
::func7(v13, v13, abstract_5());
return v13;

}
/* method id 403 */ C1::~C1 () {
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
abstract_1** v3 = new abstract_1* ();
return;

}
/* method id 404 */ C1::C1 () {
abstract_1** v4 = new abstract_1* ();
C0* v5 = ((C0*) 0);
abstract_1** v6 = new abstract_1* ();
C0 v7 = *((new C0 ()));
return;

}
/* method id 405 */ abstract_1 C1::func0 (abstract_0* v8, abstract_0* v9, C0* v10, abstract_0* v11) {
return abstract_1();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C0 C3::func0 (C0* v17, C0 v18, C0* v19, C0 v20) {
C0 v21 = *(((C0*) 0));
return v15;

}
/* method id 409 */ C3::C3 () {
abstract_1** v22 = new abstract_1* ();
abstract_2 v23 = abstract_2();
abstract_0* v24 = new abstract_0 ();
C0* v25 = ((C0*) 0);
return;

}
/* method id 410 */ C3::~C3 () {
C0* v26 = ((C0*) 0);
C0* v27 = ((C0*) 0);
abstract_3** v28 = new abstract_3* ();
return;

}
/* method id 411 */ abstract_0 C3::func4 () {
abstract_5 v37 = abstract_5();
abstract_4 v38 = abstract_4();
C0 v39 = *(&(*(((C0*) 0))));
C0* v40 = &(*(&(*(((C0*) 0)))));
return abstract_0();

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_3 func6 (C0* v45, abstract_3** v46, C0* v47, abstract_1** v48) {
C0* v49;
C0* v50;
abstract_5 v51;

return abstract_3();

}
C0** func7 (C0* v52, C0* v53, abstract_5 v54) {
C0* v55;
C0* v56;
abstract_5 v57;

return ((C0**) 0);

}
C0** func8 (C0* v58, C0* v59, C0 v60, C0* v61) {
abstract_5 v62;

delete (new C1 ());
return ((C0**) 0);

}
C0* func9 (abstract_3** v63, C0* v64, abstract_1** v65, C0* v66) {
C0* v67;
abstract_5 v68;

return v64;

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
8    | var12: ClassType{0}
12   | var13: PtrType{ClassType{0}}
16   | var14: PtrType{ClassType{0}}
20   | var15: ClassType{0}
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
class C2    size(32)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var12: ClassType{0}
12   | | var13: PtrType{ClassType{0}}
16   | | var14: PtrType{ClassType{0}}
20   | | var15: ClassType{0}
24   | +---
24   | var16: PtrType{ClassType{0}}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
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
class C3    size(56)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var41: DeletablePtrType{PtrType{AbstractType{3}}}
12   | var42: PtrType{ClassType{0}}
16   | var43: PtrType{ClassType{0}}
20   | var44: ClassType{0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C2)
28   | +--- (base class C1)
28   | | {vfptr}
32   | | {vbptr}
36   | | var12: ClassType{0}
40   | | var13: PtrType{ClassType{0}}
44   | | var14: PtrType{ClassType{0}}
48   | | var15: ClassType{0}
52   | +---
52   | var16: PtrType{ClassType{0}}
56   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 56;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

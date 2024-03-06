// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ abstract_0 func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3, abstract_0** v4);
/* method id 402 */ ~C0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual abstract_0* func1 ();
/* method id 405 */ virtual void func2 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_0** v11;
abstract_0** v12;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 408 */ virtual void func3 ();
/* method id 409 */ void func4 ();
/* method id 410 */ virtual abstract_0 func0 ();
/* method id 411 */ C2 ();
C2 (special_constructor);
abstract_1 v22;
};
struct C3 : public virtual C0, public virtual C1, public virtual C2 {
/* method id 413 */ virtual ~C3 ();
/* method id 414 */ C3 ();
/* method id 415 */ virtual abstract_0 func4 ();
/* method id 416 */ abstract_0* func0 (abstract_1 v35, abstract_3 v36, abstract_3 v37, abstract_2 v38);
C3 (special_constructor);
abstract_3 v43;
abstract_5 v44;
abstract_2 v45;
abstract_1 v46;
};
abstract_0* func7 (abstract_5 v47);
abstract_0 func8 (abstract_1 v52, abstract_5 v53);
void func9 (abstract_1 v57, abstract_1 v58, abstract_1 v59, abstract_1 v60);
abstract_0* func10 (void* v65, abstract_1 v66, abstract_5 v67);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
return ((abstract_0*) 0);

}
/* method id 401 */ abstract_0 C0::func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3, abstract_0** v4) {
abstract_0** v5 = new abstract_0* ();
return abstract_0();

}
/* method id 402 */ C0::~C0 () {
return;

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_0* C1::func1 () {
return ((abstract_0*) 0);

}
/* method id 405 */ void C1::func2 () {
abstract_0** v6 = ((abstract_0**) 0);
abstract_0** v7 = ((abstract_0**) 0);
abstract_0** v8 = ((abstract_0**) 0);
return (((C2*) 0))->C2::func3();

}
/* method id 406 */ C1::C1 () {
abstract_0** v9 = ((abstract_0**) 0);
abstract_0** v10 = new abstract_0* ();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ void C2::func3 () {
return;

}
/* method id 409 */ void C2::func4 () {
abstract_0** v13 = ((abstract_0**) 0);
abstract_0** v14 = ((abstract_0**) 0);
abstract_0** v15 = ((abstract_0**) 0);
return;

}
/* method id 410 */ abstract_0 C2::func0 () {
abstract_0** v16 = ((abstract_0**) 0);
abstract_0** v17 = ((abstract_0**) 0);
(&(*((new C1 ()))))->C1::func1();
(&(*((new C1 ()))))->C1::func1();
return abstract_0();

}
/* method id 411 */ C2::C2 () {
abstract_0** v18 = ((abstract_0**) 0);
abstract_0** v19 = ((abstract_0**) 0);
abstract_0** v20 = ((abstract_0**) 0);
abstract_0** v21 = ((abstract_0**) 0);
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 413 */ C3::~C3 () {
return;

}
/* method id 414 */ C3::C3 () {
abstract_0** v23 = new abstract_0* ();
abstract_1 v24 = abstract_1();
C2 v25 = *((new C2 ()));
abstract_1 v26 = abstract_1();
delete (new C1 ());
return;

}
/* method id 415 */ abstract_0 C3::func4 () {
abstract_0** v31 = ((abstract_0**) 0);
void* v32 = ((void*) 0);
abstract_2 v33 = abstract_2();
abstract_1 v34 = abstract_1();
return abstract_0();

}
/* method id 416 */ abstract_0* C3::func0 (abstract_1 v35, abstract_3 v36, abstract_3 v37, abstract_2 v38) {
abstract_1 v39 = abstract_1();
abstract_0** v40 = new abstract_0* ();
abstract_3 v41 = abstract_3();
abstract_4 v42 = abstract_4();
delete (new C2 ());
return ((abstract_0*) 0);

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func7 (abstract_5 v47) {
abstract_1 v48;
abstract_1 v49;
abstract_5 v50;
abstract_1 v51;

delete (new C2 ());
return ((abstract_0*) 0);

}
abstract_0 func8 (abstract_1 v52, abstract_5 v53) {
abstract_1 v54;
abstract_1 v55;
abstract_5 v56;

return abstract_0();

}
void func9 (abstract_1 v57, abstract_1 v58, abstract_1 v59, abstract_1 v60) {
abstract_3 v61;
abstract_1 v62;
C2 v63;
abstract_1 v64;

delete (new C1 ());
return;

}
abstract_0* func10 (void* v65, abstract_1 v66, abstract_5 v67) {
abstract_1 v68;
abstract_1 v69;
abstract_3 v70;
abstract_1 v71;

return new abstract_0 ();

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var11: PtrType{PtrType{AbstractType{0}}}
12   | var12: PtrType{PtrType{AbstractType{0}}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
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
class C2    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var22: AbstractType{1}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var11: PtrType{PtrType{AbstractType{0}}}
28   | var12: PtrType{PtrType{AbstractType{0}}}
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
 const size_t model_offset = 12;
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
 const size_t model_offset = 16;
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
8    | var43: AbstractType{3}
12   | var44: AbstractType{5}
16   | var45: AbstractType{2}
20   | var46: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var11: PtrType{PtrType{AbstractType{0}}}
40   | var12: PtrType{PtrType{AbstractType{0}}}
44   +---
44   +--- (virtual base class C2)
44   | {vfptr}
48   | {vbptr}
52   | var22: AbstractType{1}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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
 const size_t model_offset = 44;
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

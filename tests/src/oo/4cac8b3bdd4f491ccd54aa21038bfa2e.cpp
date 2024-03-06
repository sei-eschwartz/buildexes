// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_5 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct abstract_11 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_1*** func0 ();
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ virtual abstract_0* func0 (abstract_1*** v1, abstract_2 v2);
/* method id 403 */ virtual abstract_1*** func1 (abstract_1*** v8, abstract_1*** v9, abstract_3 v10, abstract_2 v11);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1*** v12;
};
struct C1  {
/* method id 405 */ C1 ();
C1 (special_constructor);
abstract_3 v13;
abstract_1*** v14;
abstract_0**** v15;
abstract_0**** v16;
};
struct C2 : public virtual C0, public C1 {
/* method id 406 */ virtual abstract_0 func3 (abstract_1*** v17, abstract_4 v18, abstract_1*** v19, abstract_1*** v20);
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ virtual abstract_1** func1 ();
/* method id 409 */ virtual abstract_0*** func0 (abstract_1*** v22, abstract_6 v23, abstract_1*** v24, abstract_0**** v25);
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_4 v30;
abstract_1*** v31;
};
struct C3 : public C1, public virtual C0 {
/* method id 411 */ C3 ();
C3 (special_constructor);
};
abstract_0*** func7 (abstract_3 v32, abstract_5* v33);
abstract_1** func8 (abstract_4 v37, abstract_1*** v38, void* v39, abstract_9 v40);
abstract_0* func9 (abstract_10 v45, abstract_9 v46, abstract_4 v47, abstract_9 v48);
void* func10 ();
// definitions
/* method id 400 */ abstract_1*** C0::func0 () {
delete (new C1 ());
return new abstract_1** ();

}
/* method id 401 */ C0::~C0 () {
abstract_2 v0 = abstract_2();
return;

}
/* method id 402 */ abstract_0* C0::func0 (abstract_1*** v1, abstract_2 v2) {
return ((abstract_0*) 0);

}
/* method id 403 */ abstract_1*** C0::func1 (abstract_1*** v8, abstract_1*** v9, abstract_3 v10, abstract_2 v11) {
delete (new C2 ());
v10 = v10;
return new abstract_1** ();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 406 */ abstract_0 C2::func3 (abstract_1*** v17, abstract_4 v18, abstract_1*** v19, abstract_1*** v20) {
return abstract_0();

}
/* method id 407 */ C2::~C2 () {
abstract_5* v21 = new abstract_5 ();
return;

}
/* method id 408 */ abstract_1** C2::func1 () {
v13 = v13;
return new abstract_1* ();

}
/* method id 409 */ abstract_0*** C2::func0 (abstract_1*** v22, abstract_6 v23, abstract_1*** v24, abstract_0**** v25) {
abstract_7 v26 = abstract_7();
C0 v27 = *((new C0 ()));
abstract_8 v28 = abstract_8();
abstract_2 v29 = abstract_2();
return ((abstract_0***) 0);

}
/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 411 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

abstract_0*** func7 (abstract_3 v32, abstract_5* v33) {
abstract_5* v34;
abstract_2 v35;
abstract_2 v36;

return ((abstract_0***) 0);

}
abstract_1** func8 (abstract_4 v37, abstract_1*** v38, void* v39, abstract_9 v40) {
abstract_9 v41;
abstract_1*** v42;
abstract_1**** v43;
abstract_2 v44;

delete (new C3 ());
return new abstract_1* ();

}
abstract_0* func9 (abstract_10 v45, abstract_9 v46, abstract_4 v47, abstract_9 v48) {

delete (new C0 ());
return new abstract_0 ();

}
void* func10 () {
abstract_8 v49;
abstract_5* v50;
abstract_11 v51;
abstract_1*** v52;

delete (new C0 ());
return ((void*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var12: PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}
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
class C1    size(16)
0    +---
0    | var13: AbstractType{3}
4    | var14: PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}
8    | var15: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
12   | var16: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
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
class C2    size(40)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | var13: AbstractType{3}
8    | | var14: PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}
12   | | var15: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
16   | | var16: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
20   | +---
20   | {vbptr}
24   | var30: AbstractType{4}
28   | var31: PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}
32   +---
32   +--- (virtual base class C0)
32   | {vfptr}
36   | var12: PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
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
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(28)
0    +---
0    | +--- (base class C1)
0    | | var13: AbstractType{3}
4    | | var14: PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}
8    | | var15: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
12   | | var16: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{0}}}}}
16   | +---
16   | {vbptr}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var12: PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}
28   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 28;
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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

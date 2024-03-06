// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct abstract_11 { int x; };
struct abstract_12 { int x; };
struct abstract_13 { int x; };
struct abstract_14 { int x; };
struct abstract_15 { int x; };
struct abstract_16 { int x; };
struct abstract_17 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_18 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2**** func0 ();
/* method id 401 */ virtual abstract_0* func1 (abstract_4 v3, abstract_4 v4);
/* method id 402 */ abstract_1* func1 (abstract_3 v6, abstract_4 v7);
/* method id 403 */ virtual abstract_2** func1 (abstract_4 v12, abstract_3 v13);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 405 */ virtual void* func2 (abstract_3 v15, abstract_3 v16, abstract_4 v17, abstract_4 v18);
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ virtual abstract_2 func1 ();
/* method id 408 */ virtual void func0 (abstract_4 v20, abstract_4 v21);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_0* v24;
};
struct C2  {
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_0* v25;
abstract_4 v26;
abstract_4 v27;
abstract_4 v28;
};
struct C3 : public C1, public C2 {
/* method id 411 */ virtual abstract_2**** func0 ();
/* method id 412 */ C3 ();
/* method id 413 */ virtual ~C3 ();
C3 (special_constructor);
abstract_3 v33;
abstract_4 v34;
};
abstract_0* func5 (abstract_4 v35, abstract_4 v36, C3 v37, abstract_4 v38);
abstract_10 func6 (abstract_4 v40);
void*** func7 (abstract_17* v41, abstract_5 v42);
abstract_0* func8 (C3 v46, abstract_4 v47, abstract_4 v48, abstract_4 v49);
// definitions
/* method id 400 */ abstract_2**** C0::func0 () {
abstract_3 v0 = abstract_3();
abstract_3 v1 = abstract_3();
abstract_4 v2 = abstract_4();
return new abstract_2*** ();

}
/* method id 401 */ abstract_0* C0::func1 (abstract_4 v3, abstract_4 v4) {
abstract_3 v5 = abstract_3();
::func6(v4);
::func6(v4);
::func6(v4);
::func6(v4);
return ((abstract_0*) 0);

}
/* method id 402 */ abstract_1* C0::func1 (abstract_3 v6, abstract_4 v7) {
abstract_3 v8 = abstract_3();
abstract_3 v9 = abstract_3();
abstract_5 v10 = abstract_5();
abstract_5 v11 = abstract_5();
delete (new C2 ());
return ((abstract_1*) 0);

}
/* method id 403 */ abstract_2** C0::func1 (abstract_4 v12, abstract_3 v13) {
abstract_3 v14 = abstract_3();
return ((abstract_2**) 0);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ void* C1::func2 (abstract_3 v15, abstract_3 v16, abstract_4 v17, abstract_4 v18) {
return ((void*) 0);

}
/* method id 406 */ C1::~C1 () {
abstract_0* v19 = new abstract_0 ();
return;

}
/* method id 407 */ abstract_2 C1::func1 () {
return abstract_2();

}
/* method id 408 */ void C1::func0 (abstract_4 v20, abstract_4 v21) {
abstract_3 v22 = abstract_3();
abstract_3 v23 = abstract_3();
return;

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C2::C2 () {
return;

}
C2::C2 (special_constructor)  {}

/* method id 411 */ abstract_2**** C3::func0 () {
::func6(v28);
::func6(v28);
::func6(v28);
::func6(v28);
return new abstract_2*** ();

}
/* method id 412 */ C3::C3 () {
return;

}
/* method id 413 */ C3::~C3 () {
abstract_0* v29 = ((abstract_0*) 0);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func5 (abstract_4 v35, abstract_4 v36, C3 v37, abstract_4 v38) {
C3 v39;

return ((abstract_0*) 0);

}
abstract_10 func6 (abstract_4 v40) {

return abstract_10();

}
void*** func7 (abstract_17* v41, abstract_5 v42) {
abstract_18 v43;
abstract_4 v44;
abstract_3 v45;

return new void** ();

}
abstract_0* func8 (C3 v46, abstract_4 v47, abstract_4 v48, abstract_4 v49) {
abstract_4 v50;
abstract_0* v51;
abstract_4 v52;
abstract_4 v53;

return v51;

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
class C1    size(8)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var24: PtrType{AbstractType{0}}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
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
class C2    size(16)
0    +---
0    | var25: PtrType{AbstractType{0}}
4    | var26: AbstractType{4}
8    | var27: AbstractType{4}
12   | var28: AbstractType{4}
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
class C3    size(32)
0    +---
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | +---
4    | | var24: PtrType{AbstractType{0}}
8    | +---
8    | +--- (base class C2)
8    | | var25: PtrType{AbstractType{0}}
12   | | var26: AbstractType{4}
16   | | var27: AbstractType{4}
20   | | var28: AbstractType{4}
24   | +---
24   | var33: AbstractType{3}
28   | var34: AbstractType{4}
32   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 32;
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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

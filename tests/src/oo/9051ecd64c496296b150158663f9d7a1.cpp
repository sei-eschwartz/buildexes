// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_6 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_7 { int x; };
struct C0;

struct C1;

struct C2;

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
/* method id 407 */ virtual void*** func1 ();
/* method id 408 */ virtual abstract_1 func0 (abstract_4 v20, abstract_4 v21);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_3 v26;
abstract_5 v27;
abstract_3 v28;
abstract_6* v29;
};
struct C2 : public virtual C0 {
/* method id 410 */ virtual abstract_0* func1 (abstract_3 v30);
/* method id 411 */ virtual abstract_0*** func1 (abstract_5 v31);
/* method id 412 */ virtual abstract_1* func0 (abstract_6* v34);
/* method id 413 */ ~C2 ();
/* method id 414 */ C2 ();
C2 (special_constructor);
};
abstract_0* func5 (abstract_4 v39, abstract_7 v40, abstract_3 v41, abstract_4 v42);
// definitions
/* method id 400 */ abstract_2**** C0::func0 () {
abstract_3 v0 = abstract_3();
abstract_3 v1 = abstract_3();
abstract_4 v2 = abstract_4();
return new abstract_2*** ();

}
/* method id 401 */ abstract_0* C0::func1 (abstract_4 v3, abstract_4 v4) {
abstract_3 v5 = abstract_3();
delete (new C2 ());
return new abstract_0 ();

}
/* method id 402 */ abstract_1* C0::func1 (abstract_3 v6, abstract_4 v7) {
abstract_3 v8 = abstract_3();
abstract_3 v9 = abstract_3();
abstract_5 v10 = abstract_5();
abstract_5 v11 = abstract_5();
return ((abstract_1*) 0);

}
/* method id 403 */ abstract_2** C0::func1 (abstract_4 v12, abstract_3 v13) {
abstract_3 v14 = abstract_3();
v12 = abstract_4();
v12 = abstract_4();
v12 = abstract_4();
v12 = abstract_4();
return ((abstract_2**) 0);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ void* C1::func2 (abstract_3 v15, abstract_3 v16, abstract_4 v17, abstract_4 v18) {
(((C1*) 0))->C1::func1();
(((C1*) 0))->C1::func1();
(((C1*) 0))->C1::func1();
(((C1*) 0))->C1::func1();
return ((void*) 0);

}
/* method id 406 */ C1::~C1 () {
abstract_6* v19 = new abstract_6 ();
return;

}
/* method id 407 */ void*** C1::func1 () {
return ((void***) 0);

}
/* method id 408 */ abstract_1 C1::func0 (abstract_4 v20, abstract_4 v21) {
abstract_4 v22 = abstract_4();
abstract_4 v23 = abstract_4();
abstract_4 v24 = abstract_4();
abstract_5 v25 = abstract_5();
return abstract_1();

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ abstract_0* C2::func1 (abstract_3 v30) {
return ((abstract_0*) 0);

}
/* method id 411 */ abstract_0*** C2::func1 (abstract_5 v31) {
abstract_6* v32 = ((abstract_6*) 0);
abstract_3 v33 = abstract_3();
return new abstract_0** ();

}
/* method id 412 */ abstract_1* C2::func0 (abstract_6* v34) {
abstract_6* v35 = ((abstract_6*) 0);
abstract_3 v36 = abstract_3();
v36 = v36;
v36 = v36;
v36 = v36;
return new abstract_1 ();

}
/* method id 413 */ C2::~C2 () {
abstract_4 v37 = abstract_4();
abstract_3 v38 = abstract_3();
return;

}
/* method id 414 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

abstract_0* func5 (abstract_4 v39, abstract_7 v40, abstract_3 v41, abstract_4 v42) {
abstract_4 v43;

delete (new C0 ());
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
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var26: AbstractType{3}
8    | var27: AbstractType{5}
12   | var28: AbstractType{3}
16   | var29: PtrType{AbstractType{6}}
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
class C2    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

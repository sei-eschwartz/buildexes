// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2);
/* method id 401 */ virtual abstract_0 func0 (abstract_0* v7, abstract_0* v8, abstract_1 v9);
/* method id 402 */ C0 ();
/* method id 403 */ virtual abstract_0* func0 ();
C0 (special_constructor);
abstract_3 v15;
};
struct C1 : public C0 {
/* method id 404 */ void func1 (abstract_1 v16, abstract_0* v17);
/* method id 405 */ virtual abstract_0* func1 (abstract_0* v19);
/* method id 406 */ abstract_0 func0 (abstract_0* v22, abstract_0* v23, abstract_0* v24);
/* method id 407 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_5 v28;
abstract_0** v29;
};
struct C3  {
/* method id 409 */ virtual abstract_0 func1 ();
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ C3 ();
/* method id 412 */ virtual abstract_0* func2 (abstract_4 v72, abstract_6 v73, abstract_3 v74, abstract_1 v75);
C3 (special_constructor);
C1 v77;
};
abstract_0 func4 (abstract_0* v78, C1 v79, abstract_0** v80, abstract_1 v81);
abstract_0* func5 (abstract_0** v85, abstract_1 v86, abstract_5 v87, abstract_2 v88);
void* func6 (abstract_5 v92, abstract_5 v93, abstract_1 v94, abstract_5 v95);
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2) {
return abstract_0();

}
/* method id 401 */ abstract_0 C0::func0 (abstract_0* v7, abstract_0* v8, abstract_1 v9) {
abstract_0* v10 = ((abstract_0*) 0);
delete (new C1 ());
return (((C3*) 0))->C3::func1();

}
/* method id 402 */ C0::C0 () {
abstract_2 v11 = abstract_2();
abstract_1 v12 = abstract_1();
abstract_1 v13 = abstract_1();
abstract_3 v14 = abstract_3();
v12 = abstract_1();
delete (new C3 ());
v12 = abstract_1();
return;

}
/* method id 403 */ abstract_0* C0::func0 () {
return ((abstract_0*) 0);

}
C0::C0 (special_constructor)  {}

/* method id 404 */ void C1::func1 (abstract_1 v16, abstract_0* v17) {
abstract_4 v18 = abstract_4();
delete (new C0 ());
return;

}
/* method id 405 */ abstract_0* C1::func1 (abstract_0* v19) {
abstract_0* v20 = new abstract_0 ();
abstract_0* v21 = new abstract_0 ();
return new abstract_0 ();

}
/* method id 406 */ abstract_0 C1::func0 (abstract_0* v22, abstract_0* v23, abstract_0* v24) {
abstract_5 v25 = abstract_5();
abstract_0* v26 = ((abstract_0*) 0);
abstract_2 v27 = abstract_2();
v24 = v26;
v24 = v26;
return abstract_0();

}
/* method id 407 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 409 */ abstract_0 C3::func1 () {
abstract_0* v30 = ((abstract_0*) 0);
return abstract_0();

}
/* method id 410 */ C3::~C3 () {
abstract_1 v31 = abstract_1();
abstract_1 v32 = abstract_1();
abstract_1 v33 = abstract_1();
abstract_1 v34 = abstract_1();
return;

}
/* method id 411 */ C3::C3 () {
abstract_6 v35 = abstract_6();
abstract_1 v36 = abstract_1();
abstract_1 v37 = abstract_1();
abstract_1 v38 = abstract_1();
return;

}
/* method id 412 */ abstract_0* C3::func2 (abstract_4 v72, abstract_6 v73, abstract_3 v74, abstract_1 v75) {
abstract_0* v76 = new abstract_0 ();
delete (new C1 ());
return v76;

}
C3::C3 (special_constructor)  {}

abstract_0 func4 (abstract_0* v78, C1 v79, abstract_0** v80, abstract_1 v81) {
abstract_7 v82;
abstract_1 v83;
abstract_0* v84;

return abstract_0();

}
abstract_0* func5 (abstract_0** v85, abstract_1 v86, abstract_5 v87, abstract_2 v88) {
abstract_5 v89;
abstract_4 v90;
abstract_1 v91;

return ((abstract_0*) 0);

}
void* func6 (abstract_5 v92, abstract_5 v93, abstract_1 v94, abstract_5 v95) {

delete (new C1 ());
return ((void*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var15: AbstractType{3}
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
class C1    size(8)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var15: AbstractType{3}
8    | +---
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
class C2    size(8)
0    +---
0    | var28: AbstractType{5}
4    | var29: PtrType{PtrType{AbstractType{0}}}
8    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(12)
0    +---
0    | {vfptr}
4    | var77: ClassType{1}
12   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

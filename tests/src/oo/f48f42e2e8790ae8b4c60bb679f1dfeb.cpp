// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ abstract_1 func0 (abstract_2 v5);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 405 */ virtual abstract_1 func1 (abstract_0 v6);
/* method id 406 */ virtual abstract_1 func0 (abstract_0 v9, abstract_2 v10, abstract_0 v11);
/* method id 407 */ C1 ();
/* method id 408 */ abstract_1 func2 ();
C1 (special_constructor);
};
struct C2  {
/* method id 409 */ ~C2 ();
/* method id 410 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C0, public C2 {
/* method id 411 */ abstract_1 func3 (abstract_3 v29);
/* method id 412 */ virtual ~C3 ();
/* method id 413 */ virtual abstract_1 func4 (abstract_2 v35);
/* method id 414 */ void func0 (abstract_0 v38, abstract_2 v39, abstract_1*** v40);
/* method id 415 */ C3 ();
C3 (special_constructor);
abstract_1*** v45;
abstract_0 v46;
};
void func6 ();
void func7 (abstract_2 v51, abstract_2 v52, abstract_2 v53, abstract_3 v54);
abstract_1* func8 (abstract_0 v59, abstract_2 v60, abstract_0 v61);
abstract_1* func9 (abstract_2 v64, abstract_2 v65, abstract_2 v66, abstract_1* v67);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 () {
return (((C1*) 0))->C1::func2();

}
/* method id 403 */ abstract_1 C0::func0 (abstract_2 v5) {
return (((C1*) 0))->C1::func2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func1 (abstract_0 v6) {
abstract_0 v7 = abstract_0();
abstract_0 v8 = abstract_0();
return (((C1*) 0))->C1::func2();

}
/* method id 406 */ abstract_1 C1::func0 (abstract_0 v9, abstract_2 v10, abstract_0 v11) {
return abstract_1();

}
/* method id 407 */ C1::C1 () {
abstract_3 v12 = abstract_3();
abstract_0 v13 = abstract_0();
abstract_2 v14 = abstract_2();
abstract_2 v15 = abstract_2();
return;

}
/* method id 408 */ abstract_1 C1::func2 () {
abstract_2 v26 = abstract_2();
abstract_1* v27 = new abstract_1 ();
abstract_3 v28 = abstract_3();
delete (new C1 ());
return ((new C1 ()))->C1::func0(abstract_0(), v26, abstract_0());

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::~C2 () {
return;

}
/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 411 */ abstract_1 C3::func3 (abstract_3 v29) {
abstract_0 v30 = abstract_0();
abstract_0 v31 = abstract_0();
abstract_1* v32 = new abstract_1 ();
C2 v33 = *(&(*(((C2*) 0))));
delete (new C1 ());
return abstract_1();

}
/* method id 412 */ C3::~C3 () {
abstract_0 v34 = abstract_0();
return;

}
/* method id 413 */ abstract_1 C3::func4 (abstract_2 v35) {
abstract_2 v36 = abstract_2();
abstract_0 v37 = abstract_0();
return abstract_1();

}
/* method id 414 */ void C3::func0 (abstract_0 v38, abstract_2 v39, abstract_1*** v40) {
abstract_1** v41 = new abstract_1* ();
abstract_1** v42 = new abstract_1* ();
abstract_1*** v43 = new abstract_1** ();
abstract_3 v44 = abstract_3();
return;

}
/* method id 415 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

void func6 () {
abstract_2 v47;
abstract_2 v48;
abstract_3 v49;
abstract_2 v50;

return;

}
void func7 (abstract_2 v51, abstract_2 v52, abstract_2 v53, abstract_3 v54) {
abstract_1** v55;
abstract_2 v56;
abstract_1*** v57;
abstract_2 v58;

delete (new C2 ());
return ::func6();

}
abstract_1* func8 (abstract_0 v59, abstract_2 v60, abstract_0 v61) {
abstract_2 v62;
abstract_0 v63;

return new abstract_1 ();

}
abstract_1* func9 (abstract_2 v64, abstract_2 v65, abstract_2 v66, abstract_1* v67) {
abstract_2 v68;
abstract_1** v69;
abstract_0 v70;

return v67;

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
class C1    size(4)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
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
class C2    size(0)
0    +---
0    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(20)
0    +---
0    | {vfptr}
4    | +--- (base class C2)
4    | +---
4    | {vbptr}
8    | var45: PtrType{PtrType{PtrType{AbstractType{1}}}}
12   | var46: AbstractType{0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
 const size_t model_offset = 4;
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

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2);
/* method id 401 */ virtual abstract_0* func0 (abstract_0* v7, abstract_0** v8, abstract_0* v9);
/* method id 402 */ abstract_0** func0 (abstract_0** v10, abstract_0** v11, abstract_0* v12);
/* method id 403 */ virtual abstract_0** func0 (abstract_0** v14, abstract_0** v15, abstract_1 v16);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_0** v18;
abstract_0* v19;
};
struct C1  {
/* method id 405 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 406 */ abstract_0** func2 (abstract_0* v20, abstract_0** v21, abstract_0* v22, abstract_0** v23);
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_0** v33;
abstract_0** v34;
abstract_1 v35;
};
struct C3 : public virtual C1 {
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ virtual abstract_0* func3 (abstract_2 v40, abstract_0* v41, abstract_2 v42);
/* method id 410 */ C3 ();
/* method id 411 */ virtual abstract_0** func4 (abstract_0** v46, C1 v47, abstract_0* v48);
C3 (special_constructor);
abstract_0* v49;
};
abstract_0* func5 (C1 v50);
abstract_0* func6 (abstract_3 v55, C1 v56, abstract_0** v57);
abstract_0** func7 (abstract_0** v58);
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2) {
delete (new C3 ());
return abstract_0();

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0* v7, abstract_0** v8, abstract_0* v9) {
return new abstract_0 ();

}
/* method id 402 */ abstract_0** C0::func0 (abstract_0** v10, abstract_0** v11, abstract_0* v12) {
abstract_0* v13 = ((abstract_0*) 0);
v18 = v18;
v18 = v18;
v18 = v18;
v18 = v18;
return v18;

}
/* method id 403 */ abstract_0** C0::func0 (abstract_0** v14, abstract_0** v15, abstract_1 v16) {
abstract_0* v17 = ((abstract_0*) 0);
return new abstract_0* ();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 406 */ abstract_0** C2::func2 (abstract_0* v20, abstract_0** v21, abstract_0* v22, abstract_0** v23) {
abstract_0* v24 = new abstract_0 ();
abstract_0* v25 = new abstract_0 ();
abstract_0* v26 = new abstract_0 ();
abstract_1 v27 = abstract_1();
return v34;

}
/* method id 407 */ C2::C2 () {
abstract_1 v28 = abstract_1();
abstract_0** v29 = ((abstract_0**) 0);
abstract_0** v30 = ((abstract_0**) 0);
abstract_0* v31 = ((abstract_0*) 0);
return;

}
C2::C2 (special_constructor)  {}

/* method id 408 */ C3::~C3 () {
abstract_0* v36 = ((abstract_0*) 0);
abstract_1 v37 = abstract_1();
abstract_2 v38 = abstract_2();
abstract_2 v39 = abstract_2();
return;

}
/* method id 409 */ abstract_0* C3::func3 (abstract_2 v40, abstract_0* v41, abstract_2 v42) {
C1 v43 = *(&(*(((C1*) 0))));
abstract_0* v44 = new abstract_0 ();
return ((abstract_0*) 0);

}
/* method id 410 */ C3::C3 () {
abstract_0* v45 = ((abstract_0*) 0);
return;

}
/* method id 411 */ abstract_0** C3::func4 (abstract_0** v46, C1 v47, abstract_0* v48) {
return v46;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0* func5 (C1 v50) {
abstract_0* v51;
abstract_0* v52;
abstract_0** v53;
C1 v54;

delete (new C1 ());
return v51;

}
abstract_0* func6 (abstract_3 v55, C1 v56, abstract_0** v57) {

return new abstract_0 ();

}
abstract_0** func7 (abstract_0** v58) {

v58 = v58;
v58 = new abstract_0* ();
v58 = new abstract_0* ();
v58 = new abstract_0* ();
return ((abstract_0**) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var18: PtrType{PtrType{AbstractType{0}}}
8    | var19: PtrType{AbstractType{0}}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(0)
0    +---
0    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(12)
0    +---
0    | var33: PtrType{PtrType{AbstractType{0}}}
4    | var34: PtrType{PtrType{AbstractType{0}}}
8    | var35: AbstractType{1}
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
}
/*
class C3    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var49: PtrType{AbstractType{0}}
12   +---
12   +--- (virtual base class C1)
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
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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

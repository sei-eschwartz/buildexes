// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 401 */ abstract_1 func0 (abstract_0 v4, abstract_0 v5, abstract_0 v6);
/* method id 402 */ virtual ~C0 ();
/* method id 403 */ virtual abstract_1 func0 (abstract_0 v7, abstract_0 v8, abstract_2 v9, abstract_2 v10);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1* v11;
};
struct C1 : public C0 {
/* method id 405 */ C1 ();
/* method id 406 */ ~C1 ();
/* method id 407 */ abstract_1 func1 (abstract_1* v17, abstract_0 v18);
/* method id 408 */ virtual abstract_1 func1 (abstract_0 v22);
C1 (special_constructor);
abstract_0 v23;
abstract_0 v24;
};
struct C2  {
/* method id 409 */ virtual abstract_1 func0 ();
/* method id 410 */ ~C2 ();
/* method id 411 */ virtual abstract_1* func1 (abstract_0 v26, abstract_1* v27, abstract_3 v28, abstract_2 v29);
/* method id 412 */ C2 ();
C2 (special_constructor);
};
struct C3  {
/* method id 413 */ virtual ~C3 ();
/* method id 414 */ virtual abstract_1* func2 (abstract_1* v32);
/* method id 415 */ C3 ();
C3 (special_constructor);
abstract_2 v36;
abstract_1* v37;
abstract_4 v38;
abstract_2 v39;
};
abstract_1* func3 (abstract_2 v40, abstract_2 v41, abstract_2 v42, abstract_1* v43);
abstract_1* func4 (abstract_2 v48, abstract_2 v49, abstract_2 v50, abstract_1* v51);
abstract_1 func5 ();
abstract_1** func6 (abstract_5 v57, abstract_5 v58, abstract_4 v59, abstract_1* v60);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3) {
v3 = abstract_0();
v3 = abstract_0();
return ((new C1 ()))->C1::func1(v11, v1);

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v4, abstract_0 v5, abstract_0 v6) {
return (((C1*) 0))->C1::func1(v11, v5);

}
/* method id 402 */ C0::~C0 () {
return;

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v7, abstract_0 v8, abstract_2 v9, abstract_2 v10) {
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {
return;

}
/* method id 406 */ C1::~C1 () {
return;

}
/* method id 407 */ abstract_1 C1::func1 (abstract_1* v17, abstract_0 v18) {
abstract_1* v19 = new abstract_1 ();
abstract_0 v20 = abstract_0();
return abstract_1();

}
/* method id 408 */ abstract_1 C1::func1 (abstract_0 v22) {
return ::func5();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ abstract_1 C2::func0 () {
return (((C1*) 0))->C1::func1(((abstract_1*) 0), abstract_0());

}
/* method id 410 */ C2::~C2 () {
abstract_2 v25 = abstract_2();
return;

}
/* method id 411 */ abstract_1* C2::func1 (abstract_0 v26, abstract_1* v27, abstract_3 v28, abstract_2 v29) {
abstract_1* v30 = new abstract_1 ();
return v30;

}
/* method id 412 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 413 */ C3::~C3 () {
abstract_2 v31 = abstract_2();
return;

}
/* method id 414 */ abstract_1* C3::func2 (abstract_1* v32) {
abstract_3 v33 = abstract_3();
abstract_2 v34 = abstract_2();
abstract_2 v35 = abstract_2();
return v37;

}
/* method id 415 */ C3::C3 () {
return;

}
C3::C3 (special_constructor)  {}

abstract_1* func3 (abstract_2 v40, abstract_2 v41, abstract_2 v42, abstract_1* v43) {
abstract_2 v44;
abstract_2 v45;
abstract_2 v46;
abstract_2 v47;

delete (new C0 ());
return ::func4(v41, abstract_2(), v41, v43);

}
abstract_1* func4 (abstract_2 v48, abstract_2 v49, abstract_2 v50, abstract_1* v51) {
abstract_2 v52;
abstract_2 v53;
abstract_1* v54;
abstract_0 v55;

return v51;

}
abstract_1 func5 () {
abstract_0 v56;

return (((C1*) 0))->C1::func1(abstract_0());

}
abstract_1** func6 (abstract_5 v57, abstract_5 v58, abstract_4 v59, abstract_1* v60) {

return new abstract_1* ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var11: PtrType{AbstractType{1}}
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
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var11: PtrType{AbstractType{1}}
8    | +---
8    | var23: AbstractType{0}
12   | var24: AbstractType{0}
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
class C2    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 4;
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
4    | var36: AbstractType{2}
8    | var37: PtrType{AbstractType{1}}
12   | var38: AbstractType{4}
16   | var39: AbstractType{2}
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
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

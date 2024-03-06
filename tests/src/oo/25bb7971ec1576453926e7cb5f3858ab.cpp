// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_5 { int x; };
struct abstract_11 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v7, abstract_1 v8);
/* method id 403 */ virtual abstract_2 func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 405 */ virtual abstract_2 func1 (abstract_3 v14, abstract_4 v15, abstract_1 v16, abstract_1 v17);
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ virtual abstract_5 func1 ();
/* method id 408 */ virtual abstract_5 func0 (abstract_1 v19, abstract_6 v20, abstract_1 v21, abstract_4 v22);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_5* v27;
abstract_1 v28;
};
struct C2 : public C1 {
/* method id 410 */ virtual abstract_5 func2 ();
/* method id 411 */ virtual ~C2 ();
/* method id 412 */ C2 ();
/* method id 413 */ virtual abstract_2 func0 ();
C2 (special_constructor);
abstract_9 v39;
};
struct C3 : public C1 {
/* method id 414 */ virtual abstract_2 func4 ();
/* method id 415 */ virtual ~C3 ();
/* method id 416 */ virtual abstract_2 func5 (abstract_5* v43, abstract_1 v44, C0 v45);
/* method id 417 */ abstract_2 func6 (abstract_6 v46);
/* method id 418 */ C3 ();
C3 (special_constructor);
};
abstract_11 func8 (abstract_1 v51, abstract_0 v52);
abstract_2 func9 (abstract_0 v53);
abstract_5 func10 ();
abstract_5 func11 (abstract_6 v58, abstract_1 v59);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return abstract_2();

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
return abstract_2();

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
return abstract_2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func1 (abstract_3 v14, abstract_4 v15, abstract_1 v16, abstract_1 v17) {
delete (new C2 ());
return ::func9(abstract_0());

}
/* method id 406 */ C1::~C1 () {
abstract_5* v18 = new abstract_5 ();
return;

}
/* method id 407 */ abstract_5 C1::func1 () {
delete (new C2 ());
return abstract_5();

}
/* method id 408 */ abstract_5 C1::func0 (abstract_1 v19, abstract_6 v20, abstract_1 v21, abstract_4 v22) {
abstract_7 v23 = abstract_7();
C0 v24 = *((new C0 ()));
abstract_8 v25 = abstract_8();
abstract_0 v26 = abstract_0();
return ::func11(v20, v21);

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ abstract_5 C2::func2 () {
abstract_6 v29 = abstract_6();
abstract_0 v30 = abstract_0();
abstract_5* v31 = new abstract_5 ();
abstract_7 v32 = abstract_7();
return ::func11(v29, v28);

}
/* method id 411 */ C2::~C2 () {
::func9(abstract_0());
::func9(abstract_0());
::func9(abstract_0());
return;

}
/* method id 412 */ C2::C2 () {
return;

}
/* method id 413 */ abstract_2 C2::func0 () {
abstract_0 v37 = abstract_0();
abstract_8 v38 = abstract_8();
return (((C3*) 0))->C3::func4();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 414 */ abstract_2 C3::func4 () {
abstract_5* v40 = ((abstract_5*) 0);
abstract_3 v41 = abstract_3();
delete (new C1 ());
return abstract_2();

}
/* method id 415 */ C3::~C3 () {
abstract_0 v42 = abstract_0();
return;

}
/* method id 416 */ abstract_2 C3::func5 (abstract_5* v43, abstract_1 v44, C0 v45) {
delete (new C1 ());
return abstract_2();

}
/* method id 417 */ abstract_2 C3::func6 (abstract_6 v46) {
abstract_1 v47 = abstract_1();
abstract_1 v48 = abstract_1();
abstract_10 v49 = abstract_10();
abstract_10 v50 = abstract_10();
::func9(abstract_0());
::func9(abstract_0());
::func9(abstract_0());
::func9(abstract_0());
return (((C2*) 0))->C2::func0();

}
/* method id 418 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_11 func8 (abstract_1 v51, abstract_0 v52) {

return abstract_11();

}
abstract_2 func9 (abstract_0 v53) {
abstract_10 v54;
C0 v55;

delete (new C1 ());
return (((C0*) 0))->C0::func0();

}
abstract_5 func10 () {
abstract_0 v56;
abstract_0 v57;

return abstract_5();

}
abstract_5 func11 (abstract_6 v58, abstract_1 v59) {
C0 v60;
abstract_1 v61;
C1 v62;

delete (new C3 ());
return ::func10();

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
class C1    size(12)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var27: PtrType{AbstractType{5}}
8    | var28: AbstractType{1}
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
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
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | +---
4    | | var27: PtrType{AbstractType{5}}
8    | | var28: AbstractType{1}
12   | +---
12   | var39: AbstractType{9}
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
class C3    size(12)
0    +---
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | +---
4    | | var27: PtrType{AbstractType{5}}
8    | | var28: AbstractType{1}
12   | +---
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
 const size_t model_offset = 0;
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

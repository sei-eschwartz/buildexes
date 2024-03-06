// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_8 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
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
/* method id 402 */ C0* func2 ();
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ abstract_0 func3 ();
/* method id 405 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 406 */ virtual abstract_2 func5 ();
/* method id 407 */ virtual abstract_4 func6 ();
/* method id 408 */ virtual C0 func7 ();
/* method id 409 */ virtual abstract_5 func3 ();
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_1 v13;
abstract_1 v14;
abstract_1 v15;
abstract_1 v16;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 412 */ virtual ~C3 ();
/* method id 413 */ C3 ();
/* method id 414 */ virtual C0* func7 (C1 v22, C1 v23, abstract_1 v24, C1 v25);
/* method id 415 */ virtual C0* func0 (abstract_3 v30, abstract_0* v31);
C3 (special_constructor);
abstract_1 v36;
abstract_1 v37;
C1 v38;
abstract_1 v39;
};
C0* func11 (abstract_1 v40, C0** v41, abstract_1 v42, abstract_1 v43);
abstract_5 func12 (abstract_0* v45);
C0** func13 (abstract_3 v46, abstract_0* v47);
abstract_8 func14 (abstract_1 v52, abstract_1 v53, abstract_1 v54, abstract_1 v55);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
return ((C0*) 0);

}
/* method id 403 */ C1::~C1 () {
abstract_1 v1 = abstract_1();
abstract_1 v2 = abstract_1();
abstract_0* v3 = new abstract_0 ();
::func12(v3);
::func12(v3);
::func12(v3);
::func12(v3);
return;

}
/* method id 404 */ abstract_0 C1::func3 () {
C0** v4 = new C0* ();
return abstract_0();

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ abstract_2 C2::func5 () {
C0** v5 = new C0* ();
abstract_3 v6 = abstract_3();
return abstract_2();

}
/* method id 407 */ abstract_4 C2::func6 () {
abstract_1 v7 = abstract_1();
abstract_0* v8 = new abstract_0 ();
delete (new C3 ());
return abstract_4();

}
/* method id 408 */ C0 C2::func7 () {
C0** v9 = new C0* ();
return *(&(*(((C0*) 0))));

}
/* method id 409 */ abstract_5 C2::func3 () {
C0** v10 = new C0* ();
abstract_1 v11 = abstract_1();
abstract_6 v12 = abstract_6();
return abstract_5();

}
/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::~C3 () {
abstract_7 v17 = abstract_7();
abstract_1 v18 = abstract_1();
abstract_0* v19 = ((abstract_0*) 0);
return;

}
/* method id 413 */ C3::C3 () {
C0** v20 = ((C0**) 0);
abstract_6 v21 = abstract_6();
::func12(new abstract_0 ());
::func12(new abstract_0 ());
::func12(new abstract_0 ());
::func12(new abstract_0 ());
return;

}
/* method id 414 */ C0* C3::func7 (C1 v22, C1 v23, abstract_1 v24, C1 v25) {
abstract_1 v26 = abstract_1();
abstract_3 v27 = abstract_3();
C1 v28 = *(&(*((new C1 ()))));
C1 v29 = *(&(*((new C1 ()))));
delete (new C1 ());
return ((C0*) 0);

}
/* method id 415 */ C0* C3::func0 (abstract_3 v30, abstract_0* v31) {
abstract_3 v32 = abstract_3();
abstract_1 v33 = abstract_1();
C0** v34 = new C0* ();
abstract_1 v35 = abstract_1();
return ((C0*) 0);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

C0* func11 (abstract_1 v40, C0** v41, abstract_1 v42, abstract_1 v43) {
C1 v44;

return ((C0*) 0);

}
abstract_5 func12 (abstract_0* v45) {

::func13(abstract_3(), v45);
::func13(abstract_3(), v45);
::func13(abstract_3(), v45);
::func13(abstract_3(), v45);
return abstract_5();

}
C0** func13 (abstract_3 v46, abstract_0* v47) {
abstract_1 v48;
abstract_3 v49;
C0** v50;
abstract_1 v51;

delete (new C3 ());
return ((C0**) 0);

}
abstract_8 func14 (abstract_1 v52, abstract_1 v53, abstract_1 v54, abstract_1 v55) {
abstract_1 v56;
C1 v57;

delete (new C1 ());
return abstract_8();

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
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
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
 const size_t model_offset = 4;
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
8    | var13: AbstractType{1}
12   | var14: AbstractType{1}
16   | var15: AbstractType{1}
20   | var16: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vbptr}
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
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(60)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var36: AbstractType{1}
12   | var37: AbstractType{1}
16   | var38: ClassType{1}
24   | var39: AbstractType{1}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   +---
32   +--- (virtual base class C1)
32   | {vbptr}
36   +---
36   +--- (virtual base class C2)
36   | {vfptr}
40   | {vbptr}
44   | var13: AbstractType{1}
48   | var14: AbstractType{1}
52   | var15: AbstractType{1}
56   | var16: AbstractType{1}
60   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 60;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
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
 const size_t model_offset = 36;
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

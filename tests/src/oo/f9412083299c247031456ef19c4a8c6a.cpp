// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ virtual abstract_2* func1 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_1 v3);
/* method id 402 */ virtual abstract_3 func1 (abstract_1 v5, abstract_1 v6, abstract_1 v7);
/* method id 403 */ virtual abstract_3* func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1 v9;
};
struct C1  {
/* method id 405 */ virtual ~C1 ();
/* method id 406 */ virtual abstract_3 func1 (abstract_1 v10, abstract_0 v11);
/* method id 407 */ virtual abstract_3** func0 ();
/* method id 408 */ abstract_4 func0 (abstract_1 v14, abstract_1 v15, abstract_1 v16);
/* method id 409 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public C1 {
/* method id 410 */ virtual abstract_4 func4 (abstract_1 v17, abstract_0 v18);
/* method id 411 */ C2 ();
/* method id 412 */ abstract_2 func1 ();
/* method id 413 */ virtual ~C2 ();
C2 (special_constructor);
abstract_5 v35;
abstract_0 v36;
abstract_0 v37;
abstract_1 v38;
};
struct C3 : public virtual C1, public virtual C0 {
/* method id 414 */ abstract_2* func4 (abstract_1 v39, abstract_2*** v40, abstract_1 v41);
/* method id 415 */ void func5 (abstract_1 v42, abstract_0 v43);
/* method id 416 */ virtual void func1 (abstract_0 v45);
/* method id 417 */ virtual ~C3 ();
/* method id 418 */ C3 ();
C3 (special_constructor);
abstract_0 v51;
abstract_1 v52;
abstract_0 v53;
abstract_1 v54;
};
abstract_2* func7 (abstract_5 v55, abstract_6 v56, abstract_1 v57, abstract_2*** v58);
abstract_2* func8 (abstract_2*** v63, abstract_1 v64, abstract_2* v65, abstract_1 v66);
abstract_2* func9 (abstract_2*** v69, abstract_1 v70, abstract_2* v71, abstract_1 v72);
abstract_2* func10 (abstract_1 v75, abstract_2*** v76, abstract_1 v77, abstract_2* v78);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C0 ());
return;

}
/* method id 401 */ abstract_2* C0::func1 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_1 v3) {
abstract_0 v4 = abstract_0();
return ((abstract_2*) 0);

}
/* method id 402 */ abstract_3 C0::func1 (abstract_1 v5, abstract_1 v6, abstract_1 v7) {
delete (new C1 ());
return abstract_3();

}
/* method id 403 */ abstract_3* C0::func0 () {
abstract_0 v8 = abstract_0();
delete (new C2 ());
return ((abstract_3*) 0);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::~C1 () {
delete (new C3 ());
return;

}
/* method id 406 */ abstract_3 C1::func1 (abstract_1 v10, abstract_0 v11) {
abstract_0 v12 = abstract_0();
return abstract_3();

}
/* method id 407 */ abstract_3** C1::func0 () {
abstract_0 v13 = abstract_0();
return ((abstract_3**) 0);

}
/* method id 408 */ abstract_4 C1::func0 (abstract_1 v14, abstract_1 v15, abstract_1 v16) {
return abstract_4();

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 410 */ abstract_4 C2::func4 (abstract_1 v17, abstract_0 v18) {
abstract_2* v19 = new abstract_2 ();
v17 = v38;
v17 = v38;
v17 = v38;
v17 = v38;
return abstract_4();

}
/* method id 411 */ C2::C2 () {
abstract_2* v20 = ((abstract_2*) 0);
delete (new C1 ());
return;

}
/* method id 412 */ abstract_2 C2::func1 () {
C1 v21 = *(&(*((new C1 ()))));
abstract_5 v22 = abstract_5();
delete (new C3 ());
return abstract_2();

}
/* method id 413 */ C2::~C2 () {
abstract_1 v31 = abstract_1();
abstract_1 v32 = abstract_1();
abstract_1 v33 = abstract_1();
abstract_1 v34 = abstract_1();
delete (new C0 ());
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 414 */ abstract_2* C3::func4 (abstract_1 v39, abstract_2*** v40, abstract_1 v41) {
v53 = v53;
v53 = v53;
return ((abstract_2*) 0);

}
/* method id 415 */ void C3::func5 (abstract_1 v42, abstract_0 v43) {
abstract_6 v44 = abstract_6();
delete (new C0 ());
return ((new C3 ()))->C3::func1(v51);

}
/* method id 416 */ void C3::func1 (abstract_0 v45) {
abstract_2*** v46 = new abstract_2** ();
delete (new C3 ());
return;

}
/* method id 417 */ C3::~C3 () {
abstract_1 v47 = abstract_1();
abstract_2* v48 = new abstract_2 ();
abstract_1 v49 = abstract_1();
abstract_1 v50 = abstract_1();
delete (new C0 ());
return;

}
/* method id 418 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

abstract_2* func7 (abstract_5 v55, abstract_6 v56, abstract_1 v57, abstract_2*** v58) {
abstract_1 v59;
abstract_1 v60;
abstract_2* v61;
abstract_1 v62;

return v61;

}
abstract_2* func8 (abstract_2*** v63, abstract_1 v64, abstract_2* v65, abstract_1 v66) {
abstract_1 v67;
abstract_0 v68;

v67 = abstract_1();
v67 = abstract_1();
v67 = abstract_1();
v67 = abstract_1();
return ((abstract_2*) 0);

}
abstract_2* func9 (abstract_2*** v69, abstract_1 v70, abstract_2* v71, abstract_1 v72) {
abstract_1 v73;
abstract_0 v74;

v72 = abstract_1();
v72 = abstract_1();
return v71;

}
abstract_2* func10 (abstract_1 v75, abstract_2*** v76, abstract_1 v77, abstract_2* v78) {
abstract_1 v79;
abstract_1 v80;
abstract_0 v81;

return v78;

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var9: AbstractType{1}
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
class C1    size(4)
0    +---
0    | {vfptr}
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
}
/*
class C2    size(32)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | +---
4    | {vbptr}
8    | var35: AbstractType{5}
12   | var36: AbstractType{0}
16   | var37: AbstractType{0}
20   | var38: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var9: AbstractType{1}
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
 const size_t model_offset = 24;
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
class C3    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var51: AbstractType{0}
12   | var52: AbstractType{1}
16   | var53: AbstractType{0}
20   | var54: AbstractType{1}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   | var9: AbstractType{1}
36   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
 const size_t model_offset = 28;
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

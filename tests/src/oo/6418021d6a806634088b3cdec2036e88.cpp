// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2**** func0 ();
/* method id 401 */ virtual abstract_0* func1 (abstract_4 v3, abstract_4 v4);
/* method id 402 */ virtual abstract_1* func1 (abstract_3 v6, abstract_4 v7);
/* method id 403 */ ~C0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_2**** func0 ();
/* method id 406 */ virtual abstract_1*** func0 (abstract_4 v14, abstract_3 v15, abstract_4 v16, C0 v17);
/* method id 407 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 409 */ C2 ();
C2 (special_constructor);
abstract_5 v20;
abstract_3 v21;
C0 v22;
C0 v23;
};
struct C3 : public virtual C1, public C2 {
/* method id 411 */ C3 ();
/* method id 412 */ virtual abstract_6 func5 (abstract_4 v26, abstract_8 v27, abstract_2* v28);
/* method id 413 */ virtual void*** func5 (abstract_4 v29);
C3 (special_constructor);
abstract_4 v31;
abstract_4 v32;
C2 v33;
};
abstract_1 func8 (C3 v34, C3 v35, C0 v36);
abstract_0*** func9 (abstract_3 v37, abstract_5 v38);
abstract_1* func10 ();
abstract_1** func11 (abstract_8 v44, C2 v45, abstract_4 v46, abstract_4 v47);
// definitions
/* method id 400 */ abstract_2**** C0::func0 () {
abstract_3 v0 = abstract_3();
abstract_3 v1 = abstract_3();
abstract_4 v2 = abstract_4();
return new abstract_2*** ();

}
/* method id 401 */ abstract_0* C0::func1 (abstract_4 v3, abstract_4 v4) {
abstract_3 v5 = abstract_3();
return new abstract_0 ();

}
/* method id 402 */ abstract_1* C0::func1 (abstract_3 v6, abstract_4 v7) {
abstract_3 v8 = abstract_3();
abstract_3 v9 = abstract_3();
abstract_5 v10 = abstract_5();
abstract_5 v11 = abstract_5();
delete (new C1 ());
return ((abstract_1*) 0);

}
/* method id 403 */ C0::~C0 () {
delete (new C1 ());
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2**** C1::func0 () {
abstract_4 v12 = abstract_4();
abstract_4 v13 = abstract_4();
return new abstract_2*** ();

}
/* method id 406 */ abstract_1*** C1::func0 (abstract_4 v14, abstract_3 v15, abstract_4 v16, C0 v17) {
C0 v18 = *(((C0*) 0));
C0 v19 = *(((C0*) 0));
delete (new C3 ());
return ((abstract_1***) 0);

}
/* method id 407 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 411 */ C3::C3 () {
abstract_8 v24 = abstract_8();
C0 v25 = *(((C0*) 0));
delete (new C2 ());
return;

}
/* method id 412 */ abstract_6 C3::func5 (abstract_4 v26, abstract_8 v27, abstract_2* v28) {
::func9(v21, v20);
::func9(v21, v20);
::func9(v21, v20);
return abstract_6();

}
/* method id 413 */ void*** C3::func5 (abstract_4 v29) {
C0 v30 = *(&(*((new C0 ()))));
return ((void***) 0);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_1 func8 (C3 v34, C3 v35, C0 v36) {

return abstract_1();

}
abstract_0*** func9 (abstract_3 v37, abstract_5 v38) {
abstract_9 v39;
abstract_4 v40;
abstract_3 v41;

return ((abstract_0***) 0);

}
abstract_1* func10 () {
abstract_4 v42;
abstract_4 v43;

::func9(abstract_3(), abstract_5());
::func9(abstract_3(), abstract_5());
return ((abstract_1*) 0);

}
abstract_1** func11 (abstract_8 v44, C2 v45, abstract_4 v46, abstract_4 v47) {
abstract_2* v48;

return new abstract_1* ();

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
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
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(36)
0    +---
0    | {vbptr}
4    | var20: AbstractType{5}
8    | var21: AbstractType{3}
12   | var22: ClassType{0}
16   | var23: ClassType{0}
20   | {vtordisp for vbase 0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
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
class C3    size(84)
0    +---
0    | {vfptr}
4    | +--- (base class C2)
4    | | {vbptr}
8    | | var20: AbstractType{5}
12   | | var21: AbstractType{3}
16   | | var22: ClassType{0}
20   | | var23: ClassType{0}
24   | +---
24   | var31: AbstractType{4}
28   | var32: AbstractType{4}
32   | var33: ClassType{2}
68   | {vtordisp for vbase 0}
72   +---
72   +--- (virtual base class C0)
72   | {vfptr}
76   +---
76   +--- (virtual base class C1)
76   | {vfptr}
80   | {vbptr}
84   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 84;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 76;
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

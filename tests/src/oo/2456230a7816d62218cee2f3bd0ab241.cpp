// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
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
/* method id 406 */ virtual abstract_0 func0 (abstract_0* v22, abstract_0* v23, abstract_0* v24);
/* method id 407 */ abstract_0* func1 ();
/* method id 408 */ C1 ();
C1 (special_constructor);
abstract_1 v25;
abstract_1 v26;
};
struct C2 : public virtual C1 {
/* method id 409 */ C2 ();
C2 (special_constructor);
abstract_1 v27;
abstract_1 v28;
abstract_1 v29;
abstract_1 v30;
};
struct C3 : public virtual C1 {
/* method id 410 */ C3 ();
/* method id 411 */ virtual ~C3 ();
/* method id 412 */ virtual abstract_0 func3 (abstract_0* v42, abstract_0* v43);
/* method id 413 */ virtual abstract_0* func0 (abstract_4 v44, abstract_3 v45);
C3 (special_constructor);
abstract_1 v49;
abstract_5 v50;
abstract_3 v51;
abstract_0* v52;
};
abstract_0* func4 (abstract_5 v53);
abstract_0* func5 (C1 v57, abstract_1 v58, abstract_1 v59, abstract_2 v60);
abstract_0* func6 ();
abstract_0* func7 (C1 v68, abstract_1 v69, abstract_1 v70, abstract_2 v71);
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0, abstract_0* v1, abstract_0* v2) {
v15 = v15;
v15 = v15;
v15 = v15;
v15 = v15;
return abstract_0();

}
/* method id 401 */ abstract_0 C0::func0 (abstract_0* v7, abstract_0* v8, abstract_1 v9) {
abstract_0* v10 = ((abstract_0*) 0);
delete (new C2 ());
return abstract_0();

}
/* method id 402 */ C0::C0 () {
abstract_2 v11 = abstract_2();
abstract_1 v12 = abstract_1();
abstract_1 v13 = abstract_1();
abstract_3 v14 = abstract_3();
v12 = abstract_1();
return;

}
/* method id 403 */ abstract_0* C0::func0 () {
v15 = v15;
v15 = v15;
v15 = v15;
v15 = v15;
return new abstract_0 ();

}
C0::C0 (special_constructor)  {}

/* method id 404 */ void C1::func1 (abstract_1 v16, abstract_0* v17) {
abstract_4 v18 = abstract_4();
return;

}
/* method id 405 */ abstract_0* C1::func1 (abstract_0* v19) {
abstract_0* v20 = new abstract_0 ();
abstract_0* v21 = new abstract_0 ();
return new abstract_0 ();

}
/* method id 406 */ abstract_0 C1::func0 (abstract_0* v22, abstract_0* v23, abstract_0* v24) {
return abstract_0();

}
/* method id 407 */ abstract_0* C1::func1 () {
delete (new C3 ());
return new abstract_0 ();

}
/* method id 408 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
abstract_2 v31 = abstract_2();
abstract_1 v32 = abstract_1();
abstract_1 v33 = abstract_1();
abstract_1 v34 = abstract_1();
v32 = v26;
return;

}
/* method id 411 */ C3::~C3 () {
abstract_1 v39 = abstract_1();
abstract_1 v40 = abstract_1();
abstract_1 v41 = abstract_1();
delete (new C2 ());
return;

}
/* method id 412 */ abstract_0 C3::func3 (abstract_0* v42, abstract_0* v43) {
v50 = abstract_5();
v50 = abstract_5();
v50 = abstract_5();
v50 = abstract_5();
return abstract_0();

}
/* method id 413 */ abstract_0* C3::func0 (abstract_4 v44, abstract_3 v45) {
C1 v46 = *(&(*((new C1 ()))));
abstract_1 v47 = abstract_1();
C2 v48 = *(&(*((new C2 ()))));
return v52;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0* func4 (abstract_5 v53) {
abstract_1 v54;
abstract_1 v55;
abstract_5 v56;

::func6();
::func6();
::func6();
::func6();
return ((abstract_0*) 0);

}
abstract_0* func5 (C1 v57, abstract_1 v58, abstract_1 v59, abstract_2 v60) {
abstract_1 v61;
abstract_1 v62;
abstract_5 v63;
abstract_1 v64;

return ((abstract_0*) 0);

}
abstract_0* func6 () {
abstract_1 v65;
abstract_1 v66;
abstract_5 v67;

::func4(v67);
::func4(v67);
::func4(v67);
::func4(v67);
return ((abstract_0*) 0);

}
abstract_0* func7 (C1 v68, abstract_1 v69, abstract_1 v70, abstract_2 v71) {
abstract_1 v72;
abstract_1 v73;
abstract_5 v74;
abstract_5 v75;

return new abstract_0 ();

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
class C1    size(16)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var15: AbstractType{3}
8    | +---
8    | var25: AbstractType{1}
12   | var26: AbstractType{1}
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
class C2    size(36)
0    +---
0    | {vbptr}
4    | var27: AbstractType{1}
8    | var28: AbstractType{1}
12   | var29: AbstractType{1}
16   | var30: AbstractType{1}
20   +---
20   +--- (virtual base class C1)
20   | +--- (base class C0)
20   | | {vfptr}
24   | | var15: AbstractType{3}
28   | +---
28   | var25: AbstractType{1}
32   | var26: AbstractType{1}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var49: AbstractType{1}
12   | var50: AbstractType{5}
16   | var51: AbstractType{3}
20   | var52: PtrType{AbstractType{0}}
24   +---
24   +--- (virtual base class C1)
24   | +--- (base class C0)
24   | | {vfptr}
28   | | var15: AbstractType{3}
32   | +---
32   | var25: AbstractType{1}
36   | var26: AbstractType{1}
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

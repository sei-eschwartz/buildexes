// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
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
abstract_3 v11;
};
struct C1 : public virtual C0 {
/* method id 405 */ C1 ();
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ virtual abstract_2** func1 ();
C1 (special_constructor);
abstract_1 v15;
abstract_0 v16;
abstract_2*** v17;
abstract_0 v18;
};
struct C2 : public virtual C1 {
/* method id 408 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C1 {
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ C3 ();
/* method id 412 */ abstract_2* func4 (abstract_1 v23, abstract_0 v24, abstract_1 v25, abstract_0 v26);
C3 (special_constructor);
abstract_1 v32;
abstract_4 v33;
abstract_1 v34;
abstract_1 v35;
};
abstract_2* func6 (abstract_1 v36, abstract_1 v37, abstract_3 v38, abstract_1 v39);
abstract_2* func7 (abstract_3 v44, abstract_1 v45, abstract_0 v46);
abstract_2* func8 (abstract_2*** v50, abstract_1 v51, abstract_3 v52, abstract_1 v53);
abstract_2* func9 (abstract_1 v56, abstract_0 v57, abstract_1 v58, abstract_1 v59);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
delete (new C1 ());
return abstract_2();

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
return abstract_2();

}
/* method id 403 */ abstract_2 C0::func0 () {
return abstract_2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {
abstract_2* v12 = new abstract_2 ();
abstract_2*** v13 = new abstract_2** ();
::func7(v11, v15, v16);
::func7(v11, v15, v16);
::func7(v11, v15, v16);
::func7(v11, v15, v16);
return;

}
/* method id 406 */ C1::~C1 () {
::func7(v11, v15, v16);
::func7(v11, v15, v16);
::func7(v11, v15, v16);
::func7(v11, v15, v16);
return;

}
/* method id 407 */ abstract_2** C1::func1 () {
abstract_0 v14 = abstract_0();
return ((abstract_2**) 0);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::~C3 () {
abstract_0 v19 = abstract_0();
abstract_1 v20 = abstract_1();
abstract_0 v21 = abstract_0();
delete (new C2 ());
return;

}
/* method id 411 */ C3::C3 () {
abstract_2* v22 = ((abstract_2*) 0);
delete (new C1 ());
v17 = v17;
return;

}
/* method id 412 */ abstract_2* C3::func4 (abstract_1 v23, abstract_0 v24, abstract_1 v25, abstract_0 v26) {
C0 v27 = *((new C0 ()));
abstract_3 v28 = abstract_3();
v17 = v17;
return new abstract_2 ();

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_2* func6 (abstract_1 v36, abstract_1 v37, abstract_3 v38, abstract_1 v39) {
abstract_1 v40;
abstract_0 v41;
abstract_1 v42;
abstract_0 v43;

return ((abstract_2*) 0);

}
abstract_2* func7 (abstract_3 v44, abstract_1 v45, abstract_0 v46) {
abstract_1 v47;
abstract_1 v48;
abstract_0 v49;

return ((abstract_2*) 0);

}
abstract_2* func8 (abstract_2*** v50, abstract_1 v51, abstract_3 v52, abstract_1 v53) {
abstract_1 v54;
abstract_0 v55;

::func7(v52, v54, v55);
::func7(v52, v54, v55);
::func7(v52, v54, v55);
::func7(v52, v54, v55);
return ((abstract_2*) 0);

}
abstract_2* func9 (abstract_1 v56, abstract_0 v57, abstract_1 v58, abstract_1 v59) {
abstract_1 v60;
abstract_3 v61;
abstract_1 v62;
abstract_1 v63;

return ((abstract_2*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var11: AbstractType{3}
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
class C1    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var15: AbstractType{1}
12   | var16: AbstractType{0}
16   | var17: PtrType{PtrType{PtrType{AbstractType{2}}}}
20   | var18: AbstractType{0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var11: AbstractType{3}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    | var11: AbstractType{3}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | {vbptr}
20   | var15: AbstractType{1}
24   | var16: AbstractType{0}
28   | var17: PtrType{PtrType{PtrType{AbstractType{2}}}}
32   | var18: AbstractType{0}
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
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(48)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var15: AbstractType{1}
12   | | var16: AbstractType{0}
16   | | var17: PtrType{PtrType{PtrType{AbstractType{2}}}}
20   | | var18: AbstractType{0}
24   | +---
24   | var32: AbstractType{1}
28   | var33: AbstractType{4}
32   | var34: AbstractType{1}
36   | var35: AbstractType{1}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   | var11: AbstractType{3}
48   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 48;
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

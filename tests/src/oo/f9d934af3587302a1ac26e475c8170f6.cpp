// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v7, abstract_1 v8);
/* method id 403 */ virtual abstract_2 func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ abstract_2 func0 (abstract_1 v14);
/* method id 406 */ virtual abstract_2 func2 (abstract_1 v15, abstract_0 v16);
/* method id 407 */ virtual abstract_2 func0 (abstract_1 v21, abstract_0 v22);
/* method id 408 */ C1 ();
C1 (special_constructor);
abstract_5 v23;
};
struct C2 : public virtual C0 {
/* method id 409 */ C2 ();
C2 (special_constructor);
abstract_5 v24;
abstract_5 v25;
abstract_5 v26;
abstract_1 v27;
};
struct C3 : public virtual C1, public C2 {
/* method id 410 */ abstract_2 func0 (abstract_5 v28, abstract_0 v29, abstract_0 v30, abstract_1 v31);
/* method id 411 */ abstract_2 func4 (abstract_1 v36, abstract_2** v37, abstract_1 v38);
/* method id 412 */ void func5 (abstract_1 v39, abstract_1 v40);
/* method id 413 */ C3 ();
C3 (special_constructor);
};
void func6 (abstract_4 v46, abstract_1 v47, abstract_3 v48, abstract_1 v49);
void func7 (abstract_1 v52, abstract_4 v53, abstract_1 v54, abstract_1 v55);
void func8 (abstract_1 v60, abstract_7 v61, abstract_1 v62, abstract_7 v63);
void func9 (abstract_1 v68, abstract_1 v69, abstract_1 v70, abstract_1 v71);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return (((C1*) 0))->C1::func2(abstract_1(), v1);

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
return ((new C1 ()))->C1::func2(v8, v10);

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
return ((new C1 ()))->C1::func2(abstract_1(), v13);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func0 (abstract_1 v14) {
return ((new C1 ()))->C1::func2(v14, abstract_0());

}
/* method id 406 */ abstract_2 C1::func2 (abstract_1 v15, abstract_0 v16) {
abstract_4 v17 = abstract_4();
abstract_3 v18 = abstract_3();
abstract_4 v19 = abstract_4();
abstract_0 v20 = abstract_0();
delete (new C1 ());
return ((new C1 ()))->C1::func0(v15, v20);

}
/* method id 407 */ abstract_2 C1::func0 (abstract_1 v21, abstract_0 v22) {
return (((C1*) 0))->C1::func2(abstract_1(), v22);

}
/* method id 408 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ abstract_2 C3::func0 (abstract_5 v28, abstract_0 v29, abstract_0 v30, abstract_1 v31) {
abstract_1 v32 = abstract_1();
abstract_1 v33 = abstract_1();
abstract_1 v34 = abstract_1();
abstract_1 v35 = abstract_1();
return abstract_2();

}
/* method id 411 */ abstract_2 C3::func4 (abstract_1 v36, abstract_2** v37, abstract_1 v38) {
return (((C1*) 0))->C1::func2(v36, abstract_0());

}
/* method id 412 */ void C3::func5 (abstract_1 v39, abstract_1 v40) {
abstract_6 v41 = abstract_6();
return;

}
/* method id 413 */ C3::C3 () {
abstract_2** v42 = new abstract_2* ();
abstract_1 v43 = abstract_1();
abstract_7 v44 = abstract_7();
abstract_4 v45 = abstract_4();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void func6 (abstract_4 v46, abstract_1 v47, abstract_3 v48, abstract_1 v49) {
abstract_1 v50;
abstract_7 v51;

return ::func8(v49, v51, v49, v51);

}
void func7 (abstract_1 v52, abstract_4 v53, abstract_1 v54, abstract_1 v55) {
abstract_2** v56;
abstract_1 v57;
abstract_1 v58;
abstract_3 v59;

return;

}
void func8 (abstract_1 v60, abstract_7 v61, abstract_1 v62, abstract_7 v63) {
abstract_1 v64;
abstract_1 v65;
abstract_1 v66;
abstract_2** v67;

return;

}
void func9 (abstract_1 v68, abstract_1 v69, abstract_1 v70, abstract_1 v71) {
abstract_1 v72;
abstract_3 v73;
abstract_1 v74;
abstract_2** v75;

return;

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
8    | var23: AbstractType{5}
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
class C2    size(24)
0    +---
0    | {vbptr}
4    | var24: AbstractType{5}
8    | var25: AbstractType{5}
12   | var26: AbstractType{5}
16   | var27: AbstractType{1}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(36)
0    +---
0    | +--- (base class C2)
0    | | {vbptr}
4    | | var24: AbstractType{5}
8    | | var25: AbstractType{5}
12   | | var26: AbstractType{5}
16   | | var27: AbstractType{1}
20   | +---
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var23: AbstractType{5}
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

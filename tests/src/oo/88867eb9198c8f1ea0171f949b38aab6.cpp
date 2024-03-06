// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_6 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_7 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
abstract_0 v0;
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual abstract_1 func0 (abstract_0 v1);
/* method id 403 */ virtual abstract_1 func2 (abstract_0 v2, abstract_0 v3, abstract_0 v4);
/* method id 404 */ virtual abstract_1 func3 (abstract_0 v8);
/* method id 405 */ virtual abstract_3 func4 (abstract_2 v13, abstract_1* v14, abstract_2 v15, abstract_1* v16);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_2 v19;
abstract_1* v20;
abstract_1* v21;
abstract_4 v22;
};
struct C2 : public C0 {
/* method id 408 */ C2 ();
/* method id 409 */ virtual ~C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 410 */ virtual abstract_6 func2 (abstract_1* v35, C1 v36, abstract_1* v37, C2 v38);
/* method id 411 */ virtual abstract_1 func1 (abstract_1* v43);
/* method id 412 */ virtual abstract_3 func1 ();
/* method id 413 */ C3 ();
C3 (special_constructor);
abstract_1* v49;
abstract_1* v50;
abstract_7 v51;
};
abstract_3 func9 (abstract_1* v52, abstract_1* v53, abstract_4 v54, abstract_1* v55);
abstract_3 func10 (abstract_1* v60, abstract_1* v61, abstract_1* v62, abstract_7 v63);
abstract_3 func11 (abstract_1* v64, abstract_7 v65);
abstract_1 func12 (abstract_1* v70, abstract_7 v71);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_1 C1::func0 (abstract_0 v1) {
delete (new C2 ());
return ((new C1 ()))->C1::func2(v1, v1, v1);

}
/* method id 403 */ abstract_1 C1::func2 (abstract_0 v2, abstract_0 v3, abstract_0 v4) {
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
abstract_0 v7 = abstract_0();
delete (new C1 ());
return (((C1*) 0))->C1::func0(abstract_0());

}
/* method id 404 */ abstract_1 C1::func3 (abstract_0 v8) {
abstract_0 v9 = abstract_0();
abstract_1* v10 = new abstract_1 ();
abstract_2 v11 = abstract_2();
abstract_2 v12 = abstract_2();
return abstract_1();

}
/* method id 405 */ abstract_3 C1::func4 (abstract_2 v13, abstract_1* v14, abstract_2 v15, abstract_1* v16) {
abstract_1* v17 = new abstract_1 ();
abstract_1* v18 = new abstract_1 ();
return ::func10(new abstract_1 (), new abstract_1 (), new abstract_1 (), abstract_7());

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {
abstract_5 v23 = abstract_5();
abstract_1* v24 = new abstract_1 ();
abstract_0 v25 = abstract_0();
(((C1*) 0))->C1::func0(v0);
return;

}
/* method id 409 */ C2::~C2 () {
abstract_1* v26 = ((abstract_1*) 0);
abstract_1* v27 = ((abstract_1*) 0);
abstract_1* v28 = ((abstract_1*) 0);
abstract_1* v29 = ((abstract_1*) 0);
delete (new C3 ());
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ abstract_6 C3::func2 (abstract_1* v35, C1 v36, abstract_1* v37, C2 v38) {
abstract_1* v39 = ((abstract_1*) 0);
abstract_1* v40 = ((abstract_1*) 0);
abstract_5 v41 = abstract_5();
abstract_1* v42 = ((abstract_1*) 0);
return abstract_6();

}
/* method id 411 */ abstract_1 C3::func1 (abstract_1* v43) {
abstract_1* v44 = ((abstract_1*) 0);
abstract_2 v45 = abstract_2();
C2 v46 = *(((C2*) 0));
abstract_7 v47 = abstract_7();
return ::func12(v44, v51);

}
/* method id 412 */ abstract_3 C3::func1 () {
C1 v48 = *(((C1*) 0));
return abstract_3();

}
/* method id 413 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_3 func9 (abstract_1* v52, abstract_1* v53, abstract_4 v54, abstract_1* v55) {
abstract_1* v56;
C1 v57;
abstract_1* v58;
abstract_1* v59;

return ::func11(new abstract_1 (), abstract_7());

}
abstract_3 func10 (abstract_1* v60, abstract_1* v61, abstract_1* v62, abstract_7 v63) {

return ::func11(v61, v63);

}
abstract_3 func11 (abstract_1* v64, abstract_7 v65) {
abstract_1* v66;
abstract_1* v67;
abstract_7 v68;
abstract_1* v69;

return abstract_3();

}
abstract_1 func12 (abstract_1* v70, abstract_7 v71) {
abstract_1* v72;
abstract_1* v73;
C1 v74;
abstract_1* v75;

return abstract_1();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var0: AbstractType{0}
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
8    | var19: AbstractType{2}
12   | var20: PtrType{AbstractType{1}}
16   | var21: PtrType{AbstractType{1}}
20   | var22: AbstractType{4}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var0: AbstractType{0}
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
class C2    size(8)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var0: AbstractType{0}
8    | +---
8    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var49: PtrType{AbstractType{1}}
12   | var50: PtrType{AbstractType{1}}
16   | var51: AbstractType{7}
20   +---
20   +--- (virtual base class C2)
20   | +--- (base class C0)
20   | | {vfptr}
24   | | var0: AbstractType{0}
28   | +---
28   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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

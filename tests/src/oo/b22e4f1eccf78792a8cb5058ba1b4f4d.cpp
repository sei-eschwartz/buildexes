// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
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
/* method id 405 */ virtual abstract_2 func0 (abstract_1 v14, abstract_1 v15);
/* method id 406 */ virtual abstract_2 func2 ();
/* method id 407 */ abstract_2 func0 ();
/* method id 408 */ C1 ();
C1 (special_constructor);
abstract_1 v20;
abstract_4* v21;
abstract_4* v22;
abstract_4* v23;
};
struct C2 : public virtual C1 {
/* method id 409 */ virtual abstract_2 func2 ();
/* method id 410 */ ~C2 ();
/* method id 411 */ virtual abstract_2 func3 (abstract_1 v27, abstract_1 v28);
/* method id 412 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C1, public C2 {
/* method id 413 */ C3 ();
/* method id 414 */ ~C3 ();
/* method id 415 */ virtual abstract_4 func1 ();
/* method id 416 */ virtual abstract_4 func3 ();
C3 (special_constructor);
abstract_1 v35;
abstract_1 v36;
abstract_3 v37;
abstract_1 v38;
};
abstract_4 func6 (abstract_1 v39, abstract_1 v40, abstract_1 v41, abstract_1 v42);
abstract_4 func7 (abstract_1 v47, abstract_1 v48, abstract_1 v49, abstract_1 v50);
abstract_4 func8 ();
abstract_2 func9 (abstract_0 v59);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
v2 = abstract_1();
v2 = abstract_1();
v2 = abstract_1();
v2 = abstract_1();
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
delete (new C1 ());
return (((C1*) 0))->C1::func2();

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
return ::func9(v10);

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
delete (new C3 ());
return ((new C1 ()))->C1::func2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func0 (abstract_1 v14, abstract_1 v15) {
abstract_1 v16 = abstract_1();
abstract_1 v17 = abstract_1();
abstract_4* v18 = ((abstract_4*) 0);
abstract_0 v19 = abstract_0();
return ::func9(v19);

}
/* method id 406 */ abstract_2 C1::func2 () {
return abstract_2();

}
/* method id 407 */ abstract_2 C1::func0 () {
return (&(*(((C1*) 0))))->C1::func2();

}
/* method id 408 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ abstract_2 C2::func2 () {
abstract_4* v24 = ((abstract_4*) 0);
delete (new C2 ());
return (((C1*) 0))->C1::func0(v20, v20);

}
/* method id 410 */ C2::~C2 () {
abstract_1 v25 = abstract_1();
abstract_3 v26 = abstract_3();
return;

}
/* method id 411 */ abstract_2 C2::func3 (abstract_1 v27, abstract_1 v28) {
abstract_1 v29 = abstract_1();
return ::func9(abstract_0());

}
/* method id 412 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 413 */ C3::C3 () {
abstract_1 v30 = abstract_1();
abstract_3 v31 = abstract_3();
abstract_5 v32 = abstract_5();
abstract_1 v33 = abstract_1();
return;

}
/* method id 414 */ C3::~C3 () {
v22 = ((abstract_4*) 0);
delete (new C0 ());
return;

}
/* method id 415 */ abstract_4 C3::func1 () {
return abstract_4();

}
/* method id 416 */ abstract_4 C3::func3 () {
delete (new C1 ());
return ::func6(v20, v20, v20, v20);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_4 func6 (abstract_1 v39, abstract_1 v40, abstract_1 v41, abstract_1 v42) {
abstract_1 v43;
abstract_1 v44;
abstract_1 v45;
abstract_3 v46;

delete (new C1 ());
return abstract_4();

}
abstract_4 func7 (abstract_1 v47, abstract_1 v48, abstract_1 v49, abstract_1 v50) {
abstract_1 v51;
abstract_3 v52;
abstract_1 v53;
abstract_1 v54;

v50 = abstract_1();
v50 = abstract_1();
v50 = abstract_1();
return abstract_4();

}
abstract_4 func8 () {
abstract_0 v55;
abstract_5 v56;
abstract_5 v57;
abstract_1 v58;

v57 = abstract_5();
v57 = abstract_5();
return abstract_4();

}
abstract_2 func9 (abstract_0 v59) {

return abstract_2();

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
class C1    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var20: AbstractType{1}
12   | var21: PtrType{AbstractType{4}}
16   | var22: PtrType{AbstractType{4}}
20   | var23: PtrType{AbstractType{4}}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
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
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   | {vtordisp for vbase 1}
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var20: AbstractType{1}
32   | var21: PtrType{AbstractType{4}}
36   | var22: PtrType{AbstractType{4}}
40   | var23: PtrType{AbstractType{4}}
44   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 44;
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
class C3    size(60)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | +---
8    | var35: AbstractType{1}
12   | var36: AbstractType{1}
16   | var37: AbstractType{3}
20   | var38: AbstractType{1}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   +---
32   | {vtordisp for vbase 1}
36   +--- (virtual base class C1)
36   | {vfptr}
40   | {vbptr}
44   | var20: AbstractType{1}
48   | var21: PtrType{AbstractType{4}}
52   | var22: PtrType{AbstractType{4}}
56   | var23: PtrType{AbstractType{4}}
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
 const size_t model_offset = 36;
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

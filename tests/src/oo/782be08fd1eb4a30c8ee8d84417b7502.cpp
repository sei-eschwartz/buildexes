// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
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
/* method id 408 */ virtual abstract_2* func0 (abstract_0 v14);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_1 v19;
};
struct C2 : public virtual C0, public C1 {
/* method id 410 */ void func4 (abstract_1 v20, abstract_0 v21);
/* method id 411 */ virtual abstract_2* func1 (abstract_0 v23);
/* method id 412 */ virtual void func5 ();
/* method id 413 */ abstract_3* func6 (abstract_0 v27, abstract_2** v28, abstract_0 v29);
/* method id 414 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 416 */ abstract_2* func9 ();
/* method id 417 */ virtual abstract_2* func10 (abstract_1 v31, abstract_4 v32);
/* method id 418 */ virtual abstract_2** func11 (abstract_2** v36, abstract_1 v37);
/* method id 419 */ virtual abstract_3*** func12 (abstract_5 v41, abstract_1 v42, abstract_1 v43);
/* method id 420 */ C3 ();
C3 (special_constructor);
abstract_1 v45;
abstract_1 v46;
C2 v47;
abstract_1 v48;
};
abstract_2* func15 (C2 v49, abstract_1 v50, abstract_3** v51, abstract_1 v52);
abstract_2* func16 (C2 v55, abstract_1 v56, abstract_3** v57, abstract_1 v58);
abstract_2* func17 (C2 v61, abstract_1 v62, abstract_1 v63, abstract_1 v64);
abstract_2* func18 (abstract_1 v69, abstract_2** v70, abstract_1 v71, C2 v72);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ abstract_2* C0::func1 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_1 v3) {
abstract_0 v4 = abstract_0();
return new abstract_2 ();

}
/* method id 402 */ abstract_3 C0::func1 (abstract_1 v5, abstract_1 v6, abstract_1 v7) {
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
/* method id 408 */ abstract_2* C1::func0 (abstract_0 v14) {
abstract_1 v15 = abstract_1();
abstract_0 v16 = abstract_0();
abstract_3** v17 = new abstract_3* ();
abstract_2** v18 = new abstract_2* ();
delete (new C2 ());
return ((abstract_2*) 0);

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 410 */ void C2::func4 (abstract_1 v20, abstract_0 v21) {
abstract_4 v22 = abstract_4();
return;

}
/* method id 411 */ abstract_2* C2::func1 (abstract_0 v23) {
abstract_1 v24 = abstract_1();
abstract_0 v25 = abstract_0();
delete (new C3 ());
return new abstract_2 ();

}
/* method id 412 */ void C2::func5 () {
abstract_2** v26 = new abstract_2* ();
return;

}
/* method id 413 */ abstract_3* C2::func6 (abstract_0 v27, abstract_2** v28, abstract_0 v29) {
abstract_0 v30 = abstract_0();
return ((abstract_3*) 0);

}
/* method id 414 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 416 */ abstract_2* C3::func9 () {
delete (new C1 ());
return new abstract_2 ();

}
/* method id 417 */ abstract_2* C3::func10 (abstract_1 v31, abstract_4 v32) {
abstract_1 v33 = abstract_1();
abstract_1 v34 = abstract_1();
abstract_0 v35 = abstract_0();
return ((abstract_2*) 0);

}
/* method id 418 */ abstract_2** C3::func11 (abstract_2** v36, abstract_1 v37) {
C1 v38 = *(&(*((new C1 ()))));
abstract_1 v39 = abstract_1();
C2 v40 = *(&(*(((C2*) 0))));
return ((abstract_2**) 0);

}
/* method id 419 */ abstract_3*** C3::func12 (abstract_5 v41, abstract_1 v42, abstract_1 v43) {
abstract_0 v44 = abstract_0();
delete (new C2 ());
return ((abstract_3***) 0);

}
/* method id 420 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_2* func15 (C2 v49, abstract_1 v50, abstract_3** v51, abstract_1 v52) {
abstract_1 v53;
C2 v54;

return new abstract_2 ();

}
abstract_2* func16 (C2 v55, abstract_1 v56, abstract_3** v57, abstract_1 v58) {
abstract_1 v59;
C2 v60;

return new abstract_2 ();

}
abstract_2* func17 (C2 v61, abstract_1 v62, abstract_1 v63, abstract_1 v64) {
abstract_3** v65;
abstract_2** v66;
abstract_1 v67;
C2 v68;

return ((abstract_2*) 0);

}
abstract_2* func18 (abstract_1 v69, abstract_2** v70, abstract_1 v71, C2 v72) {
abstract_1 v73;
abstract_3** v74;
abstract_1 v75;
abstract_1 v76;

return new abstract_2 ();

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
class C1    size(8)
0    +---
0    | {vfptr}
4    | var19: AbstractType{1}
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
}
/*
class C2    size(20)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var19: AbstractType{1}
8    | +---
8    | {vbptr}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var9: AbstractType{1}
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
class C3    size(60)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var45: AbstractType{1}
12   | var46: AbstractType{1}
16   | var47: ClassType{2}
36   | var48: AbstractType{1}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   | var9: AbstractType{1}
48   +---
48   +--- (virtual base class C2)
48   | +--- (base class C1)
48   | | {vfptr}
52   | | var19: AbstractType{1}
56   | +---
56   | {vbptr}
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 48;
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

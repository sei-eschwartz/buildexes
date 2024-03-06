// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual abstract_0 func1 ();
/* method id 403 */ C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
C0 v2;
C0 v3;
};
struct C2  {
/* method id 405 */ abstract_0 func2 ();
/* method id 406 */ C2 ();
/* method id 407 */ virtual abstract_0 func5 (abstract_1 v21, abstract_1 v22, C1 v23, abstract_0* v24);
/* method id 408 */ ~C2 ();
C2 (special_constructor);
C1 v29;
C0 v30;
C0 v31;
abstract_1 v32;
};
struct C3 : public C1, public C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual abstract_2 func0 (C1 v34, C0 v35, C1 v36, abstract_1 v37);
C3 (special_constructor);
C0 v50;
};
abstract_2 func7 (C1 v51, abstract_1 v52, abstract_0* v53, abstract_0* v54);
abstract_2 func8 (C1 v56);
abstract_2 func9 (abstract_1 v60, abstract_1 v61, abstract_1 v62, abstract_1 v63);
abstract_2 func10 (C1 v68, abstract_1 v69, C1 v70, abstract_1 v71);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0 C1::func1 () {
::func8(*(((C1*) 0)));
::func8(*(((C1*) 0)));
::func8(*(((C1*) 0)));
::func8(*(((C1*) 0)));
return abstract_0();

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ abstract_0 C2::func2 () {
return (((C1*) 0))->C1::func1();

}
/* method id 406 */ C2::C2 () {
C0 v4 = *(&(*((new C0 ()))));
C0 v5 = *(&(*((new C0 ()))));
C0 v6 = *(&(*((new C0 ()))));
C0 v7 = *(&(*((new C0 ()))));
return;

}
/* method id 407 */ abstract_0 C2::func5 (abstract_1 v21, abstract_1 v22, C1 v23, abstract_0* v24) {
C1 v25 = *(((C1*) 0));
C0 v26 = *((new C0 ()));
C0 v27 = *((new C0 ()));
abstract_1 v28 = abstract_1();
return (((C2*) 0))->C2::func2();

}
/* method id 408 */ C2::~C2 () {
return;

}
C2::C2 (special_constructor)  {}

/* method id 409 */ C3::C3 () {
C0 v33 = *((new C0 ()));
return;

}
/* method id 410 */ abstract_2 C3::func0 (C1 v34, C0 v35, C1 v36, abstract_1 v37) {
abstract_0* v38 = new abstract_0 ();
abstract_1 v39 = abstract_1();
abstract_1 v40 = abstract_1();
C1 v41 = *((new C1 ()));
return ::func8(v29);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_2 func7 (C1 v51, abstract_1 v52, abstract_0* v53, abstract_0* v54) {
C0 v55;

return abstract_2();

}
abstract_2 func8 (C1 v56) {
abstract_1 v57;
abstract_1 v58;
C1 v59;

return abstract_2();

}
abstract_2 func9 (abstract_1 v60, abstract_1 v61, abstract_1 v62, abstract_1 v63) {
abstract_1 v64;
abstract_0* v65;
abstract_1 v66;
C1 v67;

return ::func8(*(&(v67)));

}
abstract_2 func10 (C1 v68, abstract_1 v69, C1 v70, abstract_1 v71) {
abstract_1 v72;
abstract_1 v73;
abstract_1 v74;
abstract_1 v75;

return abstract_2();

}
#include <iostream>
void check_driver() {
/*
class C0    size(0)
0    +---
0    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 1;
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
0    | {vfptr}
4    | {vbptr}
8    | var0: ClassType{0}
9    | var1: ClassType{0}
10   | var2: ClassType{0}
11   | var3: ClassType{0}
12   +---
12   +--- (virtual base class C0)
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
0    | {vfptr}
4    | var29: ClassType{1}
16   | var30: ClassType{0}
17   | var31: ClassType{0}
18   | alignment: 
20   | var32: AbstractType{1}
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
}
/*
class C3    size(40)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var0: ClassType{0}
9    | | var1: ClassType{0}
10   | | var2: ClassType{0}
11   | | var3: ClassType{0}
12   | +---
12   | +--- (base class C2)
12   | | {vfptr}
16   | | var29: ClassType{1}
28   | | var30: ClassType{0}
29   | | var31: ClassType{0}
30   | | alignment: 
32   | | var32: AbstractType{1}
36   | +---
36   | var50: ClassType{0}
37   | alignment: 
40   +---
40   +--- (virtual base class C0)
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
 const size_t model_offset = 0;
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
 const size_t model_offset = 12;
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

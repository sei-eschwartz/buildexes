// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual ~C0 ();
/* method id 403 */ virtual abstract_1 func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1* v9;
};
struct C1 : public virtual C0 {
/* method id 405 */ C1 ();
C1 (special_constructor);
abstract_0 v10;
abstract_1* v11;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_1* v12;
abstract_1* v13;
};
struct C3 : public C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
C3 (special_constructor);
abstract_1* v40;
abstract_0 v41;
abstract_2 v42;
};
abstract_1 func7 (abstract_1* v43, abstract_1* v44, abstract_1* v45, abstract_1* v46);
abstract_1 func8 ();
abstract_1 func9 (abstract_1* v54, C1 v55, abstract_1* v56, C1 v57);
abstract_1 func10 (abstract_1* v62, C1 v63, abstract_1* v64, C1 v65);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return ::func8();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return ::func8();

}
/* method id 402 */ C0::~C0 () {
abstract_0 v4 = abstract_0();
return;

}
/* method id 403 */ abstract_1 C0::func0 () {
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
abstract_1* v7 = new abstract_1 ();
abstract_1* v8 = new abstract_1 ();
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
return;

}
/* method id 410 */ C3::~C3 () {
abstract_1* v14 = ((abstract_1*) 0);
abstract_0 v15 = abstract_0();
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_1 func7 (abstract_1* v43, abstract_1* v44, abstract_1* v45, abstract_1* v46) {
abstract_1* v47;
abstract_1* v48;
abstract_1* v49;
abstract_1* v50;

return abstract_1();

}
abstract_1 func8 () {
abstract_1* v51;
abstract_1* v52;
C1 v53;

return ::func9(new abstract_1 (), v53, new abstract_1 (), v53);

}
abstract_1 func9 (abstract_1* v54, C1 v55, abstract_1* v56, C1 v57) {
abstract_1* v58;
abstract_1* v59;
abstract_1* v60;
abstract_1* v61;

return ::func8();

}
abstract_1 func10 (abstract_1* v62, C1 v63, abstract_1* v64, C1 v65) {
abstract_1* v66;
abstract_1* v67;
C1 v68;
abstract_1* v69;

return abstract_1();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var9: PtrType{AbstractType{1}}
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
class C1    size(20)
0    +---
0    | {vbptr}
4    | var10: AbstractType{0}
8    | var11: PtrType{AbstractType{1}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var9: PtrType{AbstractType{1}}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
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
class C2    size(32)
0    +---
0    | {vbptr}
4    | var12: PtrType{AbstractType{1}}
8    | var13: PtrType{AbstractType{1}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var9: PtrType{AbstractType{1}}
20   +---
20   +--- (virtual base class C1)
20   | {vbptr}
24   | var10: AbstractType{0}
28   | var11: PtrType{AbstractType{1}}
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
class C3    size(44)
0    +---
0    | +--- (base class C2)
0    | | {vbptr}
4    | | var12: PtrType{AbstractType{1}}
8    | | var13: PtrType{AbstractType{1}}
12   | +---
12   | var40: PtrType{AbstractType{1}}
16   | var41: AbstractType{0}
20   | var42: AbstractType{2}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var9: PtrType{AbstractType{1}}
32   +---
32   +--- (virtual base class C1)
32   | {vbptr}
36   | var10: AbstractType{0}
40   | var11: PtrType{AbstractType{1}}
44   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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

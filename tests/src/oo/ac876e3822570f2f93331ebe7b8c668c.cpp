// type for special constructors
struct special_constructor {};
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
abstract_0 v0;
};
struct C1 : public virtual C0 {
/* method id 401 */ ~C1 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
abstract_1 v17;
abstract_2 v18;
abstract_0 v19;
abstract_1 v20;
};
struct C2 : public virtual C1 {
/* method id 403 */ virtual abstract_3 func0 (abstract_2 v21, abstract_1 v22, abstract_0 v23);
/* method id 404 */ ~C2 ();
/* method id 405 */ virtual abstract_3 func0 (abstract_1 v28, abstract_0 v29);
/* method id 406 */ virtual abstract_3 func0 ();
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_4 v33;
abstract_0 v34;
abstract_3* v35;
abstract_0 v36;
};
struct C3 : public virtual C0, public C2 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual abstract_3 func0 (abstract_0 v41, abstract_5 v42, abstract_2 v43, abstract_5 v44);
/* method id 410 */ virtual abstract_3 func2 (abstract_0 v47);
/* method id 411 */ virtual abstract_3 func0 (abstract_5 v51, abstract_1 v52);
C3 (special_constructor);
};
abstract_3 func4 (abstract_1 v53, abstract_3* v54, abstract_5 v55, abstract_1 v56);
abstract_3 func5 (abstract_4 v61, abstract_4 v62);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::~C1 () {
return;

}
/* method id 402 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ abstract_3 C2::func0 (abstract_2 v21, abstract_1 v22, abstract_0 v23) {
abstract_1 v24 = abstract_1();
abstract_1 v25 = abstract_1();
abstract_2 v26 = abstract_2();
abstract_4 v27 = abstract_4();
return ::func5(v33, v33);

}
/* method id 404 */ C2::~C2 () {
return;

}
/* method id 405 */ abstract_3 C2::func0 (abstract_1 v28, abstract_0 v29) {
abstract_1 v30 = abstract_1();
abstract_1 v31 = abstract_1();
abstract_4 v32 = abstract_4();
::func5(abstract_4(), abstract_4());
return abstract_3();

}
/* method id 406 */ abstract_3 C2::func0 () {
delete (new C2 ());
return ::func5(v33, v33);

}
/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
abstract_3* v37 = new abstract_3 ();
abstract_3* v38 = new abstract_3 ();
abstract_3* v39 = new abstract_3 ();
abstract_0 v40 = abstract_0();
delete (new C3 ());
return;

}
/* method id 409 */ abstract_3 C3::func0 (abstract_0 v41, abstract_5 v42, abstract_2 v43, abstract_5 v44) {
abstract_1 v45 = abstract_1();
abstract_4 v46 = abstract_4();
return ::func5(v46, v46);

}
/* method id 410 */ abstract_3 C3::func2 (abstract_0 v47) {
abstract_5 v48 = abstract_5();
abstract_0 v49 = abstract_0();
return ::func5(v33, abstract_4());

}
/* method id 411 */ abstract_3 C3::func0 (abstract_5 v51, abstract_1 v52) {
return abstract_3();

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

abstract_3 func4 (abstract_1 v53, abstract_3* v54, abstract_5 v55, abstract_1 v56) {
abstract_6 v57;
abstract_1 v58;
abstract_7 v59;
abstract_4 v60;

return abstract_3();

}
abstract_3 func5 (abstract_4 v61, abstract_4 v62) {
abstract_5 v63;
abstract_3* v64;
abstract_2 v65;
abstract_1 v66;

return abstract_3();

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | var0: AbstractType{0}
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
class C1    size(24)
0    +---
0    | {vbptr}
4    | var17: AbstractType{1}
8    | var18: AbstractType{2}
12   | var19: AbstractType{0}
16   | var20: AbstractType{1}
20   +---
20   +--- (virtual base class C0)
20   | var0: AbstractType{0}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(48)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var33: AbstractType{4}
12   | var34: AbstractType{0}
16   | var35: PtrType{AbstractType{3}}
20   | var36: AbstractType{0}
24   +---
24   +--- (virtual base class C0)
24   | var0: AbstractType{0}
28   +---
28   +--- (virtual base class C1)
28   | {vbptr}
32   | var17: AbstractType{1}
36   | var18: AbstractType{2}
40   | var19: AbstractType{0}
44   | var20: AbstractType{1}
48   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
class C3    size(48)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | | var33: AbstractType{4}
12   | | var34: AbstractType{0}
16   | | var35: PtrType{AbstractType{3}}
20   | | var36: AbstractType{0}
24   | +---
24   +---
24   +--- (virtual base class C0)
24   | var0: AbstractType{0}
28   +---
28   +--- (virtual base class C1)
28   | {vbptr}
32   | var17: AbstractType{1}
36   | var18: AbstractType{2}
40   | var19: AbstractType{0}
44   | var20: AbstractType{1}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
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

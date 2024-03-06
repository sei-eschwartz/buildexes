// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ virtual C0* func1 ();
/* method id 404 */ virtual C0* func3 (C0* v1);
/* method id 405 */ virtual C0 func3 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_1 v4;
};
struct C2 : public virtual C0, public C1 {
/* method id 408 */ virtual C0* func0 (C0* v5, C0* v6);
/* method id 409 */ C2 ();
/* method id 410 */ virtual C0* func0 (abstract_0 v7, C0* v8);
/* method id 411 */ virtual C0* func1 ();
C2 (special_constructor);
abstract_0 v17;
abstract_0 v18;
abstract_1 v19;
abstract_0 v20;
};
struct C3 : public virtual C2 {
/* method id 413 */ C3 ();
/* method id 414 */ virtual ~C3 ();
C3 (special_constructor);
abstract_0 v55;
abstract_0 v56;
abstract_0 v57;
abstract_0 v58;
};
C0* func7 (abstract_0 v59, C0* v60);
C0* func8 ();
C0* func9 (C0* v62);
C0* func10 (abstract_0 v67, abstract_0 v68, abstract_0 v69, abstract_0 v70);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
C0* v0 = ((C0*) 0);
return v0;

}
/* method id 403 */ C0* C1::func1 () {
return &((((C1*) 0))->C1::func3());

}
/* method id 404 */ C0* C1::func3 (C0* v1) {
return v1;

}
/* method id 405 */ C0 C1::func3 () {
C0* v2 = ((C0*) 0);
abstract_0 v3 = abstract_0();
return *(v2);

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C0* C2::func0 (C0* v5, C0* v6) {
return v6;

}
/* method id 409 */ C2::C2 () {
return;

}
/* method id 410 */ C0* C2::func0 (abstract_0 v7, C0* v8) {
C1 v9 = *(&(*((new C1 ()))));
abstract_0 v10 = abstract_0();
C1 v11 = *(&(*((new C1 ()))));
return v8;

}
/* method id 411 */ C0* C2::func1 () {
C0* v16 = ((C0*) 0);
return v16;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 413 */ C3::C3 () {
abstract_0 v21 = abstract_0();
abstract_0 v22 = abstract_0();
abstract_0 v23 = abstract_0();
abstract_0 v24 = abstract_0();
return;

}
/* method id 414 */ C3::~C3 () {
abstract_0 v25 = abstract_0();
abstract_0 v26 = abstract_0();
abstract_0 v27 = abstract_0();
abstract_0 v28 = abstract_0();
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

C0* func7 (abstract_0 v59, C0* v60) {
C0* v61;

return v61;

}
C0* func8 () {

return ((C0*) 0);

}
C0* func9 (C0* v62) {
abstract_0 v63;
abstract_0 v64;
abstract_0 v65;
abstract_0 v66;

return v62;

}
C0* func10 (abstract_0 v67, abstract_0 v68, abstract_0 v69, abstract_0 v70) {
abstract_0 v71;
abstract_0 v72;
abstract_0 v73;
abstract_0 v74;

return (new C0 ());

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
8    | var4: AbstractType{1}
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
class C2    size(32)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var4: AbstractType{1}
12   | +---
12   | var17: AbstractType{0}
16   | var18: AbstractType{0}
20   | var19: AbstractType{1}
24   | var20: AbstractType{0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
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
 const size_t model_offset = 28;
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
class C3    size(52)
0    +---
0    | {vbptr}
4    | var55: AbstractType{0}
8    | var56: AbstractType{0}
12   | var57: AbstractType{0}
16   | var58: AbstractType{0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C2)
24   | +--- (base class C1)
24   | | {vfptr}
28   | | {vbptr}
32   | | var4: AbstractType{1}
36   | +---
36   | var17: AbstractType{0}
40   | var18: AbstractType{0}
44   | var19: AbstractType{1}
48   | var20: AbstractType{0}
52   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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

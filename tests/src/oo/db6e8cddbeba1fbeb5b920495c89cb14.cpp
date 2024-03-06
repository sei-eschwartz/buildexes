// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual ~C1 ();
C1 (special_constructor);
C0* v15;
C0* v16;
C0* v17;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 403 */ C2 ();
/* method id 404 */ virtual ~C2 ();
C2 (special_constructor);
C0* v43;
C0* v44;
C0* v45;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 405 */ C3 ();
/* method id 406 */ virtual C0 func0 (abstract_0 v54);
C3 (special_constructor);
C0* v61;
};
C0 func2 (abstract_1 v62, abstract_1 v63, C0* v64, abstract_1 v65);
C0 func3 (C0* v70, abstract_1 v71, C0* v72, C0* v73);
C0 func4 (C0* v78, C0* v79, C0* v80, C0* v81);
C0 func5 (C0* v85, C0* v86);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
delete (new C1 ());
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = ((C0*) 0);
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
C0* v6 = ((C0*) 0);
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::C2 () {
C0* v18 = (new C0 ());
abstract_0 v19 = abstract_0();
C0* v20 = (new C0 ());
C0* v21 = (new C0 ());
return;

}
/* method id 404 */ C2::~C2 () {
C0* v26 = (new C0 ());
C0* v27 = (new C0 ());
C0* v28 = (new C0 ());
C0* v29 = (new C0 ());
delete (new C1 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
C0* v46 = (new C0 ());
abstract_0 v47 = abstract_0();
C0* v48 = (new C0 ());
C0* v49 = (new C0 ());
return;

}
/* method id 406 */ C0 C3::func0 (abstract_0 v54) {
abstract_0 v55 = abstract_0();
abstract_0 v56 = abstract_0();
abstract_0 v57 = abstract_0();
C0* v58 = &(*(&(*(((C0*) 0)))));
delete (new C1 ());
return ::func3(v16, abstract_1(), v16, v16);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

C0 func2 (abstract_1 v62, abstract_1 v63, C0* v64, abstract_1 v65) {
C0* v66;
C0* v67;
C0* v68;
C0* v69;

delete (new C1 ());
return ::func4((new C0 ()), (new C0 ()), (new C0 ()), (new C0 ()));

}
C0 func3 (C0* v70, abstract_1 v71, C0* v72, C0* v73) {
C0* v74;
C0* v75;
C0* v76;
abstract_1 v77;

delete (new C1 ());
return ::func4(v70, v70, v70, v70);

}
C0 func4 (C0* v78, C0* v79, C0* v80, C0* v81) {
C0* v82;
C0* v83;
C0* v84;

return *(v79);

}
C0 func5 (C0* v85, C0* v86) {
C0* v87;
C0* v88;
C0* v89;
C0* v90;

(((C3*) 0))->C3::func0(abstract_0());
(((C3*) 0))->C3::func0(abstract_0());
(((C3*) 0))->C3::func0(abstract_0());
(((C3*) 0))->C3::func0(abstract_0());
return ::func3(v86, abstract_1(), v86, v86);

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | var15: PtrType{ClassType{0}}
8    | var16: PtrType{ClassType{0}}
12   | var17: PtrType{ClassType{0}}
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
}
/*
class C2    size(32)
0    +---
0    | {vbptr}
4    | var43: PtrType{ClassType{0}}
8    | var44: PtrType{ClassType{0}}
12   | var45: PtrType{ClassType{0}}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | var15: PtrType{ClassType{0}}
24   | var16: PtrType{ClassType{0}}
28   | var17: PtrType{ClassType{0}}
32   +---
32   +--- (virtual base class C0)
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var61: PtrType{ClassType{0}}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | var15: PtrType{ClassType{0}}
20   | var16: PtrType{ClassType{0}}
24   | var17: PtrType{ClassType{0}}
28   +---
28   +--- (virtual base class C0)
28   +---
28   +--- (virtual base class C2)
28   | {vbptr}
32   | var43: PtrType{ClassType{0}}
36   | var44: PtrType{ClassType{0}}
40   | var45: PtrType{ClassType{0}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
 const size_t model_offset = 28;
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

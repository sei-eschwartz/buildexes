// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ virtual abstract_0 func2 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4);
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_0* v13;
abstract_0* v14;
abstract_0* v15;
};
struct C2 : public virtual C1 {
/* method id 405 */ C2 ();
/* method id 406 */ virtual abstract_0 func3 (abstract_1 v38, abstract_0* v39);
/* method id 407 */ virtual ~C2 ();
C2 (special_constructor);
C1 v63;
C1 v64;
C1 v65;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ C3 ();
C3 (special_constructor);
C1 v102;
C1 v103;
C1 v104;
};
abstract_0 func4 ();
abstract_0 func5 (C1 v107, C1 v108, abstract_1 v109, C1 v110);
abstract_0 func6 (C1 v113, C1 v114, C1 v115, C1 v116);
abstract_0 func7 (C1 v117);
// definitions
/* method id 400 */ C0::~C0 () {
((new C2 ()))->C2::func3(abstract_1(), new abstract_0 ());
((new C2 ()))->C2::func3(abstract_1(), new abstract_0 ());
((new C2 ()))->C2::func3(abstract_1(), new abstract_0 ());
((new C2 ()))->C2::func3(abstract_1(), new abstract_0 ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::~C1 () {
abstract_0* v0 = new abstract_0 ();
delete (new C0 ());
return;

}
/* method id 403 */ abstract_0 C1::func2 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4) {
abstract_0* v5 = new abstract_0 ();
abstract_0* v6 = new abstract_0 ();
abstract_0* v7 = new abstract_0 ();
abstract_0* v8 = new abstract_0 ();
delete (new C2 ());
return ::func7(*(&(*(((C1*) 0)))));

}
/* method id 404 */ C1::C1 () {
abstract_0* v9 = ((abstract_0*) 0);
abstract_0* v10 = ((abstract_0*) 0);
abstract_0* v11 = ((abstract_0*) 0);
abstract_0* v12 = ((abstract_0*) 0);
delete (new C1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
abstract_0* v16 = new abstract_0 ();
abstract_0* v17 = new abstract_0 ();
abstract_0* v18 = new abstract_0 ();
abstract_0* v19 = new abstract_0 ();
return;

}
/* method id 406 */ abstract_0 C2::func3 (abstract_1 v38, abstract_0* v39) {
abstract_1 v40 = abstract_1();
C1 v41 = *(((C1*) 0));
abstract_1 v42 = abstract_1();
C1 v43 = *(((C1*) 0));
return ::func5(v41, v41, abstract_1(), v41);

}
/* method id 407 */ C2::~C2 () {
abstract_1 v56 = abstract_1();
C1 v57 = *(((C1*) 0));
abstract_1 v58 = abstract_1();
C1 v59 = *(((C1*) 0));
delete (new C3 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::~C3 () {
C1 v66 = *((new C1 ()));
return;

}
/* method id 409 */ C3::C3 () {
C1 v67 = *((new C1 ()));
C1 v68 = *((new C1 ()));
C1 v69 = *((new C1 ()));
C1 v70 = *((new C1 ()));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func4 () {
C1 v105;
C1 v106;

return abstract_0();

}
abstract_0 func5 (C1 v107, C1 v108, abstract_1 v109, C1 v110) {
C1 v111;
C1 v112;

delete (new C1 ());
return abstract_0();

}
abstract_0 func6 (C1 v113, C1 v114, C1 v115, C1 v116) {

return abstract_0();

}
abstract_0 func7 (C1 v117) {
C1 v118;
C1 v119;
C1 v120;

return ::func5(v118, v118, abstract_1(), v118);

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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var13: PtrType{AbstractType{0}}
12   | var14: PtrType{AbstractType{0}}
16   | var15: PtrType{AbstractType{0}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
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
class C2    size(104)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var63: ClassType{1}
32   | var64: ClassType{1}
56   | var65: ClassType{1}
80   +---
80   +--- (virtual base class C0)
80   | {vfptr}
84   +---
84   +--- (virtual base class C1)
84   | {vfptr}
88   | {vbptr}
92   | var13: PtrType{AbstractType{0}}
96   | var14: PtrType{AbstractType{0}}
100  | var15: PtrType{AbstractType{0}}
104  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 104;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 84;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(180)
0    +---
0    | {vbptr}
4    | var102: ClassType{1}
28   | var103: ClassType{1}
52   | var104: ClassType{1}
76   +---
76   +--- (virtual base class C0)
76   | {vfptr}
80   +---
80   +--- (virtual base class C1)
80   | {vfptr}
84   | {vbptr}
88   | var13: PtrType{AbstractType{0}}
92   | var14: PtrType{AbstractType{0}}
96   | var15: PtrType{AbstractType{0}}
100  +---
100  +--- (virtual base class C2)
100  | {vfptr}
104  | {vbptr}
108  | var63: ClassType{1}
132  | var64: ClassType{1}
156  | var65: ClassType{1}
180  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 180;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 80;
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
 const size_t model_offset = 100;
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

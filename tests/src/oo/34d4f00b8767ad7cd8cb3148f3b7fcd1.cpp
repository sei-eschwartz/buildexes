// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
/* method id 407 */ virtual ~C2 ();
C2 (special_constructor);
C1 v49;
C1 v50;
C1 v51;
C1 v52;
};
struct C3 : public virtual C2, public virtual C1 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual ~C3 ();
C3 (special_constructor);
C1 v61;
C1 v62;
C1 v63;
C1 v64;
};
abstract_0 func4 (C1 v65, C1 v66);
abstract_0 func5 (C0 v70, C1 v71, C1 v72, C1 v73);
abstract_0 func6 (C1 v78, C1 v79, C1 v80, C0 v81);
abstract_0 func7 (C0 v85, C1 v86, C1 v87);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0 C1::func1 () {
v3 = v2;
return abstract_0();

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ abstract_0 C2::func2 () {
delete (new C2 ());
return abstract_0();

}
/* method id 406 */ C2::C2 () {
return;

}
/* method id 407 */ C2::~C2 () {
C1 v16 = *(&(*(((C1*) 0))));
C1 v17 = *(&(*(((C1*) 0))));
C1 v18 = *(&(*(((C1*) 0))));
C0 v19 = *(((C0*) 0));
return;

}
C2::C2 (special_constructor)  {}

/* method id 408 */ C3::C3 () {
C1 v53 = *((new C1 ()));
C1 v54 = *((new C1 ()));
C1 v55 = *((new C1 ()));
C1 v56 = *((new C1 ()));
return;

}
/* method id 409 */ C3::~C3 () {
C1 v57 = *((new C1 ()));
C1 v58 = *((new C1 ()));
C1 v59 = *((new C1 ()));
C1 v60 = *((new C1 ()));
::func7(v2, v49, v49);
::func7(v2, v49, v49);
::func7(v2, v49, v49);
::func7(v2, v49, v49);
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()), C1(special_constructor ()) {}

abstract_0 func4 (C1 v65, C1 v66) {
C1 v67;
C1 v68;
C1 v69;

delete (new C1 ());
return (((C1*) 0))->C1::func1();

}
abstract_0 func5 (C0 v70, C1 v71, C1 v72, C1 v73) {
C1 v74;
C1 v75;
C1 v76;
C1 v77;

return (&(v71))->C1::func1();

}
abstract_0 func6 (C1 v78, C1 v79, C1 v80, C0 v81) {
C0 v82;
C1 v83;
C1 v84;

return ::func5(v82, v79, v79, v79);

}
abstract_0 func7 (C0 v85, C1 v86, C1 v87) {
C1 v88;
C1 v89;
C0 v90;
C1 v91;

return abstract_0();

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
class C2    size(52)
0    +---
0    | {vfptr}
4    | var49: ClassType{1}
16   | var50: ClassType{1}
28   | var51: ClassType{1}
40   | var52: ClassType{1}
52   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(120)
0    +---
0    | {vbptr}
4    | var61: ClassType{1}
16   | var62: ClassType{1}
28   | var63: ClassType{1}
40   | var64: ClassType{1}
52   +---
52   +--- (virtual base class C2)
52   | {vfptr}
56   | var49: ClassType{1}
68   | var50: ClassType{1}
80   | var51: ClassType{1}
92   | var52: ClassType{1}
104  +---
104  | alignment: Additional padding between virtual bases 2, which ends with a zero-sized object, and 0, which leads with zero sized base.
108  +--- (virtual base class C0)
108  +---
108  +--- (virtual base class C1)
108  | {vfptr}
112  | {vbptr}
116  | var0: ClassType{0}
117  | var1: ClassType{0}
118  | var2: ClassType{0}
119  | var3: ClassType{0}
120  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 120;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 52;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 108;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

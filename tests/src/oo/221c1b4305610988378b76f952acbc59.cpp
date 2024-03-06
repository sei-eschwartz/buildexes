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
/* method id 407 */ ~C2 ();
C2 (special_constructor);
C1 v48;
C1 v49;
C1 v50;
C1 v51;
};
struct C3 : public virtual C1, public C2 {
/* method id 408 */ ~C3 ();
/* method id 409 */ C3 ();
/* method id 410 */ virtual abstract_0 func4 (C0 v72);
/* method id 411 */ virtual abstract_0 func0 (C1 v73, C0 v74);
C3 (special_constructor);
C2 v79;
C0 v80;
};
abstract_0 func5 (C2 v81);
abstract_0 func6 (C0 v85, C1 v86, C2 v87);
abstract_2 func7 (C1 v92, C2 v93, C2 v94, abstract_1 v95);
abstract_2 func8 (C2 v97, C1 v98, C2 v99, C1 v100);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0 C1::func1 () {
::func5(*(((C2*) 0)));
::func5(*(((C2*) 0)));
::func5(*(((C2*) 0)));
::func5(*(((C2*) 0)));
return abstract_0();

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ abstract_0 C2::func2 () {
return abstract_0();

}
/* method id 406 */ C2::C2 () {
return;

}
/* method id 407 */ C2::~C2 () {
C1 v20 = *(((C1*) 0));
C1 v21 = *(((C1*) 0));
C1 v22 = *(((C1*) 0));
C1 v23 = *(((C1*) 0));
return;

}
C2::C2 (special_constructor)  {}

/* method id 408 */ C3::~C3 () {
C1 v52 = *(((C1*) 0));
C1 v53 = *(((C1*) 0));
C1 v54 = *(((C1*) 0));
C1 v55 = *(((C1*) 0));
return;

}
/* method id 409 */ C3::C3 () {
C1 v56 = *((new C1 ()));
C0 v57 = *(&(*(((C0*) 0))));
C1 v58 = *((new C1 ()));
C1 v59 = *((new C1 ()));
return;

}
/* method id 410 */ abstract_0 C3::func4 (C0 v72) {
return ::func6(v2, v48, v79);

}
/* method id 411 */ abstract_0 C3::func0 (C1 v73, C0 v74) {
C1 v75 = *(((C1*) 0));
C1 v76 = *(((C1*) 0));
C1 v77 = *(((C1*) 0));
C2 v78 = *((new C2 ()));
return ::func6(*(((C0*) 0)), v75, v79);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func5 (C2 v81) {
C1 v82;
C1 v83;
C2 v84;

return (((C1*) 0))->C1::func1();

}
abstract_0 func6 (C0 v85, C1 v86, C2 v87) {
C1 v88;
C1 v89;
C1 v90;
C1 v91;

return (((C1*) 0))->C1::func1();

}
abstract_2 func7 (C1 v92, C2 v93, C2 v94, abstract_1 v95) {
C0 v96;

return abstract_2();

}
abstract_2 func8 (C2 v97, C1 v98, C2 v99, C1 v100) {
C1 v101;
C1 v102;
C1 v103;
C1 v104;

return ::func7(v100, v99, v99, abstract_1());

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
class C2    size(48)
0    +---
0    | var48: ClassType{1}
12   | var49: ClassType{1}
24   | var50: ClassType{1}
36   | var51: ClassType{1}
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
}
/*
class C3    size(120)
0    +---
0    | {vfptr}
4    | +--- (base class C2)
4    | | var48: ClassType{1}
16   | | var49: ClassType{1}
28   | | var50: ClassType{1}
40   | | var51: ClassType{1}
52   | +---
52   | {vbptr}
56   | var79: ClassType{2}
104  | var80: ClassType{0}
105  | alignment: 
108  +---
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
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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

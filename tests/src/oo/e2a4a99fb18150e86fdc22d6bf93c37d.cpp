// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct abstract_11 { int x; };
struct abstract_12 { int x; };
struct abstract_13 { int x; };
struct abstract_14 { int x; };
struct abstract_15 { int x; };
struct abstract_16 { int x; };
struct abstract_17 { int x; };
struct abstract_18 { int x; };
struct abstract_19 { int x; };
struct abstract_20 { int x; };
struct abstract_21 { int x; };
struct abstract_22 { int x; };
struct abstract_23 { int x; };
struct abstract_24 { int x; };
struct abstract_25 { int x; };
struct abstract_26 { int x; };
struct abstract_27 { int x; };
struct abstract_28 { int x; };
struct abstract_29 { int x; };
struct abstract_30 { int x; };
struct abstract_31 { int x; };
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
C1 (special_constructor);
C0 v0;
C0 v1;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 402 */ C2 ();
C2 (special_constructor);
C0 v26;
C0 v27;
};
struct C3 : public virtual C1 {
/* method id 403 */ C3 ();
/* method id 404 */ virtual C1*** func1 (C0 v32, C0 v33, C0 v34, C0 v35);
/* method id 405 */ abstract_0* func2 ();
C3 (special_constructor);
C0 v40;
};
abstract_0* func3 (abstract_31 v41, abstract_31 v42, C0 v43);
abstract_1 func4 (abstract_30 v48, abstract_30 v49, abstract_31 v50, abstract_30 v51);
abstract_0* func5 (C1 v56, abstract_30 v57, abstract_30 v58, abstract_31 v59);
abstract_1 func6 (abstract_30 v64, abstract_31 v65, abstract_30 v66, abstract_30 v67);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 402 */ C2::C2 () {
C0 v2 = *(((C0*) 0));
C0 v3 = *(((C0*) 0));
C0 v4 = *(((C0*) 0));
C0 v5 = *(((C0*) 0));
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 403 */ C3::C3 () {
C0 v28 = *((new C0 ()));
C0 v29 = *((new C0 ()));
C0 v30 = *((new C0 ()));
C0 v31 = *((new C0 ()));
return;

}
/* method id 404 */ C1*** C3::func1 (C0 v32, C0 v33, C0 v34, C0 v35) {
abstract_30 v36 = abstract_30();
C0 v37 = *((new C0 ()));
abstract_30 v38 = abstract_30();
C1 v39 = *(&(*(((C1*) 0))));
return new C1** ();

}
/* method id 405 */ abstract_0* C3::func2 () {
return new abstract_0 ();

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0* func3 (abstract_31 v41, abstract_31 v42, C0 v43) {
abstract_30 v44;
abstract_31 v45;
abstract_30 v46;
abstract_30 v47;

delete (new C1 ());
return new abstract_0 ();

}
abstract_1 func4 (abstract_30 v48, abstract_30 v49, abstract_31 v50, abstract_30 v51) {
abstract_30 v52;
abstract_30 v53;
abstract_30 v54;
abstract_30 v55;

return abstract_1();

}
abstract_0* func5 (C1 v56, abstract_30 v57, abstract_30 v58, abstract_31 v59) {
abstract_30 v60;
abstract_31 v61;
abstract_30 v62;
abstract_30 v63;

return new abstract_0 ();

}
abstract_1 func6 (abstract_30 v64, abstract_31 v65, abstract_30 v66, abstract_30 v67) {
abstract_31 v68;
abstract_30 v69;
abstract_30 v70;
abstract_30 v71;

return abstract_1();

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
class C1    size(2)
0    +---
0    | var0: ClassType{0}
1    | var1: ClassType{0}
2    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 2;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(10)
0    +---
0    | {vbptr}
4    | var26: ClassType{0}
5    | var27: ClassType{0}
6    | alignment: 
8    +---
8    +--- (virtual base class C0)
8    +---
8    +--- (virtual base class C1)
8    | var0: ClassType{0}
9    | var1: ClassType{0}
10   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 10;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(14)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var40: ClassType{0}
9    | alignment: 
12   +---
12   +--- (virtual base class C1)
12   | var0: ClassType{0}
13   | var1: ClassType{0}
14   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 14;
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

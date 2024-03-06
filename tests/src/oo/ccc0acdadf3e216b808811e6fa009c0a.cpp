// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ ~C1 ();
/* method id 402 */ virtual abstract_0 func0 (C0 v0, C0 v1, C0 v2);
/* method id 403 */ C1 ();
C1 (special_constructor);
C0 v14;
C0 v15;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 404 */ C2 ();
C2 (special_constructor);
C0 v32;
C0 v33;
C0 v34;
C0 v35;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 406 */ C3 ();
C3 (special_constructor);
C0 v48;
C0 v49;
};
abstract_0 func3 (C0 v50);
abstract_0 func4 (C0 v54, C0 v55, C0 v56, C0 v57);
abstract_0 func5 (C0 v60, C0 v61, C0 v62);
abstract_0 func6 (C0 v67, C0 v68, C0 v69);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::~C1 () {
delete (new C1 ());
return;

}
/* method id 402 */ abstract_0 C1::func0 (C0 v0, C0 v1, C0 v2) {
C0 v3 = *(((C0*) 0));
C0 v4 = *(((C0*) 0));
C0 v5 = *(((C0*) 0));
::func6(v2, v2, v2);
::func6(v2, v2, v2);
::func6(v2, v2, v2);
::func6(v2, v2, v2);
return ::func4(v2, v2, v2, v2);

}
/* method id 403 */ C1::C1 () {
C0 v6 = *(&(*(((C0*) 0))));
C0 v7 = *(&(*(((C0*) 0))));
C0 v8 = *(&(*(((C0*) 0))));
C0 v9 = *(&(*(((C0*) 0))));
return;

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::C2 () {
C0 v16 = *(((C0*) 0));
C0 v17 = *(((C0*) 0));
C0 v18 = *(((C0*) 0));
C0 v19 = *(((C0*) 0));
::func6(v19, v19, v19);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
C0 v36 = *(((C0*) 0));
C0 v37 = *(((C0*) 0));
C0 v38 = *(((C0*) 0));
C0 v39 = *(((C0*) 0));
::func6(v15, v15, v15);
::func6(v15, v15, v15);
::func6(v15, v15, v15);
::func6(v15, v15, v15);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func3 (C0 v50) {
C0 v51;
C0 v52;
C0 v53;

return ::func5(v53, v53, v53);

}
abstract_0 func4 (C0 v54, C0 v55, C0 v56, C0 v57) {
C0 v58;
C0 v59;

::func5(v55, v55, v55);
::func5(v55, v55, v55);
::func5(v55, v55, v55);
::func5(v55, v55, v55);
return ::func5(v55, v55, v55);

}
abstract_0 func5 (C0 v60, C0 v61, C0 v62) {
C0 v63;
C0 v64;
C0 v65;
C0 v66;

delete (new C3 ());
return ::func4(v65, v65, v65, v65);

}
abstract_0 func6 (C0 v67, C0 v68, C0 v69) {
C0 v70;
C0 v71;

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
class C1    size(8)
0    +---
0    | {vfptr}
4    | var14: ClassType{0}
5    | var15: ClassType{0}
6    | alignment: 
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
0    | {vbptr}
4    | var32: ClassType{0}
5    | var33: ClassType{0}
6    | var34: ClassType{0}
7    | var35: ClassType{0}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var14: ClassType{0}
13   | var15: ClassType{0}
14   | alignment: 
16   +---
16   | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 0, which leads with zero sized base.
20   +--- (virtual base class C0)
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(28)
0    +---
0    | {vbptr}
4    | var48: ClassType{0}
5    | var49: ClassType{0}
6    | alignment: 
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var14: ClassType{0}
13   | var15: ClassType{0}
14   | alignment: 
16   +---
16   | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 0, which leads with zero sized base.
20   +--- (virtual base class C0)
20   +---
20   +--- (virtual base class C2)
20   | {vbptr}
24   | var32: ClassType{0}
25   | var33: ClassType{0}
26   | var34: ClassType{0}
27   | var35: ClassType{0}
28   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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
 const size_t model_offset = 20;
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

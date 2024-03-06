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
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 402 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public C1 {
/* method id 403 */ virtual abstract_0*** func3 (C1 v0);
/* method id 404 */ virtual ~C2 ();
/* method id 405 */ C2 ();
C2 (special_constructor);
C1 v13;
C1 v14;
C1 v15;
C1 v16;
};
struct C3 : public virtual C2 {
/* method id 406 */ C3 ();
C3 (special_constructor);
C1 v33;
C1 v34;
C1 v35;
C1 v36;
};
abstract_0* func6 (C1 v37, C1 v38, C1 v39, C1 v40);
abstract_7 func7 (C1 v45, C1 v46, C1 v47, C1 v48);
abstract_0* func8 (C1 v52, C1 v53, C1 v54);
abstract_0* func9 (C1 v58, C1 v59, C1 v60, C1 v61);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 403 */ abstract_0*** C2::func3 (C1 v0) {
C1 v1 = *(&(*((new C1 ()))));
C1 v2 = *(&(*((new C1 ()))));
C1 v3 = *(&(*((new C1 ()))));
C1 v4 = *(&(*((new C1 ()))));
delete (new C3 ());
return new abstract_0** ();

}
/* method id 404 */ C2::~C2 () {
C1 v5 = *((new C1 ()));
C1 v6 = *((new C1 ()));
C1 v7 = *((new C1 ()));
C1 v8 = *((new C1 ()));
return;

}
/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
C1 v17 = *(((C1*) 0));
C1 v18 = *(((C1*) 0));
C1 v19 = *(((C1*) 0));
C1 v20 = *(((C1*) 0));
delete (new C2 ());
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_0* func6 (C1 v37, C1 v38, C1 v39, C1 v40) {
C1 v41;
C1 v42;
C1 v43;
C1 v44;

::func8(v39, v39, v39);
::func8(v39, v39, v39);
::func8(v39, v39, v39);
::func8(v39, v39, v39);
return ((abstract_0*) 0);

}
abstract_7 func7 (C1 v45, C1 v46, C1 v47, C1 v48) {
C1 v49;
C1 v50;
C1 v51;

return abstract_7();

}
abstract_0* func8 (C1 v52, C1 v53, C1 v54) {
C1 v55;
C1 v56;
C1 v57;

return ((abstract_0*) 0);

}
abstract_0* func9 (C1 v58, C1 v59, C1 v60, C1 v61) {
C1 v62;
C1 v63;

delete (new C1 ());
return new abstract_0 ();

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
class C1    size(0)
0    +---
0    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(12)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | +---
4    | {vbptr}
8    | var13: ClassType{1}
9    | var14: ClassType{1}
10   | var15: ClassType{1}
11   | var16: ClassType{1}
12   +---
12   +--- (virtual base class C0)
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
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
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(24)
0    +---
0    | {vbptr}
4    | var33: ClassType{1}
5    | var34: ClassType{1}
6    | var35: ClassType{1}
7    | var36: ClassType{1}
8    +---
8    +--- (virtual base class C0)
8    +---
8    | alignment: Additional padding between virtual bases 0, which ends with a zero-sized object, and 2, which leads with zero sized base.
12   +--- (virtual base class C2)
12   | {vfptr}
16   | +--- (base class C1)
16   | +---
16   | {vbptr}
20   | var13: ClassType{1}
21   | var14: ClassType{1}
22   | var15: ClassType{1}
23   | var16: ClassType{1}
24   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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

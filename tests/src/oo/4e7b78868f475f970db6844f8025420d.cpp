// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_7 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_8 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v7, abstract_1 v8);
/* method id 403 */ virtual abstract_2 func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_2 func0 (abstract_1 v14, abstract_1 v15);
/* method id 406 */ C1 ();
/* method id 407 */ virtual abstract_4 func0 (abstract_0 v21, abstract_1 v22, abstract_4** v23, abstract_1 v24);
/* method id 408 */ ~C1 ();
C1 (special_constructor);
abstract_1 v29;
abstract_6 v30;
abstract_1 v31;
abstract_4** v32;
};
struct C2 : public virtual C1 {
/* method id 409 */ C2 ();
C2 (special_constructor);
abstract_1 v52;
abstract_1 v53;
abstract_0 v54;
};
struct C3 : public C1 {
/* method id 411 */ C3 ();
/* method id 412 */ virtual ~C3 ();
/* method id 413 */ abstract_4 func0 (abstract_3 v75, abstract_4** v76, C0 v77, abstract_4* v78);
C3 (special_constructor);
C0 v84;
};
void func5 (abstract_0 v85, abstract_4** v86, C0 v87, abstract_1 v88);
abstract_7 func6 ();
void* func7 (abstract_4* v89, abstract_6 v90, abstract_4* v91, C1 v92);
void* func8 (abstract_0 v96, C0 v97, abstract_1 v98, abstract_1 v99);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
v1 = abstract_0();
v1 = abstract_0();
v1 = abstract_0();
v1 = abstract_0();
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return abstract_2();

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
return abstract_2();

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
return abstract_2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func0 (abstract_1 v14, abstract_1 v15) {
abstract_1 v16 = abstract_1();
abstract_1 v17 = abstract_1();
abstract_5 v18 = abstract_5();
abstract_5 v19 = abstract_5();
return abstract_2();

}
/* method id 406 */ C1::C1 () {
C0 v20 = *(&(*(((C0*) 0))));
v20 = *(&(v20));
v20 = *(&(v20));
v20 = *(&(v20));
return;

}
/* method id 407 */ abstract_4 C1::func0 (abstract_0 v21, abstract_1 v22, abstract_4** v23, abstract_1 v24) {
abstract_3 v25 = abstract_3();
abstract_6 v26 = abstract_6();
abstract_1 v27 = abstract_1();
abstract_0 v28 = abstract_0();
return abstract_4();

}
/* method id 408 */ C1::~C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::C2 () {
abstract_1 v33 = abstract_1();
abstract_0 v34 = abstract_0();
delete (new C1 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 411 */ C3::C3 () {
abstract_4** v55 = new abstract_4* ();
abstract_1 v56 = abstract_1();
abstract_1 v57 = abstract_1();
abstract_3 v58 = abstract_3();
return;

}
/* method id 412 */ C3::~C3 () {
abstract_1 v63 = abstract_1();
abstract_4** v64 = new abstract_4* ();
abstract_1 v65 = abstract_1();
abstract_1 v66 = abstract_1();
return;

}
/* method id 413 */ abstract_4 C3::func0 (abstract_3 v75, abstract_4** v76, C0 v77, abstract_4* v78) {
delete (new C3 ());
delete (new C1 ());
v78 = new abstract_4 ();
return abstract_4();

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void func5 (abstract_0 v85, abstract_4** v86, C0 v87, abstract_1 v88) {

return;

}
abstract_7 func6 () {

return abstract_7();

}
void* func7 (abstract_4* v89, abstract_6 v90, abstract_4* v91, C1 v92) {
abstract_1 v93;
abstract_4** v94;
C0 v95;

return ((void*) 0);

}
void* func8 (abstract_0 v96, C0 v97, abstract_1 v98, abstract_1 v99) {
abstract_1 v100;
abstract_8 v101;
C0 v102;
abstract_5 v103;

delete (new C1 ());
return ((void*) 0);

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
class C1    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var29: AbstractType{1}
12   | var30: AbstractType{6}
16   | var31: AbstractType{1}
20   | var32: DeletablePtrType{PtrType{AbstractType{4}}}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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
0    | {vbptr}
4    | var52: AbstractType{1}
8    | var53: AbstractType{1}
12   | var54: AbstractType{0}
16   | {vtordisp for vbase 0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var29: AbstractType{1}
36   | var30: AbstractType{6}
40   | var31: AbstractType{1}
44   | var32: DeletablePtrType{PtrType{AbstractType{4}}}
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
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(36)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var29: AbstractType{1}
12   | | var30: AbstractType{6}
16   | | var31: AbstractType{1}
20   | | var32: DeletablePtrType{PtrType{AbstractType{4}}}
24   | +---
24   | var84: ClassType{0}
28   | {vtordisp for vbase 0}
32   +---
32   +--- (virtual base class C0)
32   | {vfptr}
36   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

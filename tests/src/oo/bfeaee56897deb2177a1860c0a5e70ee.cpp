// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 ();
/* method id 401 */ ~C0 ();
/* method id 402 */ virtual abstract_0 func0 (abstract_1* v1, abstract_1* v2, abstract_1* v3, abstract_1* v4);
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_1* v5;
abstract_1* v6;
abstract_1* v7;
};
struct C1 : public C0 {
/* method id 404 */ C1 ();
/* method id 405 */ virtual abstract_1 func1 (C0 v12, C0 v13, C0 v14);
/* method id 406 */ ~C1 ();
C1 (special_constructor);
C0 v38;
C0 v39;
};
struct C2 : public virtual C1 {
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_1* v49;
C0 v50;
C1 v51;
};
struct C3 : public virtual C2 {
/* method id 409 */ C3 ();
C3 (special_constructor);
};
abstract_4 func5 (C0 v52, abstract_1* v53);
abstract_0 func6 (abstract_1* v54);
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return abstract_0();

}
/* method id 401 */ C0::~C0 () {
abstract_1* v0 = ((abstract_1*) 0);
return;

}
/* method id 402 */ abstract_0 C0::func0 (abstract_1* v1, abstract_1* v2, abstract_1* v3, abstract_1* v4) {
return ::func6(v1);

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
abstract_1* v8 = new abstract_1 ();
abstract_1* v9 = new abstract_1 ();
abstract_1* v10 = new abstract_1 ();
abstract_1* v11 = new abstract_1 ();
return;

}
/* method id 405 */ abstract_1 C1::func1 (C0 v12, C0 v13, C0 v14) {
C0 v15 = *(&(*(((C0*) 0))));
C0 v16 = *(&(*(((C0*) 0))));
abstract_1* v17 = ((abstract_1*) 0);
abstract_2 v18 = abstract_2();
delete (new C2 ());
return abstract_1();

}
/* method id 406 */ C1::~C1 () {
C0 v19 = *(((C0*) 0));
C0 v20 = *(((C0*) 0));
C0 v21 = *(((C0*) 0));
C0 v22 = *(((C0*) 0));
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::~C2 () {
abstract_2 v40 = abstract_2();
C0 v41 = *(((C0*) 0));
abstract_2 v42 = abstract_2();
C0 v43 = *(((C0*) 0));
return;

}
/* method id 408 */ C2::C2 () {
C0 v44 = *(&(*(((C0*) 0))));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_4 func5 (C0 v52, abstract_1* v53) {

delete (new C1 ());
return abstract_4();

}
abstract_0 func6 (abstract_1* v54) {
C1 v55;
abstract_2 v56;

delete (new C2 ());
return abstract_0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var5: PtrType{AbstractType{1}}
8    | var6: PtrType{AbstractType{1}}
12   | var7: PtrType{AbstractType{1}}
16   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(48)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var5: PtrType{AbstractType{1}}
8    | | var6: PtrType{AbstractType{1}}
12   | | var7: PtrType{AbstractType{1}}
16   | +---
16   | var38: ClassType{0}
32   | var39: ClassType{0}
48   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(124)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var49: PtrType{AbstractType{1}}
12   | var50: ClassType{0}
28   | var51: ClassType{1}
76   +---
76   +--- (virtual base class C1)
76   | +--- (base class C0)
76   | | {vfptr}
80   | | var5: PtrType{AbstractType{1}}
84   | | var6: PtrType{AbstractType{1}}
88   | | var7: PtrType{AbstractType{1}}
92   | +---
92   | var38: ClassType{0}
108  | var39: ClassType{0}
124  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 124;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 76;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(128)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C1)
4    | +--- (base class C0)
4    | | {vfptr}
8    | | var5: PtrType{AbstractType{1}}
12   | | var6: PtrType{AbstractType{1}}
16   | | var7: PtrType{AbstractType{1}}
20   | +---
20   | var38: ClassType{0}
36   | var39: ClassType{0}
52   +---
52   +--- (virtual base class C2)
52   | {vfptr}
56   | {vbptr}
60   | var49: PtrType{AbstractType{1}}
64   | var50: ClassType{0}
80   | var51: ClassType{1}
128  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 128;
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

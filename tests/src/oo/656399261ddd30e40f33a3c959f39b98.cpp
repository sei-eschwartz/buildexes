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
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ virtual abstract_0* func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3);
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual abstract_0* func0 (abstract_0** v5);
/* method id 404 */ abstract_0 func1 (abstract_0** v7, abstract_0** v8, abstract_0** v9);
/* method id 405 */ void func0 (abstract_0** v13, abstract_0** v14, abstract_0** v15, abstract_0** v16);
/* method id 406 */ abstract_0* func0 (abstract_0** v18, abstract_0** v19, abstract_0** v20);
/* method id 407 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_0** v23;
abstract_0** v24;
abstract_0** v25;
abstract_0** v26;
};
struct C3 : public virtual C2 {
/* method id 409 */ C3 ();
C3 (special_constructor);
C2 v30;
C2 v31;
C2 v32;
C2 v33;
};
abstract_0* func3 (abstract_2 v34);
abstract_0* func4 ();
abstract_0* func5 (abstract_0** v36);
abstract_0* func6 ();
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
return new abstract_0 ();

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3) {
return ((abstract_0*) 0);

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0* C1::func0 (abstract_0** v5) {
abstract_0** v6 = ((abstract_0**) 0);
return ((abstract_0*) 0);

}
/* method id 404 */ abstract_0 C1::func1 (abstract_0** v7, abstract_0** v8, abstract_0** v9) {
abstract_0** v10 = new abstract_0* ();
abstract_0** v11 = new abstract_0* ();
abstract_0** v12 = new abstract_0* ();
v8 = v8;
v8 = v8;
v8 = v8;
v8 = v8;
return abstract_0();

}
/* method id 405 */ void C1::func0 (abstract_0** v13, abstract_0** v14, abstract_0** v15, abstract_0** v16) {
abstract_0** v17 = new abstract_0* ();
return;

}
/* method id 406 */ abstract_0* C1::func0 (abstract_0** v18, abstract_0** v19, abstract_0** v20) {
return new abstract_0 ();

}
/* method id 407 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {
abstract_0** v21 = new abstract_0* ();
abstract_0** v22 = new abstract_0* ();
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
abstract_0** v27 = new abstract_0* ();
abstract_0** v28 = new abstract_0* ();
C2 v29 = *(((C2*) 0));
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_0* func3 (abstract_2 v34) {
abstract_0** v35;

::func5(v35);
::func5(v35);
::func5(v35);
::func5(v35);
return ((abstract_0*) 0);

}
abstract_0* func4 () {

return new abstract_0 ();

}
abstract_0* func5 (abstract_0** v36) {
C2 v37;

return ((abstract_0*) 0);

}
abstract_0* func6 () {
C2 v38;
C2 v39;

return new abstract_0 ();

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
class C1    size(12)
0    +---
0    | {vbptr}
4    | {vtordisp for vbase 0}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
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
 const size_t model_offset = 8;
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
0    | {vbptr}
4    | var23: PtrType{PtrType{AbstractType{0}}}
8    | var24: PtrType{PtrType{AbstractType{0}}}
12   | var25: PtrType{PtrType{AbstractType{0}}}
16   | var26: PtrType{PtrType{AbstractType{0}}}
20   | {vtordisp for vbase 0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vbptr}
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
 const size_t model_offset = 24;
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
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(164)
0    +---
0    | {vbptr}
4    | var30: ClassType{2}
36   | var31: ClassType{2}
68   | var32: ClassType{2}
100  | var33: ClassType{2}
132  | {vtordisp for vbase 0}
136  +---
136  +--- (virtual base class C0)
136  | {vfptr}
140  +---
140  +--- (virtual base class C1)
140  | {vbptr}
144  +---
144  +--- (virtual base class C2)
144  | {vbptr}
148  | var23: PtrType{PtrType{AbstractType{0}}}
152  | var24: PtrType{PtrType{AbstractType{0}}}
156  | var25: PtrType{PtrType{AbstractType{0}}}
160  | var26: PtrType{PtrType{AbstractType{0}}}
164  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 164;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 144;
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

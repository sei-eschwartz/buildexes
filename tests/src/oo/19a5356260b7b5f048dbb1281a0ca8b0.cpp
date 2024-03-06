// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
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
/* method id 404 */ virtual abstract_0* func1 (abstract_0** v7, abstract_0** v8, abstract_0** v9);
/* method id 405 */ virtual abstract_2 func0 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_0** v10;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 407 */ virtual abstract_2 func0 ();
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_0** v13;
abstract_0** v14;
abstract_0** v15;
};
struct C3 : public C1 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ virtual void func2 (abstract_0** v35, abstract_0** v36, C2 v37);
C3 (special_constructor);
C2 v70;
abstract_4 v71;
abstract_4 v72;
C2 v73;
};
abstract_0* func4 ();
abstract_0 func5 (C2 v76, C2 v77);
void func6 (abstract_4 v78, abstract_4 v79);
abstract_0* func7 (abstract_5 v80, abstract_5 v81, abstract_0** v82, abstract_5 v83);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
delete (new C2 ());
return ((abstract_0*) 0);

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3) {
delete (new C3 ());
return ((abstract_0*) 0);

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0* C1::func0 (abstract_0** v5) {
abstract_0** v6 = ((abstract_0**) 0);
delete (new C3 ());
return ::func4();

}
/* method id 404 */ abstract_0* C1::func1 (abstract_0** v7, abstract_0** v8, abstract_0** v9) {
return new abstract_0 ();

}
/* method id 405 */ abstract_2 C1::func0 () {
delete (new C1 ());
return abstract_2();

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ abstract_2 C2::func0 () {
abstract_0** v11 = ((abstract_0**) 0);
abstract_0** v12 = ((abstract_0**) 0);
v12 = v10;
delete (new C1 ());
return abstract_2();

}
/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
abstract_0** v16 = ((abstract_0**) 0);
abstract_0** v17 = ((abstract_0**) 0);
abstract_0** v18 = ((abstract_0**) 0);
abstract_0** v19 = ((abstract_0**) 0);
delete (new C1 ());
return;

}
/* method id 410 */ C3::~C3 () {
abstract_0** v32 = new abstract_0* ();
abstract_0** v33 = new abstract_0* ();
abstract_0** v34 = new abstract_0* ();
v34 = new abstract_0* ();
v34 = new abstract_0* ();
v34 = new abstract_0* ();
v34 = new abstract_0* ();
return;

}
/* method id 411 */ void C3::func2 (abstract_0** v35, abstract_0** v36, C2 v37) {
C2 v38 = *(&(*((new C2 ()))));
C2 v39 = *(&(*((new C2 ()))));
C2 v40 = *(&(*((new C2 ()))));
C2 v41 = *(&(*((new C2 ()))));
::func5(*((new C2 ())), v73);
::func5(*((new C2 ())), v73);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0* func4 () {
C2 v74;
abstract_0** v75;

return ((abstract_0*) 0);

}
abstract_0 func5 (C2 v76, C2 v77) {

::func6(abstract_4(), abstract_4());
return abstract_0();

}
void func6 (abstract_4 v78, abstract_4 v79) {

delete (new C1 ());
return;

}
abstract_0* func7 (abstract_5 v80, abstract_5 v81, abstract_0** v82, abstract_5 v83) {
C2 v84;

delete (new C1 ());
return ((abstract_0*) 0);

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var10: PtrType{PtrType{AbstractType{0}}}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(40)
0    +---
0    | {vbptr}
4    | var13: PtrType{PtrType{AbstractType{0}}}
8    | var14: PtrType{PtrType{AbstractType{0}}}
12   | var15: PtrType{PtrType{AbstractType{0}}}
16   | {vtordisp for vbase 0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   | {vtordisp for vbase 1}
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var10: PtrType{PtrType{AbstractType{0}}}
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
class C3    size(108)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var10: PtrType{PtrType{AbstractType{0}}}
12   | +---
12   | var70: ClassType{2}
52   | var71: AbstractType{4}
56   | var72: AbstractType{4}
60   | var73: ClassType{2}
100  | {vtordisp for vbase 0}
104  +---
104  +--- (virtual base class C0)
104  | {vfptr}
108  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 108;
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

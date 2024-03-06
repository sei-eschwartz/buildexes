// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
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
/* method id 409 */ virtual abstract_0* func0 (abstract_0** v23);
/* method id 410 */ virtual ~C2 ();
C2 (special_constructor);
abstract_0** v32;
abstract_0** v33;
abstract_0** v34;
abstract_0** v35;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 411 */ C3 ();
/* method id 412 */ ~C3 ();
/* method id 413 */ virtual void func1 ();
C3 (special_constructor);
abstract_0** v40;
abstract_4 v41;
C1 v42;
};
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
return ((abstract_0*) 0);

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3) {
((new C3 ()))->C3::func1();
((new C3 ()))->C3::func1();
((new C3 ()))->C3::func1();
((new C3 ()))->C3::func1();
return new abstract_0 ();

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0* C1::func0 (abstract_0** v5) {
abstract_0** v6 = ((abstract_0**) 0);
return new abstract_0 ();

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
abstract_0** v13 = ((abstract_0**) 0);
abstract_0** v14 = ((abstract_0**) 0);
delete (new C2 ());
return abstract_2();

}
/* method id 408 */ C2::C2 () {
abstract_0** v15 = ((abstract_0**) 0);
abstract_0** v16 = ((abstract_0**) 0);
abstract_0** v17 = ((abstract_0**) 0);
abstract_0** v18 = ((abstract_0**) 0);
return;

}
/* method id 409 */ abstract_0* C2::func0 (abstract_0** v23) {
abstract_0** v24 = new abstract_0* ();
abstract_0** v25 = new abstract_0* ();
abstract_0** v26 = new abstract_0* ();
abstract_0** v27 = new abstract_0* ();
return new abstract_0 ();

}
/* method id 410 */ C2::~C2 () {
abstract_0** v28 = new abstract_0* ();
abstract_0** v29 = new abstract_0* ();
abstract_0** v30 = new abstract_0* ();
abstract_0** v31 = new abstract_0* ();
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 411 */ C3::C3 () {
abstract_0** v36 = ((abstract_0**) 0);
return;

}
/* method id 412 */ C3::~C3 () {
abstract_4 v38 = abstract_4();
return;

}
/* method id 413 */ void C3::func1 () {
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

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
class C2    size(48)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var32: PtrType{PtrType{AbstractType{0}}}
12   | var33: PtrType{PtrType{AbstractType{0}}}
16   | var34: PtrType{PtrType{AbstractType{0}}}
20   | var35: PtrType{PtrType{AbstractType{0}}}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   +---
32   | {vtordisp for vbase 1}
36   +--- (virtual base class C1)
36   | {vfptr}
40   | {vbptr}
44   | var10: PtrType{PtrType{AbstractType{0}}}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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
 const size_t model_offset = 36;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(84)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var40: PtrType{PtrType{AbstractType{0}}}
12   | var41: AbstractType{4}
16   | var42: ClassType{1}
36   | {vtordisp for vbase 0}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   +---
44   | {vtordisp for vbase 1}
48   +--- (virtual base class C1)
48   | {vfptr}
52   | {vbptr}
56   | var10: PtrType{PtrType{AbstractType{0}}}
60   +---
60   +--- (virtual base class C2)
60   | {vfptr}
64   | {vbptr}
68   | var32: PtrType{PtrType{AbstractType{0}}}
72   | var33: PtrType{PtrType{AbstractType{0}}}
76   | var34: PtrType{PtrType{AbstractType{0}}}
80   | var35: PtrType{PtrType{AbstractType{0}}}
84   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 84;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 48;
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
 const size_t model_offset = 60;
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

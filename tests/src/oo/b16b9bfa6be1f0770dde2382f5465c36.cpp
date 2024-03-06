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
/* method id 409 */ virtual ~C2 ();
/* method id 410 */ void func3 (abstract_0** v48, abstract_0** v49);
C2 (special_constructor);
abstract_0** v51;
abstract_4 v52;
abstract_0** v53;
abstract_0** v54;
};
struct C3 : public virtual C0, public virtual C1, public virtual C2 {
/* method id 411 */ abstract_0* func0 (abstract_4 v55, abstract_0* v56);
/* method id 412 */ C3 ();
/* method id 413 */ abstract_3 func3 (abstract_0** v63, abstract_0** v64, abstract_0* v65, abstract_0* v66);
C3 (special_constructor);
};
void func5 ();
abstract_2 func6 (C3 v70);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
delete (new C2 ());
return new abstract_0 ();

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3) {
::func5();
::func5();
::func5();
::func5();
return ((abstract_0*) 0);

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0* C1::func0 (abstract_0** v5) {
abstract_0** v6 = ((abstract_0**) 0);
delete (new C0 ());
return new abstract_0 ();

}
/* method id 404 */ abstract_0* C1::func1 (abstract_0** v7, abstract_0** v8, abstract_0** v9) {
delete (new C1 ());
delete (new C3 ());
return ((abstract_0*) 0);

}
/* method id 405 */ abstract_2 C1::func0 () {
v10 = new abstract_0* ();
delete (new C3 ());
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
return abstract_2();

}
/* method id 408 */ C2::C2 () {
abstract_0** v15 = new abstract_0* ();
abstract_0** v16 = new abstract_0* ();
abstract_0** v17 = new abstract_0* ();
abstract_0** v18 = new abstract_0* ();
delete (new C1 ());
return;

}
/* method id 409 */ C2::~C2 () {
abstract_0** v39 = ((abstract_0**) 0);
delete (new C1 ());
return;

}
/* method id 410 */ void C2::func3 (abstract_0** v48, abstract_0** v49) {
abstract_4 v50 = abstract_4();
v53 = v51;
v53 = v51;
return ::func5();

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 411 */ abstract_0* C3::func0 (abstract_4 v55, abstract_0* v56) {
abstract_0** v57 = ((abstract_0**) 0);
abstract_0* v58 = new abstract_0 ();
return v58;

}
/* method id 412 */ C3::C3 () {
abstract_0* v59 = new abstract_0 ();
abstract_4 v60 = abstract_4();
abstract_4 v61 = abstract_4();
abstract_4 v62 = abstract_4();
return;

}
/* method id 413 */ abstract_3 C3::func3 (abstract_0** v63, abstract_0** v64, abstract_0* v65, abstract_0* v66) {
abstract_4 v67 = abstract_4();
abstract_0* v68 = ((abstract_0*) 0);
abstract_0* v69 = ((abstract_0*) 0);
return abstract_3();

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

void func5 () {

((new C1 ()))->C1::func0();
return;

}
abstract_2 func6 (C3 v70) {
abstract_0* v71;
abstract_0* v72;
C3 v73;

delete (new C1 ());
return abstract_2();

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
class C2    size(48)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var51: PtrType{PtrType{AbstractType{0}}}
12   | var52: AbstractType{4}
16   | var53: PtrType{PtrType{AbstractType{0}}}
20   | var54: PtrType{PtrType{AbstractType{0}}}
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
class C3    size(52)
0    +---
0    | {vbptr}
4    | {vtordisp for vbase 0}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
12   | {vtordisp for vbase 1}
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var10: PtrType{PtrType{AbstractType{0}}}
28   +---
28   +--- (virtual base class C2)
28   | {vfptr}
32   | {vbptr}
36   | var51: PtrType{PtrType{AbstractType{0}}}
40   | var52: AbstractType{4}
44   | var53: PtrType{PtrType{AbstractType{0}}}
48   | var54: PtrType{PtrType{AbstractType{0}}}
52   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
 const size_t model_offset = 28;
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

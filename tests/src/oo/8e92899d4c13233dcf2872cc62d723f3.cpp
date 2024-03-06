// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_8 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_7 { int x; };
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
struct C1 : public C0 {
/* method id 405 */ virtual abstract_2 func1 (abstract_3 v14, abstract_4 v15, abstract_1 v16, abstract_1 v17);
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ virtual abstract_5 func1 ();
/* method id 408 */ virtual abstract_2 func0 (abstract_0 v19, abstract_4 v20);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_5* v23;
abstract_5* v24;
abstract_2* v25;
abstract_4 v26;
};
struct C2 : public virtual C1 {
/* method id 410 */ C2 ();
/* method id 411 */ virtual abstract_5 func0 (abstract_2* v39, abstract_2* v40);
/* method id 412 */ abstract_5 func3 ();
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 414 */ virtual abstract_6 func5 ();
/* method id 415 */ virtual abstract_8 func6 ();
/* method id 416 */ abstract_5 func7 ();
/* method id 417 */ C3 ();
C3 (special_constructor);
};
abstract_8 func10 (abstract_1 v49);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
delete (new C2 ());
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

/* method id 405 */ abstract_2 C1::func1 (abstract_3 v14, abstract_4 v15, abstract_1 v16, abstract_1 v17) {
return ((new C1 ()))->C1::func0(abstract_0(), v26);

}
/* method id 406 */ C1::~C1 () {
abstract_5* v18 = new abstract_5 ();
delete (new C2 ());
return;

}
/* method id 407 */ abstract_5 C1::func1 () {
return abstract_5();

}
/* method id 408 */ abstract_2 C1::func0 (abstract_0 v19, abstract_4 v20) {
abstract_5* v21 = ((abstract_5*) 0);
abstract_0 v22 = abstract_0();
return abstract_2();

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C2::C2 () {
abstract_1 v27 = abstract_1();
abstract_1 v28 = abstract_1();
abstract_1 v29 = abstract_1();
abstract_1 v30 = abstract_1();
return;

}
/* method id 411 */ abstract_5 C2::func0 (abstract_2* v39, abstract_2* v40) {
abstract_1 v41 = abstract_1();
abstract_0 v42 = abstract_0();
return abstract_5();

}
/* method id 412 */ abstract_5 C2::func3 () {
abstract_2** v43 = new abstract_2* ();
return abstract_5();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 414 */ abstract_6 C3::func5 () {
abstract_2** v44 = new abstract_2* ();
abstract_7 v45 = abstract_7();
return abstract_6();

}
/* method id 415 */ abstract_8 C3::func6 () {
abstract_1 v46 = abstract_1();
abstract_0 v47 = abstract_0();
return ::func10(v46);

}
/* method id 416 */ abstract_5 C3::func7 () {
abstract_2** v48 = new abstract_2* ();
delete (new C2 ());
return (((C1*) 0))->C1::func1();

}
/* method id 417 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_8 func10 (abstract_1 v49) {

return abstract_8();

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
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var23: PtrType{AbstractType{5}}
8    | var24: PtrType{AbstractType{5}}
12   | var25: PtrType{AbstractType{2}}
16   | var26: AbstractType{4}
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
class C2    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | +--- (base class C0)
8    | | {vfptr}
12   | +---
12   | var23: PtrType{AbstractType{5}}
16   | var24: PtrType{AbstractType{5}}
20   | var25: PtrType{AbstractType{2}}
24   | var26: AbstractType{4}
28   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 28;
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
 }}}
/*
class C3    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | +--- (base class C0)
8    | | {vfptr}
12   | +---
12   | var23: PtrType{AbstractType{5}}
16   | var24: PtrType{AbstractType{5}}
20   | var25: PtrType{AbstractType{2}}
24   | var26: AbstractType{4}
28   +---
28   +--- (virtual base class C2)
28   | {vfptr}
32   | {vbptr}
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

// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ abstract_1 func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_1 func0 ();
/* method id 406 */ C1 ();
/* method id 407 */ virtual abstract_1 func1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 408 */ abstract_1 func3 (abstract_1* v22);
/* method id 409 */ virtual abstract_1 func1 (C0 v25);
/* method id 410 */ C2 ();
/* method id 411 */ virtual abstract_1 func0 ();
C2 (special_constructor);
abstract_0 v26;
abstract_1* v27;
abstract_1* v28;
};
struct C3 : public virtual C1, public C2 {
/* method id 412 */ C3 ();
/* method id 413 */ virtual abstract_1 func5 ();
/* method id 414 */ virtual abstract_1 func0 ();
/* method id 415 */ virtual ~C3 ();
C3 (special_constructor);
abstract_4 v54;
abstract_2 v55;
abstract_2 v56;
abstract_4 v57;
};
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return (&(*(((C1*) 0))))->C1::func1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
delete (new C1 ());
return (((C1*) 0))->C1::func1();

}
/* method id 402 */ abstract_1 C0::func0 () {
(&(*((new C1 ()))))->C1::func1();
(&(*((new C1 ()))))->C1::func1();
(&(*((new C1 ()))))->C1::func1();
(&(*((new C1 ()))))->C1::func1();
return (&(*(((C1*) 0))))->C1::func1();

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7) {
return (((C3*) 0))->C3::func5();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func0 () {
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_1* v10 = ((abstract_1*) 0);
abstract_0 v11 = abstract_0();
delete (new C1 ());
return (((C1*) 0))->C1::func1();

}
/* method id 406 */ C1::C1 () {
abstract_1* v12 = new abstract_1 ();
abstract_2 v13 = abstract_2();
C0 v14 = *(((C0*) 0));
return;

}
/* method id 407 */ abstract_1 C1::func1 () {
abstract_1* v17 = ((abstract_1*) 0);
return (((C3*) 0))->C3::func0();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ abstract_1 C2::func3 (abstract_1* v22) {
C0 v23 = *(((C0*) 0));
abstract_0 v24 = abstract_0();
return (((C1*) 0))->C1::func1();

}
/* method id 409 */ abstract_1 C2::func1 (C0 v25) {
((new C1 ()))->C1::func0();
((new C1 ()))->C1::func0();
((new C1 ()))->C1::func0();
((new C1 ()))->C1::func0();
return (((C1*) 0))->C1::func0();

}
/* method id 410 */ C2::C2 () {
(((C3*) 0))->C3::func5();
return;

}
/* method id 411 */ abstract_1 C2::func0 () {
(&(*((new C3 ()))))->C3::func5();
(&(*((new C3 ()))))->C3::func5();
(&(*((new C3 ()))))->C3::func5();
(&(*((new C3 ()))))->C3::func5();
return ((new C1 ()))->C1::func1();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {
abstract_0 v29 = abstract_0();
abstract_0 v30 = abstract_0();
return;

}
/* method id 413 */ abstract_1 C3::func5 () {
return (((C1*) 0))->C1::func1();

}
/* method id 414 */ abstract_1 C3::func0 () {
abstract_3 v34 = abstract_3();
abstract_3 v35 = abstract_3();
abstract_1* v36 = ((abstract_1*) 0);
abstract_0 v37 = abstract_0();
return (((C3*) 0))->C3::func5();

}
/* method id 415 */ C3::~C3 () {
abstract_2 v50 = abstract_2();
abstract_2 v51 = abstract_2();
abstract_2 v52 = abstract_2();
abstract_2 v53 = abstract_2();
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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var26: AbstractType{0}
12   | var27: PtrType{AbstractType{1}}
16   | var28: PtrType{AbstractType{1}}
20   | {vtordisp for vbase 0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
class C3    size(52)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | | var26: AbstractType{0}
12   | | var27: PtrType{AbstractType{1}}
16   | | var28: PtrType{AbstractType{1}}
20   | +---
20   | var54: AbstractType{4}
24   | var55: AbstractType{2}
28   | var56: AbstractType{2}
32   | var57: AbstractType{4}
36   | {vtordisp for vbase 0}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   +---
44   +--- (virtual base class C1)
44   | {vfptr}
48   | {vbptr}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 44;
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
 const size_t model_offset = 0;
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

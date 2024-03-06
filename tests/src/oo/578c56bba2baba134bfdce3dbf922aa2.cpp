// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_8 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ C0 ();
/* method id 403 */ virtual abstract_1 func0 ();
C0 (special_constructor);
abstract_0 v7;
abstract_0 v8;
abstract_1* v9;
abstract_1* v10;
};
struct C1 : public C0 {
/* method id 404 */ C1 ();
/* method id 405 */ abstract_1 func0 (abstract_1* v15);
/* method id 406 */ virtual abstract_1 func2 (abstract_1* v22, abstract_0 v23);
/* method id 407 */ ~C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0 {
/* method id 408 */ virtual abstract_6 func3 (abstract_2 v28, abstract_5 v29);
/* method id 409 */ virtual ~C2 ();
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_0 v33;
abstract_0 v34;
abstract_2 v35;
abstract_1* v36;
};
struct C3 : public virtual C2 {
/* method id 411 */ virtual abstract_7 func1 (abstract_5 v37);
/* method id 412 */ C3 ();
C3 (special_constructor);
};
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return abstract_1();

}
/* method id 402 */ C0::C0 () {
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
delete (new C0 ());
return;

}
/* method id 403 */ abstract_1 C0::func0 () {
abstract_1* v6 = ((abstract_1*) 0);
delete (new C3 ());
return abstract_1();

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
abstract_1* v11 = new abstract_1 ();
abstract_2 v12 = abstract_2();
abstract_1* v13 = new abstract_1 ();
abstract_3 v14 = abstract_3();
return;

}
/* method id 405 */ abstract_1 C1::func0 (abstract_1* v15) {
abstract_3 v16 = abstract_3();
abstract_1* v17 = new abstract_1 ();
abstract_2 v18 = abstract_2();
abstract_2 v19 = abstract_2();
return abstract_1();

}
/* method id 406 */ abstract_1 C1::func2 (abstract_1* v22, abstract_0 v23) {
delete (new C2 ());
return abstract_1();

}
/* method id 407 */ C1::~C1 () {
abstract_1* v24 = ((abstract_1*) 0);
abstract_2 v25 = abstract_2();
abstract_5 v26 = abstract_5();
abstract_5 v27 = abstract_5();
((new C1 ()))->C1::func2(v24, v8);
((new C1 ()))->C1::func2(v24, v8);
((new C1 ()))->C1::func2(v24, v8);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ abstract_6 C2::func3 (abstract_2 v28, abstract_5 v29) {
abstract_5 v30 = abstract_5();
abstract_1* v31 = new abstract_1 ();
return abstract_6();

}
/* method id 409 */ C2::~C2 () {
abstract_3 v32 = abstract_3();
return;

}
/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 411 */ abstract_7 C3::func1 (abstract_5 v37) {
abstract_1* v38 = ((abstract_1*) 0);
abstract_8 v39 = abstract_8();
abstract_4 v40 = abstract_4();
abstract_4 v41 = abstract_4();
return abstract_7();

}
/* method id 412 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var7: AbstractType{0}
8    | var8: AbstractType{0}
12   | var9: PtrType{AbstractType{1}}
16   | var10: PtrType{AbstractType{1}}
20   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 20;
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
4    | | var7: AbstractType{0}
8    | | var8: AbstractType{0}
12   | | var9: PtrType{AbstractType{1}}
16   | | var10: PtrType{AbstractType{1}}
20   | +---
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
class C2    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var33: AbstractType{0}
12   | var34: AbstractType{0}
16   | var35: AbstractType{2}
20   | var36: PtrType{AbstractType{1}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var7: AbstractType{0}
32   | var8: AbstractType{0}
36   | var9: PtrType{AbstractType{1}}
40   | var10: PtrType{AbstractType{1}}
44   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 44;
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
 }}}
/*
class C3    size(52)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var7: AbstractType{0}
16   | var8: AbstractType{0}
20   | var9: PtrType{AbstractType{1}}
24   | var10: PtrType{AbstractType{1}}
28   +---
28   +--- (virtual base class C2)
28   | {vfptr}
32   | {vbptr}
36   | var33: AbstractType{0}
40   | var34: AbstractType{0}
44   | var35: AbstractType{2}
48   | var36: PtrType{AbstractType{1}}
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

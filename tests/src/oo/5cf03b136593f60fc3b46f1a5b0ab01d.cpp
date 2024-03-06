// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 ();
/* method id 401 */ ~C0 ();
/* method id 402 */ virtual abstract_1 func1 (abstract_1* v1, abstract_1* v2, abstract_1* v3, abstract_2 v4);
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_1* v6;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual abstract_1 func3 (abstract_0* v7, abstract_2 v8, abstract_2 v9);
/* method id 405 */ abstract_1 func4 ();
/* method id 406 */ abstract_1 func1 (abstract_2 v10);
/* method id 407 */ virtual abstract_1 func5 (abstract_2 v11, abstract_1* v12);
/* method id 408 */ C1 ();
C1 (special_constructor);
abstract_2 v14;
abstract_0* v15;
abstract_0* v16;
abstract_2 v17;
};
struct C2 : public virtual C1 {
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_0* v21;
abstract_2 v22;
};
struct C3 : public C2 {
/* method id 412 */ C3 ();
C3 (special_constructor);
abstract_2 v23;
abstract_2 v24;
};
abstract_0 func11 (abstract_2 v25, C3 v26);
abstract_3 func12 (abstract_2 v30, C3 v31, abstract_2 v32);
abstract_1 func13 (abstract_2 v34, abstract_2 v35, abstract_2 v36, abstract_0* v37);
abstract_1 func14 (abstract_2 v42, abstract_2 v43, abstract_0* v44, abstract_2 v45);
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return ::func11(abstract_2(), *((new C3 ())));

}
/* method id 401 */ C0::~C0 () {
abstract_1* v0 = ((abstract_1*) 0);
delete (new C1 ());
return;

}
/* method id 402 */ abstract_1 C0::func1 (abstract_1* v1, abstract_1* v2, abstract_1* v3, abstract_2 v4) {
abstract_2 v5 = abstract_2();
return abstract_1();

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_1 C1::func3 (abstract_0* v7, abstract_2 v8, abstract_2 v9) {
delete (new C1 ());
return ::func14(v14, v14, v15, v14);

}
/* method id 405 */ abstract_1 C1::func4 () {
return abstract_1();

}
/* method id 406 */ abstract_1 C1::func1 (abstract_2 v10) {
delete (new C3 ());
return ::func14(v17, v17, v16, v17);

}
/* method id 407 */ abstract_1 C1::func5 (abstract_2 v11, abstract_1* v12) {
abstract_0* v13 = new abstract_0 ();
delete (new C1 ());
return ::func14(v14, v14, v16, v14);

}
/* method id 408 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C2::C2 () {
abstract_2 v18 = abstract_2();
abstract_0* v19 = ((abstract_0*) 0);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_0 func11 (abstract_2 v25, C3 v26) {
abstract_0* v27;
abstract_0* v28;
C3 v29;

return abstract_0();

}
abstract_3 func12 (abstract_2 v30, C3 v31, abstract_2 v32) {
C3 v33;

delete (new C1 ());
return abstract_3();

}
abstract_1 func13 (abstract_2 v34, abstract_2 v35, abstract_2 v36, abstract_0* v37) {
abstract_2 v38;
abstract_2 v39;
C3 v40;
abstract_2 v41;

return ::func14(abstract_2(), abstract_2(), v37, abstract_2());

}
abstract_1 func14 (abstract_2 v42, abstract_2 v43, abstract_0* v44, abstract_2 v45) {
C3 v46;

return abstract_1();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var6: PtrType{AbstractType{1}}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
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
8    | var14: AbstractType{2}
12   | var15: PtrType{AbstractType{0}}
16   | var16: PtrType{AbstractType{0}}
20   | var17: AbstractType{2}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var6: PtrType{AbstractType{1}}
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
 const size_t model_offset = 24;
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
0    | {vbptr}
4    | var21: PtrType{AbstractType{0}}
8    | var22: AbstractType{2}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var6: PtrType{AbstractType{1}}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var14: AbstractType{2}
32   | var15: PtrType{AbstractType{0}}
36   | var16: PtrType{AbstractType{0}}
40   | var17: AbstractType{2}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
0    | | {vbptr}
4    | | var21: PtrType{AbstractType{0}}
8    | | var22: AbstractType{2}
12   | +---
12   | var23: AbstractType{2}
16   | var24: AbstractType{2}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var6: PtrType{AbstractType{1}}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var14: AbstractType{2}
40   | var15: PtrType{AbstractType{0}}
44   | var16: PtrType{AbstractType{0}}
48   | var17: AbstractType{2}
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

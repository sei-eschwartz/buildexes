// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
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
/* method id 406 */ abstract_2 func0 ();
/* method id 407 */ C1 ();
C1 (special_constructor);
abstract_1 v20;
abstract_5 v21;
abstract_5 v22;
abstract_5 v23;
};
struct C2 : public virtual C1 {
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ C2 ();
C2 (special_constructor);
abstract_1 v25;
};
struct C3 : public virtual C0, public C2 {
/* method id 410 */ C3 ();
/* method id 411 */ virtual abstract_4 func0 (abstract_5 v29, abstract_1 v30);
C3 (special_constructor);
};
abstract_2 func4 (abstract_0 v32);
abstract_4 func5 (C0 v36, abstract_0 v37);
abstract_4 func6 (abstract_3 v41, C1 v42);
abstract_2* func7 (abstract_6 v44, abstract_3 v45, abstract_1 v46, abstract_2*** v47);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
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
return ::func4(abstract_0());

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
return ::func4(v13);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func0 (abstract_1 v14, abstract_1 v15) {
abstract_1 v16 = abstract_1();
abstract_1 v17 = abstract_1();
abstract_5 v18 = abstract_5();
abstract_5 v19 = abstract_5();
return ::func4(abstract_0());

}
/* method id 406 */ abstract_2 C1::func0 () {
return abstract_2();

}
/* method id 407 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::~C2 () {
abstract_1 v24 = abstract_1();
return;

}
/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
abstract_0 v26 = abstract_0();
abstract_5 v27 = abstract_5();
abstract_0 v28 = abstract_0();
return;

}
/* method id 411 */ abstract_4 C3::func0 (abstract_5 v29, abstract_1 v30) {
abstract_2* v31 = ((abstract_2*) 0);
return ::func6(abstract_3(), *((new C1 ())));

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

abstract_2 func4 (abstract_0 v32) {
abstract_0 v33;
C3 v34;
C3 v35;

return abstract_2();

}
abstract_4 func5 (C0 v36, abstract_0 v37) {
abstract_2* v38;
C3 v39;
abstract_0 v40;

return ::func6(abstract_3(), *(((C1*) 0)));

}
abstract_4 func6 (abstract_3 v41, C1 v42) {
abstract_5 v43;

return abstract_4();

}
abstract_2* func7 (abstract_6 v44, abstract_3 v45, abstract_1 v46, abstract_2*** v47) {
C3 v48;
abstract_1 v49;
abstract_0 v50;
abstract_2* v51;

return ((abstract_2*) 0);

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
class C1    size(28)
0    +---
0    | {vbptr}
4    | var20: AbstractType{1}
8    | var21: AbstractType{5}
12   | var22: AbstractType{5}
16   | var23: AbstractType{5}
20   | {vtordisp for vbase 0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
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
class C2    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var25: AbstractType{1}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   +--- (virtual base class C1)
20   | {vbptr}
24   | var20: AbstractType{1}
28   | var21: AbstractType{5}
32   | var22: AbstractType{5}
36   | var23: AbstractType{5}
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
class C3    size(40)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | | var25: AbstractType{1}
12   | +---
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   +--- (virtual base class C1)
20   | {vbptr}
24   | var20: AbstractType{1}
28   | var21: AbstractType{5}
32   | var22: AbstractType{5}
36   | var23: AbstractType{5}
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
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

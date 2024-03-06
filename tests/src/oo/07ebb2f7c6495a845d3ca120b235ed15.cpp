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
/* method id 402 */ abstract_1 func0 (abstract_1** v4, abstract_1** v5);
/* method id 403 */ abstract_1 func1 (abstract_1** v6, abstract_0 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_0 v12;
abstract_0 v13;
abstract_0 v14;
abstract_0 v15;
};
struct C1  {
/* method id 405 */ C1 ();
C1 (special_constructor);
};
struct C2 : public C0, public C1 {
/* method id 406 */ virtual abstract_1 func2 (abstract_1** v16);
/* method id 407 */ abstract_1 func1 ();
/* method id 408 */ virtual abstract_1 func0 (abstract_0 v21);
/* method id 409 */ virtual ~C2 ();
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_1** v23;
abstract_1* v24;
abstract_0 v25;
abstract_1** v26;
};
struct C3 : public virtual C1, public virtual C0 {
/* method id 411 */ abstract_1 func4 (abstract_1** v27, abstract_1** v28, abstract_1** v29);
/* method id 412 */ void func5 (abstract_1** v30, abstract_0 v31);
/* method id 413 */ C3 ();
C3 (special_constructor);
abstract_3 v49;
abstract_3 v50;
abstract_3 v51;
abstract_3 v52;
};
void func6 (abstract_1** v53, abstract_1** v54, abstract_0 v55, C3 v56);
void func7 (abstract_1* v59, abstract_4 v60, abstract_1** v61, abstract_0 v62);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return (((C3*) 0))->C3::func4(new abstract_1* (), new abstract_1* (), new abstract_1* ());

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return (((C2*) 0))->C2::func1();

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v4, abstract_1** v5) {
return (((C3*) 0))->C3::func4(v5, v5, v5);

}
/* method id 403 */ abstract_1 C0::func1 (abstract_1** v6, abstract_0 v7) {
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_0 v11 = abstract_0();
return (((C3*) 0))->C3::func4(v6, v6, v6);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 406 */ abstract_1 C2::func2 (abstract_1** v16) {
abstract_1* v17 = new abstract_1 ();
return ((new C3 ()))->C3::func4(v23, v23, v23);

}
/* method id 407 */ abstract_1 C2::func1 () {
abstract_0 v18 = abstract_0();
abstract_1* v19 = ((abstract_1*) 0);
abstract_1** v20 = new abstract_1* ();
return abstract_1();

}
/* method id 408 */ abstract_1 C2::func0 (abstract_0 v21) {
return abstract_1();

}
/* method id 409 */ C2::~C2 () {
abstract_1* v22 = new abstract_1 ();
return;

}
/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 411 */ abstract_1 C3::func4 (abstract_1** v27, abstract_1** v28, abstract_1** v29) {
return abstract_1();

}
/* method id 412 */ void C3::func5 (abstract_1** v30, abstract_0 v31) {
abstract_2 v32 = abstract_2();
return ::func7(new abstract_1 (), abstract_4(), v30, v14);

}
/* method id 413 */ C3::C3 () {
abstract_1** v33 = new abstract_1* ();
abstract_1** v34 = new abstract_1* ();
abstract_3 v35 = abstract_3();
abstract_1** v36 = new abstract_1* ();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

void func6 (abstract_1** v53, abstract_1** v54, abstract_0 v55, C3 v56) {
abstract_2 v57;
abstract_1** v58;

return;

}
void func7 (abstract_1* v59, abstract_4 v60, abstract_1** v61, abstract_0 v62) {

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var12: AbstractType{0}
4    | var13: AbstractType{0}
8    | var14: AbstractType{0}
12   | var15: AbstractType{0}
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
class C1    size(0)
0    +---
0    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(36)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | | var12: AbstractType{0}
8    | | var13: AbstractType{0}
12   | | var14: AbstractType{0}
16   | | var15: AbstractType{0}
20   | +---
20   | +--- (base class C1)
20   | +---
20   | var23: DeletablePtrType{PtrType{AbstractType{1}}}
24   | var24: PtrType{AbstractType{1}}
28   | var25: AbstractType{0}
32   | var26: DeletablePtrType{PtrType{AbstractType{1}}}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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
class C3    size(36)
0    +---
0    | {vbptr}
4    | var49: AbstractType{3}
8    | var50: AbstractType{3}
12   | var51: AbstractType{3}
16   | var52: AbstractType{3}
20   +---
20   +--- (virtual base class C1)
20   +---
20   +--- (virtual base class C0)
20   | var12: AbstractType{0}
24   | var13: AbstractType{0}
28   | var14: AbstractType{0}
32   | var15: AbstractType{0}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

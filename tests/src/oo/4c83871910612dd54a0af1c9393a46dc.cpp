// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ abstract_0* func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3);
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_0** v4;
abstract_0** v5;
};
struct C1  {
/* method id 403 */ virtual abstract_0* func0 (abstract_0** v6);
/* method id 404 */ virtual abstract_1 func2 (abstract_0** v7);
/* method id 405 */ C1 ();
C1 (special_constructor);
abstract_0** v8;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 406 */ virtual ~C2 ();
/* method id 407 */ virtual void func4 ();
/* method id 408 */ virtual abstract_1 func0 ();
/* method id 409 */ C2 ();
C2 (special_constructor);
abstract_2 v14;
};
struct C3 : public virtual C0, public virtual C1, public virtual C2 {
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ virtual abstract_1 func6 (abstract_2 v15, C0 v16);
/* method id 412 */ abstract_0* func7 (C0 v17, abstract_2 v18, abstract_2 v19);
/* method id 413 */ C3 ();
C3 (special_constructor);
abstract_2 v28;
abstract_2 v29;
abstract_0** v30;
};
abstract_1 func8 (abstract_2 v31, abstract_2 v32, abstract_2 v33, abstract_2 v34);
abstract_0* func9 (abstract_2 v39, abstract_2 v40, abstract_3 v41);
abstract_0* func10 (abstract_3 v45, abstract_2 v46, abstract_2 v47, abstract_2 v48);
abstract_0* func11 (abstract_2 v51, abstract_2 v52, abstract_2 v53, abstract_2 v54);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
v5 = v5;
v5 = v5;
v5 = v5;
v5 = v5;
return ((abstract_0*) 0);

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3) {
return new abstract_0 ();

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0* C1::func0 (abstract_0** v6) {
return ::func9(abstract_2(), abstract_2(), abstract_3());

}
/* method id 404 */ abstract_1 C1::func2 (abstract_0** v7) {
return abstract_1();

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 406 */ C2::~C2 () {
return;

}
/* method id 407 */ void C2::func4 () {
abstract_0** v9 = ((abstract_0**) 0);
abstract_0** v10 = ((abstract_0**) 0);
abstract_0** v11 = ((abstract_0**) 0);
return;

}
/* method id 408 */ abstract_1 C2::func0 () {
abstract_0** v12 = ((abstract_0**) 0);
abstract_0** v13 = ((abstract_0**) 0);
return abstract_1();

}
/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 410 */ C3::~C3 () {
return;

}
/* method id 411 */ abstract_1 C3::func6 (abstract_2 v15, C0 v16) {
return ::func8(v14, v14, v14, v14);

}
/* method id 412 */ abstract_0* C3::func7 (C0 v17, abstract_2 v18, abstract_2 v19) {
v4 = new abstract_0* ();
v4 = new abstract_0* ();
v4 = new abstract_0* ();
v4 = new abstract_0* ();
return new abstract_0 ();

}
/* method id 413 */ C3::C3 () {
abstract_2 v24 = abstract_2();
abstract_3 v25 = abstract_3();
abstract_0** v26 = new abstract_0* ();
abstract_2 v27 = abstract_2();
v26 = new abstract_0* ();
v26 = new abstract_0* ();
v26 = new abstract_0* ();
v26 = new abstract_0* ();
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

abstract_1 func8 (abstract_2 v31, abstract_2 v32, abstract_2 v33, abstract_2 v34) {
abstract_2 v35;
C0 v36;
abstract_2 v37;
abstract_3 v38;

return abstract_1();

}
abstract_0* func9 (abstract_2 v39, abstract_2 v40, abstract_3 v41) {
abstract_2 v42;
abstract_2 v43;
abstract_3 v44;

return new abstract_0 ();

}
abstract_0* func10 (abstract_3 v45, abstract_2 v46, abstract_2 v47, abstract_2 v48) {
abstract_2 v49;
abstract_3 v50;

v49 = abstract_2();
v49 = abstract_2();
v49 = abstract_2();
v49 = abstract_2();
return ((abstract_0*) 0);

}
abstract_0* func11 (abstract_2 v51, abstract_2 v52, abstract_2 v53, abstract_2 v54) {
abstract_2 v55;
C0 v56;
C0 v57;
abstract_3 v58;

return ((abstract_0*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var4: PtrType{PtrType{AbstractType{0}}}
8    | var5: PtrType{PtrType{AbstractType{0}}}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(8)
0    +---
0    | {vfptr}
4    | var8: PtrType{PtrType{AbstractType{0}}}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var14: AbstractType{2}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var4: PtrType{PtrType{AbstractType{0}}}
20   | var5: PtrType{PtrType{AbstractType{0}}}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | var8: PtrType{PtrType{AbstractType{0}}}
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
 const size_t model_offset = 12;
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
 const size_t model_offset = 24;
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
0    | {vfptr}
4    | {vbptr}
8    | var28: AbstractType{2}
12   | var29: AbstractType{2}
16   | var30: PtrType{PtrType{AbstractType{0}}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var4: PtrType{PtrType{AbstractType{0}}}
28   | var5: PtrType{PtrType{AbstractType{0}}}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | var8: PtrType{PtrType{AbstractType{0}}}
40   +---
40   +--- (virtual base class C2)
40   | {vfptr}
44   | {vbptr}
48   | var14: AbstractType{2}
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
 const size_t model_offset = 20;
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
 const size_t model_offset = 32;
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
 const size_t model_offset = 40;
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

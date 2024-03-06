// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ abstract_0 func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4);
/* method id 404 */ C1 ();
/* method id 405 */ virtual C0 func1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0 {
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ C2 ();
/* method id 409 */ virtual abstract_2 func4 (abstract_1 v14, C0* v15, abstract_1 v16, C0* v17);
C2 (special_constructor);
C0* v22;
abstract_0* v23;
};
struct C3 : public C1, public C2 {
/* method id 410 */ virtual abstract_0 func4 (abstract_0* v24);
/* method id 411 */ virtual C0*** func0 (abstract_0* v26, abstract_0* v27, abstract_3 v28, C0* v29);
/* method id 412 */ virtual C0* func3 (C0* v30, abstract_1 v31);
/* method id 413 */ virtual abstract_4 func4 ();
/* method id 414 */ C3 ();
C3 (special_constructor);
};
C0*** func7 (C0* v32, abstract_0* v33, abstract_1 v34);
C0* func8 (C0* v38);
C0* func9 (C0* v41, C0* v42, C0* v43, C0* v44);
C0* func10 (C0* v49, abstract_1 v50, C0* v51, abstract_5 v52);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
return &((((C1*) 0))->C1::func1());

}
/* method id 403 */ abstract_0 C1::func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4) {
C0* v5 = &(*(((C0*) 0)));
return abstract_0();

}
/* method id 404 */ C1::C1 () {
return;

}
/* method id 405 */ C0 C1::func1 () {
C0* v6 = (new C0 ());
C0* v7 = (new C0 ());
C0* v8 = (new C0 ());
return *(v8);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::~C2 () {
abstract_0* v9 = ((abstract_0*) 0);
abstract_0* v10 = ((abstract_0*) 0);
abstract_1 v11 = abstract_1();
abstract_1 v12 = abstract_1();
return;

}
/* method id 408 */ C2::C2 () {
abstract_0* v13 = ((abstract_0*) 0);
return;

}
/* method id 409 */ abstract_2 C2::func4 (abstract_1 v14, C0* v15, abstract_1 v16, C0* v17) {
C0* v18 = (new C0 ());
C0* v19 = (new C0 ());
return abstract_2();

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ abstract_0 C3::func4 (abstract_0* v24) {
abstract_3 v25 = abstract_3();
return abstract_0();

}
/* method id 411 */ C0*** C3::func0 (abstract_0* v26, abstract_0* v27, abstract_3 v28, C0* v29) {
return new C0** ();

}
/* method id 412 */ C0* C3::func3 (C0* v30, abstract_1 v31) {
return v30;

}
/* method id 413 */ abstract_4 C3::func4 () {
return abstract_4();

}
/* method id 414 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

C0*** func7 (C0* v32, abstract_0* v33, abstract_1 v34) {
abstract_5 v35;
C0* v36;
abstract_0* v37;

return new C0** ();

}
C0* func8 (C0* v38) {
C0* v39;
C0* v40;

return v40;

}
C0* func9 (C0* v41, C0* v42, C0* v43, C0* v44) {
C0* v45;
C0* v46;
C0* v47;
C0* v48;

return v43;

}
C0* func10 (C0* v49, abstract_1 v50, C0* v51, abstract_5 v52) {
abstract_0* v53;
abstract_0* v54;

return v49;

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var22: PtrType{ClassType{0}}
12   | var23: PtrType{AbstractType{0}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(28)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | +---
8    | +--- (base class C2)
8    | | {vfptr}
12   | | {vbptr}
16   | | var22: PtrType{ClassType{0}}
20   | | var23: PtrType{AbstractType{0}}
24   | +---
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 28;
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
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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

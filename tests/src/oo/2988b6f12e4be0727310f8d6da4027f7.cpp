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
/* method id 401 */ virtual abstract_0* func0 (abstract_0** v1, abstract_0** v2);
/* method id 402 */ virtual ~C0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_0** v4;
};
struct C1 : public virtual C0 {
/* method id 404 */ abstract_0* func0 (abstract_0** v5, abstract_0** v6);
/* method id 405 */ C1 ();
C1 (special_constructor);
abstract_0** v8;
abstract_0** v9;
};
struct C2  {
/* method id 407 */ C2 ();
/* method id 408 */ virtual abstract_0 func0 (C1 v13, abstract_0** v14, abstract_0** v15);
/* method id 409 */ virtual ~C2 ();
/* method id 410 */ abstract_0* func0 ();
C2 (special_constructor);
C1 v22;
C1 v23;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 411 */ ~C3 ();
/* method id 412 */ void func0 ();
/* method id 413 */ C3 ();
C3 (special_constructor);
abstract_0** v31;
};
abstract_4* func5 ();
abstract_3 func6 (C1 v34, C1 v35, C1 v36, abstract_0** v37);
abstract_0* func7 (C1 v41, C1 v42, C1 v43, C1 v44);
abstract_1 func8 (C1 v47, C1 v48, C1 v49);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
return new abstract_0 ();

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2) {
delete (new C1 ());
return ((abstract_0*) 0);

}
/* method id 402 */ C0::~C0 () {
abstract_0** v3 = new abstract_0* ();
return;

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_0* C1::func0 (abstract_0** v5, abstract_0** v6) {
abstract_0** v7 = new abstract_0* ();
return ((abstract_0*) 0);

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
C1 v10 = *(&(*((new C1 ()))));
C1 v11 = *(&(*((new C1 ()))));
C1 v12 = *(&(*((new C1 ()))));
delete (new C2 ());
return;

}
/* method id 408 */ abstract_0 C2::func0 (C1 v13, abstract_0** v14, abstract_0** v15) {
return abstract_0();

}
/* method id 409 */ C2::~C2 () {
C1 v20 = *((new C1 ()));
C1 v21 = *((new C1 ()));
return;

}
/* method id 410 */ abstract_0* C2::func0 () {
return ((abstract_0*) 0);

}
C2::C2 (special_constructor)  {}

/* method id 411 */ C3::~C3 () {
C1 v24 = *(&(*((new C1 ()))));
C1 v25 = *(&(*((new C1 ()))));
C1 v26 = *((new C1 ()));
C1 v27 = *((new C1 ()));
return;

}
/* method id 412 */ void C3::func0 () {
C1 v30 = *(((C1*) 0));
return;

}
/* method id 413 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_4* func5 () {
C1 v32;
C1 v33;

return new abstract_4 ();

}
abstract_3 func6 (C1 v34, C1 v35, C1 v36, abstract_0** v37) {
C1 v38;
C1 v39;
C1 v40;

delete (new C1 ());
return abstract_3();

}
abstract_0* func7 (C1 v41, C1 v42, C1 v43, C1 v44) {
C1 v45;
C1 v46;

return new abstract_0 ();

}
abstract_1 func8 (C1 v47, C1 v48, C1 v49) {
C1 v50;
C1 v51;
C1 v52;
C1 v53;

return abstract_1();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var4: PtrType{PtrType{AbstractType{0}}}
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
class C1    size(24)
0    +---
0    | {vbptr}
4    | var8: PtrType{PtrType{AbstractType{0}}}
8    | var9: PtrType{PtrType{AbstractType{0}}}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var4: PtrType{PtrType{AbstractType{0}}}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
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
class C2    size(52)
0    +---
0    | {vfptr}
4    | var22: ClassType{1}
28   | var23: ClassType{1}
52   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(84)
0    +---
0    | {vbptr}
4    | var31: PtrType{PtrType{AbstractType{0}}}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var4: PtrType{PtrType{AbstractType{0}}}
20   +---
20   +--- (virtual base class C1)
20   | {vbptr}
24   | var8: PtrType{PtrType{AbstractType{0}}}
28   | var9: PtrType{PtrType{AbstractType{0}}}
32   +---
32   +--- (virtual base class C2)
32   | {vfptr}
36   | var22: ClassType{1}
60   | var23: ClassType{1}
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
 const size_t model_offset = 20;
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
 const size_t model_offset = 32;
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

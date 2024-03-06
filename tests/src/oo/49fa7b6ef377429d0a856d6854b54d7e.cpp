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
/* method id 407 */ abstract_2 func0 ();
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ virtual abstract_0* func0 (abstract_0** v12, abstract_0** v13, abstract_0** v14);
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_0** v16;
abstract_0** v17;
abstract_0** v18;
abstract_0** v19;
};
struct C3  {
/* method id 411 */ virtual ~C3 ();
/* method id 412 */ virtual abstract_2 func1 ();
/* method id 413 */ C3 ();
/* method id 414 */ virtual abstract_2 func4 (abstract_0** v31);
C3 (special_constructor);
C2 v36;
C2 v37;
C2 v38;
C2 v39;
};
abstract_0* func5 (C2 v40);
abstract_0* func6 (C2 v44, C2 v45, C2 v46, C2 v47);
abstract_0* func7 (C2 v48, C2 v49);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
return ((abstract_0*) 0);

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3) {
::func5(*(((C2*) 0)));
::func5(*(((C2*) 0)));
::func5(*(((C2*) 0)));
return ((abstract_0*) 0);

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0* C1::func0 (abstract_0** v5) {
abstract_0** v6 = ((abstract_0**) 0);
delete (new C3 ());
v6 = v5;
return new abstract_0 ();

}
/* method id 404 */ abstract_0* C1::func1 (abstract_0** v7, abstract_0** v8, abstract_0** v9) {
delete (new C1 ());
return ((abstract_0*) 0);

}
/* method id 405 */ abstract_2 C1::func0 () {
return abstract_2();

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ abstract_2 C2::func0 () {
return abstract_2();

}
/* method id 408 */ C2::~C2 () {
abstract_0** v11 = ((abstract_0**) 0);
return;

}
/* method id 409 */ abstract_0* C2::func0 (abstract_0** v12, abstract_0** v13, abstract_0** v14) {
delete (new C1 ());
return new abstract_0 ();

}
/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 411 */ C3::~C3 () {
return;

}
/* method id 412 */ abstract_2 C3::func1 () {
abstract_0** v20 = new abstract_0* ();
return abstract_2();

}
/* method id 413 */ C3::C3 () {
abstract_0** v21 = new abstract_0* ();
C2 v22 = *(&(*(((C2*) 0))));
C2 v23 = *(&(*(((C2*) 0))));
C2 v24 = *(&(*(((C2*) 0))));
return;

}
/* method id 414 */ abstract_2 C3::func4 (abstract_0** v31) {
C2 v32 = *(((C2*) 0));
C2 v33 = *(((C2*) 0));
C2 v34 = *(((C2*) 0));
C2 v35 = *(((C2*) 0));
return abstract_2();

}
C3::C3 (special_constructor)  {}

abstract_0* func5 (C2 v40) {
C2 v41;
C2 v42;
C2 v43;

return ((abstract_0*) 0);

}
abstract_0* func6 (C2 v44, C2 v45, C2 v46, C2 v47) {

::func5(v47);
return ((abstract_0*) 0);

}
abstract_0* func7 (C2 v48, C2 v49) {
C2 v50;
C2 v51;
C2 v52;
C2 v53;

delete (new C1 ());
return new abstract_0 ();

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
8    | var16: PtrType{PtrType{AbstractType{0}}}
12   | var17: PtrType{PtrType{AbstractType{0}}}
16   | var18: PtrType{PtrType{AbstractType{0}}}
20   | var19: PtrType{PtrType{AbstractType{0}}}
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
class C3    size(196)
0    +---
0    | {vfptr}
4    | var36: ClassType{2}
52   | var37: ClassType{2}
100  | var38: ClassType{2}
148  | var39: ClassType{2}
196  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 196;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

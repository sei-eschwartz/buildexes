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
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ C1 ();
/* method id 405 */ virtual C0 func0 (C0* v8, C0 v9, C0 v10);
C1 (special_constructor);
C0 v15;
abstract_2 v16;
};
struct C2 : public C1 {
/* method id 406 */ virtual C0* func2 ();
/* method id 407 */ C2 ();
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ virtual abstract_1* func3 (C0* v136, C0* v137);
C2 (special_constructor);
C0* v139;
};
struct C3  {
/* method id 410 */ C3 ();
C3 (special_constructor);
};
C0* func4 (C0 v141, abstract_3 v142, abstract_1** v143, abstract_0* v144);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C1 ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
v0 = ((abstract_0*) 0);
return ((C0*) 0);

}
/* method id 403 */ C1::~C1 () {
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
abstract_1** v3 = new abstract_1* ();
return;

}
/* method id 404 */ C1::C1 () {
abstract_1** v4 = new abstract_1* ();
C0* v5 = ((C0*) 0);
abstract_1** v6 = new abstract_1* ();
C0 v7 = *((new C0 ()));
return;

}
/* method id 405 */ C0 C1::func0 (C0* v8, C0 v9, C0 v10) {
abstract_1** v11 = new abstract_1* ();
C0* v12 = ((C0*) 0);
abstract_0* v13 = ((abstract_0*) 0);
abstract_1** v14 = new abstract_1* ();
return *(v8);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C0* C2::func2 () {
C0* v17 = (C0*)(((C1*) 0));
C0* v18 = (C0*)(((C1*) 0));
abstract_2 v19 = abstract_2();
C0* v20 = ((C0*) 0);
delete (new C0 ());
return v18;

}
/* method id 407 */ C2::C2 () {
abstract_2 v21 = abstract_2();
C0* v22 = &(*((new C0 ())));
C0 v23 = *((C0*)(&(*((new C1 ())))));
abstract_2 v24 = abstract_2();
return;

}
/* method id 408 */ C2::~C2 () {
abstract_0* v25 = ((abstract_0*) 0);
abstract_2 v26 = abstract_2();
abstract_2 v27 = abstract_2();
C0* v28 = ((C0*) 0);
v15 = v15;
v15 = v15;
return;

}
/* method id 409 */ abstract_1* C2::func3 (C0* v136, C0* v137) {
C0* v138 = (new C0 ());
return new abstract_1 ();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
abstract_3 v140 = abstract_3();
v140 = v140;
v140 = v140;
v140 = v140;
return;

}
C3::C3 (special_constructor)  {}

C0* func4 (C0 v141, abstract_3 v142, abstract_1** v143, abstract_0* v144) {

v141 = v141;
v141 = v141;
v141 = v141;
delete (new C0 ());
return (((C1*) 0))->C1::func2();

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
8    | var15: ClassType{0}
12   | var16: AbstractType{2}
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
class C2    size(24)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var15: ClassType{0}
12   | | var16: AbstractType{2}
16   | +---
16   | var139: PtrType{ClassType{0}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(0)
0    +---
0    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 1;
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

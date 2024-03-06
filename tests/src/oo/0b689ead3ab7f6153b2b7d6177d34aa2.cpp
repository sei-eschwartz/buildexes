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
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
C1 (special_constructor);
};
struct C2 : public C0 {
/* method id 402 */ virtual C0 func0 ();
/* method id 403 */ C2 ();
C2 (special_constructor);
abstract_1 v6;
C0* v7;
abstract_0 v8;
};
struct C3 : public C1 {
/* method id 404 */ C3 ();
/* method id 405 */ virtual C0 func2 (C0* v12, abstract_2 v13, C0* v14, abstract_2 v15);
/* method id 406 */ virtual ~C3 ();
/* method id 407 */ virtual C0 func1 (C0* v96, C0* v97, C0* v98, C1 v99);
C3 (special_constructor);
C0* v104;
C0* v105;
C0* v106;
C0* v107;
};
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
return;

}
C1::C1 (special_constructor)  {}

/* method id 402 */ C0 C2::func0 () {
C0* v3 = ((C0*) 0);
C0* v4 = ((C0*) 0);
C1 v5 = *(&(*((new C1 ()))));
delete (new C3 ());
return *(v7);

}
/* method id 403 */ C2::C2 () {
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C3::C3 () {
C1 v9 = *((new C1 ()));
return;

}
/* method id 405 */ C0 C3::func2 (C0* v12, abstract_2 v13, C0* v14, abstract_2 v15) {
abstract_0 v16 = abstract_0();
abstract_3 v17 = abstract_3();
C1 v18 = *((new C1 ()));
C0* v19 = &(*((C0*)((new C2 ()))));
delete (new C3 ());
return *(v14);

}
/* method id 406 */ C3::~C3 () {
C0* v21 = ((C0*) 0);
C0* v22 = ((C0*) 0);
C0* v23 = ((C0*) 0);
delete (new C3 ());
return;

}
/* method id 407 */ C0 C3::func1 (C0* v96, C0* v97, C0* v98, C1 v99) {
abstract_3 v100 = abstract_3();
C0* v101 = (new C0 ());
C0* v102 = (new C0 ());
C0* v103 = (new C0 ());
return *(v98);

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(0)
0    +---
0    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 1;
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
class C2    size(16)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | var6: AbstractType{1}
8    | var7: PtrType{ClassType{0}}
12   | var8: AbstractType{0}
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
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
 }}}
/*
class C3    size(20)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | +---
4    | var104: PtrType{ClassType{0}}
8    | var105: PtrType{ClassType{0}}
12   | var106: PtrType{ClassType{0}}
16   | var107: PtrType{ClassType{0}}
20   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
/* method id 402 */ virtual abstract_0** func0 ();
C1 (special_constructor);
abstract_0* v0;
};
struct C2 : public C1, public C0 {
/* method id 403 */ virtual abstract_0** func0 ();
/* method id 404 */ abstract_0 func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, C1 v4);
/* method id 405 */ virtual abstract_0 func0 (C1 v7);
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_0* v10;
};
struct C3 : public C1, public C0 {
/* method id 407 */ ~C3 ();
/* method id 408 */ C3 ();
C3 (special_constructor);
C1 v12;
C1 v13;
C2 v14;
C1 v15;
};
abstract_0* func2 ();
abstract_0** func3 (C1 v16, abstract_0* v17, C1 v18, C1 v19);
abstract_0* func4 (C1 v20, abstract_0* v21, C1 v22, C1 v23);
abstract_0* func5 (C2 v24);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
return;

}
/* method id 402 */ abstract_0** C1::func0 () {
return new abstract_0* ();

}
C1::C1 (special_constructor)  {}

/* method id 403 */ abstract_0** C2::func0 () {
delete (new C1 ());
return new abstract_0* ();

}
/* method id 404 */ abstract_0 C2::func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, C1 v4) {
C1 v5 = *(((C1*) 0));
C1 v6 = *(((C1*) 0));
return abstract_0();

}
/* method id 405 */ abstract_0 C2::func0 (C1 v7) {
return abstract_0();

}
/* method id 406 */ C2::C2 () {
C1 v8 = *(((C1*) 0));
C1 v9 = *(((C1*) 0));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 407 */ C3::~C3 () {
abstract_0* v11 = new abstract_0 ();
delete (new C3 ());
return;

}
/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

abstract_0* func2 () {

return ((abstract_0*) 0);

}
abstract_0** func3 (C1 v16, abstract_0* v17, C1 v18, C1 v19) {

return ((abstract_0**) 0);

}
abstract_0* func4 (C1 v20, abstract_0* v21, C1 v22, C1 v23) {

delete (new C1 ());
return v21;

}
abstract_0* func5 (C2 v24) {
C2 v25;
C2 v26;
C1 v27;
C1 v28;

return new abstract_0 ();

}
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
class C1    size(8)
0    +---
0    | {vfptr}
4    | var0: PtrType{AbstractType{0}}
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
class C2    size(12)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var0: PtrType{AbstractType{0}}
8    | +---
8    | +--- (base class C0)
8    | +---
8    | var10: PtrType{AbstractType{0}}
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(44)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var0: PtrType{AbstractType{0}}
8    | +---
8    | +--- (base class C0)
8    | +---
8    | var12: ClassType{1}
16   | var13: ClassType{1}
24   | var14: ClassType{2}
36   | var15: ClassType{1}
44   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 44;
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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

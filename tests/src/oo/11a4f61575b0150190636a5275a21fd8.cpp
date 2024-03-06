// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ abstract_0** func0 ();
/* method id 401 */ ~C0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_3 v13;
abstract_3 v14;
abstract_3 v15;
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ abstract_0* func0 ();
/* method id 405 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 406 */ C2 ();
C2 (special_constructor);
};
abstract_0 func2 (abstract_1 v31);
abstract_0* func3 (abstract_5 v34, abstract_5 v35, C1 v36, abstract_1 v37);
// definitions
/* method id 400 */ abstract_0** C0::func0 () {
abstract_1 v0 = abstract_1();
abstract_1 v1 = abstract_1();
abstract_1 v2 = abstract_1();
abstract_1 v3 = abstract_1();
return new abstract_0* ();

}
/* method id 401 */ C0::~C0 () {
abstract_1 v8 = abstract_1();
abstract_1 v9 = abstract_1();
abstract_1 v10 = abstract_1();
abstract_3 v11 = abstract_3();
delete (new C0 ());
return;

}
/* method id 402 */ C0::C0 () {
abstract_4 v12 = abstract_4();
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::~C1 () {
abstract_3 v16 = abstract_3();
abstract_3 v17 = abstract_3();
abstract_3 v18 = abstract_3();
abstract_3 v19 = abstract_3();
return;

}
/* method id 404 */ abstract_0* C1::func0 () {
v15 = v15;
return ((abstract_0*) 0);

}
/* method id 405 */ C1::C1 () {
abstract_4 v20 = abstract_4();
abstract_4 v21 = abstract_4();
abstract_1 v22 = abstract_1();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
C1 v28 = *(((C1*) 0));
delete (new C0 ());
return;

}
C2::C2 (special_constructor)  {}

abstract_0 func2 (abstract_1 v31) {
C1 v32;
abstract_4 v33;

return abstract_0();

}
abstract_0* func3 (abstract_5 v34, abstract_5 v35, C1 v36, abstract_1 v37) {

return new abstract_0 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | var13: AbstractType{3}
4    | var14: AbstractType{3}
8    | var15: AbstractType{3}
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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | var13: AbstractType{3}
12   | var14: AbstractType{3}
16   | var15: AbstractType{3}
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
class C2    size(0)
0    +---
0    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

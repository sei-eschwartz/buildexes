// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 ();
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_1 v1;
abstract_0* v2;
abstract_1 v3;
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual abstract_0 func0 (abstract_0* v4, abstract_1 v5, abstract_0* v6, abstract_0* v7);
/* method id 404 */ C1 ();
/* method id 405 */ ~C1 ();
C1 (special_constructor);
abstract_2 v15;
abstract_1 v16;
abstract_1 v17;
};
abstract_0 func2 ();
abstract_0 func3 (abstract_1 v18, abstract_1 v19);
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return abstract_0();

}
/* method id 401 */ C0::~C0 () {
abstract_1 v0 = abstract_1();
return;

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0 C1::func0 (abstract_0* v4, abstract_1 v5, abstract_0* v6, abstract_0* v7) {
abstract_0* v8 = new abstract_0 ();
abstract_2 v9 = abstract_2();
abstract_0* v10 = new abstract_0 ();
abstract_2 v11 = abstract_2();
return abstract_0();

}
/* method id 404 */ C1::C1 () {
abstract_3 v12 = abstract_3();
return;

}
/* method id 405 */ C1::~C1 () {
abstract_4 v14 = abstract_4();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

abstract_0 func2 () {

return ((C0*)(&(*(((C1*) 0)))))->C0::func0();

}
abstract_0 func3 (abstract_1 v18, abstract_1 v19) {
abstract_1 v20;

return ((C0*)(&(*((new C1 ())))))->C0::func0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var1: AbstractType{1}
8    | var2: PtrType{AbstractType{0}}
12   | var3: AbstractType{1}
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
class C1    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var15: AbstractType{2}
12   | var16: AbstractType{1}
16   | var17: AbstractType{1}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var1: AbstractType{1}
28   | var2: PtrType{AbstractType{0}}
32   | var3: AbstractType{1}
36   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

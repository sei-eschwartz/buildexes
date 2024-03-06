// type for special constructors
struct special_constructor {};
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
abstract_0 v0;
abstract_1 v1;
abstract_1 v2;
abstract_2 v3;
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ abstract_3 func1 (abstract_1 v10, abstract_1 v11, abstract_0 v12, C0 v13);
C1 (special_constructor);
C0 v15;
abstract_3* v16;
abstract_0 v17;
abstract_0 v18;
};
struct C2 : public C0, public virtual C1 {
/* method id 403 */ virtual abstract_3 func0 ();
/* method id 404 */ C2 ();
C2 (special_constructor);
abstract_2 v19;
abstract_0 v20;
abstract_0 v21;
abstract_0 v22;
};
abstract_3 func3 ();
abstract_3 func4 (C0 v23, abstract_3* v24, C0 v25, abstract_0 v26);
abstract_3 func5 (C0 v27, abstract_0 v28, abstract_0 v29);
abstract_3 func6 (abstract_1 v31);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_1 v4 = abstract_1();
abstract_0 v5 = abstract_0();
::func6(abstract_1());
::func6(abstract_1());
::func6(abstract_1());
delete (new C2 ());
return;

}
/* method id 402 */ abstract_3 C1::func1 (abstract_1 v10, abstract_1 v11, abstract_0 v12, C0 v13) {
abstract_0 v14 = abstract_0();
return abstract_3();

}
C1::C1 (special_constructor)  {}

/* method id 403 */ abstract_3 C2::func0 () {
return abstract_3();

}
/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

abstract_3 func3 () {

return abstract_3();

}
abstract_3 func4 (C0 v23, abstract_3* v24, C0 v25, abstract_0 v26) {

return abstract_3();

}
abstract_3 func5 (C0 v27, abstract_0 v28, abstract_0 v29) {
C0 v30;

return abstract_3();

}
abstract_3 func6 (abstract_1 v31) {

return abstract_3();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var0: AbstractType{0}
4    | var1: AbstractType{1}
8    | var2: AbstractType{1}
12   | var3: AbstractType{2}
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
class C1    size(28)
0    +---
0    | var15: ClassType{0}
16   | var16: PtrType{AbstractType{3}}
20   | var17: AbstractType{0}
24   | var18: AbstractType{0}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(68)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | | var0: AbstractType{0}
8    | | var1: AbstractType{1}
12   | | var2: AbstractType{1}
16   | | var3: AbstractType{2}
20   | +---
20   | {vbptr}
24   | var19: AbstractType{2}
28   | var20: AbstractType{0}
32   | var21: AbstractType{0}
36   | var22: AbstractType{0}
40   +---
40   +--- (virtual base class C1)
40   | var15: ClassType{0}
56   | var16: PtrType{AbstractType{3}}
60   | var17: AbstractType{0}
64   | var18: AbstractType{0}
68   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 68;
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
 const size_t model_offset = 40;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

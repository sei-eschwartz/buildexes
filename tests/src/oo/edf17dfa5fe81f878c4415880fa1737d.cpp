// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
abstract_0 v3;
abstract_0 v4;
abstract_0 v5;
abstract_0 v6;
};
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
C1 (special_constructor);
abstract_0 v7;
};
abstract_1 func2 ();
abstract_1 func3 ();
abstract_1 func4 ();
abstract_1 func5 (abstract_3 v12, abstract_3 v13, abstract_2 v14, abstract_4 v15);
// definitions
/* method id 400 */ C0::C0 () {
abstract_0 v0 = abstract_0();
abstract_0 v1 = abstract_0();
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

abstract_1 func2 () {
abstract_0 v8;
abstract_2 v9;
abstract_2 v10;
abstract_2 v11;

return ::func4();

}
abstract_1 func3 () {

return ::func2();

}
abstract_1 func4 () {

return abstract_1();

}
abstract_1 func5 (abstract_3 v12, abstract_3 v13, abstract_2 v14, abstract_4 v15) {
abstract_0 v16;
abstract_2 v17;

::func3();
::func3();
::func3();
::func3();
return ::func3();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var3: AbstractType{0}
4    | var4: AbstractType{0}
8    | var5: AbstractType{0}
12   | var6: AbstractType{0}
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
class C1    size(24)
0    +---
0    | {vbptr}
4    | var7: AbstractType{0}
8    +---
8    +--- (virtual base class C0)
8    | var3: AbstractType{0}
12   | var4: AbstractType{0}
16   | var5: AbstractType{0}
20   | var6: AbstractType{0}
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
 const size_t model_offset = 8;
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

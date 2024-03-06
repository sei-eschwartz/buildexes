// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
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
/* method id 404 */ virtual abstract_0 func2 ();
/* method id 405 */ C1 ();
C1 (special_constructor);
};
abstract_0 func5 (C1 v12);
abstract_0 func6 (abstract_0* v15, abstract_1 v16, abstract_1 v17);
abstract_0 func7 (C1 v18);
abstract_0 func8 (abstract_1 v20);
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
v2 = v2;
v2 = v2;
return ::func5(*(((C1*) 0)));

}
/* method id 401 */ C0::~C0 () {
abstract_1 v0 = abstract_1();
return;

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0 C1::func0 (abstract_0* v4, abstract_1 v5, abstract_0* v6, abstract_0* v7) {
abstract_0* v8 = ((abstract_0*) 0);
abstract_2 v9 = abstract_2();
abstract_2 v10 = abstract_2();
return ::func5(*(((C1*) 0)));

}
/* method id 404 */ abstract_0 C1::func2 () {
abstract_0* v11 = new abstract_0 ();
v2 = v11;
::func5(*((new C1 ())));
v2 = v11;
::func5(*((new C1 ())));
return abstract_0();

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

abstract_0 func5 (C1 v12) {
abstract_1 v13;
abstract_1 v14;

v12 = v12;
return abstract_0();

}
abstract_0 func6 (abstract_0* v15, abstract_1 v16, abstract_1 v17) {

::func5(*((new C1 ())));
::func5(*((new C1 ())));
return ::func5(*(((C1*) 0)));

}
abstract_0 func7 (C1 v18) {
abstract_2 v19;

v18 = v18;
::func5(v18);
return ::func5(v18);

}
abstract_0 func8 (abstract_1 v20) {

return abstract_0();

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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var1: AbstractType{1}
16   | var2: PtrType{AbstractType{0}}
20   | var3: AbstractType{1}
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

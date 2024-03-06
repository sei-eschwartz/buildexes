// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 401 */ virtual abstract_0 func0 ();
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ C1 ();
C1 (special_constructor);
abstract_1 v3;
abstract_1 v4;
abstract_1 v5;
C0 v6;
};
abstract_0 func2 (abstract_0* v7, abstract_1 v8, abstract_1 v9);
abstract_0 func3 (abstract_1 v12, abstract_1 v13, C0 v14, abstract_1 v15);
abstract_0 func4 (abstract_1 v16, C1 v17);
abstract_0 func5 (C1 v19);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ abstract_0 C1::func0 () {
return abstract_0();

}
/* method id 402 */ C1::~C1 () {
abstract_0* v0 = new abstract_0 ();
abstract_1 v1 = abstract_1();
abstract_1 v2 = abstract_1();
return;

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

abstract_0 func2 (abstract_0* v7, abstract_1 v8, abstract_1 v9) {
C0 v10;
abstract_1 v11;

return ::func4(v9, *((new C1 ())));

}
abstract_0 func3 (abstract_1 v12, abstract_1 v13, C0 v14, abstract_1 v15) {

return ::func4(v12, *((new C1 ())));

}
abstract_0 func4 (abstract_1 v16, C1 v17) {
C1 v18;

return abstract_0();

}
abstract_0 func5 (C1 v19) {
abstract_0* v20;
abstract_1 v21;
abstract_1 v22;
abstract_1 v23;

return abstract_0();

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | var3: AbstractType{1}
8    | var4: AbstractType{1}
12   | var5: AbstractType{1}
16   | var6: ClassType{0}
17   | alignment: 
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
 const size_t model_offset = 4;
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

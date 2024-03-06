// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ abstract_1 func0 (abstract_1** v4, abstract_1** v5);
/* method id 403 */ virtual abstract_1 func1 (abstract_1** v6, abstract_0 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_0 v9;
abstract_1** v10;
abstract_1** v11;
abstract_0 v12;
};
struct C1 : public C0 {
/* method id 405 */ C1 ();
C1 (special_constructor);
};
abstract_1 func4 (abstract_0 v13, abstract_1** v14, abstract_0 v15);
abstract_1* func5 (abstract_1** v16, abstract_1** v17, abstract_0 v18);
abstract_1 func6 (abstract_1** v19, abstract_1** v20, abstract_1** v21, abstract_1** v22);
abstract_2 func7 (abstract_1** v23, abstract_0 v24);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return ::func6(v11, new abstract_1* (), v11, new abstract_1* ());

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return ::func6(v11, new abstract_1* (), v11, new abstract_1* ());

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v4, abstract_1** v5) {
return abstract_1();

}
/* method id 403 */ abstract_1 C0::func1 (abstract_1** v6, abstract_0 v7) {
abstract_1** v8 = new abstract_1* ();
return ::func6(v11, new abstract_1* (), v11, new abstract_1* ());

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

abstract_1 func4 (abstract_0 v13, abstract_1** v14, abstract_0 v15) {

return ::func6(v14, new abstract_1* (), v14, new abstract_1* ());

}
abstract_1* func5 (abstract_1** v16, abstract_1** v17, abstract_0 v18) {

return new abstract_1 ();

}
abstract_1 func6 (abstract_1** v19, abstract_1** v20, abstract_1** v21, abstract_1** v22) {

return abstract_1();

}
abstract_2 func7 (abstract_1** v23, abstract_0 v24) {

return abstract_2();

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var9: AbstractType{0}
8    | var10: DeletablePtrType{PtrType{AbstractType{1}}}
12   | var11: DeletablePtrType{PtrType{AbstractType{1}}}
16   | var12: AbstractType{0}
20   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 20;
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
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var9: AbstractType{0}
8    | | var10: DeletablePtrType{PtrType{AbstractType{1}}}
12   | | var11: DeletablePtrType{PtrType{AbstractType{1}}}
16   | | var12: AbstractType{0}
20   | +---
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
 const size_t model_offset = 0;
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

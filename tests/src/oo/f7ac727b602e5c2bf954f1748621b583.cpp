// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 403 */ abstract_1 func0 ();
/* method id 404 */ C1 ();
/* method id 405 */ virtual abstract_1 func1 (abstract_1* v13, abstract_0 v14, abstract_0 v15);
/* method id 406 */ abstract_1 func0 (abstract_1* v16, abstract_1* v17, abstract_1* v18, abstract_0 v19);
C1 (special_constructor);
abstract_1* v20;
abstract_0 v21;
};
abstract_1 func2 (abstract_0 v22, abstract_0 v23);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return ::func2(abstract_0(), abstract_0());

}
/* method id 402 */ C0::C0 () {
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
abstract_0 v7 = abstract_0();
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_1 C1::func0 () {
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_1* v10 = ((abstract_1*) 0);
abstract_1* v11 = new abstract_1 ();
v20 = new abstract_1 ();
v20 = new abstract_1 ();
v20 = new abstract_1 ();
return ((new C1 ()))->C1::func1(((abstract_1*) 0), v8, v8);

}
/* method id 404 */ C1::C1 () {
abstract_1* v12 = ((abstract_1*) 0);
v12 = new abstract_1 ();
return;

}
/* method id 405 */ abstract_1 C1::func1 (abstract_1* v13, abstract_0 v14, abstract_0 v15) {
v14 = v15;
v14 = v15;
v14 = v15;
return abstract_1();

}
/* method id 406 */ abstract_1 C1::func0 (abstract_1* v16, abstract_1* v17, abstract_1* v18, abstract_0 v19) {
return abstract_1();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

abstract_1 func2 (abstract_0 v22, abstract_0 v23) {
abstract_1* v24;

return ((new C0 ()))->C0::func0(abstract_0(), abstract_0(), abstract_0());

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var20: PtrType{AbstractType{1}}
12   | var21: AbstractType{0}
16   +---
16   +--- (virtual base class C0)
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

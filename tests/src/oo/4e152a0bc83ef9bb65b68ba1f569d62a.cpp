// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ abstract_1 func0 (abstract_1** v4, abstract_1** v5);
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_1** v6;
abstract_2 v7;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual abstract_1 func0 (abstract_2 v8, abstract_1** v9);
/* method id 405 */ abstract_1 func1 (abstract_1** v11, abstract_0 v12);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_1** v17;
abstract_1** v18;
abstract_2 v19;
abstract_0 v20;
};
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
delete (new C0 ());
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v4, abstract_1** v5) {
v6 = new abstract_1* ();
v6 = new abstract_1* ();
v6 = new abstract_1* ();
v6 = new abstract_1* ();
return abstract_1();

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_1 C1::func0 (abstract_2 v8, abstract_1** v9) {
abstract_0 v10 = abstract_0();
return ((new C1 ()))->C1::func1(v9, v20);

}
/* method id 405 */ abstract_1 C1::func1 (abstract_1** v11, abstract_0 v12) {
abstract_0 v13 = abstract_0();
abstract_2 v14 = abstract_2();
abstract_3 v15 = abstract_3();
abstract_3 v16 = abstract_3();
(((C1*) 0))->C1::func0(v19, v11);
(((C1*) 0))->C1::func0(v19, v11);
(((C1*) 0))->C1::func0(v19, v11);
(((C1*) 0))->C1::func0(v19, v11);
return abstract_1();

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | var6: DeletablePtrType{PtrType{AbstractType{1}}}
4    | var7: AbstractType{2}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var17: DeletablePtrType{PtrType{AbstractType{1}}}
12   | var18: DeletablePtrType{PtrType{AbstractType{1}}}
16   | var19: AbstractType{2}
20   | var20: AbstractType{0}
24   +---
24   +--- (virtual base class C0)
24   | var6: DeletablePtrType{PtrType{AbstractType{1}}}
28   | var7: AbstractType{2}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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

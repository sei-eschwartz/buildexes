// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ abstract_1 func0 (abstract_1** v4, abstract_1** v5);
/* method id 403 */ abstract_1 func1 (abstract_1** v6, abstract_0 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1** v9;
abstract_2 v10;
abstract_1** v11;
abstract_0 v12;
};
struct C1 : public C0 {
/* method id 405 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0 {
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_0 v17;
abstract_2 v18;
abstract_3 v19;
abstract_2 v20;
};
abstract_1 func4 (abstract_1** v21);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
delete (new C0 ());
return (((C0*) 0))->C0::func1(v11, abstract_0());

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
v3 = v3;
v3 = v3;
return ::func4(v9);

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v4, abstract_1** v5) {
::func4(new abstract_1* ());
v9 = v4;
return abstract_1();

}
/* method id 403 */ abstract_1 C0::func1 (abstract_1** v6, abstract_0 v7) {
abstract_1** v8 = new abstract_1* ();
return (((C0*) 0))->C0::func0(abstract_0());

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {
abstract_1** v13 = new abstract_1* ();
abstract_2 v14 = abstract_2();
abstract_1** v15 = new abstract_1* ();
abstract_0 v16 = abstract_0();
::func4(v13);
::func4(v13);
((C0*)(((C2*) 0)))->C0::func0(v16);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

abstract_1 func4 (abstract_1** v21) {
abstract_3 v22;
abstract_0 v23;

return abstract_1();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var9: DeletablePtrType{PtrType{AbstractType{1}}}
4    | var10: AbstractType{2}
8    | var11: DeletablePtrType{PtrType{AbstractType{1}}}
12   | var12: AbstractType{0}
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
class C1    size(16)
0    +---
0    | +--- (base class C0)
0    | | var9: DeletablePtrType{PtrType{AbstractType{1}}}
4    | | var10: AbstractType{2}
8    | | var11: DeletablePtrType{PtrType{AbstractType{1}}}
12   | | var12: AbstractType{0}
16   | +---
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
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(36)
0    +---
0    | {vbptr}
4    | var17: AbstractType{0}
8    | var18: AbstractType{2}
12   | var19: AbstractType{3}
16   | var20: AbstractType{2}
20   +---
20   +--- (virtual base class C0)
20   | var9: DeletablePtrType{PtrType{AbstractType{1}}}
24   | var10: AbstractType{2}
28   | var11: DeletablePtrType{PtrType{AbstractType{1}}}
32   | var12: AbstractType{0}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

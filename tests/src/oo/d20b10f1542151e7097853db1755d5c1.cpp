// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ abstract_1 func0 (abstract_1** v4, abstract_1** v5);
/* method id 403 */ abstract_2 func1 (abstract_0 v6, abstract_0 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_0 v10;
abstract_2* v11;
abstract_0 v12;
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_2* func1 (abstract_1** v13, abstract_2* v14);
/* method id 406 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0 {
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_2* v15;
};
abstract_2 func5 (abstract_0 v16);
abstract_2* func6 ();
abstract_2 func7 (abstract_3 v20);
abstract_2 func8 (abstract_0 v21, abstract_3 v22, abstract_3 v23, abstract_3 v24);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
v10 = abstract_0();
v10 = abstract_0();
v10 = abstract_0();
v10 = abstract_0();
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v4, abstract_1** v5) {
return abstract_1();

}
/* method id 403 */ abstract_2 C0::func1 (abstract_0 v6, abstract_0 v7) {
abstract_0 v8 = abstract_0();
abstract_1** v9 = new abstract_1* ();
return abstract_2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2* C1::func1 (abstract_1** v13, abstract_2* v14) {
delete (new C1 ());
return v14;

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

abstract_2 func5 (abstract_0 v16) {

(((C1*) 0))->C1::func1(new abstract_1* (), new abstract_2 ());
(((C1*) 0))->C1::func1(new abstract_1* (), new abstract_2 ());
(((C1*) 0))->C1::func1(new abstract_1* (), new abstract_2 ());
(((C1*) 0))->C1::func1(new abstract_1* (), new abstract_2 ());
return ::func8(v16, abstract_3(), abstract_3(), abstract_3());

}
abstract_2* func6 () {
abstract_0 v17;
C0 v18;
abstract_0 v19;

v19 = v19;
return ((abstract_2*) 0);

}
abstract_2 func7 (abstract_3 v20) {

return ::func8(abstract_0(), v20, v20, v20);

}
abstract_2 func8 (abstract_0 v21, abstract_3 v22, abstract_3 v23, abstract_3 v24) {
abstract_3 v25;
abstract_3 v26;
abstract_1** v27;
abstract_1** v28;

return abstract_2();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | var10: AbstractType{0}
4    | var11: PtrType{AbstractType{2}}
8    | var12: AbstractType{0}
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
8    | var10: AbstractType{0}
12   | var11: PtrType{AbstractType{2}}
16   | var12: AbstractType{0}
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
class C2    size(20)
0    +---
0    | {vbptr}
4    | var15: PtrType{AbstractType{2}}
8    +---
8    +--- (virtual base class C0)
8    | var10: AbstractType{0}
12   | var11: PtrType{AbstractType{2}}
16   | var12: AbstractType{0}
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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

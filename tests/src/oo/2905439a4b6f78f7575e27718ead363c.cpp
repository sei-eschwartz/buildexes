// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ ~C0 ();
/* method id 402 */ abstract_1 func0 (abstract_1** v3, abstract_1** v4);
/* method id 403 */ virtual abstract_1 func1 (abstract_1** v5, abstract_0 v6);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_3 v11;
abstract_0 v12;
abstract_0 v13;
};
struct C1 : public C0 {
/* method id 405 */ virtual abstract_1 func3 (abstract_1** v14, abstract_0 v15);
/* method id 406 */ virtual abstract_1 func0 ();
/* method id 407 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 408 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C2 {
/* method id 409 */ C3 ();
C3 (special_constructor);
};
abstract_4 func6 ();
abstract_4 func7 (abstract_2 v21, abstract_1** v22, abstract_1** v23, C3 v24);
abstract_4 func8 (C3 v25, abstract_3 v26, abstract_1** v27, C3 v28);
abstract_4 func9 ();
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return (((C1*) 0))->C1::func3(new abstract_1* (), v13);

}
/* method id 401 */ C0::~C0 () {
return;

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v3, abstract_1** v4) {
return (((C1*) 0))->C1::func3(new abstract_1* (), v12);

}
/* method id 403 */ abstract_1 C0::func1 (abstract_1** v5, abstract_0 v6) {
abstract_2 v7 = abstract_2();
abstract_2 v8 = abstract_2();
abstract_1** v9 = new abstract_1* ();
abstract_0 v10 = abstract_0();
delete (new C2 ());
return (((C1*) 0))->C1::func0();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func3 (abstract_1** v14, abstract_0 v15) {
abstract_1* v16 = ((abstract_1*) 0);
return (((C1*) 0))->C1::func0();

}
/* method id 406 */ abstract_1 C1::func0 () {
return abstract_1();

}
/* method id 407 */ C1::C1 () {
abstract_1** v17 = new abstract_1* ();
abstract_1* v18 = new abstract_1 ();
abstract_0 v19 = abstract_0();
abstract_0 v20 = abstract_0();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_4 func6 () {

return abstract_4();

}
abstract_4 func7 (abstract_2 v21, abstract_1** v22, abstract_1** v23, C3 v24) {

return ::func8(v24, abstract_3(), v23, v24);

}
abstract_4 func8 (C3 v25, abstract_3 v26, abstract_1** v27, C3 v28) {
C3 v29;
abstract_0 v30;
C3 v31;
abstract_1** v32;

return abstract_4();

}
abstract_4 func9 () {

return abstract_4();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var11: AbstractType{3}
8    | var12: AbstractType{0}
12   | var13: AbstractType{0}
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
0    | | {vfptr}
4    | | var11: AbstractType{3}
8    | | var12: AbstractType{0}
12   | | var13: AbstractType{0}
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
class C2    size(20)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C1)
4    | +--- (base class C0)
4    | | {vfptr}
8    | | var11: AbstractType{3}
12   | | var12: AbstractType{0}
16   | | var13: AbstractType{0}
20   | +---
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(20)
0    +---
0    | +--- (base class C2)
0    | | {vbptr}
4    | +---
4    +---
4    +--- (virtual base class C1)
4    | +--- (base class C0)
4    | | {vfptr}
8    | | var11: AbstractType{3}
12   | | var12: AbstractType{0}
16   | | var13: AbstractType{0}
20   | +---
20   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

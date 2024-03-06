// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_5 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_1*** func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 401 */ virtual abstract_1*** func0 (abstract_2 v6, abstract_2 v7, abstract_1*** v8, abstract_3 v9);
/* method id 402 */ ~C0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
/* method id 405 */ virtual abstract_1*** func0 (abstract_0 v16, abstract_0 v17, abstract_0 v18, abstract_0 v19);
/* method id 406 */ virtual abstract_1 func0 (abstract_4 v20, abstract_1*** v21);
C1 (special_constructor);
};
struct C2  {
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_0 v22;
};
struct C3 : public virtual C1, public C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual abstract_1* func2 (C1 v25, C1 v26, abstract_2 v27, abstract_1*** v28);
C3 (special_constructor);
};
abstract_1* func5 (abstract_0 v33);
// definitions
/* method id 400 */ abstract_1*** C0::func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3) {
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
delete (new C1 ());
return ((abstract_1***) 0);

}
/* method id 401 */ abstract_1*** C0::func0 (abstract_2 v6, abstract_2 v7, abstract_1*** v8, abstract_3 v9) {
abstract_0 v10 = abstract_0();
abstract_0 v11 = abstract_0();
return v8;

}
/* method id 402 */ C0::~C0 () {
delete (new C1 ());
return;

}
/* method id 403 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
abstract_2 v12 = abstract_2();
abstract_4 v13 = abstract_4();
abstract_4 v14 = abstract_4();
abstract_2 v15 = abstract_2();
return;

}
/* method id 405 */ abstract_1*** C1::func0 (abstract_0 v16, abstract_0 v17, abstract_0 v18, abstract_0 v19) {
return ((abstract_1***) 0);

}
/* method id 406 */ abstract_1 C1::func0 (abstract_4 v20, abstract_1*** v21) {
return abstract_1();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 409 */ C3::C3 () {
abstract_1** v23 = ((abstract_1**) 0);
abstract_4 v24 = abstract_4();
return;

}
/* method id 410 */ abstract_1* C3::func2 (C1 v25, C1 v26, abstract_2 v27, abstract_1*** v28) {
abstract_2 v29 = abstract_2();
abstract_1*** v30 = ((abstract_1***) 0);
abstract_1*** v31 = ((abstract_1***) 0);
abstract_1** v32 = new abstract_1* ();
return ((abstract_1*) 0);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_1* func5 (abstract_0 v33) {

return new abstract_1 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 4;
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
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
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
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(4)
0    +---
0    | var22: AbstractType{0}
4    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(28)
0    +---
0    | {vfptr}
4    | +--- (base class C2)
4    | | var22: AbstractType{0}
8    | +---
8    | {vbptr}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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

// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct abstract_11 { int x; };
struct abstract_12 { int x; };
struct abstract_13 { int x; };
struct abstract_14 { int x; };
struct abstract_15 { int x; };
struct abstract_16 { int x; };
struct abstract_17 { int x; };
struct abstract_18 { int x; };
struct abstract_19 { int x; };
struct abstract_20 { int x; };
struct abstract_21 { int x; };
struct abstract_22 { int x; };
struct abstract_23 { int x; };
struct abstract_24 { int x; };
struct abstract_25 { int x; };
struct abstract_26 { int x; };
struct abstract_27 { int x; };
struct abstract_28 { int x; };
struct abstract_29 { int x; };
struct abstract_30 { int x; };
struct abstract_31 { int x; };
struct abstract_32 { int x; };
struct abstract_33 { int x; };
struct abstract_0 { int x; };
struct abstract_34 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
abstract_0 v0;
};
struct C1 : public virtual C0 {
/* method id 402 */ C1 ();
C1 (special_constructor);
abstract_0 v1;
};
struct C2 : public virtual C0 {
/* method id 404 */ C2 ();
C2 (special_constructor);
abstract_0 v2;
abstract_0 v3;
};
struct C3 : public virtual C2, public C1 {
/* method id 406 */ C3 ();
C3 (special_constructor);
abstract_0 v4;
abstract_0 v5;
abstract_0 v6;
abstract_0 v7;
};
C1* func6 (abstract_34 v8);
abstract_27**** func7 (abstract_0 v10);
C1*** func8 (abstract_34 v15, abstract_34 v16, abstract_34 v17, abstract_34 v18);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()), C1(special_constructor ()) {}

C1* func6 (abstract_34 v8) {
abstract_0 v9;

return ((C1*) 0);

}
abstract_27**** func7 (abstract_0 v10) {
abstract_34 v11;
abstract_34 v12;
abstract_34 v13;
abstract_34 v14;

return new abstract_27*** ();

}
C1*** func8 (abstract_34 v15, abstract_34 v16, abstract_34 v17, abstract_34 v18) {
abstract_34 v19;
abstract_34 v20;
abstract_34 v21;
abstract_34 v22;

return ((C1***) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var0: AbstractType{0}
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
class C1    size(16)
0    +---
0    | {vbptr}
4    | var1: AbstractType{0}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var0: AbstractType{0}
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
4    | var2: AbstractType{0}
8    | var3: AbstractType{0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var0: AbstractType{0}
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
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(44)
0    +---
0    | +--- (base class C1)
0    | | {vbptr}
4    | | var1: AbstractType{0}
8    | +---
8    | var4: AbstractType{0}
12   | var5: AbstractType{0}
16   | var6: AbstractType{0}
20   | var7: AbstractType{0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var0: AbstractType{0}
32   +---
32   +--- (virtual base class C2)
32   | {vbptr}
36   | var2: AbstractType{0}
40   | var3: AbstractType{0}
44   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

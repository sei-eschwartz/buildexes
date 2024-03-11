// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
abstract_0 v2;
abstract_0 v3;
abstract_0 v4;
abstract_0 v5;
};
struct C1 : public virtual C0 {
/* method id 401 */ virtual abstract_1* func0 (abstract_0 v6);
/* method id 402 */ C1 ();
C1 (special_constructor);
abstract_0 v8;
abstract_0 v9;
abstract_2 v10;
abstract_2 v11;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 403 */ C2 ();
C2 (special_constructor);
abstract_2 v16;
};
struct C3 : public virtual C0, public virtual C1, public C2 {
/* method id 404 */ virtual ~C3 ();
/* method id 405 */ virtual abstract_1 func2 (abstract_2 v18, abstract_2 v19, abstract_3 v20, abstract_2 v21);
/* method id 406 */ C3 ();
C3 (special_constructor);
};
// definitions
/* method id 400 */ C0::C0 () {
abstract_0 v0 = abstract_0();
abstract_0 v1 = abstract_0();
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ abstract_1* C1::func0 (abstract_0 v6) {
abstract_0 v7 = abstract_0();
v8 = abstract_0();
return new abstract_1 ();

}
/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {
abstract_1** v12 = new abstract_1* ();
abstract_1** v13 = new abstract_1* ();
abstract_2 v14 = abstract_2();
abstract_0 v15 = abstract_0();
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 404 */ C3::~C3 () {
abstract_2 v17 = abstract_2();
return;

}
/* method id 405 */ abstract_1 C3::func2 (abstract_2 v18, abstract_2 v19, abstract_3 v20, abstract_2 v21) {
((C1*)((new C3 ())))->C1::func0(abstract_0());
((C1*)((new C3 ())))->C1::func0(abstract_0());
((C1*)((new C3 ())))->C1::func0(abstract_0());
((C1*)((new C3 ())))->C1::func0(abstract_0());
return abstract_1();

}
/* method id 406 */ C3::C3 () {
abstract_2 v22 = abstract_2();
abstract_2 v23 = abstract_2();
abstract_0 v24 = abstract_0();
abstract_4 v25 = abstract_4();
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var2: AbstractType{0}
4    | var3: AbstractType{0}
8    | var4: AbstractType{0}
12   | var5: AbstractType{0}
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
class C1    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var8: AbstractType{0}
12   | var9: AbstractType{0}
16   | var10: AbstractType{2}
20   | var11: AbstractType{2}
24   +---
24   +--- (virtual base class C0)
24   | var2: AbstractType{0}
28   | var3: AbstractType{0}
32   | var4: AbstractType{0}
36   | var5: AbstractType{0}
40   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 40;
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
/*
class C2    size(48)
0    +---
0    | {vbptr}
4    | var16: AbstractType{2}
8    +---
8    +--- (virtual base class C0)
8    | var2: AbstractType{0}
12   | var3: AbstractType{0}
16   | var4: AbstractType{0}
20   | var5: AbstractType{0}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var8: AbstractType{0}
36   | var9: AbstractType{0}
40   | var10: AbstractType{2}
44   | var11: AbstractType{2}
48   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 48;
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
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(52)
0    +---
0    | {vfptr}
4    | +--- (base class C2)
4    | | {vbptr}
8    | | var16: AbstractType{2}
12   | +---
12   +---
12   +--- (virtual base class C0)
12   | var2: AbstractType{0}
16   | var3: AbstractType{0}
20   | var4: AbstractType{0}
24   | var5: AbstractType{0}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var8: AbstractType{0}
40   | var9: AbstractType{0}
44   | var10: AbstractType{2}
48   | var11: AbstractType{2}
52   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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
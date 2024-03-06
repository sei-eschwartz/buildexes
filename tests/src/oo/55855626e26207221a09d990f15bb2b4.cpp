// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_5 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
abstract_0 v0;
};
struct C1 : public virtual C0 {
/* method id 401 */ ~C1 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
abstract_0 v1;
abstract_0 v2;
abstract_0 v3;
abstract_0 v4;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 403 */ C2 ();
/* method id 404 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1 v14;
abstract_1 v15;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 405 */ C3 ();
/* method id 406 */ virtual ~C3 ();
/* method id 407 */ virtual abstract_2* func1 (abstract_1 v47, abstract_2** v48);
/* method id 408 */ virtual abstract_2* func2 ();
C3 (special_constructor);
abstract_3 v54;
};
abstract_2* func3 (abstract_1 v55);
abstract_2 func4 (abstract_1 v56, abstract_4 v57, abstract_4 v58, abstract_0 v59);
abstract_5 func5 ();
abstract_2* func6 (abstract_6 v60);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::~C1 () {
v4 = v0;
v4 = v0;
v4 = v0;
return;

}
/* method id 402 */ C1::C1 () {
v3 = v3;
v3 = v3;
v3 = v3;
v3 = v3;
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
abstract_0 v7 = abstract_0();
return;

}
/* method id 404 */ C2::~C2 () {
abstract_1 v8 = abstract_1();
abstract_1 v9 = abstract_1();
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
abstract_1 v16 = abstract_1();
abstract_1 v17 = abstract_1();
abstract_1 v18 = abstract_1();
abstract_1 v19 = abstract_1();
return;

}
/* method id 406 */ C3::~C3 () {
abstract_1 v28 = abstract_1();
abstract_1 v29 = abstract_1();
abstract_1 v30 = abstract_1();
abstract_1 v31 = abstract_1();
v1 = abstract_0();
v1 = abstract_0();
return;

}
/* method id 407 */ abstract_2* C3::func1 (abstract_1 v47, abstract_2** v48) {
abstract_1 v49 = abstract_1();
abstract_0 v50 = abstract_0();
return ((abstract_2*) 0);

}
/* method id 408 */ abstract_2* C3::func2 () {
abstract_2*** v51 = new abstract_2** ();
abstract_1 v52 = abstract_1();
abstract_0 v53 = abstract_0();
v53 = v0;
v53 = v0;
v53 = v0;
v53 = v0;
return ((abstract_2*) 0);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_2* func3 (abstract_1 v55) {

delete (new C3 ());
return ((abstract_2*) 0);

}
abstract_2 func4 (abstract_1 v56, abstract_4 v57, abstract_4 v58, abstract_0 v59) {

delete (new C2 ());
return abstract_2();

}
abstract_5 func5 () {

return abstract_5();

}
abstract_2* func6 (abstract_6 v60) {

return ((abstract_2*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | var0: AbstractType{0}
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
class C1    size(24)
0    +---
0    | {vbptr}
4    | var1: AbstractType{0}
8    | var2: AbstractType{0}
12   | var3: AbstractType{0}
16   | var4: AbstractType{0}
20   +---
20   +--- (virtual base class C0)
20   | var0: AbstractType{0}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var14: AbstractType{1}
12   | var15: AbstractType{1}
16   +---
16   +--- (virtual base class C0)
16   | var0: AbstractType{0}
20   +---
20   +--- (virtual base class C1)
20   | {vbptr}
24   | var1: AbstractType{0}
28   | var2: AbstractType{0}
32   | var3: AbstractType{0}
36   | var4: AbstractType{0}
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
 const size_t model_offset = 20;
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
4    | {vbptr}
8    | var54: AbstractType{3}
12   +---
12   +--- (virtual base class C0)
12   | var0: AbstractType{0}
16   +---
16   +--- (virtual base class C1)
16   | {vbptr}
20   | var1: AbstractType{0}
24   | var2: AbstractType{0}
28   | var3: AbstractType{0}
32   | var4: AbstractType{0}
36   +---
36   +--- (virtual base class C2)
36   | {vfptr}
40   | {vbptr}
44   | var14: AbstractType{1}
48   | var15: AbstractType{1}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
 const size_t model_offset = 36;
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

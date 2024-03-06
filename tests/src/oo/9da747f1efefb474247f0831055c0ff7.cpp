// type for special constructors
struct special_constructor {};
struct abstract_3 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
abstract_0 v0;
abstract_1 v1;
abstract_1 v2;
abstract_2 v3;
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual abstract_3** func1 ();
/* method id 403 */ virtual abstract_3* func1 (abstract_0 v10);
C1 (special_constructor);
};
struct C2 : public virtual C1, public C0 {
/* method id 404 */ C2 ();
C2 (special_constructor);
abstract_0 v15;
abstract_3*** v16;
abstract_3*** v17;
abstract_1 v18;
};
struct C3 : public virtual C2 {
/* method id 405 */ abstract_3* func2 (abstract_0 v19);
/* method id 406 */ virtual abstract_3* func0 (abstract_2 v24, abstract_3*** v25);
/* method id 407 */ virtual abstract_3** func1 ();
/* method id 408 */ virtual abstract_3* func0 (abstract_5 v27, abstract_1 v28);
/* method id 409 */ C3 ();
C3 (special_constructor);
C2 v29;
abstract_1 v30;
abstract_1 v31;
};
abstract_3 func4 ();
abstract_3* func5 (abstract_8** v33);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_1 v4 = abstract_1();
abstract_2 v5 = abstract_2();
abstract_1 v6 = abstract_1();
v5 = abstract_2();
v5 = abstract_2();
return;

}
/* method id 402 */ abstract_3** C1::func1 () {
abstract_1 v7 = abstract_1();
abstract_2 v8 = abstract_2();
abstract_1 v9 = abstract_1();
return new abstract_3* ();

}
/* method id 403 */ abstract_3* C1::func1 (abstract_0 v10) {
abstract_4 v11 = abstract_4();
abstract_0 v12 = abstract_0();
abstract_0 v13 = abstract_0();
abstract_3*** v14 = new abstract_3** ();
return new abstract_3 ();

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 405 */ abstract_3* C3::func2 (abstract_0 v19) {
abstract_5 v20 = abstract_5();
abstract_0 v21 = abstract_0();
abstract_3*** v22 = ((abstract_3***) 0);
abstract_3*** v23 = ((abstract_3***) 0);
delete (new C1 ());
return new abstract_3 ();

}
/* method id 406 */ abstract_3* C3::func0 (abstract_2 v24, abstract_3*** v25) {
abstract_1 v26 = abstract_1();
delete (new C0 ());
return new abstract_3 ();

}
/* method id 407 */ abstract_3** C3::func1 () {
delete (new C0 ());
delete (new C3 ());
return ((abstract_3**) 0);

}
/* method id 408 */ abstract_3* C3::func0 (abstract_5 v27, abstract_1 v28) {
return new abstract_3 ();

}
/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_3 func4 () {
abstract_3*** v32;

v32 = v32;
return abstract_3();

}
abstract_3* func5 (abstract_8** v33) {
abstract_3** v34;
abstract_7* v35;

return ((abstract_3*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var0: AbstractType{0}
4    | var1: AbstractType{1}
8    | var2: AbstractType{1}
12   | var3: AbstractType{2}
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
class C1    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(40)
0    +---
0    | +--- (base class C0)
0    | | var0: AbstractType{0}
4    | | var1: AbstractType{1}
8    | | var2: AbstractType{1}
12   | | var3: AbstractType{2}
16   | +---
16   | {vbptr}
20   | var15: AbstractType{0}
24   | var16: PtrType{PtrType{PtrType{AbstractType{3}}}}
28   | var17: PtrType{PtrType{PtrType{AbstractType{3}}}}
32   | var18: AbstractType{1}
36   +---
36   +--- (virtual base class C1)
36   | {vfptr}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(100)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var29: ClassType{2}
48   | var30: AbstractType{1}
52   | var31: AbstractType{1}
56   | {vtordisp for vbase 1}
60   +---
60   +--- (virtual base class C1)
60   | {vfptr}
64   +---
64   +--- (virtual base class C2)
64   | +--- (base class C0)
64   | | var0: AbstractType{0}
68   | | var1: AbstractType{1}
72   | | var2: AbstractType{1}
76   | | var3: AbstractType{2}
80   | +---
80   | {vbptr}
84   | var15: AbstractType{0}
88   | var16: PtrType{PtrType{PtrType{AbstractType{3}}}}
92   | var17: PtrType{PtrType{PtrType{AbstractType{3}}}}
96   | var18: AbstractType{1}
100  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 100;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 64;
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

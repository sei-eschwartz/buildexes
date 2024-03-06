// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
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
/* method id 404 */ ~C2 ();
C2 (special_constructor);
abstract_0 v7;
abstract_0 v8;
abstract_0 v9;
abstract_0 v10;
};
struct C3 : public C1 {
/* method id 405 */ abstract_1 func1 (abstract_0 v11, abstract_0 v12, abstract_0 v13, abstract_0 v14);
/* method id 406 */ ~C3 ();
/* method id 407 */ C3 ();
C3 (special_constructor);
abstract_0 v19;
abstract_0 v20;
abstract_0 v21;
abstract_0 v22;
};
abstract_1 func2 (abstract_0 v23);
abstract_1 func3 (abstract_0 v24, abstract_0 v25, abstract_0 v26);
abstract_1 func4 (abstract_0 v31, abstract_2 v32, abstract_2 v33, abstract_2 v34);
abstract_1 func5 (abstract_2 v39);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::~C1 () {
::func3(v3, v3, v3);
::func3(v3, v3, v3);
::func3(v3, v3, v3);
::func3(v3, v3, v3);
return;

}
/* method id 402 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
return;

}
/* method id 404 */ C2::~C2 () {
::func3(abstract_0(), abstract_0(), abstract_0());
::func3(abstract_0(), abstract_0(), abstract_0());
::func3(abstract_0(), abstract_0(), abstract_0());
::func3(abstract_0(), abstract_0(), abstract_0());
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 405 */ abstract_1 C3::func1 (abstract_0 v11, abstract_0 v12, abstract_0 v13, abstract_0 v14) {
abstract_0 v15 = abstract_0();
abstract_0 v16 = abstract_0();
abstract_0 v17 = abstract_0();
abstract_0 v18 = abstract_0();
return ::func3(v0, v0, v0);

}
/* method id 406 */ C3::~C3 () {
::func3(v0, v0, v0);
::func3(v0, v0, v0);
::func3(v0, v0, v0);
::func3(v0, v0, v0);
return;

}
/* method id 407 */ C3::C3 () {
::func3(v21, v21, v21);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_1 func2 (abstract_0 v23) {

return abstract_1();

}
abstract_1 func3 (abstract_0 v24, abstract_0 v25, abstract_0 v26) {
abstract_0 v27;
abstract_0 v28;
abstract_2 v29;
abstract_2 v30;

delete (new C1 ());
return ::func4(v25, v29, v29, v29);

}
abstract_1 func4 (abstract_0 v31, abstract_2 v32, abstract_2 v33, abstract_2 v34) {
abstract_2 v35;
abstract_2 v36;
abstract_2 v37;
abstract_2 v38;

delete (new C1 ());
return abstract_1();

}
abstract_1 func5 (abstract_2 v39) {
abstract_2 v40;
abstract_2 v41;

return ::func3(abstract_0(), abstract_0(), abstract_0());

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
class C2    size(44)
0    +---
0    | {vbptr}
4    | var7: AbstractType{0}
8    | var8: AbstractType{0}
12   | var9: AbstractType{0}
16   | var10: AbstractType{0}
20   +---
20   +--- (virtual base class C0)
20   | var0: AbstractType{0}
24   +---
24   +--- (virtual base class C1)
24   | {vbptr}
28   | var1: AbstractType{0}
32   | var2: AbstractType{0}
36   | var3: AbstractType{0}
40   | var4: AbstractType{0}
44   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 44;
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
class C3    size(40)
0    +---
0    | +--- (base class C1)
0    | | {vbptr}
4    | | var1: AbstractType{0}
8    | | var2: AbstractType{0}
12   | | var3: AbstractType{0}
16   | | var4: AbstractType{0}
20   | +---
20   | var19: AbstractType{0}
24   | var20: AbstractType{0}
28   | var21: AbstractType{0}
32   | var22: AbstractType{0}
36   +---
36   +--- (virtual base class C0)
36   | var0: AbstractType{0}
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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

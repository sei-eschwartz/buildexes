// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ abstract_0 func0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 403 */ C1 ();
/* method id 404 */ ~C1 ();
C1 (special_constructor);
abstract_2 v2;
abstract_1 v3;
abstract_2 v4;
abstract_2 v5;
};
struct C2 : public C1 {
/* method id 405 */ ~C2 ();
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_2 v10;
abstract_1 v11;
abstract_2 v12;
abstract_1 v13;
};
struct C3 : public C1 {
/* method id 407 */ ~C3 ();
/* method id 408 */ C3 ();
C3 (special_constructor);
};
abstract_0 func4 (abstract_3 v15, abstract_2 v16, abstract_0* v17, abstract_1 v18);
abstract_0 func5 (abstract_2 v20, abstract_0* v21);
abstract_0 func6 (abstract_2 v26, abstract_2 v27, abstract_2 v28, abstract_0* v29);
abstract_0 func7 (abstract_0* v34);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C2 ());
return;

}
/* method id 401 */ abstract_0 C0::func0 () {
abstract_1 v0 = abstract_1();
return ::func5(abstract_2(), new abstract_0 ());

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {
return;

}
/* method id 404 */ C1::~C1 () {
delete (new C0 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::~C2 () {
abstract_3 v6 = abstract_3();
abstract_2 v7 = abstract_2();
abstract_3 v8 = abstract_3();
abstract_3 v9 = abstract_3();
v2 = abstract_2();
v2 = abstract_2();
v2 = abstract_2();
v2 = abstract_2();
return;

}
/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::~C3 () {
abstract_1 v14 = abstract_1();
v3 = v14;
v3 = v14;
v3 = v14;
v3 = v14;
return;

}
/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0 func4 (abstract_3 v15, abstract_2 v16, abstract_0* v17, abstract_1 v18) {
abstract_2 v19;

return abstract_0();

}
abstract_0 func5 (abstract_2 v20, abstract_0* v21) {
abstract_2 v22;
abstract_2 v23;
abstract_0* v24;
abstract_1 v25;

return abstract_0();

}
abstract_0 func6 (abstract_2 v26, abstract_2 v27, abstract_2 v28, abstract_0* v29) {
abstract_2 v30;
abstract_3 v31;
abstract_2 v32;
abstract_2 v33;

return ::func5(v27, v29);

}
abstract_0 func7 (abstract_0* v34) {
abstract_2 v35;
abstract_2 v36;
abstract_0* v37;

return ::func5(v36, v34);

}
#include <iostream>
void check_driver() {
/*
class C0    size(0)
0    +---
0    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 1;
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
0    | var2: AbstractType{2}
4    | var3: AbstractType{1}
8    | var4: AbstractType{2}
12   | var5: AbstractType{2}
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
}
/*
class C2    size(32)
0    +---
0    | +--- (base class C1)
0    | | var2: AbstractType{2}
4    | | var3: AbstractType{1}
8    | | var4: AbstractType{2}
12   | | var5: AbstractType{2}
16   | +---
16   | var10: AbstractType{2}
20   | var11: AbstractType{1}
24   | var12: AbstractType{2}
28   | var13: AbstractType{1}
32   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(16)
0    +---
0    | +--- (base class C1)
0    | | var2: AbstractType{2}
4    | | var3: AbstractType{1}
8    | | var4: AbstractType{2}
12   | | var5: AbstractType{2}
16   | +---
16   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 16;
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

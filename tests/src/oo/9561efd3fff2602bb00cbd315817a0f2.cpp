// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 ();
/* method id 402 */ abstract_1 func1 (abstract_0 v1, abstract_0 v2);
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_1* v4;
abstract_2 v5;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual ~C1 ();
/* method id 405 */ virtual abstract_1 func3 (abstract_1* v7, abstract_0 v8);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_2 v18;
abstract_0 v19;
};
struct C2  {
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_2 v20;
abstract_0 v21;
};
struct C3 : public virtual C2, public C0 {
/* method id 408 */ virtual abstract_1 func4 ();
/* method id 409 */ C3 ();
/* method id 410 */ virtual abstract_1 func0 ();
/* method id 411 */ virtual ~C3 ();
C3 (special_constructor);
abstract_2 v28;
abstract_2 v29;
};
abstract_1 func5 (abstract_2 v30, abstract_2 v31, abstract_2 v32, abstract_2 v33);
abstract_1 func6 (abstract_2 v38, abstract_2 v39);
abstract_1 func7 (abstract_2 v43, abstract_2 v44);
abstract_1 func8 (abstract_2 v48, abstract_2 v49, abstract_2 v50, abstract_2 v51);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return ::func6(v5, v5);

}
/* method id 401 */ abstract_1 C0::func0 () {
return ::func6(v5, v5);

}
/* method id 402 */ abstract_1 C0::func1 (abstract_0 v1, abstract_0 v2) {
abstract_2 v3 = abstract_2();
delete (new C2 ());
return ::func6(v5, v5);

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::~C1 () {
abstract_0 v6 = abstract_0();
return;

}
/* method id 405 */ abstract_1 C1::func3 (abstract_1* v7, abstract_0 v8) {
abstract_1* v9 = new abstract_1 ();
abstract_2 v10 = abstract_2();
abstract_0 v11 = abstract_0();
C0 v12 = *((new C0 ()));
::func6(v10, v10);
::func6(v10, v10);
::func6(v10, v10);
::func6(v10, v10);
return ::func6(v10, v10);

}
/* method id 406 */ C1::C1 () {
abstract_3 v17 = abstract_3();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 408 */ abstract_1 C3::func4 () {
::func6(v20, v20);
::func6(v20, v20);
return ::func6(v20, v20);

}
/* method id 409 */ C3::C3 () {
abstract_2 v22 = abstract_2();
abstract_3 v23 = abstract_3();
abstract_0 v24 = abstract_0();
abstract_0 v25 = abstract_0();
::func6(v20, v20);
::func6(v20, v20);
::func6(v20, v20);
::func6(v20, v20);
return;

}
/* method id 410 */ abstract_1 C3::func0 () {
abstract_0 v26 = abstract_0();
return ::func6(v20, v20);

}
/* method id 411 */ C3::~C3 () {
abstract_2 v27 = abstract_2();
::func6(abstract_2(), abstract_2());
::func6(abstract_2(), abstract_2());
::func6(abstract_2(), abstract_2());
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()), C0(special_constructor ()) {}

abstract_1 func5 (abstract_2 v30, abstract_2 v31, abstract_2 v32, abstract_2 v33) {
abstract_2 v34;
abstract_2 v35;
abstract_2 v36;
abstract_2 v37;

::func7(v32, v32);
::func7(v32, v32);
::func7(v32, v32);
::func7(v32, v32);
return ::func7(v35, v35);

}
abstract_1 func6 (abstract_2 v38, abstract_2 v39) {
abstract_2 v40;
abstract_2 v41;
abstract_2 v42;

return ::func7(v39, v39);

}
abstract_1 func7 (abstract_2 v43, abstract_2 v44) {
abstract_2 v45;
abstract_2 v46;
abstract_2 v47;

delete (new C3 ());
return ::func5(v44, v44, v44, v44);

}
abstract_1 func8 (abstract_2 v48, abstract_2 v49, abstract_2 v50, abstract_2 v51) {
abstract_2 v52;
abstract_2 v53;
abstract_1* v54;
abstract_2 v55;

v50 = v55;
v50 = v55;
v50 = v55;
v50 = v55;
return ::func6(v48, v48);

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | var4: PtrType{AbstractType{1}}
4    | var5: AbstractType{2}
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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var18: AbstractType{2}
12   | var19: AbstractType{0}
16   +---
16   +--- (virtual base class C0)
16   | var4: PtrType{AbstractType{1}}
20   | var5: AbstractType{2}
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
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(8)
0    +---
0    | var20: AbstractType{2}
4    | var21: AbstractType{0}
8    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(32)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | | var4: PtrType{AbstractType{1}}
8    | | var5: AbstractType{2}
12   | +---
12   | {vbptr}
16   | var28: AbstractType{2}
20   | var29: AbstractType{2}
24   +---
24   +--- (virtual base class C2)
24   | var20: AbstractType{2}
28   | var21: AbstractType{0}
32   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ abstract_1 func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ abstract_1 func0 ();
/* method id 406 */ virtual abstract_1 func1 (abstract_2 v8);
/* method id 407 */ virtual abstract_1 func2 (abstract_1* v10, abstract_2 v11, C0 v12);
/* method id 408 */ abstract_1 func3 (C0 v13);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_2 v18;
abstract_0 v19;
};
struct C2 : public virtual C0 {
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_2 v25;
};
abstract_1 func5 (C1 v26);
abstract_1 func6 (C1 v28);
abstract_1 func7 (abstract_3 v32, C1 v33, abstract_2 v34);
abstract_1 func8 (abstract_2 v35, abstract_2 v36, abstract_2 v37);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
delete (new C2 ());
delete (new C0 ());
return (((C1*) 0))->C1::func1(abstract_2());

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return ::func6(*((new C1 ())));

}
/* method id 402 */ abstract_1 C0::func0 () {
return ::func6(*(((C1*) 0)));

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7) {
delete (new C1 ());
return ::func8(abstract_2(), abstract_2(), abstract_2());

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func0 () {
return ::func6(*(((C1*) 0)));

}
/* method id 406 */ abstract_1 C1::func1 (abstract_2 v8) {
abstract_0 v9 = abstract_0();
return ::func6(*(((C1*) 0)));

}
/* method id 407 */ abstract_1 C1::func2 (abstract_1* v10, abstract_2 v11, C0 v12) {
return ::func6(*(((C1*) 0)));

}
/* method id 408 */ abstract_1 C1::func3 (C0 v13) {
C0 v14 = *(((C0*) 0));
abstract_2 v15 = abstract_2();
abstract_3 v16 = abstract_3();
abstract_3 v17 = abstract_3();
return ::func6(*((new C1 ())));

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C2::C2 () {
abstract_3 v20 = abstract_3();
abstract_2 v21 = abstract_2();
abstract_2 v22 = abstract_2();
abstract_2 v23 = abstract_2();
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

abstract_1 func5 (C1 v26) {
C0 v27;

return ::func7(abstract_3(), v26, abstract_2());

}
abstract_1 func6 (C1 v28) {
abstract_0 v29;
C1 v30;
abstract_1* v31;

return ::func5(*(&(v30)));

}
abstract_1 func7 (abstract_3 v32, C1 v33, abstract_2 v34) {

::func6(*((new C1 ())));
::func6(*((new C1 ())));
::func6(*((new C1 ())));
::func6(*((new C1 ())));
return ::func5(*(((C1*) 0)));

}
abstract_1 func8 (abstract_2 v35, abstract_2 v36, abstract_2 v37) {
abstract_2 v38;
abstract_2 v39;
C1 v40;
abstract_2 v41;

v36 = abstract_2();
v36 = abstract_2();
v36 = abstract_2();
v36 = abstract_2();
return abstract_1();

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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var18: AbstractType{2}
12   | var19: AbstractType{0}
16   | {vtordisp for vbase 0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
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
class C2    size(12)
0    +---
0    | {vbptr}
4    | var25: AbstractType{2}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
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

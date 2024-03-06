// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ virtual abstract_0* func0 (abstract_0** v1, abstract_0** v2);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ virtual abstract_3 func0 (abstract_0** v5, abstract_0** v6, abstract_0** v7, abstract_2 v8);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_4 v9;
abstract_0** v10;
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_0 func1 (abstract_2 v11, abstract_5 v12, abstract_0** v13, abstract_0** v14);
/* method id 406 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 407 */ C2 ();
/* method id 408 */ abstract_1 func0 ();
/* method id 409 */ virtual abstract_0 func1 (abstract_0** v25);
C2 (special_constructor);
abstract_0** v27;
};
abstract_1* func2 ();
abstract_3 func3 (C1 v28);
abstract_0* func4 (abstract_0** v30);
abstract_0 func5 (C1 v31);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
v9 = v9;
v9 = v9;
return ::func4(v0);

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2) {
::func4(v10);
::func4(v10);
::func2();
return ((abstract_0*) 0);

}
/* method id 402 */ abstract_1 C0::func0 () {
return abstract_1();

}
/* method id 403 */ abstract_3 C0::func0 (abstract_0** v5, abstract_0** v6, abstract_0** v7, abstract_2 v8) {
delete (new C0 ());
return abstract_3();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_0 C1::func1 (abstract_2 v11, abstract_5 v12, abstract_0** v13, abstract_0** v14) {
abstract_2 v15 = abstract_2();
abstract_5 v16 = abstract_5();
return abstract_0();

}
/* method id 406 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_5 v17 = abstract_5();
return;

}
/* method id 408 */ abstract_1 C2::func0 () {
delete (new C0 ());
return abstract_1();

}
/* method id 409 */ abstract_0 C2::func1 (abstract_0** v25) {
return ::func5(*((new C1 ())));

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

abstract_1* func2 () {

return new abstract_1 ();

}
abstract_3 func3 (C1 v28) {
abstract_4 v29;

delete (new C1 ());
return abstract_3();

}
abstract_0* func4 (abstract_0** v30) {

return new abstract_0 ();

}
abstract_0 func5 (C1 v31) {
abstract_0** v32;
abstract_4 v33;

return abstract_0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var9: AbstractType{4}
8    | var10: PtrType{PtrType{AbstractType{0}}}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var9: AbstractType{4}
16   | var10: PtrType{PtrType{AbstractType{0}}}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
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
class C2    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var27: PtrType{PtrType{AbstractType{0}}}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var9: AbstractType{4}
24   | var10: PtrType{PtrType{AbstractType{0}}}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
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
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

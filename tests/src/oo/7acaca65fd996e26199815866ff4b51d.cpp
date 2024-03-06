// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual abstract_0** func0 ();
C1 (special_constructor);
abstract_0* v0;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 403 */ virtual abstract_0** func0 ();
/* method id 404 */ virtual abstract_0 func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4);
/* method id 405 */ C2 ();
C2 (special_constructor);
abstract_0* v8;
abstract_0* v9;
};
struct C3 : public virtual C2 {
/* method id 406 */ abstract_1 func1 (abstract_0* v10);
/* method id 407 */ C3 ();
C3 (special_constructor);
};
abstract_0* func3 (abstract_2 v15, C3 v16, abstract_2 v17, C3 v18);
abstract_0** func4 ();
abstract_1 func5 (abstract_0* v19);
abstract_0 func6 (C3 v20, C3 v21);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
return;

}
/* method id 402 */ abstract_0** C1::func0 () {
return new abstract_0* ();

}
C1::C1 (special_constructor)  {}

/* method id 403 */ abstract_0** C2::func0 () {
return ((abstract_0**) 0);

}
/* method id 404 */ abstract_0 C2::func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4) {
abstract_0* v5 = ((abstract_0*) 0);
abstract_0* v6 = ((abstract_0*) 0);
abstract_0* v7 = ((abstract_0*) 0);
delete (new C3 ());
return abstract_0();

}
/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 406 */ abstract_1 C3::func1 (abstract_0* v10) {
abstract_0* v11 = ((abstract_0*) 0);
abstract_2 v12 = abstract_2();
abstract_2 v13 = abstract_2();
abstract_0* v14 = ((abstract_0*) 0);
return abstract_1();

}
/* method id 407 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_0* func3 (abstract_2 v15, C3 v16, abstract_2 v17, C3 v18) {

delete (new C1 ());
return new abstract_0 ();

}
abstract_0** func4 () {

return new abstract_0* ();

}
abstract_1 func5 (abstract_0* v19) {

delete (new C1 ());
return abstract_1();

}
abstract_0 func6 (C3 v20, C3 v21) {
abstract_0*** v22;

delete (new C1 ());
return abstract_0();

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
class C1    size(8)
0    +---
0    | {vfptr}
4    | var0: PtrType{AbstractType{0}}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var8: PtrType{AbstractType{0}}
12   | var9: PtrType{AbstractType{0}}
16   | {vtordisp for vbase 1}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | var0: PtrType{AbstractType{0}}
28   +---
28   +--- (virtual base class C0)
28   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(32)
0    +---
0    | {vbptr}
4    | {vtordisp for vbase 1}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var0: PtrType{AbstractType{0}}
16   +---
16   +--- (virtual base class C0)
16   +---
16   +--- (virtual base class C2)
16   | {vfptr}
20   | {vbptr}
24   | var8: PtrType{AbstractType{0}}
28   | var9: PtrType{AbstractType{0}}
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
 const size_t model_offset = 16;
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

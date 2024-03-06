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
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 402 */ C1 ();
/* method id 403 */ virtual abstract_0** func1 ();
C1 (special_constructor);
abstract_0* v0;
};
struct C2 : public C1, public virtual C0 {
/* method id 404 */ C2 ();
/* method id 405 */ virtual abstract_0** func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3);
C2 (special_constructor);
abstract_0* v4;
abstract_0* v5;
abstract_0* v6;
abstract_0* v7;
};
struct C3 : public virtual C2 {
/* method id 407 */ abstract_1 func1 (abstract_0* v8);
/* method id 408 */ C3 ();
C3 (special_constructor);
};
abstract_0* func5 (abstract_2 v13, C3 v14, abstract_2 v15, C3 v16);
abstract_0** func6 ();
abstract_1 func7 (abstract_0* v17);
abstract_0 func8 (C3 v18, C3 v19);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
delete (new C1 ());
v0 = v0;
return;

}
/* method id 403 */ abstract_0** C1::func1 () {
delete (new C2 ());
return ((abstract_0**) 0);

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::C2 () {
return;

}
/* method id 405 */ abstract_0** C2::func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3) {
return ((abstract_0**) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 407 */ abstract_1 C3::func1 (abstract_0* v8) {
abstract_0* v9 = ((abstract_0*) 0);
abstract_2 v10 = abstract_2();
abstract_2 v11 = abstract_2();
abstract_0* v12 = ((abstract_0*) 0);
return abstract_1();

}
/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_0* func5 (abstract_2 v13, C3 v14, abstract_2 v15, C3 v16) {

delete (new C1 ());
return new abstract_0 ();

}
abstract_0** func6 () {

return new abstract_0* ();

}
abstract_1 func7 (abstract_0* v17) {

v17 = new abstract_0 ();
v17 = new abstract_0 ();
v17 = new abstract_0 ();
v17 = new abstract_0 ();
return abstract_1();

}
abstract_0 func8 (C3 v18, C3 v19) {
abstract_0*** v20;

return abstract_0();

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
class C2    size(32)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var0: PtrType{AbstractType{0}}
8    | +---
8    | {vbptr}
12   | var4: PtrType{AbstractType{0}}
16   | var5: PtrType{AbstractType{0}}
20   | var6: PtrType{AbstractType{0}}
24   | var7: PtrType{AbstractType{0}}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
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
class C3    size(36)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    +---
8    +--- (virtual base class C2)
8    | +--- (base class C1)
8    | | {vfptr}
12   | | var0: PtrType{AbstractType{0}}
16   | +---
16   | {vbptr}
20   | var4: PtrType{AbstractType{0}}
24   | var5: PtrType{AbstractType{0}}
28   | var6: PtrType{AbstractType{0}}
32   | var7: PtrType{AbstractType{0}}
36   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ virtual abstract_0* func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3);
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual abstract_0* func0 (abstract_0** v5);
/* method id 404 */ virtual abstract_0* func1 (abstract_0** v7, abstract_0** v8, abstract_0** v9);
/* method id 405 */ virtual abstract_2 func0 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_0** v10;
};
struct C2 : public virtual C0, public C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_0** v14;
};
struct C3 : public virtual C2 {
/* method id 408 */ virtual abstract_2 func0 ();
/* method id 409 */ C3 ();
C3 (special_constructor);
abstract_0** v21;
abstract_0** v22;
};
abstract_5 func3 ();
abstract_2 func4 (C3 v26);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
delete (new C2 ());
return new abstract_0 ();

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3) {
::func3();
::func3();
::func3();
::func3();
return ((abstract_0*) 0);

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0* C1::func0 (abstract_0** v5) {
abstract_0** v6 = ((abstract_0**) 0);
delete (new C0 ());
return new abstract_0 ();

}
/* method id 404 */ abstract_0* C1::func1 (abstract_0** v7, abstract_0** v8, abstract_0** v9) {
delete (new C1 ());
delete (new C3 ());
return ((abstract_0*) 0);

}
/* method id 405 */ abstract_2 C1::func0 () {
v10 = new abstract_0* ();
delete (new C3 ());
return abstract_2();

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_0** v11 = ((abstract_0**) 0);
abstract_0** v12 = ((abstract_0**) 0);
abstract_0** v13 = ((abstract_0**) 0);
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 408 */ abstract_2 C3::func0 () {
abstract_0** v15 = new abstract_0* ();
abstract_0** v16 = new abstract_0* ();
abstract_0** v17 = new abstract_0* ();
delete (new C1 ());
return ::func4(*(&(*((new C3 ())))));

}
/* method id 409 */ C3::C3 () {
abstract_0** v18 = new abstract_0* ();
abstract_0** v19 = new abstract_0* ();
abstract_0** v20 = new abstract_0* ();
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_5 func3 () {
abstract_0** v23;
abstract_0** v24;
abstract_0** v25;

((new C1 ()))->C1::func0();
return abstract_5();

}
abstract_2 func4 (C3 v26) {
abstract_0** v27;
abstract_0** v28;
C3 v29;

delete (new C1 ());
return abstract_2();

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var10: PtrType{PtrType{AbstractType{0}}}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
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
class C2    size(24)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var10: PtrType{PtrType{AbstractType{0}}}
12   | +---
12   | var14: PtrType{PtrType{AbstractType{0}}}
16   | {vtordisp for vbase 0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 24;
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
class C3    size(40)
0    +---
0    | {vbptr}
4    | var21: PtrType{PtrType{AbstractType{0}}}
8    | var22: PtrType{PtrType{AbstractType{0}}}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   | {vtordisp for vbase 2}
24   +--- (virtual base class C2)
24   | +--- (base class C1)
24   | | {vfptr}
28   | | {vbptr}
32   | | var10: PtrType{PtrType{AbstractType{0}}}
36   | +---
36   | var14: PtrType{PtrType{AbstractType{0}}}
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

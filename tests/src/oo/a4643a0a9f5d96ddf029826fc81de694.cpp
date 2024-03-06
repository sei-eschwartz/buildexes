// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ virtual abstract_0* func0 (abstract_0** v1, abstract_0** v2);
/* method id 402 */ virtual ~C0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_0** v4;
};
struct C1 : public virtual C0 {
/* method id 404 */ abstract_0* func0 (abstract_0** v5, abstract_0** v6);
/* method id 405 */ C1 ();
C1 (special_constructor);
abstract_0** v7;
abstract_0** v8;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C1 {
/* method id 409 */ virtual abstract_1 func2 (abstract_0** v9);
/* method id 410 */ C3 ();
C3 (special_constructor);
abstract_0** v17;
abstract_0** v18;
};
abstract_0* func7 ();
abstract_0 func8 (C3 v22);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
::func7();
::func7();
::func7();
::func7();
return ((abstract_0*) 0);

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2) {
delete (new C0 ());
return new abstract_0 ();

}
/* method id 402 */ C0::~C0 () {
abstract_0** v3 = new abstract_0* ();
delete (new C1 ());
delete (new C3 ());
return;

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_0* C1::func0 (abstract_0** v5, abstract_0** v6) {
delete (new C3 ());
return ((abstract_0*) 0);

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ abstract_1 C3::func2 (abstract_0** v9) {
abstract_0** v10 = ((abstract_0**) 0);
abstract_0** v11 = ((abstract_0**) 0);
abstract_0** v12 = ((abstract_0**) 0);
abstract_0** v13 = ((abstract_0**) 0);
delete (new C0 ());
return abstract_1();

}
/* method id 410 */ C3::C3 () {
abstract_0** v14 = new abstract_0* ();
abstract_0** v15 = new abstract_0* ();
abstract_0** v16 = new abstract_0* ();
v7 = v17;
v7 = new abstract_0* ();
v7 = new abstract_0* ();
v7 = new abstract_0* ();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0* func7 () {
abstract_0** v19;
abstract_0** v20;
abstract_0** v21;

((new C1 ()))->C1::func0(new abstract_0* (), new abstract_0* ());
((new C1 ()))->C1::func0(new abstract_0* (), new abstract_0* ());
((new C1 ()))->C1::func0(new abstract_0* (), new abstract_0* ());
((new C1 ()))->C1::func0(new abstract_0* (), new abstract_0* ());
return new abstract_0 ();

}
abstract_0 func8 (C3 v22) {
abstract_0** v23;
abstract_0** v24;
C3 v25;

v25 = *((new C3 ()));
v25 = *((new C3 ()));
return abstract_0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var4: PtrType{PtrType{AbstractType{0}}}
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
0    | {vbptr}
4    | var7: PtrType{PtrType{AbstractType{0}}}
8    | var8: PtrType{PtrType{AbstractType{0}}}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var4: PtrType{PtrType{AbstractType{0}}}
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
class C2    size(28)
0    +---
0    | {vbptr}
4    | {vtordisp for vbase 0}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var4: PtrType{PtrType{AbstractType{0}}}
16   +---
16   +--- (virtual base class C1)
16   | {vbptr}
20   | var7: PtrType{PtrType{AbstractType{0}}}
24   | var8: PtrType{PtrType{AbstractType{0}}}
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
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(36)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | {vbptr}
8    | | var7: PtrType{PtrType{AbstractType{0}}}
12   | | var8: PtrType{PtrType{AbstractType{0}}}
16   | +---
16   | var17: PtrType{PtrType{AbstractType{0}}}
20   | var18: PtrType{PtrType{AbstractType{0}}}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   | var4: PtrType{PtrType{AbstractType{0}}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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

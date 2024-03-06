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
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual C0* func2 (void**** v0, void**** v1);
/* method id 403 */ virtual void** func1 ();
/* method id 404 */ C1 ();
/* method id 405 */ virtual abstract_0 func2 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 407 */ virtual void** func0 (C0** v11);
/* method id 408 */ C2 ();
C2 (special_constructor);
void**** v13;
};
struct C3 : public virtual C0, public virtual C2 {
/* method id 410 */ virtual void** func3 ();
/* method id 411 */ C3 ();
/* method id 412 */ virtual void func7 (C0 v17, abstract_2 v18, void**** v19, void**** v20);
/* method id 413 */ void*** func8 (C0 v21, abstract_2 v22, C0** v23);
C3 (special_constructor);
void**** v24;
void**** v25;
};
void** func10 (C0 v26, abstract_3 v27, C0** v28, void**** v29);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 (void**** v0, void**** v1) {
C0** v2 = ((C0**) 0);
delete (new C2 ());
v2 = new C0* ();
return ((C0*) 0);

}
/* method id 403 */ void** C1::func1 () {
(this)->C1::func2(new void*** (), new void*** ());
return new void* ();

}
/* method id 404 */ C1::C1 () {
C0** v3 = ((C0**) 0);
void**** v4 = new void*** ();
void**** v5 = new void*** ();
C0** v6 = ((C0**) 0);
return;

}
/* method id 405 */ abstract_0 C1::func2 () {
void**** v7 = new void*** ();
C0** v8 = ((C0**) 0);
C0 v9 = *(((C0*) 0));
C0 v10 = *(((C0*) 0));
v7 = v7;
v7 = v7;
return abstract_0();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ void** C2::func0 (C0** v11) {
C0** v12 = new C0* ();
return new void* ();

}
/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ void** C3::func3 () {
C0** v14 = new C0* ();
delete (new C3 ());
return new void* ();

}
/* method id 411 */ C3::C3 () {
return;

}
/* method id 412 */ void C3::func7 (C0 v17, abstract_2 v18, void**** v19, void**** v20) {
((new C1 ()))->C1::func2();
((new C1 ()))->C1::func2();
((new C1 ()))->C1::func2();
((new C1 ()))->C1::func2();
return;

}
/* method id 413 */ void*** C3::func8 (C0 v21, abstract_2 v22, C0** v23) {
return new void** ();

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

void** func10 (C0 v26, abstract_3 v27, C0** v28, void**** v29) {

v28 = ((C0**) 0);
v28 = ((C0**) 0);
return new void* ();

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
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
class C2    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var13: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
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
class C3    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var24: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | var25: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   +---
28   +--- (virtual base class C2)
28   | {vfptr}
32   | {vbptr}
36   | var13: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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

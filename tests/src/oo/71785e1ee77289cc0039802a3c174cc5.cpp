// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void* func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ C0 ();
C0 (special_constructor);
abstract_3* v5;
};
struct C1  {
/* method id 402 */ void*** func0 ();
/* method id 403 */ virtual void** func0 (abstract_3* v10, abstract_0 v11, abstract_3* v12, abstract_3* v13);
/* method id 404 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 405 */ virtual abstract_2** func1 ();
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_3* v17;
abstract_3* v18;
};
struct C3  {
/* method id 407 */ C3 ();
/* method id 408 */ virtual ~C3 ();
C3 (special_constructor);
C2 v21;
C2 v22;
abstract_1 v23;
abstract_1 v24;
};
void*** func2 ();
// definitions
/* method id 400 */ void* C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return ((void*) 0);

}
/* method id 401 */ C0::C0 () {
abstract_1 v4 = abstract_1();
delete (new C1 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void*** C1::func0 () {
abstract_1 v6 = abstract_1();
abstract_3* v7 = new abstract_3 ();
abstract_3* v8 = new abstract_3 ();
abstract_1 v9 = abstract_1();
return new void** ();

}
/* method id 403 */ void** C1::func0 (abstract_3* v10, abstract_0 v11, abstract_3* v12, abstract_3* v13) {
abstract_1 v14 = abstract_1();
delete (new C1 ());
return ((void**) 0);

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 405 */ abstract_2** C2::func1 () {
abstract_1 v15 = abstract_1();
::func2();
return new abstract_2* ();

}
/* method id 406 */ C2::C2 () {
abstract_0 v16 = abstract_0();
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
delete (new C1 ());
return;

}
/* method id 408 */ C3::~C3 () {
abstract_1 v19 = abstract_1();
C2 v20 = *(((C2*) 0));
return;

}
C3::C3 (special_constructor)  {}

void*** func2 () {
abstract_4 v25;

delete (new C1 ());
return new void** ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var5: PtrType{AbstractType{3}}
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
class C1    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 4;
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
8    | var17: PtrType{AbstractType{3}}
12   | var18: PtrType{AbstractType{3}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var5: PtrType{AbstractType{3}}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
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
class C3    size(68)
0    +---
0    | {vfptr}
4    | var21: ClassType{2}
32   | var22: ClassType{2}
60   | var23: AbstractType{1}
64   | var24: AbstractType{1}
68   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 68;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

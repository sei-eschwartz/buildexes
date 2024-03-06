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
struct C1 : public virtual C0 {
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ ~C1 ();
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_1** v4;
abstract_1** v5;
};
struct C2  {
/* method id 405 */ virtual C0 func2 ();
/* method id 406 */ C2 ();
/* method id 407 */ virtual C0 func4 (abstract_1** v11, C0* v12, abstract_0* v13);
/* method id 408 */ virtual C0* func0 (abstract_1** v14);
C2 (special_constructor);
abstract_0* v16;
abstract_1** v17;
C0* v18;
abstract_0* v19;
};
struct C3 : public C0, public virtual C2 {
/* method id 409 */ C3 ();
C3 (special_constructor);
C0* v20;
abstract_2 v21;
abstract_2 v22;
abstract_0* v23;
};
C0 func6 ();
// definitions
/* method id 400 */ C0::~C0 () {
::func6();
(((C1*) 0))->C1::func2();
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
delete (new C1 ());
return ((C0*) 0);

}
/* method id 403 */ C1::~C1 () {
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
abstract_1** v3 = ((abstract_1**) 0);
return;

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C0 C2::func2 () {
abstract_0* v6 = ((abstract_0*) 0);
C0* v7 = &(*(&(*(((C0*) 0)))));
C0* v8 = &(*(&(*(((C0*) 0)))));
C0* v9 = &(*(&(*(((C0*) 0)))));
return ::func6();

}
/* method id 406 */ C2::C2 () {
abstract_0* v10 = ((abstract_0*) 0);
v10 = new abstract_0 ();
v10 = new abstract_0 ();
return;

}
/* method id 407 */ C0 C2::func4 (abstract_1** v11, C0* v12, abstract_0* v13) {
return *(v18);

}
/* method id 408 */ C0* C2::func0 (abstract_1** v14) {
abstract_1** v15 = new abstract_1* ();
return v18;

}
C2::C2 (special_constructor)  {}

/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

C0 func6 () {
C0* v24;
C0* v25;

return *(v24);

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
8    | var4: PtrType{PtrType{AbstractType{1}}}
12   | var5: PtrType{PtrType{AbstractType{1}}}
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
class C2    size(20)
0    +---
0    | {vfptr}
4    | var16: PtrType{AbstractType{0}}
8    | var17: PtrType{PtrType{AbstractType{1}}}
12   | var18: PtrType{ClassType{0}}
16   | var19: PtrType{AbstractType{0}}
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(44)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | {vbptr}
8    | var20: PtrType{ClassType{0}}
12   | var21: AbstractType{2}
16   | var22: AbstractType{2}
20   | var23: PtrType{AbstractType{0}}
24   +---
24   +--- (virtual base class C2)
24   | {vfptr}
28   | var16: PtrType{AbstractType{0}}
32   | var17: PtrType{PtrType{AbstractType{1}}}
36   | var18: PtrType{ClassType{0}}
40   | var19: PtrType{AbstractType{0}}
44   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

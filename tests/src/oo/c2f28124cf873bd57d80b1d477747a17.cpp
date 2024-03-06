// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
C1 (special_constructor);
};
struct C2 : public C0 {
/* method id 402 */ C0 func0 ();
/* method id 403 */ virtual C0 func1 (C0* v6, C0* v7, C1 v8, abstract_0 v9);
/* method id 404 */ virtual C0 func1 (C0* v11, C1 v12, C1 v13, abstract_0 v14);
/* method id 405 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C2, public virtual C1 {
/* method id 406 */ C3 ();
/* method id 407 */ ~C3 ();
C3 (special_constructor);
C0* v19;
abstract_0 v20;
C0* v21;
abstract_0 v22;
};
C0 func3 ();
C0 func4 (abstract_0 v23, C0* v24, C0* v25, C0* v26);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
delete (new C0 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 402 */ C0 C2::func0 () {
C0* v3 = ((C0*) 0);
C0* v4 = ((C0*) 0);
C1 v5 = *(&(*((new C1 ()))));
delete (new C2 ());
return ::func4(abstract_0(), v3, v3, v3);

}
/* method id 403 */ C0 C2::func1 (C0* v6, C0* v7, C1 v8, abstract_0 v9) {
C1 v10 = *(&(*((new C1 ()))));
v6 = v7;
v6 = v7;
v6 = v7;
v6 = v7;
return *((new C0 ()));

}
/* method id 404 */ C0 C2::func1 (C0* v11, C1 v12, C1 v13, abstract_0 v14) {
abstract_0 v15 = abstract_0();
C0* v16 = &(*(((C0*) 0)));
delete (new C0 ());
v12 = v13;
v12 = v13;
v12 = v13;
return ::func4(v15, (new C0 ()), (new C0 ()), (new C0 ()));

}
/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
C1 v17 = *(((C1*) 0));
abstract_0 v18 = abstract_0();
return;

}
/* method id 407 */ C3::~C3 () {
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()), C1(special_constructor ()) {}

C0 func3 () {

return *((new C0 ()));

}
C0 func4 (abstract_0 v23, C0* v24, C0* v25, C0* v26) {
abstract_0 v27;

return ::func3();

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
class C1    size(0)
0    +---
0    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(4)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(28)
0    +---
0    | {vbptr}
4    | var19: PtrType{ClassType{0}}
8    | var20: AbstractType{0}
12   | var21: PtrType{ClassType{0}}
16   | var22: AbstractType{0}
20   +---
20   +--- (virtual base class C2)
20   | {vfptr}
24   | +--- (base class C0)
24   | +---
24   +---
24   | alignment: Additional padding between virtual bases 2, which ends with a zero-sized object, and 1, which leads with zero sized base.
28   +--- (virtual base class C1)
28   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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

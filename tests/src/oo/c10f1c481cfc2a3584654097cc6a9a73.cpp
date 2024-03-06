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
struct C1 : public C0 {
/* method id 401 */ virtual abstract_0 func0 ();
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ abstract_0 func1 (abstract_0* v1, abstract_0* v2, abstract_0* v3);
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_0* v8;
abstract_0* v9;
};
struct C2 : public virtual C1 {
/* method id 405 */ C2 ();
C2 (special_constructor);
abstract_0* v12;
abstract_0* v13;
C1 v14;
};
struct C3  {
/* method id 407 */ virtual ~C3 ();
/* method id 408 */ abstract_0 func3 ();
/* method id 409 */ C3 ();
C3 (special_constructor);
C1 v22;
C1 v23;
C1 v24;
C1 v25;
};
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ abstract_0 C1::func0 () {
return abstract_0();

}
/* method id 402 */ C1::~C1 () {
abstract_0* v0 = new abstract_0 ();
(((C3*) 0))->C3::func3();
return;

}
/* method id 403 */ abstract_0 C1::func1 (abstract_0* v1, abstract_0* v2, abstract_0* v3) {
abstract_0* v4 = new abstract_0 ();
abstract_0* v5 = new abstract_0 ();
abstract_0* v6 = new abstract_0 ();
abstract_0* v7 = new abstract_0 ();
delete (new C1 ());
return abstract_0();

}
/* method id 404 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
abstract_0* v10 = new abstract_0 ();
abstract_0* v11 = new abstract_0 ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::~C3 () {
v22 = v23;
return;

}
/* method id 408 */ abstract_0 C3::func3 () {
C1 v15 = *(((C1*) 0));
C1 v16 = *(((C1*) 0));
C1 v17 = *(&(*((new C1 ()))));
return (((C1*) 0))->C1::func1(new abstract_0 (), new abstract_0 (), new abstract_0 ());

}
/* method id 409 */ C3::C3 () {
C1 v18 = *(&(*((new C1 ()))));
C1 v19 = *(&(*((new C1 ()))));
C1 v20 = *(&(*((new C1 ()))));
abstract_0* v21 = new abstract_0 ();
v20 = v19;
v20 = v19;
return;

}
C3::C3 (special_constructor)  {}

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | var8: PtrType{AbstractType{0}}
8    | var9: PtrType{AbstractType{0}}
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
 const size_t model_offset = 4;
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
0    | {vbptr}
4    | var12: PtrType{AbstractType{0}}
8    | var13: PtrType{AbstractType{0}}
12   | var14: ClassType{1}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | +--- (base class C0)
28   | +---
28   | var8: PtrType{AbstractType{0}}
32   | var9: PtrType{AbstractType{0}}
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
class C3    size(52)
0    +---
0    | {vfptr}
4    | var22: ClassType{1}
16   | var23: ClassType{1}
28   | var24: ClassType{1}
40   | var25: ClassType{1}
52   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 52;
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

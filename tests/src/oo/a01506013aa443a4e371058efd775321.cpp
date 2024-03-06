// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
/* method id 402 */ virtual abstract_0** func2 (C0* v0, C0* v1);
/* method id 403 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 405 */ ~C2 ();
/* method id 406 */ C0* func1 ();
/* method id 407 */ C2 ();
C2 (special_constructor);
C0* v17;
C0* v18;
};
struct C3 : public virtual C2 {
/* method id 408 */ C3 ();
/* method id 409 */ ~C3 ();
C3 (special_constructor);
C0* v24;
C0* v25;
C2 v26;
};
abstract_0* func4 (C2 v27, abstract_0*** v28, C2 v29);
abstract_0* func5 (C0* v31);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C2 ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0** C1::func2 (C0* v0, C0* v1) {
C0* v2 = &(*(((C0*) 0)));
C0* v3 = &(*(((C0*) 0)));
C0* v4 = &(*(((C0*) 0)));
C0* v5 = &(*(((C0*) 0)));
return new abstract_0* ();

}
/* method id 403 */ C1::C1 () {
C0* v6 = (new C0 ());
C0* v7 = ((C0*) 0);
C0* v8 = &(*(((C0*) 0)));
C0* v9 = ((C0*) 0);
delete (new C1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::~C2 () {
C0* v10 = ((C0*) 0);
::func5(v18);
::func5(v18);
::func5(v18);
::func5(v18);
return;

}
/* method id 406 */ C0* C2::func1 () {
C0* v11 = ((C0*) 0);
C0* v12 = &(*(&(*(((C0*) 0)))));
C0* v13 = ((C0*) 0);
return v11;

}
/* method id 407 */ C2::C2 () {
::func5((new C0 ()));
::func5((new C0 ()));
::func5((new C0 ()));
::func5((new C0 ()));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
return;

}
/* method id 409 */ C3::~C3 () {
C0* v19 = ((C0*) 0);
C0* v20 = ((C0*) 0);
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_0* func4 (C2 v27, abstract_0*** v28, C2 v29) {
abstract_0*** v30;

return ::func5(&(*((new C0 ()))));

}
abstract_0* func5 (C0* v31) {

delete (new C1 ());
return ((abstract_0*) 0);

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
0    | {vbptr}
4    | var17: PtrType{ClassType{0}}
8    | var18: PtrType{ClassType{0}}
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
class C3    size(60)
0    +---
0    | {vbptr}
4    | var24: PtrType{ClassType{0}}
8    | var25: PtrType{ClassType{0}}
12   | var26: ClassType{2}
36   +---
36   +--- (virtual base class C0)
36   | {vfptr}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | {vbptr}
48   +---
48   +--- (virtual base class C2)
48   | {vbptr}
52   | var17: PtrType{ClassType{0}}
56   | var18: PtrType{ClassType{0}}
60   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 60;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 48;
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

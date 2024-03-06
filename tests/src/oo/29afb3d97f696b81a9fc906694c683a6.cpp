// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
/* method id 402 */ virtual C0 func0 (C0* v0, C0* v1);
/* method id 403 */ virtual C0 func1 (C0* v6, C0* v7, C0* v8, C0* v9);
/* method id 404 */ C1 ();
/* method id 405 */ virtual ~C1 ();
C1 (special_constructor);
C0* v22;
C0* v23;
C0* v24;
C0* v25;
};
struct C2 : public C1 {
/* method id 406 */ virtual ~C2 ();
/* method id 407 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C2 {
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ C3 ();
C3 (special_constructor);
abstract_1 v49;
};
C0 func2 (C0* v50);
abstract_0 func3 ();
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0 C1::func0 (C0* v0, C0* v1) {
C0* v2 = ((C0*) 0);
C0* v3 = ((C0*) 0);
C0* v4 = ((C0*) 0);
C0* v5 = ((C0*) 0);
return ::func2(v0);

}
/* method id 403 */ C0 C1::func1 (C0* v6, C0* v7, C0* v8, C0* v9) {
return (((C1*) 0))->C1::func0((C0*)(((C1*) 0)), v8);

}
/* method id 404 */ C1::C1 () {
C0* v10 = ((C0*) 0);
C0* v11 = ((C0*) 0);
C0* v12 = ((C0*) 0);
C0* v13 = ((C0*) 0);
delete (new C1 ());
return;

}
/* method id 405 */ C1::~C1 () {
C0* v18 = ((C0*) 0);
C0* v19 = ((C0*) 0);
C0* v20 = ((C0*) 0);
C0* v21 = ((C0*) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::~C2 () {
C0* v26 = &(((new C1 ()))->C1::func0(((C0*) 0), ((C0*) 0)));
C0* v27 = &(((new C1 ()))->C1::func0(((C0*) 0), ((C0*) 0)));
C0* v28 = &(((new C1 ()))->C1::func0(((C0*) 0), ((C0*) 0)));
C0* v29 = &(((new C1 ()))->C1::func0(((C0*) 0), ((C0*) 0)));
delete (new C0 ());
return;

}
/* method id 407 */ C2::C2 () {
C0* v30 = ((C0*) 0);
C0* v31 = ((C0*) 0);
C0* v32 = ((C0*) 0);
C0* v33 = ((C0*) 0);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::~C3 () {
C0* v46 = ((C0*) 0);
::func2(&(::func2(v24)));
return;

}
/* method id 409 */ C3::C3 () {
C0* v47 = ((C0*) 0);
C0* v48 = &((((C1*) 0))->C1::func0(((C0*) 0), ((C0*) 0)));
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

C0 func2 (C0* v50) {

::func3();
return *(v50);

}
abstract_0 func3 () {

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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var22: PtrType{ClassType{0}}
12   | var23: PtrType{ClassType{0}}
16   | var24: PtrType{ClassType{0}}
20   | var25: PtrType{ClassType{0}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var22: PtrType{ClassType{0}}
12   | | var23: PtrType{ClassType{0}}
16   | | var24: PtrType{ClassType{0}}
20   | | var25: PtrType{ClassType{0}}
24   | +---
24   +---
24   +--- (virtual base class C0)
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
class C3    size(32)
0    +---
0    | +--- (base class C2)
0    | | +--- (base class C1)
0    | | | {vfptr}
4    | | | {vbptr}
8    | | | var22: PtrType{ClassType{0}}
12   | | | var23: PtrType{ClassType{0}}
16   | | | var24: PtrType{ClassType{0}}
20   | | | var25: PtrType{ClassType{0}}
24   | | +---
24   | +---
24   | var49: AbstractType{1}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
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
 const size_t model_offset = 0;
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

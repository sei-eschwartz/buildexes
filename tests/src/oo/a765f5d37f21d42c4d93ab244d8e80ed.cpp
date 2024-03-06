// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 401 */ C0* func0 ();
/* method id 402 */ virtual C0* func0 (C0** v1, C0** v2, C0** v3, C0** v4);
/* method id 403 */ C0* func0 (C0** v8, C0** v9);
/* method id 404 */ virtual C0* func1 (C0** v11, C0** v12);
/* method id 405 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 406 */ virtual C0* func3 (C0** v14);
/* method id 407 */ virtual C0* func3 (C0** v15, C0** v16);
/* method id 408 */ virtual C0* func4 ();
/* method id 409 */ C2 ();
C2 (special_constructor);
C1 v21;
};
struct C3  {
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ C3 ();
/* method id 412 */ virtual C0* func7 (C1 v39, C0** v40);
C3 (special_constructor);
C0** v42;
C0** v43;
C1 v44;
C0* v45;
};
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C0* C1::func0 () {
C0** v0 = ((C0**) 0);
return &(*((new C0 ())));

}
/* method id 402 */ C0* C1::func0 (C0** v1, C0** v2, C0** v3, C0** v4) {
C0** v5 = new C0* ();
C0** v6 = new C0* ();
C0** v7 = new C0* ();
return ((C0*) 0);

}
/* method id 403 */ C0* C1::func0 (C0** v8, C0** v9) {
C0** v10 = new C0* ();
return (new C0 ());

}
/* method id 404 */ C0* C1::func1 (C0** v11, C0** v12) {
C0** v13 = ((C0**) 0);
return ((C0*) 0);

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C0* C2::func3 (C0** v14) {
v21 = v21;
v21 = v21;
v21 = v21;
return (C0*)(&(*(&(v21))));

}
/* method id 407 */ C0* C2::func3 (C0** v15, C0** v16) {
delete (new C2 ());
return (((C3*) 0))->C3::func7(v21, v15);

}
/* method id 408 */ C0* C2::func4 () {
C0** v17 = new C0* ();
C0** v18 = new C0* ();
C0** v19 = new C0* ();
C1 v20 = *(((C1*) 0));
return (new C0 ());

}
/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::~C3 () {
C1 v22 = *((new C1 ()));
return;

}
/* method id 411 */ C3::C3 () {
abstract_0 v23 = abstract_0();
C1 v24 = *(((C1*) 0));
abstract_1 v25 = abstract_1();
abstract_1 v26 = abstract_1();
delete (new C1 ());
return;

}
/* method id 412 */ C0* C3::func7 (C1 v39, C0** v40) {
C0** v41 = ((C0**) 0);
return v45;

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
class C1    size(4)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
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
class C2    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var21: ClassType{1}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | +--- (base class C0)
16   | +---
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(20)
0    +---
0    | {vfptr}
4    | var42: PtrType{PtrType{ClassType{0}}}
8    | var43: PtrType{PtrType{ClassType{0}}}
12   | var44: ClassType{1}
16   | var45: PtrType{ClassType{0}}
20   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 20;
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

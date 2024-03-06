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
/* method id 401 */ C0* func0 ();
/* method id 402 */ virtual C0* func0 (C0** v1, C0** v2, C0** v3, C0** v4);
/* method id 403 */ C0* func0 (C0** v8, C0** v9);
/* method id 404 */ C1 ();
C1 (special_constructor);
C0** v16;
C0** v17;
C0** v18;
C0** v19;
};
struct C2  {
/* method id 405 */ C0* func1 ();
/* method id 406 */ C2 ();
C2 (special_constructor);
C0** v20;
};
struct C3 : public C1, public virtual C2 {
/* method id 407 */ C3 ();
C3 (special_constructor);
};
C0* func3 ();
C0 func4 (C0** v23, abstract_0 v24, abstract_0 v25, C0** v26);
C0* func5 (C0 v31, abstract_0 v32);
C0* func6 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C0* C1::func0 () {
C0** v0 = ((C0**) 0);
return (C0*)((new C1 ()));

}
/* method id 402 */ C0* C1::func0 (C0** v1, C0** v2, C0** v3, C0** v4) {
C0** v5 = new C0* ();
C0** v6 = new C0* ();
C0** v7 = new C0* ();
return (new C0 ());

}
/* method id 403 */ C0* C1::func0 (C0** v8, C0** v9) {
C0** v10 = ((C0**) 0);
C0** v11 = ((C0**) 0);
return (C0*)(&(*(((C1*) 0))));

}
/* method id 404 */ C1::C1 () {
C0** v12 = ((C0**) 0);
C0** v13 = ((C0**) 0);
C0** v14 = ((C0**) 0);
C0** v15 = ((C0**) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C0* C2::func1 () {
return ::func5(*((new C0 ())), abstract_0());

}
/* method id 406 */ C2::C2 () {
return;

}
C2::C2 (special_constructor)  {}

/* method id 407 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

C0* func3 () {
C0** v21;
C0** v22;

return &(*((new C0 ())));

}
C0 func4 (C0** v23, abstract_0 v24, abstract_0 v25, C0** v26) {
abstract_0 v27;
C0 v28;
C0 v29;
abstract_0 v30;

return *((C0*)(&(*((new C1 ())))));

}
C0* func5 (C0 v31, abstract_0 v32) {

return (new C0 ());

}
C0* func6 () {
abstract_0 v33;
abstract_0 v34;
C0 v35;

return (C0*)(&(*((new C1 ()))));

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | var16: PtrType{PtrType{ClassType{0}}}
8    | var17: PtrType{PtrType{ClassType{0}}}
12   | var18: PtrType{PtrType{ClassType{0}}}
16   | var19: PtrType{PtrType{ClassType{0}}}
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
class C2    size(4)
0    +---
0    | var20: PtrType{PtrType{ClassType{0}}}
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
}
/*
class C3    size(28)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | +--- (base class C0)
4    | | +---
4    | | var16: PtrType{PtrType{ClassType{0}}}
8    | | var17: PtrType{PtrType{ClassType{0}}}
12   | | var18: PtrType{PtrType{ClassType{0}}}
16   | | var19: PtrType{PtrType{ClassType{0}}}
20   | +---
20   | {vbptr}
24   +---
24   +--- (virtual base class C2)
24   | var20: PtrType{PtrType{ClassType{0}}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
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

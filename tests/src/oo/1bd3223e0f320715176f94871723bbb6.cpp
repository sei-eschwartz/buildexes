// type for special constructors
struct special_constructor {};
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
};
struct C2  {
/* method id 405 */ C2 ();
/* method id 406 */ ~C2 ();
/* method id 407 */ C0* func0 ();
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 408 */ virtual C0** func2 ();
/* method id 409 */ C3 ();
C3 (special_constructor);
C0* v20;
C0*** v21;
C0* v22;
C0*** v23;
};
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C0* C1::func0 () {
C0** v0 = ((C0**) 0);
return &(*(&(*((new C0 ())))));

}
/* method id 402 */ C0* C1::func0 (C0** v1, C0** v2, C0** v3, C0** v4) {
C0** v5 = new C0* ();
C0** v6 = new C0* ();
C0** v7 = new C0* ();
return (C0*)(this);

}
/* method id 403 */ C0* C1::func0 (C0** v8, C0** v9) {
C0** v10 = ((C0**) 0);
C0** v11 = ((C0**) 0);
return &(*(&(*((new C0 ())))));

}
/* method id 404 */ C1::C1 () {
C0** v12 = new C0* ();
C0** v13 = new C0* ();
C0** v14 = new C0* ();
C0* v15 = (new C0 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
C0* v16 = (new C0 ());
C0* v17 = (new C0 ());
return;

}
/* method id 406 */ C2::~C2 () {
C0* v18 = (new C0 ());
return;

}
/* method id 407 */ C0* C2::func0 () {
return ((C0*) 0);

}
C2::C2 (special_constructor)  {}

/* method id 408 */ C0** C3::func2 () {
C0*** v19 = new C0** ();
return new C0* ();

}
/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

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
class C2    size(0)
0    +---
0    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var20: PtrType{ClassType{0}}
12   | var21: DeletablePtrType{PtrType{PtrType{ClassType{0}}}}
16   | var22: PtrType{ClassType{0}}
20   | var23: DeletablePtrType{PtrType{PtrType{ClassType{0}}}}
24   +---
24   +--- (virtual base class C2)
24   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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

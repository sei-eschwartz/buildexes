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
/* method id 404 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 405 */ C2 ();
/* method id 406 */ ~C2 ();
/* method id 407 */ virtual C0 func0 (C0* v19, C0** v20, C0* v21, C0* v22);
C2 (special_constructor);
};
struct C3  {
/* method id 408 */ C3 ();
C3 (special_constructor);
C1 v27;
abstract_1 v28;
C0** v29;
C0* v30;
};
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C0* C1::func0 () {
C0** v0 = ((C0**) 0);
return (C0*)(&(*((new C1 ()))));

}
/* method id 402 */ C0* C1::func0 (C0** v1, C0** v2, C0** v3, C0** v4) {
C0** v5 = new C0* ();
C0** v6 = new C0* ();
C0** v7 = new C0* ();
return ((C0*) 0);

}
/* method id 403 */ C0* C1::func0 (C0** v8, C0** v9) {
C0** v10 = ((C0**) 0);
C0** v11 = ((C0**) 0);
delete (new C2 ());
return &(*((C0*)((new C1 ()))));

}
/* method id 404 */ C1::C1 () {
C0** v12 = new C0* ();
C0** v13 = new C0* ();
C0** v14 = new C0* ();
C0* v15 = (new C0 ());
delete (new C1 ());
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
/* method id 407 */ C0 C2::func0 (C0* v19, C0** v20, C0* v21, C0* v22) {
C0* v23 = ((C0*) 0);
C0* v24 = (new C0 ());
abstract_0 v25 = abstract_0();
C0* v26 = ((C0*) 0);
return *(&(*((C0*)((new C1 ())))));

}
C2::C2 (special_constructor)  {}

/* method id 408 */ C3::C3 () {

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
class C2    size(4)
0    +---
0    | {vfptr}
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
class C3    size(16)
0    +---
0    | var27: ClassType{1}
4    | var28: AbstractType{1}
8    | var29: PtrType{PtrType{ClassType{0}}}
12   | var30: PtrType{ClassType{0}}
16   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 16;
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

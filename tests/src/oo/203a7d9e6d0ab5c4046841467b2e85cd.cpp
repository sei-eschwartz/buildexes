// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual ~C1 ();
C1 (special_constructor);
abstract_0 v7;
C0* v8;
abstract_0 v9;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 403 */ C2 ();
/* method id 404 */ C0 func0 (C1 v14, C0* v15);
C2 (special_constructor);
abstract_0 v23;
};
C0 func2 ();
C0 func3 (C1 v24);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = ((C0*) 0);
C0* v2 = &(*(&(*(((C0*) 0)))));
C0* v3 = &(*(&(*(((C0*) 0)))));
return;

}
/* method id 402 */ C1::~C1 () {
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
delete (new C0 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::C2 () {
abstract_0 v10 = abstract_0();
C0* v11 = &(*(((C0*) 0)));
C1 v12 = *((new C1 ()));
C1 v13 = *((new C1 ()));
return;

}
/* method id 404 */ C0 C2::func0 (C1 v14, C0* v15) {
C1 v16 = *(&(*(((C1*) 0))));
C1 v17 = *(&(*(((C1*) 0))));
C1 v18 = *(&(*(((C1*) 0))));
return ::func2();

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

C0 func2 () {

return ::func3(*((new C1 ())));

}
C0 func3 (C1 v24) {
C1 v25;

v24 = *(&(v24));
delete (new C2 ());
return *(&(::func2()));

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | var7: AbstractType{0}
8    | var8: PtrType{ClassType{0}}
12   | var9: AbstractType{0}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(24)
0    +---
0    | {vbptr}
4    | var23: AbstractType{0}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var7: AbstractType{0}
16   | var8: PtrType{ClassType{0}}
20   | var9: AbstractType{0}
24   +---
24   +--- (virtual base class C0)
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
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

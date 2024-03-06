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
/* method id 402 */ ~C1 ();
C1 (special_constructor);
C0* v9;
abstract_0 v10;
abstract_0 v11;
C0* v12;
};
struct C2 : public virtual C1 {
/* method id 403 */ ~C2 ();
/* method id 404 */ C2 ();
C2 (special_constructor);
C0* v22;
C0* v23;
C0* v24;
};
C0 func2 (C0* v25, C0* v26);
C0 func3 (C0* v29, C0* v30, C0* v31, C0* v32);
C0 func4 (C0* v37);
C0 func5 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
delete (new C2 ());
return;

}
/* method id 402 */ C1::~C1 () {
delete (new C2 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::~C2 () {
return;

}
/* method id 404 */ C2::C2 () {
C0* v13 = &(*(&(*(((C0*) 0)))));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

C0 func2 (C0* v25, C0* v26) {
C0* v27;
C0* v28;

return *(((C0*) 0));

}
C0 func3 (C0* v29, C0* v30, C0* v31, C0* v32) {
C0* v33;
C0* v34;
C0* v35;
C0* v36;

return *(v34);

}
C0 func4 (C0* v37) {
C0* v38;
C0* v39;
C0* v40;

return ::func3((new C0 ()), (new C0 ()), (new C0 ()), v38);

}
C0 func5 () {

return *(((C0*) 0));

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
0    | var9: PtrType{ClassType{0}}
4    | var10: AbstractType{0}
8    | var11: AbstractType{0}
12   | var12: PtrType{ClassType{0}}
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
class C2    size(32)
0    +---
0    | {vbptr}
4    | var22: PtrType{ClassType{0}}
8    | var23: PtrType{ClassType{0}}
12   | var24: PtrType{ClassType{0}}
16   +---
16   +--- (virtual base class C1)
16   | var9: PtrType{ClassType{0}}
20   | var10: AbstractType{0}
24   | var11: AbstractType{0}
28   | var12: PtrType{ClassType{0}}
32   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 32;
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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

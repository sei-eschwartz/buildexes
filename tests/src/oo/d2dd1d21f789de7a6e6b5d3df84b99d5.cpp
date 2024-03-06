// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
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
/* method id 402 */ ~C1 ();
/* method id 403 */ virtual C0 func0 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 404 */ virtual ~C2 ();
/* method id 405 */ C2 ();
/* method id 406 */ virtual C0 func0 (abstract_1 v16, abstract_2 v17, abstract_2 v18, abstract_2 v19);
C2 (special_constructor);
};
struct C3  {
/* method id 407 */ C3 ();
C3 (special_constructor);
C1 v36;
C0* v37;
C1 v38;
C0* v39;
};
C0 func2 (C0* v40, C0* v41, abstract_1 v42, C0* v43);
C0 func3 (C0* v45, C0* v46, C0* v47, C0* v48);
C0 func4 ();
C0 func5 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = ((C0*) 0);
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
return;

}
/* method id 403 */ C0 C1::func0 () {
abstract_0 v11 = abstract_0();
C0* v12 = (new C0 ());
return ::func3((new C0 ()), (new C0 ()), (new C0 ()), (new C0 ()));

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::~C2 () {
return;

}
/* method id 405 */ C2::C2 () {
return;

}
/* method id 406 */ C0 C2::func0 (abstract_1 v16, abstract_2 v17, abstract_2 v18, abstract_2 v19) {
abstract_1 v20 = abstract_1();
C1 v21 = *(((C1*) 0));
abstract_0 v22 = abstract_0();
abstract_0 v23 = abstract_0();
return ::func3((new C0 ()), (new C0 ()), (new C0 ()), (new C0 ()));

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

C0 func2 (C0* v40, C0* v41, abstract_1 v42, C0* v43) {
abstract_0 v44;

return ((C1*)(((C2*) 0)))->C1::func0();

}
C0 func3 (C0* v45, C0* v46, C0* v47, C0* v48) {
abstract_2 v49;
abstract_2 v50;

return *(((C0*) 0));

}
C0 func4 () {

return ::func2((new C0 ()), (new C0 ()), abstract_1(), (new C0 ()));

}
C0 func5 () {

return ::func3((new C0 ()), (new C0 ()), (new C0 ()), (new C0 ()));

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
class C1    size(4)
0    +---
0    | {vfptr}
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
}
/*
class C2    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
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
 }}}
/*
class C3    size(16)
0    +---
0    | var36: ClassType{1}
4    | var37: PtrType{ClassType{0}}
8    | var38: ClassType{1}
12   | var39: PtrType{ClassType{0}}
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

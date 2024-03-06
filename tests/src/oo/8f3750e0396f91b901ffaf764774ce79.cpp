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
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ virtual C0* func1 ();
/* method id 404 */ virtual C0* func3 (C0* v1);
/* method id 405 */ virtual C0 func3 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
C0* v3;
};
struct C2  {
/* method id 408 */ virtual C0* func1 ();
/* method id 409 */ C2 ();
C2 (special_constructor);
C0* v8;
C0* v9;
C0* v10;
abstract_0 v11;
};
struct C3  {
/* method id 410 */ C3 ();
/* method id 411 */ virtual C0* func4 ();
C3 (special_constructor);
C0* v19;
abstract_0 v20;
abstract_0 v21;
};
C0* func7 (abstract_0 v22);
C0* func8 (abstract_0 v23, abstract_0 v24, C0* v25, abstract_0 v26);
C0* func9 ();
C0 func10 (C0* v27, C0* v28, abstract_0 v29, abstract_0 v30);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
C0* v0 = ((C0*) 0);
return (((C3*) 0))->C3::func4();

}
/* method id 403 */ C0* C1::func1 () {
return v3;

}
/* method id 404 */ C0* C1::func3 (C0* v1) {
return ((C0*) 0);

}
/* method id 405 */ C0 C1::func3 () {
C0* v2 = (new C0 ());
return *(((C0*) 0));

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C0* C2::func1 () {
C0* v4 = &((((C1*) 0))->C1::func3());
C0* v5 = &((((C1*) 0))->C1::func3());
C0* v6 = &((((C1*) 0))->C1::func3());
C0* v7 = &((((C1*) 0))->C1::func3());
return v5;

}
/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 410 */ C3::C3 () {
C0* v12 = (C0*)(((C1*) 0));
C0* v13 = ((C0*) 0);
abstract_0 v14 = abstract_0();
C0* v15 = ((C0*) 0);
return;

}
/* method id 411 */ C0* C3::func4 () {
return v19;

}
C3::C3 (special_constructor)  {}

C0* func7 (abstract_0 v22) {

return ::func9();

}
C0* func8 (abstract_0 v23, abstract_0 v24, C0* v25, abstract_0 v26) {

return v25;

}
C0* func9 () {

return ((C0*) 0);

}
C0 func10 (C0* v27, C0* v28, abstract_0 v29, abstract_0 v30) {

return *(&(*(v28)));

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var3: PtrType{ClassType{0}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
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
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(20)
0    +---
0    | {vfptr}
4    | var8: PtrType{ClassType{0}}
8    | var9: PtrType{ClassType{0}}
12   | var10: PtrType{ClassType{0}}
16   | var11: AbstractType{0}
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
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
0    | {vfptr}
4    | var19: PtrType{ClassType{0}}
8    | var20: AbstractType{0}
12   | var21: AbstractType{0}
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

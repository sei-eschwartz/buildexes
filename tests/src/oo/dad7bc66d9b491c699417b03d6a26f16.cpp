// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ virtual abstract_0 func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4);
/* method id 404 */ virtual C0* func3 (abstract_0* v6, abstract_0* v7, abstract_0* v8, C0* v9);
/* method id 405 */ virtual C0 func4 (C0* v14, abstract_0* v15, abstract_0* v16);
/* method id 406 */ C1 ();
C1 (special_constructor);
C0* v17;
abstract_1 v18;
};
C0 func7 ();
C0 func8 ();
C0* func9 (C0* v25, C0* v26, C0* v27, C0* v28);
abstract_0 func10 (C0* v33, C0* v34);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C1 ());
::func10(this, this);
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
return (new C0 ());

}
/* method id 403 */ abstract_0 C1::func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4) {
C0* v5 = ((C0*) 0);
return abstract_0();

}
/* method id 404 */ C0* C1::func3 (abstract_0* v6, abstract_0* v7, abstract_0* v8, C0* v9) {
C0* v10 = (new C0 ());
C0* v11 = (new C0 ());
C0* v12 = (new C0 ());
C0* v13 = (new C0 ());
delete (new C1 ());
return v10;

}
/* method id 405 */ C0 C1::func4 (C0* v14, abstract_0* v15, abstract_0* v16) {
::func8();
v17 = v14;
::func8();
::func8();
return ::func7();

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

C0 func7 () {
C0* v19;
C0* v20;

return ::func8();

}
C0 func8 () {
C0* v21;
abstract_0* v22;
C0* v23;
C0* v24;

return ::func7();

}
C0* func9 (C0* v25, C0* v26, C0* v27, C0* v28) {
C0* v29;
C0* v30;
abstract_0* v31;
C0* v32;

delete (new C0 ());
return v30;

}
abstract_0 func10 (C0* v33, C0* v34) {
C0* v35;
C0* v36;
C0* v37;

v34 = v35;
v34 = v35;
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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var17: PtrType{ClassType{0}}
12   | var18: AbstractType{1}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
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
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

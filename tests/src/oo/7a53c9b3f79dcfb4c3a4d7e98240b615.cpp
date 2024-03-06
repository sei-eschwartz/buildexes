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

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ virtual abstract_0 func2 (abstract_0* v1, abstract_0* v2, C0 v3);
/* method id 404 */ virtual abstract_0 func3 (C0 v4);
/* method id 405 */ virtual abstract_0* func0 (C0 v9, abstract_2 v10);
/* method id 406 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0 {
/* method id 407 */ C2 ();
C2 (special_constructor);
C0 v13;
C0 v14;
C0 v15;
abstract_4 v16;
};
abstract_0* func7 (abstract_0* v17);
abstract_0* func8 ();
abstract_0 func9 (abstract_1 v19, abstract_0* v20);
abstract_0* func10 (C0 v25, C0 v26, C0 v27, C0 v28);
// definitions
/* method id 400 */ C0::~C0 () {
((new C1 ()))->C1::func3(*((new C0 ())));
((new C1 ()))->C1::func3(*((new C0 ())));
((new C1 ()))->C1::func3(*((new C0 ())));
((new C1 ()))->C1::func3(*((new C0 ())));
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::~C1 () {
abstract_0* v0 = new abstract_0 ();
delete (new C1 ());
return;

}
/* method id 403 */ abstract_0 C1::func2 (abstract_0* v1, abstract_0* v2, C0 v3) {
return abstract_0();

}
/* method id 404 */ abstract_0 C1::func3 (C0 v4) {
C0 v5 = *(&(*(((C0*) 0))));
C0 v6 = *(&(*(((C0*) 0))));
abstract_0* v7 = ((abstract_0*) 0);
abstract_1 v8 = abstract_1();
::func8();
::func8();
::func8();
::func8();
return (this)->C1::func2(v7, v7, v5);

}
/* method id 405 */ abstract_0* C1::func0 (C0 v9, abstract_2 v10) {
C0 v11 = *(((C0*) 0));
abstract_3 v12 = abstract_3();
return ((abstract_0*) 0);

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

abstract_0* func7 (abstract_0* v17) {
abstract_1 v18;

::func9(v18, new abstract_0 ());
::func9(v18, new abstract_0 ());
::func9(v18, new abstract_0 ());
return v17;

}
abstract_0* func8 () {

return ((abstract_0*) 0);

}
abstract_0 func9 (abstract_1 v19, abstract_0* v20) {
abstract_1 v21;
abstract_4 v22;
abstract_2 v23;
abstract_4 v24;

::func8();
::func8();
::func8();
::func8();
return abstract_0();

}
abstract_0* func10 (C0 v25, C0 v26, C0 v27, C0 v28) {
C0 v29;
C0 v30;
abstract_4 v31;

return ((abstract_0*) 0);

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(24)
0    +---
0    | {vbptr}
4    | var13: ClassType{0}
8    | var14: ClassType{0}
12   | var15: ClassType{0}
16   | var16: AbstractType{4}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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

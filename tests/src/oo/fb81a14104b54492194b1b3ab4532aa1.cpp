// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ abstract_0 func1 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_0* v1;
abstract_0* v2;
};
struct C1 : public virtual C0 {
/* method id 403 */ C1 ();
C1 (special_constructor);
};
struct C2 : public C1 {
/* method id 405 */ abstract_0 func1 ();
/* method id 406 */ C2 ();
/* method id 407 */ virtual ~C2 ();
C2 (special_constructor);
C1 v7;
C1 v8;
};
abstract_0 func6 (abstract_0* v9, C1 v10);
abstract_0 func7 (C1 v11);
abstract_0 func8 (abstract_0* v12, abstract_0* v13, C1 v14);
abstract_0 func9 (abstract_0* v17, C1 v18, C1 v19, C1 v20);
// definitions
/* method id 400 */ C0::~C0 () {
abstract_0* v0 = ((abstract_0*) 0);
return;

}
/* method id 401 */ abstract_0 C0::func1 () {
return ::func7(*(((C1*) 0)));

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ abstract_0 C2::func1 () {
return ::func6(new abstract_0 (), *((new C1 ())));

}
/* method id 406 */ C2::C2 () {
v7 = *(&(v7));
v7 = *(&(v7));
v7 = *(&(v7));
delete (new C1 ());
return;

}
/* method id 407 */ C2::~C2 () {
abstract_0* v3 = new abstract_0 ();
abstract_0* v4 = new abstract_0 ();
abstract_0* v5 = new abstract_0 ();
C1 v6 = *(((C1*) 0));
::func6(v1, *((new C1 ())));
::func6(v1, *((new C1 ())));
::func6(v1, *((new C1 ())));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

abstract_0 func6 (abstract_0* v9, C1 v10) {

::func8(v9, v9, v10);
::func8(v9, v9, v10);
return abstract_0();

}
abstract_0 func7 (C1 v11) {

return ((C0*)((new C1 ())))->C0::func1();

}
abstract_0 func8 (abstract_0* v12, abstract_0* v13, C1 v14) {
abstract_0* v15;
C1 v16;

return abstract_0();

}
abstract_0 func9 (abstract_0* v17, C1 v18, C1 v19, C1 v20) {

return abstract_0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var1: PtrType{AbstractType{0}}
8    | var2: PtrType{AbstractType{0}}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
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
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    | var1: PtrType{AbstractType{0}}
12   | var2: PtrType{AbstractType{0}}
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
class C2    size(48)
0    +---
0    | +--- (base class C1)
0    | | {vbptr}
4    | +---
4    | var7: ClassType{1}
20   | var8: ClassType{1}
36   +---
36   +--- (virtual base class C0)
36   | {vfptr}
40   | var1: PtrType{AbstractType{0}}
44   | var2: PtrType{AbstractType{0}}
48   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

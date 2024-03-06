// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
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
/* method id 402 */ virtual C0 func0 (abstract_0 v3, C0* v4, C0* v5);
C1 (special_constructor);
abstract_0 v6;
C0* v7;
C0* v8;
};
struct C2 : public C0, public virtual C1 {
/* method id 403 */ C2 ();
/* method id 404 */ virtual C0 func0 ();
C2 (special_constructor);
C0* v16;
};
struct C3 : public virtual C2 {
/* method id 405 */ C3 ();
C3 (special_constructor);
};
C0 func2 ();
C0 func3 (C0* v20);
C0 func4 (C0* v21);
C0 func5 (abstract_2 v22, abstract_0 v23);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
::func4((new C0 ()));
return;

}
/* method id 402 */ C0 C1::func0 (abstract_0 v3, C0* v4, C0* v5) {
return ::func3(((C0*) 0));

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::C2 () {
abstract_1 v9 = abstract_1();
C0* v10 = &(*((new C0 ())));
C0* v11 = &(*((new C0 ())));
v6 = abstract_0();
v6 = abstract_0();
delete (new C3 ());
return;

}
/* method id 404 */ C0 C2::func0 () {
abstract_1 v12 = abstract_1();
abstract_0 v13 = abstract_0();
abstract_0 v14 = abstract_0();
C0* v15 = ((C0*) 0);
v8 = &(*(v8));
v8 = &(*(v8));
return ::func5(abstract_2(), v13);

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 405 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

C0 func2 () {
abstract_2 v17;
C0* v18;
abstract_0 v19;

return *(v18);

}
C0 func3 (C0* v20) {

return (((C1*) 0))->C1::func0(abstract_0(), v20, (new C0 ()));

}
C0 func4 (C0* v21) {

return ::func3(v21);

}
C0 func5 (abstract_2 v22, abstract_0 v23) {

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
0    | {vfptr}
4    | var6: AbstractType{0}
8    | var7: PtrType{ClassType{0}}
12   | var8: PtrType{ClassType{0}}
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
class C2    size(28)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | {vbptr}
8    | var16: PtrType{ClassType{0}}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | var6: AbstractType{0}
20   | var7: PtrType{ClassType{0}}
24   | var8: PtrType{ClassType{0}}
28   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(32)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C1)
4    | {vfptr}
8    | var6: AbstractType{0}
12   | var7: PtrType{ClassType{0}}
16   | var8: PtrType{ClassType{0}}
20   +---
20   +--- (virtual base class C2)
20   | {vfptr}
24   | +--- (base class C0)
24   | +---
24   | {vbptr}
28   | var16: PtrType{ClassType{0}}
32   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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

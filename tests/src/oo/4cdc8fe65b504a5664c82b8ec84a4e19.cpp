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
C1 (special_constructor);
C0* v3;
};
struct C2 : public virtual C0 {
/* method id 402 */ C2 ();
C2 (special_constructor);
C0* v8;
C0* v9;
abstract_0 v10;
};
struct C3 : public virtual C1 {
/* method id 403 */ C3 ();
C3 (special_constructor);
C0* v11;
C0* v12;
C1 v13;
};
C0 func2 ();
C0 func3 (C0* v14, C0** v15, C0** v16);
C0 func4 (abstract_1 v17, C0* v18, abstract_1 v19, abstract_0 v20);
C0 func5 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = ((C0*) 0);
C0* v2 = &(*((new C0 ())));
return;

}
C1::C1 (special_constructor)  {}

/* method id 402 */ C2::C2 () {
abstract_0 v4 = abstract_0();
C0* v5 = (new C0 ());
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

C0 func2 () {

return *(((C0*) 0));

}
C0 func3 (C0* v14, C0** v15, C0** v16) {

v14 = v14;
v14 = v14;
return ::func2();

}
C0 func4 (abstract_1 v17, C0* v18, abstract_1 v19, abstract_0 v20) {

return ::func3(((C0*) 0), new C0* (), new C0* ());

}
C0 func5 () {
C0* v21;
abstract_2 v22;
C0* v23;
C0* v24;

return ::func4(abstract_1(), ((C0*) 0), abstract_1(), abstract_0());

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
0    | var3: PtrType{ClassType{0}}
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
class C2    size(16)
0    +---
0    | {vbptr}
4    | var8: PtrType{ClassType{0}}
8    | var9: PtrType{ClassType{0}}
12   | var10: AbstractType{0}
16   +---
16   +--- (virtual base class C0)
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(20)
0    +---
0    | {vbptr}
4    | var11: PtrType{ClassType{0}}
8    | var12: PtrType{ClassType{0}}
12   | var13: ClassType{1}
16   +---
16   +--- (virtual base class C1)
16   | var3: PtrType{ClassType{0}}
20   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

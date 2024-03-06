// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ C0 func2 ();
/* method id 403 */ C1 ();
C1 (special_constructor);
C0* v0;
};
struct C2 : public virtual C0 {
/* method id 405 */ virtual C0 func0 (C0* v1, C0* v2, C0* v3);
/* method id 406 */ C2 ();
C2 (special_constructor);
C0* v7;
C0* v8;
};
C0 func7 (abstract_0 v9, abstract_0 v10, abstract_0 v11, C0** v12);
C0 func8 (abstract_0 v17, C0** v18, abstract_1 v19, abstract_0 v20);
C0 func9 (abstract_1 v22, abstract_0 v23, abstract_0 v24, abstract_0 v25);
C0 func10 (abstract_0 v29);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0 C1::func2 () {
delete (new C0 ());
return ((new C2 ()))->C2::func0((new C0 ()), (new C0 ()), (new C0 ()));

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C0 C2::func0 (C0* v1, C0* v2, C0* v3) {
C0* v4 = (new C0 ());
C0* v5 = (new C0 ());
C0* v6 = (new C0 ());
delete (new C2 ());
return ::func10(abstract_0());

}
/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

C0 func7 (abstract_0 v9, abstract_0 v10, abstract_0 v11, C0** v12) {
C0** v13;
C0** v14;
C0* v15;
C0* v16;

v12 = v12;
v12 = v12;
v12 = v12;
return ::func8(v11, v12, abstract_1(), v11);

}
C0 func8 (abstract_0 v17, C0** v18, abstract_1 v19, abstract_0 v20) {
C0* v21;

v19 = v19;
delete (new C1 ());
return (((C2*) 0))->C2::func0((new C0 ()), (new C0 ()), (new C0 ()));

}
C0 func9 (abstract_1 v22, abstract_0 v23, abstract_0 v24, abstract_0 v25) {
abstract_0 v26;
C0* v27;
C0* v28;

return (((C2*) 0))->C2::func0((new C0 ()), (new C0 ()), (new C0 ()));

}
C0 func10 (abstract_0 v29) {

return *(((C0*) 0));

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
0    | {vbptr}
4    | var0: PtrType{ClassType{0}}
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
class C2    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var7: PtrType{ClassType{0}}
12   | var8: PtrType{ClassType{0}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

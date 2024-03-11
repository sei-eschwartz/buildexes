// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 402 */ C1 ();
C1 (special_constructor);
C0 v0;
};
struct C2 : public C1, public C0 {
/* method id 403 */ C2 ();
C2 (special_constructor);
C0 v1;
C0* v2;
C0* v3;
C0* v4;
};
struct C3 : public C2 {
/* method id 404 */ C3 ();
C3 (special_constructor);
};
C0 func5 (C0 v5);
C0 func6 (C0 v6);
C0 func7 (C0* v7);
C0 func8 (C0 v8, C0* v9, C0* v10, C3 v11);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 404 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

C0 func5 (C0 v5) {

delete (new C3 ());
return v5;

}
C0 func6 (C0 v6) {

return ::func5(v6);

}
C0 func7 (C0* v7) {

return ::func6(*(v7));

}
C0 func8 (C0 v8, C0* v9, C0* v10, C3 v11) {
C0* v12;
C3 v13;

return v8;

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
class C1    size(4)
0    +---
0    | var0: ClassType{0}
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
class C2    size(24)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | +--- (base class C1)
4    | | var0: ClassType{0}
8    | +---
8    | var1: ClassType{0}
12   | var2: PtrType{ClassType{0}}
16   | var3: PtrType{ClassType{0}}
20   | var4: PtrType{ClassType{0}}
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
 const size_t model_offset = 4;
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
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(24)
0    +---
0    | +--- (base class C2)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | +---
4    | | +--- (base class C1)
4    | | | var0: ClassType{0}
8    | | +---
8    | | var1: ClassType{0}
12   | | var2: PtrType{ClassType{0}}
16   | | var3: PtrType{ClassType{0}}
20   | | var4: PtrType{ClassType{0}}
24   | +---
24   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
C0 v0;
C0 v1;
};
struct C2  {
/* method id 402 */ C2 ();
C2 (special_constructor);
C0 v2;
C0 v3;
abstract_0* v4;
abstract_0* v5;
};
struct C3 : public C1 {
/* method id 403 */ ~C3 ();
/* method id 404 */ virtual abstract_0 func2 (abstract_0* v9, abstract_0* v10, abstract_0* v11);
/* method id 405 */ C3 ();
C3 (special_constructor);
};
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 402 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 403 */ C3::~C3 () {
return;

}
/* method id 404 */ abstract_0 C3::func2 (abstract_0* v9, abstract_0* v10, abstract_0* v11) {
abstract_0* v12 = ((abstract_0*) 0);
abstract_0* v13 = ((abstract_0*) 0);
abstract_0* v14 = ((abstract_0*) 0);
abstract_0* v15 = ((abstract_0*) 0);
return abstract_0();

}
/* method id 405 */ C3::C3 () {
abstract_0* v16 = ((abstract_0*) 0);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

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
class C1    size(2)
0    +---
0    | var0: ClassType{0}
1    | var1: ClassType{0}
2    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 2;
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
0    | var2: ClassType{0}
1    | var3: ClassType{0}
2    | alignment: 
4    | var4: PtrType{AbstractType{0}}
8    | var5: PtrType{AbstractType{0}}
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
}
/*
class C3    size(8)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | var0: ClassType{0}
5    | | var1: ClassType{0}
6    | +---
6    | alignment: 
8    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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

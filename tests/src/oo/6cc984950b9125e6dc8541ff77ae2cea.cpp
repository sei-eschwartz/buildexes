// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 300 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 301 */ C1 ();
C1 (special_constructor);
abstract_0* v0;
C0 v1;
abstract_0* v2;
};
struct C2 : public C1 {
/* method id 302 */ virtual ~C2 ();
/* method id 303 */ C2 ();
C2 (special_constructor);
abstract_0* v6;
abstract_0* v7;
C0 v8;
};
// definitions
/* method id 300 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 301 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 302 */ C2::~C2 () {
C0 v3 = *(((C0*) 0));
C0 v4 = *(((C0*) 0));
C0 v5 = *(((C0*) 0));
v0 = new abstract_0 ();
v0 = new abstract_0 ();
v0 = new abstract_0 ();
return;

}
/* method id 303 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

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
class C1    size(12)
0    +---
0    | +--- (base class C0)
0    | +---
0    | var0: PtrType{AbstractType{0}}
4    | var1: ClassType{0}
5    | alignment: 
8    | var2: PtrType{AbstractType{0}}
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
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(28)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | +--- (base class C0)
4    | | +---
4    | | var0: PtrType{AbstractType{0}}
8    | | var1: ClassType{0}
9    | | alignment: 
12   | | var2: PtrType{AbstractType{0}}
16   | +---
16   | var6: PtrType{AbstractType{0}}
20   | var7: PtrType{AbstractType{0}}
24   | var8: ClassType{0}
25   | alignment: 
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

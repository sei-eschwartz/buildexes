// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ void func0 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
C0 v1;
C0 v2;
abstract_0 v3;
C0 v4;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 403 */ virtual void func0 (abstract_0 v5, abstract_0 v6, abstract_0 v7);
/* method id 404 */ C2 ();
C2 (special_constructor);
abstract_0 v9;
abstract_1 v10;
abstract_1 v11;
abstract_0 v12;
};
void func2 (C0 v13);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
v3 = v3;
v3 = v3;
v3 = v3;
v3 = v3;
return ::func2(*(((C0*) 0)));

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
v0 = v0;
v0 = v0;
v0 = v0;
v0 = v0;
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ void C2::func0 (abstract_0 v5, abstract_0 v6, abstract_0 v7) {
abstract_0 v8 = abstract_0();
return ::func2(*(&(*((new C0 ())))));

}
/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

void func2 (C0 v13) {
abstract_1 v14;
abstract_0 v15;

return;

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
class C1    size(12)
0    +---
0    | var1: ClassType{0}
1    | var2: ClassType{0}
2    | alignment: 
4    | var3: AbstractType{0}
8    | var4: ClassType{0}
9    | alignment: 
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
}
/*
class C2    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var9: AbstractType{0}
12   | var10: AbstractType{1}
16   | var11: AbstractType{1}
20   | var12: AbstractType{0}
24   +---
24   +--- (virtual base class C1)
24   | var1: ClassType{0}
25   | var2: ClassType{0}
26   | alignment: 
28   | var3: AbstractType{0}
32   | var4: ClassType{0}
33   | alignment: 
36   +---
36   | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 0, which leads with zero sized base.
40   +--- (virtual base class C0)
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
 const size_t model_offset = 40;
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

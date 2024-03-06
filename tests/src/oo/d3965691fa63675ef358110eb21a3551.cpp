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
/* method id 401 */ void func0 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
C0 v1;
C0 v2;
abstract_0 v3;
C0 v4;
};
struct C2 : public virtual C1 {
/* method id 403 */ virtual ~C2 ();
/* method id 404 */ C2 ();
C2 (special_constructor);
C0 v5;
};
struct C3 : public C1, public C0 {
/* method id 405 */ virtual ~C3 ();
/* method id 406 */ void func1 (abstract_0 v7, abstract_0 v8, abstract_0 v9, void** v10);
/* method id 407 */ C3 ();
C3 (special_constructor);
C2 v14;
abstract_0 v15;
C2 v16;
C2 v17;
};
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
v3 = abstract_0();
return;

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
delete (new C1 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::~C2 () {
delete (new C2 ());
return;

}
/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 405 */ C3::~C3 () {
C0 v6 = *(&(*((new C0 ()))));
v6 = v6;
v6 = v6;
v6 = v6;
v6 = v6;
return;

}
/* method id 406 */ void C3::func1 (abstract_0 v7, abstract_0 v8, abstract_0 v9, void** v10) {
abstract_0 v11 = abstract_0();
void** v12 = new void* ();
abstract_0 v13 = abstract_0();
return;

}
/* method id 407 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

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
class C2    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var5: ClassType{0}
9    | alignment: 
12   +---
12   +--- (virtual base class C1)
12   | var1: ClassType{0}
13   | var2: ClassType{0}
14   | alignment: 
16   | var3: AbstractType{0}
20   | var4: ClassType{0}
21   | alignment: 
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
class C3    size(96)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | var1: ClassType{0}
5    | | var2: ClassType{0}
6    | | alignment: 
8    | | var3: AbstractType{0}
12   | | var4: ClassType{0}
13   | | alignment: 
16   | +---
16   | alignment: Additional padding between non-virtual bases
17   | +--- (base class C0)
17   | +---
17   | alignment: 
20   | var14: ClassType{2}
44   | var15: AbstractType{0}
48   | var16: ClassType{2}
72   | var17: ClassType{2}
96   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 96;
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 17;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

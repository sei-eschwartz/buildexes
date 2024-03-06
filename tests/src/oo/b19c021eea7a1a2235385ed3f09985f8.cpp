// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
abstract_0 v0;
};
struct C1 : public virtual C0 {
/* method id 402 */ void func0 ();
/* method id 403 */ virtual void func1 (abstract_0 v5, abstract_0 v6, abstract_0 v7, abstract_0 v8);
/* method id 404 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_0 v11;
abstract_0 v12;
abstract_0 v13;
abstract_0 v14;
};
struct C3 : public virtual C2 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual ~C3 ();
C3 (special_constructor);
C2 v17;
C2 v18;
C2 v19;
C2 v20;
};
void func4 (C2 v21, C2 v22, abstract_0 v23, abstract_0 v24);
void func5 (abstract_0 v26, abstract_0 v27, C2 v28, C2 v29);
void* func6 ();
// definitions
/* method id 400 */ C0::~C0 () {
v0 = v0;
v0 = v0;
v0 = v0;
v0 = v0;
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void C1::func0 () {
abstract_0 v1 = abstract_0();
abstract_0 v2 = abstract_0();
abstract_0 v3 = abstract_0();
abstract_0 v4 = abstract_0();
delete (new C1 ());
return;

}
/* method id 403 */ void C1::func1 (abstract_0 v5, abstract_0 v6, abstract_0 v7, abstract_0 v8) {
delete (new C3 ());
return;

}
/* method id 404 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
return;

}
/* method id 409 */ C3::~C3 () {
abstract_0 v15 = abstract_0();
C2 v16 = *(((C2*) 0));
delete (new C3 ());
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func4 (C2 v21, C2 v22, abstract_0 v23, abstract_0 v24) {
C2 v25;

return;

}
void func5 (abstract_0 v26, abstract_0 v27, C2 v28, C2 v29) {

return (((C1*) 0))->C1::func0();

}
void* func6 () {

return ((void*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var0: AbstractType{0}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
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
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var0: AbstractType{0}
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
class C2    size(36)
0    +---
0    | {vbptr}
4    | var11: AbstractType{0}
8    | var12: AbstractType{0}
12   | var13: AbstractType{0}
16   | var14: AbstractType{0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var0: AbstractType{0}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
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
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(184)
0    +---
0    | {vbptr}
4    | var17: ClassType{2}
40   | var18: ClassType{2}
76   | var19: ClassType{2}
112  | var20: ClassType{2}
148  +---
148  +--- (virtual base class C0)
148  | {vfptr}
152  | var0: AbstractType{0}
156  +---
156  +--- (virtual base class C1)
156  | {vfptr}
160  | {vbptr}
164  +---
164  +--- (virtual base class C2)
164  | {vbptr}
168  | var11: AbstractType{0}
172  | var12: AbstractType{0}
176  | var13: AbstractType{0}
180  | var14: AbstractType{0}
184  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 184;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 164;
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

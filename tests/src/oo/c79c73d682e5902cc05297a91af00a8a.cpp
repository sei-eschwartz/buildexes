// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
/* method id 402 */ void func1 (void** v7, void** v8, void** v9);
/* method id 403 */ void func2 ();
/* method id 404 */ ~C1 ();
C1 (special_constructor);
abstract_0 v14;
abstract_0 v15;
C0 v16;
};
struct C2 : public C1, public C0 {
/* method id 405 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C1, public C0 {
/* method id 406 */ C3 ();
/* method id 407 */ virtual ~C3 ();
C3 (special_constructor);
};
void func5 (void** v21);
void func6 (abstract_1 v22);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
void** v0 = new void* ();
void** v1 = new void* ();
void** v2 = new void* ();
return;

}
/* method id 402 */ void C1::func1 (void** v7, void** v8, void** v9) {
::func5(v7);
::func5(v7);
((C1*)(((C3*) 0)))->C1::func2();
((C1*)(((C3*) 0)))->C1::func2();
return;

}
/* method id 403 */ void C1::func2 () {
return;

}
/* method id 404 */ C1::~C1 () {
delete (new C1 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
v15 = abstract_0();
v15 = abstract_0();
v15 = abstract_0();
v15 = abstract_0();
return;

}
/* method id 407 */ C3::~C3 () {
void** v17 = new void* ();
abstract_0 v18 = abstract_0();
abstract_1 v19 = abstract_1();
void** v20 = new void* ();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

void func5 (void** v21) {

return;

}
void func6 (abstract_1 v22) {
C0 v23;
C0 v24;

return (((C1*) 0))->C1::func1(new void* (), new void* (), new void* ());

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
0    | var14: AbstractType{0}
4    | var15: AbstractType{0}
8    | var16: ClassType{0}
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
class C2    size(16)
0    +---
0    | +--- (base class C1)
0    | | var14: AbstractType{0}
4    | | var15: AbstractType{0}
8    | | var16: ClassType{0}
9    | | alignment: 
12   | +---
12   | alignment: Additional padding between non-virtual bases
13   | +--- (base class C0)
13   | +---
13   | alignment: 
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 13;
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
0    | {vfptr}
4    | +--- (base class C1)
4    | | var14: AbstractType{0}
8    | | var15: AbstractType{0}
12   | | var16: ClassType{0}
13   | | alignment: 
16   | +---
16   | alignment: Additional padding between non-virtual bases
17   | +--- (base class C0)
17   | +---
17   | alignment: 
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

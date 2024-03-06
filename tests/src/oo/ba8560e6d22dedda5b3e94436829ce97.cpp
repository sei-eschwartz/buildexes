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
/* method id 402 */ virtual void* func0 ();
/* method id 403 */ void* func0 (void*** v1, void*** v2);
/* method id 404 */ virtual void* func0 (C0 v9, abstract_0 v10, abstract_0 v11, C0 v12);
C1 (special_constructor);
abstract_1 v17;
abstract_1 v18;
C0 v19;
abstract_1 v20;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ C2 ();
/* method id 407 */ virtual void* func1 (C1 v28, void*** v29, C0 v30, C0 v31);
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 408 */ C3 ();
C3 (special_constructor);
abstract_0 v36;
};
void* func4 (void*** v37);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
return;

}
/* method id 402 */ void* C1::func0 () {
void*** v0 = new void** ();
return ::func4(v0);

}
/* method id 403 */ void* C1::func0 (void*** v1, void*** v2) {
void*** v3 = new void** ();
void*** v4 = new void** ();
void*** v5 = new void** ();
return ::func4(v2);

}
/* method id 404 */ void* C1::func0 (C0 v9, abstract_0 v10, abstract_0 v11, C0 v12) {
abstract_0 v13 = abstract_0();
abstract_1 v14 = abstract_1();
abstract_0 v15 = abstract_0();
C0 v16 = *((new C0 ()));
return ((void*) 0);

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::~C2 () {
C0 v21 = *(&(*(((C0*) 0))));
C0 v22 = *(&(*(((C0*) 0))));
abstract_1 v23 = abstract_1();
return;

}
/* method id 406 */ C2::C2 () {
return;

}
/* method id 407 */ void* C2::func1 (C1 v28, void*** v29, C0 v30, C0 v31) {
C0 v32 = *((new C0 ()));
C0 v33 = *((new C0 ()));
C0 v34 = *((new C0 ()));
C0 v35 = *((new C0 ()));
::func4(new void** ());
::func4(new void** ());
::func4(new void** ());
::func4(new void** ());
return ((void*) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void* func4 (void*** v37) {

return (((C1*) 0))->C1::func0();

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | var17: AbstractType{1}
8    | var18: AbstractType{1}
12   | var19: ClassType{0}
13   | alignment: 
16   | var20: AbstractType{1}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
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
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var17: AbstractType{1}
16   | var18: AbstractType{1}
20   | var19: ClassType{0}
21   | alignment: 
24   | var20: AbstractType{1}
28   +---
28   +--- (virtual base class C0)
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
 const size_t model_offset = 8;
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
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(36)
0    +---
0    | {vbptr}
4    | var36: AbstractType{0}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var17: AbstractType{1}
16   | var18: AbstractType{1}
20   | var19: ClassType{0}
21   | alignment: 
24   | var20: AbstractType{1}
28   +---
28   +--- (virtual base class C0)
28   +---
28   +--- (virtual base class C2)
28   | {vfptr}
32   | {vbptr}
36   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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

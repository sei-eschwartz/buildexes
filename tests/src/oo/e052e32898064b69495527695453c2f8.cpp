// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
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
/* method id 401 */ void func0 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
void* v1;
void* v2;
C0 v3;
C0 v4;
};
struct C2 : public C1 {
/* method id 403 */ virtual void func0 ();
/* method id 404 */ C2 ();
/* method id 405 */ virtual ~C2 ();
C2 (special_constructor);
void* v18;
C0 v19;
C0 v20;
};
struct C3 : public virtual C2, public virtual C0 {
/* method id 406 */ virtual void func0 ();
/* method id 407 */ C3 ();
C3 (special_constructor);
C0 v21;
};
void func2 (C0 v22, void* v23, void* v24, C3 v25);
void func3 (void* v27);
abstract_1 func4 (abstract_0 v31, void* v32, abstract_2 v33, C0 v34);
void func5 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
delete (new C3 ());
return;

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ void C2::func0 () {
delete (new C3 ());
return;

}
/* method id 404 */ C2::C2 () {
void* v5 = ((void*) 0);
void* v6 = ((void*) 0);
return;

}
/* method id 405 */ C2::~C2 () {
C0 v7 = *(((C0*) 0));
void* v8 = ((void*) 0);
void* v9 = ((void*) 0);
C0 v10 = *(((C0*) 0));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ void C3::func0 () {
v1 = ((void*) 0);
v1 = ((void*) 0);
v1 = ((void*) 0);
return;

}
/* method id 407 */ C3::C3 () {
v1 = v18;
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()), C0(special_constructor ()) {}

void func2 (C0 v22, void* v23, void* v24, C3 v25) {
C3 v26;

v22 = *(((C0*) 0));
v22 = *(((C0*) 0));
return;

}
void func3 (void* v27) {
C3 v28;
abstract_0 v29;
C3 v30;

return;

}
abstract_1 func4 (abstract_0 v31, void* v32, abstract_2 v33, C0 v34) {
void* v35;

v35 = v35;
v35 = v35;
return abstract_1();

}
void func5 () {

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
0    | var1: PtrType{VoidType{}}
4    | var2: PtrType{VoidType{}}
8    | var3: ClassType{0}
9    | var4: ClassType{0}
10   | alignment: 
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
4    | +--- (base class C1)
4    | | var1: PtrType{VoidType{}}
8    | | var2: PtrType{VoidType{}}
12   | | var3: ClassType{0}
13   | | var4: ClassType{0}
14   | | alignment: 
16   | +---
16   | var18: PtrType{VoidType{}}
20   | var19: ClassType{0}
21   | var20: ClassType{0}
22   | alignment: 
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
 }}}
/*
class C3    size(40)
0    +---
0    | {vbptr}
4    | var21: ClassType{0}
5    | alignment: 
8    | {vtordisp for vbase 2}
12   +---
12   +--- (virtual base class C2)
12   | {vfptr}
16   | +--- (base class C1)
16   | | var1: PtrType{VoidType{}}
20   | | var2: PtrType{VoidType{}}
24   | | var3: ClassType{0}
25   | | var4: ClassType{0}
26   | | alignment: 
28   | +---
28   | var18: PtrType{VoidType{}}
32   | var19: ClassType{0}
33   | var20: ClassType{0}
34   | alignment: 
36   +---
36   | alignment: Additional padding between virtual bases 2, which ends with a zero-sized object, and 0, which leads with zero sized base.
40   +--- (virtual base class C0)
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
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

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
/* method id 401 */ void func0 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
C0 v1;
C0 v2;
C0 v3;
};
struct C2 : public C1, public virtual C0 {
/* method id 403 */ virtual abstract_0 func1 (C0 v4, void* v5);
/* method id 404 */ virtual abstract_0 func1 (void* v6, C0 v7, C0 v8);
/* method id 405 */ C2 ();
/* method id 406 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1 v20;
void* v21;
void* v22;
void* v23;
};
struct C3 : public C1, public virtual C0 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual ~C3 ();
C3 (special_constructor);
void* v41;
};
void func3 ();
void func4 ();
abstract_0 func5 (C0 v47, abstract_1 v48, abstract_1 v49, C0 v50);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
return ::func4();

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ abstract_0 C2::func1 (C0 v4, void* v5) {
return abstract_0();

}
/* method id 404 */ abstract_0 C2::func1 (void* v6, C0 v7, C0 v8) {
void* v9 = ((void*) 0);
void* v10 = ((void*) 0);
void* v11 = ((void*) 0);
void* v12 = ((void*) 0);
return abstract_0();

}
/* method id 405 */ C2::C2 () {
C0 v13 = *(((C0*) 0));
void* v14 = ((void*) 0);
return;

}
/* method id 406 */ C2::~C2 () {
void* v16 = ((void*) 0);
C0 v17 = *((new C0 ()));
abstract_1 v18 = abstract_1();
abstract_1 v19 = abstract_1();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
void* v24 = ((void*) 0);
void* v25 = ((void*) 0);
abstract_1 v26 = abstract_1();
void* v27 = ((void*) 0);
v2 = v2;
v2 = v2;
v2 = v2;
v2 = v2;
return;

}
/* method id 408 */ C3::~C3 () {
void* v32 = ((void*) 0);
void* v33 = ((void*) 0);
void* v34 = ((void*) 0);
void* v35 = ((void*) 0);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

void func3 () {
abstract_1 v42;
void* v43;

v43 = v43;
v43 = v43;
v43 = v43;
::func4();
return ::func4();

}
void func4 () {
C0 v44;
abstract_1 v45;
C0 v46;

return ::func3();

}
abstract_0 func5 (C0 v47, abstract_1 v48, abstract_1 v49, C0 v50) {

return abstract_0();

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
class C1    size(3)
0    +---
0    | var1: ClassType{0}
1    | var2: ClassType{0}
2    | var3: ClassType{0}
3    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 3;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(32)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | var1: ClassType{0}
5    | | var2: ClassType{0}
6    | | var3: ClassType{0}
7    | +---
7    | alignment: VBPtr aligned to pointer size
8    | alignment: Weird msvc alignment bug
11   | alignment: Weird msvc alignment bug: final alignment
12   | {vbptr}
16   | var20: AbstractType{1}
20   | var21: PtrType{VoidType{}}
24   | var22: PtrType{VoidType{}}
28   | var23: PtrType{VoidType{}}
32   +---
32   +--- (virtual base class C0)
32   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 32;
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
 const size_t model_offset = 32;
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
4    | | var1: ClassType{0}
5    | | var2: ClassType{0}
6    | | var3: ClassType{0}
7    | +---
7    | alignment: VBPtr aligned to pointer size
8    | alignment: Weird msvc alignment bug
11   | alignment: Weird msvc alignment bug: final alignment
12   | {vbptr}
16   | var41: PtrType{VoidType{}}
20   +---
20   +--- (virtual base class C0)
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
 const size_t model_offset = 20;
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

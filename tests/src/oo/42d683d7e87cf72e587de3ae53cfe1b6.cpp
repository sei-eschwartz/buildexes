// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
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
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 403 */ virtual void func1 ();
/* method id 404 */ virtual abstract_0 func0 (void* v6, C0 v7, void* v8);
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ virtual abstract_0 func2 (void* v12, abstract_1 v13, void* v14, C0 v15);
/* method id 407 */ C2 ();
C2 (special_constructor);
C1 v16;
void* v17;
void* v18;
C1 v19;
};
struct C3 : public C1, public virtual C0 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual void func4 (void* v24, C0 v25, C0 v26);
/* method id 410 */ void func0 (abstract_0** v34, abstract_0** v35, abstract_3 v36);
/* method id 411 */ virtual ~C3 ();
C3 (special_constructor);
void* v40;
C0 v41;
abstract_4 v42;
abstract_4 v43;
};
void func5 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
return ::func5();

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ void C2::func1 () {
C0 v2 = *(&(*(((C0*) 0))));
C0 v3 = *(&(*(((C0*) 0))));
void* v4 = ((void*) 0);
void* v5 = ((void*) 0);
return;

}
/* method id 404 */ abstract_0 C2::func0 (void* v6, C0 v7, void* v8) {
return abstract_0();

}
/* method id 405 */ C2::~C2 () {
void* v9 = ((void*) 0);
abstract_1 v10 = abstract_1();
void* v11 = ((void*) 0);
return;

}
/* method id 406 */ abstract_0 C2::func2 (void* v12, abstract_1 v13, void* v14, C0 v15) {
return abstract_0();

}
/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
abstract_1 v20 = abstract_1();
C1 v21 = *((new C1 ()));
abstract_2 v22 = abstract_2();
void* v23 = ((void*) 0);
return;

}
/* method id 409 */ void C3::func4 (void* v24, C0 v25, C0 v26) {
void* v27 = ((void*) 0);
void* v28 = ((void*) 0);
C0 v29 = *(((C0*) 0));
return ::func5();

}
/* method id 410 */ void C3::func0 (abstract_0** v34, abstract_0** v35, abstract_3 v36) {
abstract_3 v37 = abstract_3();
abstract_2 v38 = abstract_2();
void* v39 = ((void*) 0);
return;

}
/* method id 411 */ C3::~C3 () {
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

void func5 () {
C0 v44;
abstract_2 v45;
C0 v46;
C0 v47;

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
class C1    size(1)
0    +---
0    | var1: ClassType{0}
1    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 1;
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
4    | {vbptr}
8    | var16: ClassType{1}
9    | alignment: 
12   | var17: PtrType{VoidType{}}
16   | var18: PtrType{VoidType{}}
20   | var19: ClassType{1}
21   | alignment: 
24   +---
24   +--- (virtual base class C1)
24   | var1: ClassType{0}
25   +---
25   | alignment: alignment before virtual base padding
28   | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 0, which leads with zero sized base.
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
class C3    size(32)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | var1: ClassType{0}
5    | +---
5    | alignment: VBPtr aligned to pointer size
8    | alignment: Weird msvc alignment bug
9    | alignment: Weird msvc alignment bug: final alignment
12   | {vbptr}
16   | var40: PtrType{VoidType{}}
20   | var41: ClassType{0}
21   | alignment: 
24   | var42: AbstractType{4}
28   | var43: AbstractType{4}
32   +---
32   +--- (virtual base class C0)
32   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 32;
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
 const size_t model_offset = 32;
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

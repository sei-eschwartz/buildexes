// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
/* method id 402 */ void* func2 ();
/* method id 403 */ virtual void func0 (void* v2);
C0 (special_constructor);
void* v4;
abstract_0 v5;
};
struct C1 : public virtual C0 {
/* method id 404 */ void* func3 ();
/* method id 405 */ C1 ();
/* method id 406 */ virtual void func1 ();
/* method id 407 */ virtual ~C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public C1 {
/* method id 408 */ virtual void* func2 (abstract_0 v8, abstract_0 v9);
/* method id 409 */ C2 ();
/* method id 410 */ virtual void* func0 (void* v10, abstract_0 v11);
C2 (special_constructor);
abstract_0 v15;
abstract_0 v16;
C1 v17;
abstract_0 v18;
};
struct C3 : public virtual C1 {
/* method id 412 */ C3 ();
/* method id 413 */ virtual ~C3 ();
C3 (special_constructor);
C1 v155;
abstract_0 v156;
void** v157;
abstract_0 v158;
};
void* func5 (abstract_0 v159, abstract_0 v160, abstract_0 v161, abstract_0 v162);
// definitions
/* method id 400 */ C0::~C0 () {
((new C0 ()))->C0::func2();
return;

}
/* method id 401 */ C0::C0 () {
void* v0 = ((void*) 0);
v5 = v5;
return;

}
/* method id 402 */ void* C0::func2 () {
void* v1 = ((void*) 0);
v1 = ((void*) 0);
return v4;

}
/* method id 403 */ void C0::func0 (void* v2) {
void* v3 = ((void*) 0);
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ void* C1::func3 () {
return v4;

}
/* method id 405 */ C1::C1 () {
delete (new C3 ());
v4 = v4;
v4 = v4;
return;

}
/* method id 406 */ void C1::func1 () {
void* v6 = ((void*) 0);
v5 = v5;
v5 = v5;
return (&(*((new C0 ()))))->C0::func0(((void*) 0));

}
/* method id 407 */ C1::~C1 () {
void* v7 = ((void*) 0);
v4 = ((void*) 0);
v4 = ((void*) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ void* C2::func2 (abstract_0 v8, abstract_0 v9) {
return v4;

}
/* method id 409 */ C2::C2 () {
delete (new C3 ());
v4 = v4;
return;

}
/* method id 410 */ void* C2::func0 (void* v10, abstract_0 v11) {
C1 v12 = *(&(*((new C1 ()))));
abstract_0 v13 = abstract_0();
C1 v14 = *(&(*((new C1 ()))));
delete (new C1 ());
return (&(*(((C0*) 0))))->C0::func2();

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {
abstract_0 v19 = abstract_0();
C1 v20 = *(((C1*) 0));
abstract_0 v21 = abstract_0();
C1 v22 = *(((C1*) 0));
delete (new C3 ());
v21 = v156;
return;

}
/* method id 413 */ C3::~C3 () {
abstract_0 v27 = abstract_0();
abstract_0 v28 = abstract_0();
abstract_0 v29 = abstract_0();
(((C1*) 0))->C1::func3();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void* func5 (abstract_0 v159, abstract_0 v160, abstract_0 v161, abstract_0 v162) {
abstract_0 v163;
abstract_0 v164;
void* v165;
C1 v166;

delete (new C0 ());
return v165;

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var4: PtrType{VoidType{}}
8    | var5: AbstractType{0}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
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
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var4: PtrType{VoidType{}}
16   | var5: AbstractType{0}
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
class C2    size(52)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | +---
8    | var15: AbstractType{0}
12   | var16: AbstractType{0}
16   | var17: ClassType{1}
36   | var18: AbstractType{0}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   | var4: PtrType{VoidType{}}
48   | var5: AbstractType{0}
52   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
 }} {
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
 }}}
/*
class C3    size(56)
0    +---
0    | {vbptr}
4    | var155: ClassType{1}
24   | var156: AbstractType{0}
28   | var157: PtrType{PtrType{VoidType{}}}
32   | var158: AbstractType{0}
36   +---
36   +--- (virtual base class C0)
36   | {vfptr}
40   | var4: PtrType{VoidType{}}
44   | var5: AbstractType{0}
48   +---
48   +--- (virtual base class C1)
48   | {vfptr}
52   | {vbptr}
56   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 56;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 48;
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

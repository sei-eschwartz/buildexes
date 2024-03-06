// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ C1 ();
C1 (special_constructor);
abstract_0* v1;
C0* v2;
C0* v3;
abstract_1** v4;
};
struct C2 : public C1 {
/* method id 405 */ C0* func2 ();
/* method id 406 */ virtual C0 func1 ();
/* method id 407 */ C2 ();
/* method id 408 */ virtual ~C2 ();
C2 (special_constructor);
abstract_0* v12;
abstract_1** v13;
abstract_0* v14;
abstract_1** v15;
};
struct C3 : public C1 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual void func0 ();
/* method id 411 */ virtual abstract_1 func0 (C0* v18);
/* method id 412 */ ~C3 ();
C3 (special_constructor);
};
C0* func5 ();
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C1 ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
return ((C0*) 0);

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C0* C2::func2 () {
return v3;

}
/* method id 406 */ C0 C2::func1 () {
C0* v5 = (new C0 ());
C0* v6 = (new C0 ());
abstract_1** v7 = new abstract_1* ();
return *(v6);

}
/* method id 407 */ C2::C2 () {
abstract_1** v8 = new abstract_1* ();
C0* v9 = (new C0 ());
C0* v10 = (new C0 ());
abstract_1** v11 = new abstract_1* ();
delete (new C1 ());
v10 = v3;
v10 = v3;
return;

}
/* method id 408 */ C2::~C2 () {
delete (new C1 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
return;

}
/* method id 410 */ void C3::func0 () {
abstract_0* v16 = new abstract_0 ();
abstract_0* v17 = new abstract_0 ();
v3 = (new C0 ());
return;

}
/* method id 411 */ abstract_1 C3::func0 (C0* v18) {
return abstract_1();

}
/* method id 412 */ C3::~C3 () {
((C1*)((new C3 ())))->C1::func2();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

C0* func5 () {

(((C3*) 0))->C3::func0((C0*)((new C1 ())));
(((C3*) 0))->C3::func0((C0*)((new C1 ())));
(((C3*) 0))->C3::func0((C0*)((new C1 ())));
(((C3*) 0))->C3::func0((C0*)((new C1 ())));
return ((C0*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var1: PtrType{AbstractType{0}}
12   | var2: PtrType{ClassType{0}}
16   | var3: PtrType{ClassType{0}}
20   | var4: DeletablePtrType{PtrType{AbstractType{1}}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(44)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var1: PtrType{AbstractType{0}}
12   | | var2: PtrType{ClassType{0}}
16   | | var3: PtrType{ClassType{0}}
20   | | var4: DeletablePtrType{PtrType{AbstractType{1}}}
24   | +---
24   | var12: PtrType{AbstractType{0}}
28   | var13: DeletablePtrType{PtrType{AbstractType{1}}}
32   | var14: PtrType{AbstractType{0}}
36   | var15: DeletablePtrType{PtrType{AbstractType{1}}}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 44;
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
 }}}
/*
class C3    size(28)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var1: PtrType{AbstractType{0}}
12   | | var2: PtrType{ClassType{0}}
16   | | var3: PtrType{ClassType{0}}
20   | | var4: DeletablePtrType{PtrType{AbstractType{1}}}
24   | +---
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void*** func0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual void* func1 ();
/* method id 403 */ C1 ();
/* method id 404 */ ~C1 ();
/* method id 405 */ virtual void* func4 (void** v5, void** v6, void** v7);
C1 (special_constructor);
void** v12;
void** v13;
void** v14;
C0 v15;
};
struct C2  {
/* method id 406 */ virtual ~C2 ();
/* method id 407 */ virtual void*** func0 ();
/* method id 408 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C1, public C2 {
/* method id 409 */ void*** func4 ();
/* method id 410 */ virtual void*** func3 (C1 v26, C1 v27, void** v28, abstract_0 v29);
/* method id 411 */ virtual ~C3 ();
/* method id 412 */ C3 ();
C3 (special_constructor);
abstract_0 v33;
abstract_0 v34;
};
// definitions
/* method id 400 */ void*** C0::func0 () {
delete (new C3 ());
return new void** ();

}
/* method id 401 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void* C1::func1 () {
void** v0 = ((void**) 0);
void** v1 = ((void**) 0);
return ((new C1 ()))->C1::func4(v1, ((void**) 0), v1);

}
/* method id 403 */ C1::C1 () {
return;

}
/* method id 404 */ C1::~C1 () {
void** v2 = ((void**) 0);
((C1*)((new C3 ())))->C1::func1();
((C1*)((new C3 ())))->C1::func1();
return;

}
/* method id 405 */ void* C1::func4 (void** v5, void** v6, void** v7) {
void** v8 = new void* ();
void** v9 = new void* ();
abstract_0 v10 = abstract_0();
abstract_0 v11 = abstract_0();
return ((void*) 0);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::~C2 () {
delete (new C1 ());
return;

}
/* method id 407 */ void*** C2::func0 () {
abstract_0 v16 = abstract_0();
abstract_0 v17 = abstract_0();
abstract_0 v18 = abstract_0();
abstract_0 v19 = abstract_0();
return ((void***) 0);

}
/* method id 408 */ C2::C2 () {
void** v20 = new void* ();
C1 v21 = *(((C1*) 0));
return;

}
C2::C2 (special_constructor)  {}

/* method id 409 */ void*** C3::func4 () {
C1 v22 = *(&(*(((C1*) 0))));
abstract_0 v23 = abstract_0();
C1 v24 = *(&(*(((C1*) 0))));
void** v25 = ((void**) 0);
v12 = v12;
return new void** ();

}
/* method id 410 */ void*** C3::func3 (C1 v26, C1 v27, void** v28, abstract_0 v29) {
C1 v30 = *(&(*(((C1*) 0))));
return new void** ();

}
/* method id 411 */ C3::~C3 () {
void** v31 = new void* ();
return;

}
/* method id 412 */ C3::C3 () {
abstract_0 v32 = abstract_0();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

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
8    | var12: PtrType{PtrType{VoidType{}}}
12   | var13: PtrType{PtrType{VoidType{}}}
16   | var14: PtrType{PtrType{VoidType{}}}
20   | var15: ClassType{0}
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
class C2    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(40)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var12: PtrType{PtrType{VoidType{}}}
12   | | var13: PtrType{PtrType{VoidType{}}}
16   | | var14: PtrType{PtrType{VoidType{}}}
20   | | var15: ClassType{0}
24   | +---
24   | +--- (base class C2)
24   | | {vfptr}
28   | +---
28   | var33: AbstractType{0}
32   | var34: AbstractType{0}
36   +---
36   +--- (virtual base class C0)
36   | {vfptr}
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
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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

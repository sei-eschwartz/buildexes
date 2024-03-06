// type for special constructors
struct special_constructor {};
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
/* method id 404 */ virtual ~C1 ();
/* method id 405 */ void* func1 (void** v6, void** v7);
C1 (special_constructor);
void** v10;
void** v11;
void** v12;
C0 v13;
};
struct C2 : public virtual C1 {
/* method id 406 */ virtual ~C2 ();
/* method id 407 */ C2 ();
C2 (special_constructor);
void** v17;
};
struct C3 : public C1 {
/* method id 408 */ C3 ();
C3 (special_constructor);
};
void*** func6 ();
// definitions
/* method id 400 */ void*** C0::func0 () {
return ((void***) 0);

}
/* method id 401 */ C0::C0 () {
::func6();
::func6();
delete (new C1 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void* C1::func1 () {
void** v0 = ((void**) 0);
void** v1 = ((void**) 0);
return ((void*) 0);

}
/* method id 403 */ C1::C1 () {
return;

}
/* method id 404 */ C1::~C1 () {
void** v2 = ((void**) 0);
void** v3 = ((void**) 0);
void** v4 = ((void**) 0);
delete (new C2 ());
return;

}
/* method id 405 */ void* C1::func1 (void** v6, void** v7) {
void** v8 = ((void**) 0);
void** v9 = ((void**) 0);
return ((void*) 0);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::~C2 () {
return;

}
/* method id 407 */ C2::C2 () {
C0 v14 = *((new C0 ()));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void*** func6 () {

return new void** ();

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
8    | var10: PtrType{PtrType{VoidType{}}}
12   | var11: PtrType{PtrType{VoidType{}}}
16   | var12: PtrType{PtrType{VoidType{}}}
20   | var13: ClassType{0}
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
class C2    size(36)
0    +---
0    | {vbptr}
4    | var17: PtrType{PtrType{VoidType{}}}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | {vbptr}
20   | var10: PtrType{PtrType{VoidType{}}}
24   | var11: PtrType{PtrType{VoidType{}}}
28   | var12: PtrType{PtrType{VoidType{}}}
32   | var13: ClassType{0}
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
class C3    size(28)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var10: PtrType{PtrType{VoidType{}}}
12   | | var11: PtrType{PtrType{VoidType{}}}
16   | | var12: PtrType{PtrType{VoidType{}}}
20   | | var13: ClassType{0}
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

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
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual void*** func2 ();
/* method id 403 */ void**** func2 (void**** v0);
/* method id 404 */ void func0 ();
/* method id 405 */ C1 ();
C1 (special_constructor);
void**** v2;
void**** v3;
void**** v4;
void**** v5;
};
struct C2 : public virtual C0, public C1 {
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ C2 ();
/* method id 409 */ virtual C0 func4 (C1 v11);
/* method id 410 */ virtual void func0 ();
C2 (special_constructor);
C1 v13;
C1 v14;
};
struct C3 : public C0 {
/* method id 411 */ C3 ();
/* method id 412 */ virtual abstract_0 func0 (void**** v15, C1 v16);
C3 (special_constructor);
C1 v17;
void**** v18;
};
C0* func5 (C1 v19);
// definitions
/* method id 400 */ C0::~C0 () {
((C1*)(((C2*) 0)))->C1::func2(new void*** ());
((C1*)(((C2*) 0)))->C1::func2(new void*** ());
((C1*)(((C2*) 0)))->C1::func2(new void*** ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void*** C1::func2 () {
v5 = v3;
return new void** ();

}
/* method id 403 */ void**** C1::func2 (void**** v0) {
void**** v1 = new void*** ();
v0 = v3;
v0 = v3;
v0 = v3;
return v0;

}
/* method id 404 */ void C1::func0 () {
v4 = v2;
v4 = v2;
return;

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::~C2 () {
void**** v6 = new void*** ();
return;

}
/* method id 408 */ C2::C2 () {
C1 v7 = *(&(*((new C1 ()))));
delete (new C3 ());
v7 = v14;
return;

}
/* method id 409 */ C0 C2::func4 (C1 v11) {
C1 v12 = *((new C1 ()));
return *(&(*((new C0 ()))));

}
/* method id 410 */ void C2::func0 () {
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 411 */ C3::C3 () {
return;

}
/* method id 412 */ abstract_0 C3::func0 (void**** v15, C1 v16) {
return abstract_0();

}
C3::C3 (special_constructor) : C0(special_constructor ()) {}

C0* func5 (C1 v19) {
void**** v20;
C1 v21;
C1 v22;

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
8    | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | var4: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
20   | var5: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
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
class C2    size(84)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | | var4: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
20   | | var5: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
24   | +---
24   | var13: ClassType{1}
52   | var14: ClassType{1}
80   +---
80   +--- (virtual base class C0)
80   | {vfptr}
84   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 84;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 80;
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
class C3    size(36)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var17: ClassType{1}
32   | var18: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
/* method id 404 */ C1 ();
/* method id 405 */ ~C1 ();
C1 (special_constructor);
void**** v2;
void**** v3;
C0 v4;
};
struct C2 : public C1 {
/* method id 406 */ C2 ();
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ virtual void** func1 (abstract_0 v9, abstract_0 v10, abstract_1 v11);
/* method id 409 */ void** func1 (abstract_0 v16, abstract_1 v17);
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ C3 ();
/* method id 412 */ virtual void** func1 ();
/* method id 413 */ virtual void func3 (C0 v23, C0 v24, abstract_0 v25, C0 v26);
C3 (special_constructor);
void**** v27;
};
void** func5 (C0 v28, C0 v29);
void** func6 ();
// definitions
/* method id 400 */ C0::~C0 () {
(((C1*) 0))->C1::func2(new void*** ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void*** C1::func2 () {
v4 = *(&(v4));
v4 = *(&(v4));
return ((void***) 0);

}
/* method id 403 */ void**** C1::func2 (void**** v0) {
void**** v1 = new void*** ();
::func6();
return v2;

}
/* method id 404 */ C1::C1 () {
delete (new C3 ());
return;

}
/* method id 405 */ C1::~C1 () {
::func6();
::func6();
::func6();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
return;

}
/* method id 407 */ C2::~C2 () {
C0 v5 = *(&(*((new C0 ()))));
C0 v6 = *(&(*((new C0 ()))));
C0 v7 = *(&(*((new C0 ()))));
abstract_0 v8 = abstract_0();
return;

}
/* method id 408 */ void** C2::func1 (abstract_0 v9, abstract_0 v10, abstract_1 v11) {
C0 v12 = *((new C0 ()));
C0 v13 = *((new C0 ()));
C0 v14 = *((new C0 ()));
C0 v15 = *((new C0 ()));
return new void* ();

}
/* method id 409 */ void** C2::func1 (abstract_0 v16, abstract_1 v17) {
C0 v18 = *(&(*((new C0 ()))));
C0 v19 = *(&(*((new C0 ()))));
C0 v20 = *(&(*((new C0 ()))));
abstract_1 v21 = abstract_1();
return ::func6();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::~C3 () {
return;

}
/* method id 411 */ C3::C3 () {
abstract_1 v22 = abstract_1();
return;

}
/* method id 412 */ void** C3::func1 () {
::func6();
::func6();
::func6();
::func6();
return new void* ();

}
/* method id 413 */ void C3::func3 (C0 v23, C0 v24, abstract_0 v25, C0 v26) {
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void** func5 (C0 v28, C0 v29) {

return new void* ();

}
void** func6 () {
void**** v30;
void**** v31;

return new void* ();

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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | var4: ClassType{0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(24)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | | var4: ClassType{0}
20   | +---
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
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
0    | {vfptr}
4    | {vbptr}
8    | var27: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C2)
16   | +--- (base class C1)
16   | | {vfptr}
20   | | {vbptr}
24   | | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
28   | | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
32   | | var4: ClassType{0}
36   | +---
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
 const size_t model_offset = 16;
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

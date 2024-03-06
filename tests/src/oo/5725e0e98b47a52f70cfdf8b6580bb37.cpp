// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
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
/* method id 408 */ void** func1 (abstract_0 v9, abstract_0 v10, abstract_1 v11);
/* method id 409 */ virtual void func0 (void**** v15, C0 v16, C0 v17, C0 v18);
C2 (special_constructor);
};
struct C3  {
/* method id 410 */ ~C3 ();
/* method id 411 */ virtual void**** func1 ();
/* method id 412 */ C3 ();
C3 (special_constructor);
C0 v22;
C0 v23;
C0 v24;
};
void*** func7 (void**** v25, abstract_0 v26);
void*** func8 (C0 v31, C0 v32);
void** func9 (C0 v37);
void** func10 (C0 v41, C0 v42, C0 v43, C0 v44);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void*** C1::func2 () {
delete (new C3 ());
v4 = v4;
v4 = v4;
return ((void***) 0);

}
/* method id 403 */ void**** C1::func2 (void**** v0) {
void**** v1 = new void*** ();
v3 = v3;
return v1;

}
/* method id 404 */ C1::C1 () {
return;

}
/* method id 405 */ C1::~C1 () {
v3 = v2;
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
delete (new C3 ());
v3 = v2;
v3 = v2;
v3 = v2;
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
abstract_1 v12 = abstract_1();
return new void* ();

}
/* method id 409 */ void C2::func0 (void**** v15, C0 v16, C0 v17, C0 v18) {
v16 = v17;
v16 = v17;
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::~C3 () {
void**** v19 = new void*** ();
v22 = v22;
v22 = v22;
return;

}
/* method id 411 */ void**** C3::func1 () {
abstract_0 v20 = abstract_0();
void**** v21 = new void*** ();
delete (new C0 ());
return v21;

}
/* method id 412 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

void*** func7 (void**** v25, abstract_0 v26) {
C0 v27;
abstract_0 v28;
abstract_2 v29;
C0 v30;

return ((void***) 0);

}
void*** func8 (C0 v31, C0 v32) {
C0 v33;
C0 v34;
void**** v35;
C0 v36;

delete (new C1 ());
return ((void***) 0);

}
void** func9 (C0 v37) {
C0 v38;
C0 v39;
C0 v40;

return new void* ();

}
void** func10 (C0 v41, C0 v42, C0 v43, C0 v44) {
abstract_0 v45;
C0 v46;
C0 v47;
C0 v48;

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
class C3    size(16)
0    +---
0    | {vfptr}
4    | var22: ClassType{0}
8    | var23: ClassType{0}
12   | var24: ClassType{0}
16   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void func0 ();
/* method id 401 */ virtual void* func0 (void**** v0);
/* method id 402 */ virtual ~C0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
void**** v12;
void**** v13;
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
/* method id 405 */ virtual void func0 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C2 {
/* method id 409 */ C3 ();
C3 (special_constructor);
void**** v34;
};
void**** func6 (void**** v35, void**** v36, void**** v37, void**** v38);
void func7 (void**** v39, void**** v40);
void**** func8 (void**** v43, C3 v44);
// definitions
/* method id 400 */ void C0::func0 () {
return ::func7(v12, v12);

}
/* method id 401 */ void* C0::func0 (void**** v0) {
void**** v1 = new void*** ();
void**** v2 = new void*** ();
void**** v3 = new void*** ();
void**** v4 = new void*** ();
v12 = new void*** ();
v12 = new void*** ();
return ((void*) 0);

}
/* method id 402 */ C0::~C0 () {
void**** v5 = new void*** ();
void**** v6 = new void*** ();
void**** v7 = new void*** ();
delete (new C1 ());
return;

}
/* method id 403 */ C0::C0 () {
void**** v8 = new void*** ();
void**** v9 = new void*** ();
void**** v10 = new void*** ();
void**** v11 = new void*** ();
v12 = new void*** ();
v12 = new void*** ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
void**** v14 = new void*** ();
void**** v15 = new void*** ();
void**** v16 = new void*** ();
void**** v17 = new void*** ();
v12 = v12;
v12 = v12;
v12 = v12;
return;

}
/* method id 405 */ void C1::func0 () {
::func7(new void*** (), new void*** ());
::func7(new void*** (), new void*** ());
::func7(new void*** (), new void*** ());
::func7(new void*** (), new void*** ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void**** func6 (void**** v35, void**** v36, void**** v37, void**** v38) {

return v38;

}
void func7 (void**** v39, void**** v40) {
void**** v41;
void**** v42;

return;

}
void**** func8 (void**** v43, C3 v44) {
void**** v45;
void**** v46;
C3 v47;

delete (new C2 ());
return new void*** ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
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
0    | {vbptr}
4    | {vtordisp for vbase 0}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
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
class C2    size(24)
0    +---
0    | {vbptr}
4    | {vtordisp for vbase 0}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
16   | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   +---
20   +--- (virtual base class C1)
20   | {vbptr}
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
 const size_t model_offset = 20;
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
0    | +--- (base class C2)
0    | | {vbptr}
4    | +---
4    | var34: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var12: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
20   | var13: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
24   +---
24   +--- (virtual base class C1)
24   | {vbptr}
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

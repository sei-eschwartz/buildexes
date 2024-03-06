// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void func0 ();
/* method id 401 */ virtual void* func0 (void**** v0);
/* method id 402 */ C0 ();
/* method id 403 */ void func0 (void**** v9, void**** v10, void**** v11, void**** v12);
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual void func0 ();
/* method id 405 */ void func1 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
void**** v17;
void**** v18;
};
struct C2 : public C0 {
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ virtual void func0 ();
/* method id 409 */ C2 ();
C2 (special_constructor);
C1 v27;
C1 v28;
C1 v29;
};
struct C3 : public virtual C1 {
/* method id 410 */ C3 ();
/* method id 411 */ virtual ~C3 ();
C3 (special_constructor);
C1 v47;
C1 v48;
C1 v49;
C1 v50;
};
void* func4 (void**** v51, C1 v52, C1 v53, C1 v54);
void* func5 (C1 v55, C1 v56, C1 v57, C1 v58);
void* func6 (C1 v63, void**** v64, C1 v65, C1 v66);
void** func7 (C1 v68, C1 v69);
// definitions
/* method id 400 */ void C0::func0 () {
return (((C1*) 0))->C1::func1();

}
/* method id 401 */ void* C0::func0 (void**** v0) {
void**** v1 = new void*** ();
void**** v2 = new void*** ();
void**** v3 = new void*** ();
void**** v4 = new void*** ();
return ((void*) 0);

}
/* method id 402 */ C0::C0 () {
void**** v5 = new void*** ();
void**** v6 = new void*** ();
void**** v7 = new void*** ();
void**** v8 = new void*** ();
delete (new C1 ());
return;

}
/* method id 403 */ void C0::func0 (void**** v9, void**** v10, void**** v11, void**** v12) {
void**** v13 = new void*** ();
delete (new C2 ());
return (((C1*) 0))->C1::func1();

}
C0::C0 (special_constructor)  {}

/* method id 404 */ void C1::func0 () {
return ((new C1 ()))->C1::func1();

}
/* method id 405 */ void C1::func1 () {
void**** v14 = new void*** ();
void**** v15 = new void*** ();
void**** v16 = new void*** ();
return;

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::~C2 () {
return;

}
/* method id 408 */ void C2::func0 () {
C1 v19 = *(((C1*) 0));
C1 v20 = *(&(*(((C1*) 0))));
C1 v21 = *(&(*(((C1*) 0))));
C1 v22 = *(&(*(((C1*) 0))));
v22 = v21;
v22 = v22;
v22 = v21;
v22 = v22;
return ((new C1 ()))->C1::func1();

}
/* method id 409 */ C2::C2 () {
C1 v23 = *((new C1 ()));
C1 v24 = *((new C1 ()));
C1 v25 = *((new C1 ()));
C1 v26 = *((new C1 ()));
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
C1 v30 = *(((C1*) 0));
void**** v31 = new void*** ();
C1 v32 = *(((C1*) 0));
C1 v33 = *(((C1*) 0));
delete (new C1 ());
return;

}
/* method id 411 */ C3::~C3 () {
C1 v39 = *((new C1 ()));
C1 v40 = *((new C1 ()));
C1 v41 = *((new C1 ()));
C1 v42 = *((new C1 ()));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void* func4 (void**** v51, C1 v52, C1 v53, C1 v54) {

delete (new C1 ());
return ((void*) 0);

}
void* func5 (C1 v55, C1 v56, C1 v57, C1 v58) {
C1 v59;
C1 v60;
C1 v61;
C1 v62;

return ((void*) 0);

}
void* func6 (C1 v63, void**** v64, C1 v65, C1 v66) {
C1 v67;

delete (new C1 ());
return ::func5(v67, v67, v67, v67);

}
void** func7 (C1 v68, C1 v69) {
C1 v70;

delete (new C2 ());
return ((void**) 0);

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
class C1    size(20)
0    +---
0    | {vbptr}
4    | var17: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | var18: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
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
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(64)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var27: ClassType{1}
24   | var28: ClassType{1}
44   | var29: ClassType{1}
64   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 64;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(108)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var47: ClassType{1}
28   | var48: ClassType{1}
48   | var49: ClassType{1}
68   | var50: ClassType{1}
88   | {vtordisp for vbase 0}
92   +---
92   +--- (virtual base class C0)
92   | {vfptr}
96   +---
96   +--- (virtual base class C1)
96   | {vbptr}
100  | var17: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
104  | var18: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
108  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 108;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 96;
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

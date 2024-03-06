// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ C1 ();
/* method id 403 */ ~C1 ();
C1 (special_constructor);
void*** v16;
void*** v17;
void*** v18;
void*** v19;
};
struct C2 : public virtual C0 {
/* method id 404 */ void* func0 ();
/* method id 405 */ C2 ();
C2 (special_constructor);
C1 v25;
C1 v26;
C1 v27;
C1 v28;
};
struct C3 : public C1, public virtual C2 {
/* method id 407 */ C3 ();
C3 (special_constructor);
C1 v37;
C1 v38;
C1 v39;
C1 v40;
};
void** func4 (C1 v41, C1 v42);
void* func5 (void*** v46, C1 v47, C1 v48, C1 v49);
void* func6 (C1 v54, C1 v55, C1 v56, C1 v57);
void** func7 (C1 v62, C1 v63, C1 v64, C1 v65);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
void*** v0 = ((void***) 0);
void*** v1 = ((void***) 0);
void*** v2 = ((void***) 0);
void*** v3 = ((void***) 0);
delete (new C2 ());
return;

}
/* method id 403 */ C1::~C1 () {
void*** v12 = new void** ();
void*** v13 = new void** ();
void*** v14 = new void** ();
void*** v15 = new void** ();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ void* C2::func0 () {
delete (new C1 ());
return ::func6(v26, v26, v26, v26);

}
/* method id 405 */ C2::C2 () {
v28 = v26;
v28 = v26;
v28 = v26;
v28 = v26;
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
C1 v29 = *(((C1*) 0));
C1 v30 = *(((C1*) 0));
void*** v31 = ((void***) 0);
C1 v32 = *(((C1*) 0));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void** func4 (C1 v41, C1 v42) {
C1 v43;
C1 v44;
C1 v45;

return new void* ();

}
void* func5 (void*** v46, C1 v47, C1 v48, C1 v49) {
C1 v50;
C1 v51;
C1 v52;
C1 v53;

return ((void*) 0);

}
void* func6 (C1 v54, C1 v55, C1 v56, C1 v57) {
C1 v58;
void*** v59;
C1 v60;
C1 v61;

return ((void*) 0);

}
void** func7 (C1 v62, C1 v63, C1 v64, C1 v65) {
void*** v66;
C1 v67;
C1 v68;

return ((void**) 0);

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
class C1    size(20)
0    +---
0    | {vbptr}
4    | var16: PtrType{PtrType{PtrType{VoidType{}}}}
8    | var17: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var18: PtrType{PtrType{PtrType{VoidType{}}}}
16   | var19: PtrType{PtrType{PtrType{VoidType{}}}}
20   +---
20   +--- (virtual base class C0)
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
class C2    size(84)
0    +---
0    | {vbptr}
4    | var25: ClassType{1}
24   | var26: ClassType{1}
44   | var27: ClassType{1}
64   | var28: ClassType{1}
84   +---
84   +--- (virtual base class C0)
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
 const size_t model_offset = 84;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(184)
0    +---
0    | +--- (base class C1)
0    | | {vbptr}
4    | | var16: PtrType{PtrType{PtrType{VoidType{}}}}
8    | | var17: PtrType{PtrType{PtrType{VoidType{}}}}
12   | | var18: PtrType{PtrType{PtrType{VoidType{}}}}
16   | | var19: PtrType{PtrType{PtrType{VoidType{}}}}
20   | +---
20   | var37: ClassType{1}
40   | var38: ClassType{1}
60   | var39: ClassType{1}
80   | var40: ClassType{1}
100  +---
100  +--- (virtual base class C0)
100  +---
100  +--- (virtual base class C2)
100  | {vbptr}
104  | var25: ClassType{1}
124  | var26: ClassType{1}
144  | var27: ClassType{1}
164  | var28: ClassType{1}
184  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 184;
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
 const size_t model_offset = 100;
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

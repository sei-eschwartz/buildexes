// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
void*** v1;
void*** v2;
};
struct C1 : public virtual C0 {
/* method id 401 */ virtual ~C1 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
void*** v15;
void*** v16;
void*** v17;
void*** v18;
};
struct C2 : public virtual C1 {
/* method id 403 */ C2 ();
/* method id 404 */ void* func0 (C1 v23, void*** v24);
/* method id 405 */ virtual ~C2 ();
C2 (special_constructor);
C1 v61;
C1 v62;
C1 v63;
C1 v64;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 406 */ C3 ();
C3 (special_constructor);
C1 v65;
C1 v66;
C1 v67;
C1 v68;
};
void* func3 (abstract_0 v69, C1 v70, C1 v71, C1 v72);
void* func4 (C1 v73, C1 v74, C1 v75, C1 v76);
void func5 (abstract_0 v81, void*** v82, C1 v83, C1 v84);
void** func6 (C1 v85);
// definitions
/* method id 400 */ C0::C0 () {
void*** v0 = new void** ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::~C1 () {
void*** v3 = new void** ();
void*** v4 = new void** ();
void*** v5 = new void** ();
void*** v6 = new void** ();
v1 = v3;
v1 = new void** ();
v1 = new void** ();
v1 = new void** ();
return;

}
/* method id 402 */ C1::C1 () {
void*** v7 = new void** ();
void*** v8 = new void** ();
void*** v9 = new void** ();
void*** v10 = new void** ();
delete (new C3 ());
v9 = v1;
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {
void*** v19 = new void** ();
C1 v20 = *(&(*(((C1*) 0))));
C1 v21 = *(&(*(((C1*) 0))));
C1 v22 = *(&(*(((C1*) 0))));
return;

}
/* method id 404 */ void* C2::func0 (C1 v23, void*** v24) {
return ((void*) 0);

}
/* method id 405 */ C2::~C2 () {
abstract_0 v46 = abstract_0();
C1 v47 = *(((C1*) 0));
abstract_0 v48 = abstract_0();
C1 v49 = *(((C1*) 0));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void* func3 (abstract_0 v69, C1 v70, C1 v71, C1 v72) {

return ::func4(v71, v71, v71, v71);

}
void* func4 (C1 v73, C1 v74, C1 v75, C1 v76) {
C1 v77;
C1 v78;
abstract_0 v79;
abstract_0 v80;

delete (new C2 ());
return ::func3(v79, v75, v78, v78);

}
void func5 (abstract_0 v81, void*** v82, C1 v83, C1 v84) {

return;

}
void** func6 (C1 v85) {
C1 v86;

return ((void**) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | var1: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
4    | var2: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var15: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
12   | var16: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
16   | var17: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
20   | var18: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
24   +---
24   +--- (virtual base class C0)
24   | var1: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
28   | var2: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
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
class C2    size(164)
0    +---
0    | {vbptr}
4    | var61: ClassType{1}
36   | var62: ClassType{1}
68   | var63: ClassType{1}
100  | var64: ClassType{1}
132  +---
132  +--- (virtual base class C0)
132  | var1: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
136  | var2: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
140  +---
140  +--- (virtual base class C1)
140  | {vfptr}
144  | {vbptr}
148  | var15: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
152  | var16: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
156  | var17: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
160  | var18: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
164  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 164;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 140;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(296)
0    +---
0    | {vbptr}
4    | var65: ClassType{1}
36   | var66: ClassType{1}
68   | var67: ClassType{1}
100  | var68: ClassType{1}
132  +---
132  +--- (virtual base class C0)
132  | var1: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
136  | var2: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
140  +---
140  +--- (virtual base class C1)
140  | {vfptr}
144  | {vbptr}
148  | var15: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
152  | var16: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
156  | var17: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
160  | var18: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
164  +---
164  +--- (virtual base class C2)
164  | {vbptr}
168  | var61: ClassType{1}
200  | var62: ClassType{1}
232  | var63: ClassType{1}
264  | var64: ClassType{1}
296  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 296;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 140;
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
 const size_t model_offset = 164;
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

// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 401 */ void func1 (void** v0);
/* method id 402 */ void func0 (void** v3, void** v4, void** v5, void** v6);
/* method id 403 */ virtual void func0 (void** v7);
/* method id 404 */ C1 ();
C1 (special_constructor);
void** v8;
void** v9;
void** v10;
void** v11;
};
struct C2 : public virtual C0 {
/* method id 405 */ void func0 ();
/* method id 406 */ C2 ();
C2 (special_constructor);
C1 v17;
C1 v18;
C1 v19;
C1 v20;
};
struct C3 : public virtual C1 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual ~C3 ();
C3 (special_constructor);
C1 v63;
C1 v64;
C1 v65;
C1 v66;
};
void func3 (C1 v67, C1 v68, C1 v69);
void func4 (void** v74, C1 v75, C1 v76);
void func5 (C1 v80, C1 v81);
void func6 (void** v85, C1 v86, C1 v87, C1 v88);
// definitions
/* method id 400 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func1 (void** v0) {
void** v1 = new void* ();
void** v2 = new void* ();
delete (new C2 ());
return;

}
/* method id 402 */ void C1::func0 (void** v3, void** v4, void** v5, void** v6) {
return;

}
/* method id 403 */ void C1::func0 (void** v7) {
return;

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ void C2::func0 () {
return ::func4(new void* (), v17, v17);

}
/* method id 406 */ C2::C2 () {
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
C1 v21 = *((new C1 ()));
void** v22 = new void* ();
C1 v23 = *((new C1 ()));
C1 v24 = *((new C1 ()));
return;

}
/* method id 408 */ C3::~C3 () {
C1 v25 = *(&(*(((C1*) 0))));
C1 v26 = *(&(*(((C1*) 0))));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void func3 (C1 v67, C1 v68, C1 v69) {
C1 v70;
C1 v71;
C1 v72;
C1 v73;

return ::func5(v69, v69);

}
void func4 (void** v74, C1 v75, C1 v76) {
C1 v77;
C1 v78;
C1 v79;

::func5(*((new C1 ())), v78);
::func5(*((new C1 ())), v78);
::func5(*((new C1 ())), v78);
::func5(*((new C1 ())), v78);
return;

}
void func5 (C1 v80, C1 v81) {
C1 v82;
C1 v83;
C1 v84;

return;

}
void func6 (void** v85, C1 v86, C1 v87, C1 v88) {
C1 v89;
C1 v90;
C1 v91;
C1 v92;

return;

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
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | var8: DeletablePtrType{PtrType{VoidType{}}}
8    | var9: DeletablePtrType{PtrType{VoidType{}}}
12   | var10: DeletablePtrType{PtrType{VoidType{}}}
16   | var11: DeletablePtrType{PtrType{VoidType{}}}
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
 const size_t model_offset = 4;
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
4    | var17: ClassType{1}
24   | var18: ClassType{1}
44   | var19: ClassType{1}
64   | var20: ClassType{1}
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
class C3    size(108)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var63: ClassType{1}
28   | var64: ClassType{1}
48   | var65: ClassType{1}
68   | var66: ClassType{1}
88   +---
88   +--- (virtual base class C1)
88   | {vfptr}
92   | +--- (base class C0)
92   | +---
92   | var8: DeletablePtrType{PtrType{VoidType{}}}
96   | var9: DeletablePtrType{PtrType{VoidType{}}}
100  | var10: DeletablePtrType{PtrType{VoidType{}}}
104  | var11: DeletablePtrType{PtrType{VoidType{}}}
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
 const size_t model_offset = 88;
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

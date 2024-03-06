// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 401 */ virtual void* func1 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
void*** v9;
void*** v10;
};
struct C2 : public virtual C1 {
/* method id 403 */ C2 ();
/* method id 404 */ virtual void* func2 (C1 v15);
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ void* func1 ();
C2 (special_constructor);
C1 v25;
C1 v26;
C1 v27;
C1 v28;
};
struct C3 : public virtual C2 {
/* method id 407 */ virtual void* func2 (C2 v29, C2 v30, C1 v31, abstract_2 v32);
/* method id 408 */ void* func2 (C1 v37);
/* method id 409 */ void*** func2 (void*** v38);
/* method id 410 */ virtual abstract_3 func0 (C1 v43, C1 v44, C1 v45, void*** v46);
/* method id 411 */ C3 ();
C3 (special_constructor);
C0 v49;
C1 v50;
C1 v51;
C1 v52;
};
abstract_4 func5 (abstract_2 v53, C0 v54);
void*** func6 (abstract_2 v55, abstract_3* v56, abstract_2 v57, C2 v58);
// definitions
/* method id 400 */ C0::C0 () {
void*** v0 = new void** ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void* C1::func1 () {
return ((void*) 0);

}
/* method id 402 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {
void*** v11 = new void** ();
C1 v12 = *(((C1*) 0));
C1 v13 = *(((C1*) 0));
C1 v14 = *(((C1*) 0));
v10 = v11;
v10 = v11;
v10 = v11;
v10 = v11;
return;

}
/* method id 404 */ void* C2::func2 (C1 v15) {
void*** v16 = new void** ();
return ((void*) 0);

}
/* method id 405 */ C2::~C2 () {
C1 v17 = *(((C1*) 0));
C1 v18 = *(((C1*) 0));
return;

}
/* method id 406 */ void* C2::func1 () {
abstract_0 v22 = abstract_0();
void*** v23 = new void** ();
void*** v24 = new void** ();
return ((void*) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ void* C3::func2 (C2 v29, C2 v30, C1 v31, abstract_2 v32) {
C1 v33 = *((new C1 ()));
C1 v34 = *((new C1 ()));
void*** v35 = new void** ();
abstract_2 v36 = abstract_2();
delete (new C3 ());
return ((void*) 0);

}
/* method id 408 */ void* C3::func2 (C1 v37) {
return ((void*) 0);

}
/* method id 409 */ void*** C3::func2 (void*** v38) {
C1 v39 = *((new C1 ()));
C0 v40 = *(&(*(((C0*) 0))));
C1 v41 = *((new C1 ()));
C0 v42 = *(((C0*) 0));
v41 = v39;
return v10;

}
/* method id 410 */ abstract_3 C3::func0 (C1 v43, C1 v44, C1 v45, void*** v46) {
C1 v47 = *(((C1*) 0));
void*** v48 = new void** ();
return abstract_3();

}
/* method id 411 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_4 func5 (abstract_2 v53, C0 v54) {

v53 = abstract_2();
return abstract_4();

}
void*** func6 (abstract_2 v55, abstract_3* v56, abstract_2 v57, C2 v58) {

v56 = ((abstract_3*) 0);
v56 = ((abstract_3*) 0);
v56 = ((abstract_3*) 0);
v56 = ((abstract_3*) 0);
return new void** ();

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var9: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
12   | var10: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
16   +---
16   +--- (virtual base class C0)
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
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
class C2    size(92)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var25: ClassType{1}
24   | var26: ClassType{1}
40   | var27: ClassType{1}
56   | var28: ClassType{1}
72   +---
72   +--- (virtual base class C0)
72   +---
72   | {vtordisp for vbase 1}
76   +--- (virtual base class C1)
76   | {vfptr}
80   | {vbptr}
84   | var9: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
88   | var10: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
92   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 92;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 76;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(156)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var49: ClassType{0}
9    | alignment: 
12   | var50: ClassType{1}
28   | var51: ClassType{1}
44   | var52: ClassType{1}
60   +---
60   +--- (virtual base class C0)
60   +---
60   | {vtordisp for vbase 1}
64   +--- (virtual base class C1)
64   | {vfptr}
68   | {vbptr}
72   | var9: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
76   | var10: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
80   +---
80   | {vtordisp for vbase 2}
84   +--- (virtual base class C2)
84   | {vfptr}
88   | {vbptr}
92   | var25: ClassType{1}
108  | var26: ClassType{1}
124  | var27: ClassType{1}
140  | var28: ClassType{1}
156  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 156;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 84;
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

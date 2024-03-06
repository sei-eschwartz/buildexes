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
/* method id 402 */ void*** func2 ();
/* method id 403 */ virtual void** func0 (C0 v1);
/* method id 404 */ C1 ();
C1 (special_constructor);
C0 v2;
C0 v3;
C0 v4;
C0 v5;
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
/* method id 407 */ virtual ~C2 ();
C2 (special_constructor);
C1 v20;
C1 v21;
C1 v22;
C1 v23;
};
struct C3 : public virtual C2 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ virtual void func0 ();
C3 (special_constructor);
void* v50;
C1 v51;
C1 v52;
C0 v53;
};
void*** func5 (void* v54, void* v55);
void func6 (C1 v59, C1 v60, abstract_1 v61);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void*** C1::func2 () {
C0 v0 = *(&(*((new C0 ()))));
v2 = v2;
v2 = v2;
v2 = v2;
return ((void***) 0);

}
/* method id 403 */ void** C1::func0 (C0 v1) {
delete (new C2 ());
return new void* ();

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
C0 v6 = *(&(*((new C0 ()))));
C0 v7 = *(&(*((new C0 ()))));
C0 v8 = *(&(*((new C0 ()))));
C0 v9 = *(&(*((new C0 ()))));
::func5(((void*) 0), ((void*) 0));
return;

}
/* method id 407 */ C2::~C2 () {
C1 v10 = *(((C1*) 0));
C1 v11 = *(((C1*) 0));
C1 v12 = *(((C1*) 0));
C1 v13 = *(((C1*) 0));
delete (new C1 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
C1 v24 = *(&(*((new C1 ()))));
C1 v25 = *(&(*((new C1 ()))));
C1 v26 = *(&(*((new C1 ()))));
C1 v27 = *(&(*((new C1 ()))));
delete (new C1 ());
return;

}
/* method id 409 */ C3::~C3 () {
C1 v28 = *(&(*((new C1 ()))));
::func6(v20, v20, abstract_1());
return;

}
/* method id 410 */ void C3::func0 () {
v2 = v3;
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void*** func5 (void* v54, void* v55) {
void* v56;
C1 v57;
C1 v58;

v54 = ((void*) 0);
v54 = ((void*) 0);
return ((void***) 0);

}
void func6 (C1 v59, C1 v60, abstract_1 v61) {
C0 v62;
C0 v63;
void**** v64;
C1 v65;

return;

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
8    | var2: ClassType{0}
12   | var3: ClassType{0}
16   | var4: ClassType{0}
20   | var5: ClassType{0}
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
class C2    size(144)
0    +---
0    | {vbptr}
4    | var20: ClassType{1}
32   | var21: ClassType{1}
60   | var22: ClassType{1}
88   | var23: ClassType{1}
116  +---
116  +--- (virtual base class C0)
116  | {vfptr}
120  +---
120  +--- (virtual base class C1)
120  | {vfptr}
124  | {vbptr}
128  | var2: ClassType{0}
132  | var3: ClassType{0}
136  | var4: ClassType{0}
140  | var5: ClassType{0}
144  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 144;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 120;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(216)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var50: PtrType{VoidType{}}
12   | var51: ClassType{1}
40   | var52: ClassType{1}
68   | var53: ClassType{0}
72   +---
72   +--- (virtual base class C0)
72   | {vfptr}
76   +---
76   +--- (virtual base class C1)
76   | {vfptr}
80   | {vbptr}
84   | var2: ClassType{0}
88   | var3: ClassType{0}
92   | var4: ClassType{0}
96   | var5: ClassType{0}
100  +---
100  +--- (virtual base class C2)
100  | {vbptr}
104  | var20: ClassType{1}
132  | var21: ClassType{1}
160  | var22: ClassType{1}
188  | var23: ClassType{1}
216  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 216;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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

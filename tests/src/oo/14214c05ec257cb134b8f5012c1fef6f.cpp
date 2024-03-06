// type for special constructors
struct special_constructor {};
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
C1 v18;
C1 v19;
C1 v20;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 408 */ C3 ();
C3 (special_constructor);
C1 v24;
C1 v25;
C0 v26;
C1 v27;
};
void** func6 (C1 v28, C1 v29, C1 v30, C0 v31);
void** func7 (C1 v35, C0 v36, C1 v37, C1 v38);
void** func8 (C1 v39, C1 v40);
void** func9 (C0 v45, C1 v46, C1 v47, C1 v48);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C2 ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void*** C1::func2 () {
C0 v0 = *(&(*((new C0 ()))));
delete (new C2 ());
return ((void***) 0);

}
/* method id 403 */ void** C1::func0 (C0 v1) {
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
C1 v21 = *((new C1 ()));
C1 v22 = *((new C1 ()));
C1 v23 = *((new C1 ()));
delete (new C2 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void** func6 (C1 v28, C1 v29, C1 v30, C0 v31) {
C1 v32;
C1 v33;
C1 v34;

return new void* ();

}
void** func7 (C1 v35, C0 v36, C1 v37, C1 v38) {

return new void* ();

}
void** func8 (C1 v39, C1 v40) {
C1 v41;
C1 v42;
C1 v43;
C1 v44;

return new void* ();

}
void** func9 (C0 v45, C1 v46, C1 v47, C1 v48) {

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
class C2    size(116)
0    +---
0    | {vbptr}
4    | var18: ClassType{1}
32   | var19: ClassType{1}
60   | var20: ClassType{1}
88   +---
88   +--- (virtual base class C0)
88   | {vfptr}
92   +---
92   +--- (virtual base class C1)
92   | {vfptr}
96   | {vbptr}
100  | var2: ClassType{0}
104  | var3: ClassType{0}
108  | var4: ClassType{0}
112  | var5: ClassType{0}
116  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 116;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 92;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(208)
0    +---
0    | {vbptr}
4    | var24: ClassType{1}
32   | var25: ClassType{1}
60   | var26: ClassType{0}
64   | var27: ClassType{1}
92   +---
92   +--- (virtual base class C0)
92   | {vfptr}
96   +---
96   +--- (virtual base class C1)
96   | {vfptr}
100  | {vbptr}
104  | var2: ClassType{0}
108  | var3: ClassType{0}
112  | var4: ClassType{0}
116  | var5: ClassType{0}
120  +---
120  +--- (virtual base class C2)
120  | {vbptr}
124  | var18: ClassType{1}
152  | var19: ClassType{1}
180  | var20: ClassType{1}
208  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 208;
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
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 120;
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

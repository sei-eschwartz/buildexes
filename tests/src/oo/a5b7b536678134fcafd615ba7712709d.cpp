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
/* method id 407 */ ~C2 ();
/* method id 408 */ virtual void*** func1 (C0 v33, C0 v34, C0 v35, C0 v36);
C2 (special_constructor);
C1 v104;
C1 v105;
C1 v106;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
C3 (special_constructor);
C1 v107;
C1 v108;
};
void** func7 (C0 v109, C1 v110, C1 v111, C1 v112);
void*** func8 (C1 v117, C1 v118, C1 v119, C1 v120);
void** func9 ();
void** func10 (C1 v128, C1 v129, C1 v130, C1 v131);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void*** C1::func2 () {
C0 v0 = *(&(*((new C0 ()))));
return new void** ();

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
C0 v10 = *(((C0*) 0));
C0 v11 = *(((C0*) 0));
C0 v12 = *(((C0*) 0));
C0 v13 = *(((C0*) 0));
return;

}
/* method id 408 */ void*** C2::func1 (C0 v33, C0 v34, C0 v35, C0 v36) {
C0 v37 = *((new C0 ()));
C0 v38 = *((new C0 ()));
C0 v39 = *((new C0 ()));
C0 v40 = *((new C0 ()));
return new void** ();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void** func7 (C0 v109, C1 v110, C1 v111, C1 v112) {
C1 v113;
C1 v114;
C1 v115;
C1 v116;

return new void* ();

}
void*** func8 (C1 v117, C1 v118, C1 v119, C1 v120) {
C1 v121;
C1 v122;
C1 v123;
C1 v124;

::func9();
::func9();
::func9();
::func9();
return new void** ();

}
void** func9 () {
C1 v125;
C1 v126;
C1 v127;

return new void* ();

}
void** func10 (C1 v128, C1 v129, C1 v130, C1 v131) {
C1 v132;
C1 v133;

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
class C2    size(120)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var104: ClassType{1}
36   | var105: ClassType{1}
64   | var106: ClassType{1}
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
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 120;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 96;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(180)
0    +---
0    | {vbptr}
4    | var107: ClassType{1}
32   | var108: ClassType{1}
60   +---
60   +--- (virtual base class C0)
60   | {vfptr}
64   +---
64   +--- (virtual base class C1)
64   | {vfptr}
68   | {vbptr}
72   | var2: ClassType{0}
76   | var3: ClassType{0}
80   | var4: ClassType{0}
84   | var5: ClassType{0}
88   +---
88   +--- (virtual base class C2)
88   | {vfptr}
92   | {vbptr}
96   | var104: ClassType{1}
124  | var105: ClassType{1}
152  | var106: ClassType{1}
180  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 180;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 64;
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
 const size_t model_offset = 88;
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

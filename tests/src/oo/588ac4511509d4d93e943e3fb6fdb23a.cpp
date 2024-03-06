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
C1 v45;
C1 v46;
C1 v47;
C1 v48;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
C3 (special_constructor);
C1 v61;
C1 v62;
C1 v63;
C1 v64;
};
void** func6 (C1 v65, C1 v66, C1 v67, C1 v68);
void** func7 (C0 v73, C1 v74, C1 v75);
void*** func8 (C1 v78, C1 v79, C1 v80, C1 v81);
void** func9 (C0 v86, C1 v87, C1 v88, C1 v89);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void*** C1::func2 () {
C0 v0 = *(&(*((new C0 ()))));
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
C0 v10 = *(((C0*) 0));
C0 v11 = *(((C0*) 0));
C0 v12 = *(((C0*) 0));
C0 v13 = *(((C0*) 0));
delete (new C0 ());
delete (new C3 ());
return;

}
/* method id 408 */ void*** C2::func1 (C0 v33, C0 v34, C0 v35, C0 v36) {
C0 v37 = *((new C0 ()));
C0 v38 = *((new C0 ()));
C0 v39 = *((new C0 ()));
C0 v40 = *((new C0 ()));
return ((void***) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
C1 v49 = *((new C1 ()));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void** func6 (C1 v65, C1 v66, C1 v67, C1 v68) {
C1 v69;
C1 v70;
C1 v71;
C1 v72;

delete (new C1 ());
return new void* ();

}
void** func7 (C0 v73, C1 v74, C1 v75) {
C0 v76;
C1 v77;

return new void* ();

}
void*** func8 (C1 v78, C1 v79, C1 v80, C1 v81) {
C1 v82;
C0 v83;
C1 v84;
C1 v85;

::func7(v83, v82, v82);
::func7(v83, v82, v82);
::func7(v83, v82, v82);
::func7(v83, v82, v82);
return ((void***) 0);

}
void** func9 (C0 v86, C1 v87, C1 v88, C1 v89) {
C1 v90;
C1 v91;
C1 v92;
C1 v93;

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
class C2    size(148)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var45: ClassType{1}
36   | var46: ClassType{1}
64   | var47: ClassType{1}
92   | var48: ClassType{1}
120  +---
120  +--- (virtual base class C0)
120  | {vfptr}
124  +---
124  +--- (virtual base class C1)
124  | {vfptr}
128  | {vbptr}
132  | var2: ClassType{0}
136  | var3: ClassType{0}
140  | var4: ClassType{0}
144  | var5: ClassType{0}
148  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 148;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 124;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(264)
0    +---
0    | {vbptr}
4    | var61: ClassType{1}
32   | var62: ClassType{1}
60   | var63: ClassType{1}
88   | var64: ClassType{1}
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
144  +--- (virtual base class C2)
144  | {vfptr}
148  | {vbptr}
152  | var45: ClassType{1}
180  | var46: ClassType{1}
208  | var47: ClassType{1}
236  | var48: ClassType{1}
264  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 264;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 120;
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
 const size_t model_offset = 144;
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

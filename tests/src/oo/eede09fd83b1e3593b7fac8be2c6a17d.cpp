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
struct C1  {
/* method id 401 */ void func0 ();
/* method id 402 */ C1 ();
/* method id 403 */ virtual void func0 (C0 v1, C0 v2, C0 v3, C0 v4);
/* method id 404 */ virtual ~C1 ();
C1 (special_constructor);
C0 v17;
C0 v18;
C0 v19;
C0 v20;
};
struct C2 : public virtual C1, public C0 {
/* method id 405 */ C2 ();
/* method id 406 */ void func0 ();
C2 (special_constructor);
C0 v26;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 408 */ void func0 ();
/* method id 409 */ virtual void func1 (C0 v29, C0 v30, C0 v31);
/* method id 410 */ virtual void func0 (C0 v32, C0 v33, C0 v34, C0 v35);
/* method id 411 */ C3 ();
C3 (special_constructor);
C0 v44;
C0 v45;
C0 v46;
C0 v47;
};
void func3 (C0 v48, C3 v49, C3 v50, C3 v51);
void func4 (C3 v52, C3 v53, C3 v54, C3 v55);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
return;

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
return;

}
/* method id 403 */ void C1::func0 (C0 v1, C0 v2, C0 v3, C0 v4) {
C0 v5 = *(((C0*) 0));
C0 v6 = *(((C0*) 0));
C0 v7 = *(((C0*) 0));
C0 v8 = *(((C0*) 0));
return;

}
/* method id 404 */ C1::~C1 () {
C0 v13 = *(((C0*) 0));
C0 v14 = *(((C0*) 0));
C0 v15 = *(((C0*) 0));
C0 v16 = *(((C0*) 0));
return;

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {
C0 v21 = *((new C0 ()));
C0 v22 = *((new C0 ()));
C0 v23 = *((new C0 ()));
C0 v24 = *((new C0 ()));
return;

}
/* method id 406 */ void C2::func0 () {
C0 v25 = *((new C0 ()));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 408 */ void C3::func0 () {
C0 v27 = *(((C0*) 0));
C0 v28 = *(((C0*) 0));
return;

}
/* method id 409 */ void C3::func1 (C0 v29, C0 v30, C0 v31) {
return;

}
/* method id 410 */ void C3::func0 (C0 v32, C0 v33, C0 v34, C0 v35) {
C0 v36 = *(&(*(((C0*) 0))));
C0 v37 = *(&(*(((C0*) 0))));
C0 v38 = *(&(*(((C0*) 0))));
C0 v39 = *(&(*(((C0*) 0))));
return;

}
/* method id 411 */ C3::C3 () {
C0 v40 = *((new C0 ()));
C0 v41 = *((new C0 ()));
C0 v42 = *((new C0 ()));
C0 v43 = *((new C0 ()));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void func3 (C0 v48, C3 v49, C3 v50, C3 v51) {

return;

}
void func4 (C3 v52, C3 v53, C3 v54, C3 v55) {
C3 v56;
C3 v57;
C3 v58;
C3 v59;

return ((C1*)(((C3*) 0)))->C1::func0();

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
class C1    size(8)
0    +---
0    | {vfptr}
4    | var17: ClassType{0}
5    | var18: ClassType{0}
6    | var19: ClassType{0}
7    | var20: ClassType{0}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(16)
0    +---
0    | +--- (base class C0)
0    | +---
0    | {vbptr}
4    | var26: ClassType{0}
5    | alignment: 
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var17: ClassType{0}
13   | var18: ClassType{0}
14   | var19: ClassType{0}
15   | var20: ClassType{0}
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
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
class C3    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var44: ClassType{0}
9    | var45: ClassType{0}
10   | var46: ClassType{0}
11   | var47: ClassType{0}
12   | {vtordisp for vbase 1}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | var17: ClassType{0}
21   | var18: ClassType{0}
22   | var19: ClassType{0}
23   | var20: ClassType{0}
24   +---
24   | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 2, which leads with zero sized base.
28   +--- (virtual base class C2)
28   | +--- (base class C0)
28   | +---
28   | {vbptr}
32   | var26: ClassType{0}
33   | alignment: 
36   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
 const size_t model_offset = 28;
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

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
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
};
struct C2 : public virtual C1 {
/* method id 402 */ C2 ();
/* method id 403 */ virtual ~C2 ();
/* method id 404 */ void func0 (C1 v21, C1 v22, C1 v23);
C2 (special_constructor);
C1 v35;
C1 v36;
C1 v37;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 405 */ C3 ();
C3 (special_constructor);
C1 v46;
C0 v47;
C0 v48;
C0 v49;
};
void func2 ();
void func3 (C1 v50);
void func4 (C1 v53, C1 v54, C1 v55, C1 v56);
void func5 (C1 v61, C1 v62, C1 v63);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
delete (new C3 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 402 */ C2::C2 () {
C0 v2 = *(((C0*) 0));
C0 v3 = *(((C0*) 0));
C0 v4 = *(((C0*) 0));
C0 v5 = *(((C0*) 0));
return;

}
/* method id 403 */ C2::~C2 () {
C0 v14 = *(&(*((new C0 ()))));
C0 v15 = *(&(*((new C0 ()))));
C0 v16 = *(&(*((new C0 ()))));
return;

}
/* method id 404 */ void C2::func0 (C1 v21, C1 v22, C1 v23) {
C1 v24 = *(((C1*) 0));
C0 v25 = *(((C0*) 0));
C0 v26 = *(((C0*) 0));
v1 = v25;
v1 = *(((C0*) 0));
v1 = *(((C0*) 0));
return ::func4(v21, v21, v21, v21);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
C1 v38 = *(((C1*) 0));
C1 v39 = *(((C1*) 0));
C1 v40 = *(((C1*) 0));
C1 v41 = *(((C1*) 0));
::func5(v40, v40, v40);
::func5(v40, v40, v40);
::func5(v40, v40, v40);
::func5(v40, v40, v40);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void func2 () {

return;

}
void func3 (C1 v50) {
C1 v51;
C1 v52;

return;

}
void func4 (C1 v53, C1 v54, C1 v55, C1 v56) {
C1 v57;
C1 v58;
C1 v59;
C0 v60;

return ::func3(v55);

}
void func5 (C1 v61, C1 v62, C1 v63) {
C1 v64;
C1 v65;
C1 v66;

return ::func3(v61);

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
0    | {vbptr}
4    | var0: ClassType{0}
5    | var1: ClassType{0}
6    | alignment: 
8    +---
8    +--- (virtual base class C0)
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
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var35: ClassType{1}
16   | var36: ClassType{1}
24   | var37: ClassType{1}
32   +---
32   +--- (virtual base class C0)
32   +---
32   +--- (virtual base class C1)
32   | {vbptr}
36   | var0: ClassType{0}
37   | var1: ClassType{0}
38   | alignment: 
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(56)
0    +---
0    | {vbptr}
4    | var46: ClassType{1}
12   | var47: ClassType{0}
13   | var48: ClassType{0}
14   | var49: ClassType{0}
15   | alignment: 
16   +---
16   +--- (virtual base class C0)
16   +---
16   +--- (virtual base class C1)
16   | {vbptr}
20   | var0: ClassType{0}
21   | var1: ClassType{0}
22   | alignment: 
24   +---
24   +--- (virtual base class C2)
24   | {vfptr}
28   | {vbptr}
32   | var35: ClassType{1}
40   | var36: ClassType{1}
48   | var37: ClassType{1}
56   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 56;
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
 const size_t model_offset = 24;
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

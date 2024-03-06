// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 402 */ C2 ();
C2 (special_constructor);
C0 v26;
C0 v27;
};
struct C3 : public virtual C1 {
/* method id 403 */ C3 ();
/* method id 404 */ virtual C1*** func1 (C0 v32, C0 v33, C0 v34, C0 v35);
/* method id 405 */ ~C3 ();
C3 (special_constructor);
C2 v44;
C2 v45;
C2 v46;
C2 v47;
};
C1* func3 (C2 v48, C2 v49, C2 v50, C2 v51);
C1* func4 (C2 v52, C2 v53);
C1* func5 (C2 v56, C2 v57, C2 v58, C2 v59);
C1* func6 (C2 v62, C2 v63, C2 v64, C2 v65);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 402 */ C2::C2 () {
C0 v2 = *(((C0*) 0));
C0 v3 = *(((C0*) 0));
C0 v4 = *(((C0*) 0));
C0 v5 = *(((C0*) 0));
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 403 */ C3::C3 () {
C0 v28 = *((new C0 ()));
C0 v29 = *((new C0 ()));
C0 v30 = *((new C0 ()));
C0 v31 = *((new C0 ()));
return;

}
/* method id 404 */ C1*** C3::func1 (C0 v32, C0 v33, C0 v34, C0 v35) {
C0 v36 = *((new C0 ()));
C2 v37 = *(((C2*) 0));
C2 v38 = *(((C2*) 0));
C2 v39 = *(((C2*) 0));
return new C1** ();

}
/* method id 405 */ C3::~C3 () {
C2 v40 = *(&(*(((C2*) 0))));
C2 v41 = *(&(*(((C2*) 0))));
C2 v42 = *(&(*(((C2*) 0))));
C0 v43 = *(&(*((new C0 ()))));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

C1* func3 (C2 v48, C2 v49, C2 v50, C2 v51) {

return (C1*)(&(v49));

}
C1* func4 (C2 v52, C2 v53) {
C2 v54;
C2 v55;

return ((C1*) 0);

}
C1* func5 (C2 v56, C2 v57, C2 v58, C2 v59) {
C2 v60;
C2 v61;

return ((C1*) 0);

}
C1* func6 (C2 v62, C2 v63, C2 v64, C2 v65) {
C2 v66;
C2 v67;
C2 v68;
C2 v69;

return (new C1 ());

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
class C1    size(2)
0    +---
0    | var0: ClassType{0}
1    | var1: ClassType{0}
2    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 2;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(10)
0    +---
0    | {vbptr}
4    | var26: ClassType{0}
5    | var27: ClassType{0}
6    | alignment: 
8    +---
8    +--- (virtual base class C0)
8    +---
8    +--- (virtual base class C1)
8    | var0: ClassType{0}
9    | var1: ClassType{0}
10   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 10;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
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
 }}}
/*
class C3    size(58)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var44: ClassType{2}
18   | alignment: 
20   | var45: ClassType{2}
30   | alignment: 
32   | var46: ClassType{2}
42   | alignment: 
44   | var47: ClassType{2}
54   | alignment: 
56   +---
56   +--- (virtual base class C1)
56   | var0: ClassType{0}
57   | var1: ClassType{0}
58   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 58;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 56;
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

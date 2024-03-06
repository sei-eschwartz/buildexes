// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
/* method id 404 */ virtual abstract_0* func0 (C0 v25);
C2 (special_constructor);
C0 v27;
C0 v28;
C0 v29;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 405 */ C3 ();
/* method id 406 */ virtual ~C3 ();
C3 (special_constructor);
C2 v63;
C2 v64;
C0 v65;
};
abstract_1 func1 (C2 v66, C0 v67);
abstract_0* func2 (C2 v72, C2 v73, C2 v74, C2 v75);
abstract_0* func3 (C0 v80, C2 v81, C2 v82, C2 v83);
abstract_1 func4 (C2 v88, C2 v89, C2 v90, C2 v91);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 402 */ C2::C2 () {
C0 v2 = *(((C0*) 0));
C0 v3 = *(((C0*) 0));
C0 v4 = *(((C0*) 0));
C0 v5 = *(((C0*) 0));
delete (new C2 ());
return;

}
/* method id 403 */ C2::~C2 () {
C0 v14 = *(&(*((new C0 ()))));
C0 v15 = *(&(*((new C0 ()))));
C0 v16 = *(&(*((new C0 ()))));
return;

}
/* method id 404 */ abstract_0* C2::func0 (C0 v25) {
C0 v26 = *(((C0*) 0));
return ((abstract_0*) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
C0 v30 = *((new C0 ()));
C0 v31 = *((new C0 ()));
C0 v32 = *((new C0 ()));
C0 v33 = *((new C0 ()));
delete (new C1 ());
return;

}
/* method id 406 */ C3::~C3 () {
C0 v35 = *(&(*(((C0*) 0))));
C0 v36 = *(&(*(((C0*) 0))));
C0 v37 = *(&(*(((C0*) 0))));
C0 v38 = *(&(*(((C0*) 0))));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_1 func1 (C2 v66, C0 v67) {
C2 v68;
C2 v69;
C2 v70;
C2 v71;

delete (new C1 ());
return ::func4(v68, v68, v68, v68);

}
abstract_0* func2 (C2 v72, C2 v73, C2 v74, C2 v75) {
C2 v76;
C2 v77;
C2 v78;
C2 v79;

return new abstract_0 ();

}
abstract_0* func3 (C0 v80, C2 v81, C2 v82, C2 v83) {
C2 v84;
C2 v85;
C2 v86;
C2 v87;

return new abstract_0 ();

}
abstract_1 func4 (C2 v88, C2 v89, C2 v90, C2 v91) {
C2 v92;
C2 v93;
C2 v94;
C2 v95;

return abstract_1();

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
class C2    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var27: ClassType{0}
9    | var28: ClassType{0}
10   | var29: ClassType{0}
11   | alignment: 
12   +---
12   +--- (virtual base class C0)
12   +---
12   +--- (virtual base class C1)
12   | {vbptr}
16   | var0: ClassType{0}
17   | var1: ClassType{0}
18   | alignment: 
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(68)
0    +---
0    | {vbptr}
4    | var63: ClassType{2}
24   | var64: ClassType{2}
44   | var65: ClassType{0}
45   | alignment: 
48   +---
48   +--- (virtual base class C0)
48   +---
48   +--- (virtual base class C1)
48   | {vbptr}
52   | var0: ClassType{0}
53   | var1: ClassType{0}
54   | alignment: 
56   +---
56   +--- (virtual base class C2)
56   | {vfptr}
60   | {vbptr}
64   | var27: ClassType{0}
65   | var28: ClassType{0}
66   | var29: ClassType{0}
67   | alignment: 
68   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 68;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 48;
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
 const size_t model_offset = 56;
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

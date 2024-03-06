// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
/* method id 403 */ virtual ~C2 ();
C2 (special_constructor);
C0 v22;
C0 v23;
C0 v24;
C0 v25;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 404 */ C3 ();
/* method id 405 */ virtual ~C3 ();
/* method id 406 */ virtual abstract_0** func0 ();
/* method id 407 */ abstract_0 func2 (C0 v52, C0 v53, C1 v54);
C3 (special_constructor);
C1 v57;
C0 v58;
C1 v59;
C1 v60;
};
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
v3 = *((new C0 ()));
return;

}
/* method id 403 */ C2::~C2 () {
C0 v18 = *((new C0 ()));
C0 v19 = *((new C0 ()));
C0 v20 = *((new C0 ()));
C0 v21 = *((new C0 ()));
delete (new C1 ());
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 404 */ C3::C3 () {
C0 v26 = *(((C0*) 0));
C0 v27 = *(((C0*) 0));
C0 v28 = *(((C0*) 0));
C0 v29 = *(((C0*) 0));
return;

}
/* method id 405 */ C3::~C3 () {
C0 v34 = *(((C0*) 0));
C0 v35 = *(((C0*) 0));
C0 v36 = *(((C0*) 0));
C0 v37 = *(((C0*) 0));
return;

}
/* method id 406 */ abstract_0** C3::func0 () {
v24 = v0;
return ((abstract_0**) 0);

}
/* method id 407 */ abstract_0 C3::func2 (C0 v52, C0 v53, C1 v54) {
C1 v55 = *(&(*((new C1 ()))));
C1 v56 = *(&(*((new C1 ()))));
return abstract_0();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

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
class C2    size(14)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var22: ClassType{0}
9    | var23: ClassType{0}
10   | var24: ClassType{0}
11   | var25: ClassType{0}
12   +---
12   +--- (virtual base class C0)
12   +---
12   +--- (virtual base class C1)
12   | var0: ClassType{0}
13   | var1: ClassType{0}
14   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 14;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
class C3    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var57: ClassType{1}
10   | var58: ClassType{0}
11   | var59: ClassType{1}
13   | var60: ClassType{1}
15   | alignment: 
16   +---
16   +--- (virtual base class C1)
16   | var0: ClassType{0}
17   | var1: ClassType{0}
18   +---
18   | alignment: alignment before virtual base padding
20   | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 0, which leads with zero sized base.
24   +--- (virtual base class C0)
24   +---
24   +--- (virtual base class C2)
24   | {vfptr}
28   | {vbptr}
32   | var22: ClassType{0}
33   | var23: ClassType{0}
34   | var24: ClassType{0}
35   | var25: ClassType{0}
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

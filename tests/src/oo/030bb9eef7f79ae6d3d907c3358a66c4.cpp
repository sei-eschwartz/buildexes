// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ virtual void** func1 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_0 v19;
};
struct C1 : public virtual C0 {
/* method id 403 */ C1 ();
C1 (special_constructor);
abstract_0 v20;
abstract_0 v21;
abstract_0 v22;
};
struct C2 : public C1 {
/* method id 405 */ C2 ();
/* method id 406 */ abstract_1** func2 ();
C2 (special_constructor);
abstract_0 v41;
abstract_0 v42;
abstract_0 v43;
abstract_0 v44;
};
struct C3 : public virtual C1 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ virtual void** func4 (abstract_0 v99, abstract_0 v100);
/* method id 411 */ virtual void func2 (abstract_0 v128, abstract_0 v129, C2 v130);
C3 (special_constructor);
C2 v135;
C2 v136;
C2 v137;
C2 v138;
};
// definitions
/* method id 400 */ C0::~C0 () {
abstract_0 v0 = abstract_0();
abstract_0 v1 = abstract_0();
return;

}
/* method id 401 */ void** C0::func1 () {
return new void* ();

}
/* method id 402 */ C0::C0 () {
abstract_0 v2 = abstract_0();
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
abstract_0 v23 = abstract_0();
abstract_0 v24 = abstract_0();
abstract_0 v25 = abstract_0();
abstract_0 v26 = abstract_0();
delete (new C2 ());
return;

}
/* method id 406 */ abstract_1** C2::func2 () {
abstract_0 v39 = abstract_0();
abstract_0 v40 = abstract_0();
return ((abstract_1**) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
abstract_0 v45 = abstract_0();
abstract_0 v46 = abstract_0();
abstract_0 v47 = abstract_0();
abstract_0 v48 = abstract_0();
delete (new C1 ());
return;

}
/* method id 409 */ C3::~C3 () {
abstract_0 v64 = abstract_0();
abstract_0 v65 = abstract_0();
abstract_0 v66 = abstract_0();
abstract_0 v67 = abstract_0();
return;

}
/* method id 410 */ void** C3::func4 (abstract_0 v99, abstract_0 v100) {
abstract_0 v101 = abstract_0();
abstract_0 v102 = abstract_0();
abstract_0 v103 = abstract_0();
abstract_0 v104 = abstract_0();
delete (new C1 ());
return ((void**) 0);

}
/* method id 411 */ void C3::func2 (abstract_0 v128, abstract_0 v129, C2 v130) {
C2 v131 = *(&(*((new C2 ()))));
C2 v132 = *(&(*((new C2 ()))));
C2 v133 = *(&(*((new C2 ()))));
C2 v134 = *(&(*((new C2 ()))));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var19: AbstractType{0}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(24)
0    +---
0    | {vbptr}
4    | var20: AbstractType{0}
8    | var21: AbstractType{0}
12   | var22: AbstractType{0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var19: AbstractType{0}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
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
class C2    size(40)
0    +---
0    | +--- (base class C1)
0    | | {vbptr}
4    | | var20: AbstractType{0}
8    | | var21: AbstractType{0}
12   | | var22: AbstractType{0}
16   | +---
16   | var41: AbstractType{0}
20   | var42: AbstractType{0}
24   | var43: AbstractType{0}
28   | var44: AbstractType{0}
32   +---
32   +--- (virtual base class C0)
32   | {vfptr}
36   | var19: AbstractType{0}
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
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(192)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var135: ClassType{2}
48   | var136: ClassType{2}
88   | var137: ClassType{2}
128  | var138: ClassType{2}
168  +---
168  +--- (virtual base class C0)
168  | {vfptr}
172  | var19: AbstractType{0}
176  +---
176  +--- (virtual base class C1)
176  | {vbptr}
180  | var20: AbstractType{0}
184  | var21: AbstractType{0}
188  | var22: AbstractType{0}
192  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 192;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 176;
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

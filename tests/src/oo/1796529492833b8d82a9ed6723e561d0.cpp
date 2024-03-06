// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual abstract_0 func1 ();
/* method id 403 */ C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
C0 v2;
C0 v3;
};
struct C2  {
/* method id 405 */ abstract_0 func2 ();
/* method id 406 */ C2 ();
/* method id 407 */ virtual ~C2 ();
C2 (special_constructor);
C1 v54;
C1 v55;
};
struct C3 : public virtual C2, public virtual C1 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual ~C3 ();
C3 (special_constructor);
C1 v93;
C1 v94;
};
abstract_0 func4 (C0 v95, C1 v96, C1 v97, C1 v98);
abstract_0 func5 (C1 v99);
abstract_0 func6 (C0 v103, C1 v104, C1 v105, C1 v106);
abstract_0 func7 (C0 v111, C3 v112, C3 v113, C3 v114);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0 C1::func1 () {
return ::func5(*((new C1 ())));

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ abstract_0 C2::func2 () {
return ::func5(*(((C1*) 0)));

}
/* method id 406 */ C2::C2 () {
return;

}
/* method id 407 */ C2::~C2 () {
C1 v16 = *(&(*(((C1*) 0))));
C1 v17 = *(&(*(((C1*) 0))));
C1 v18 = *(&(*(((C1*) 0))));
C0 v19 = *(((C0*) 0));
return;

}
C2::C2 (special_constructor)  {}

/* method id 408 */ C3::C3 () {
return;

}
/* method id 409 */ C3::~C3 () {
C1 v68 = *((new C1 ()));
C1 v69 = *((new C1 ()));
C1 v70 = *((new C1 ()));
C1 v71 = *((new C1 ()));
::func5(v70);
::func5(v70);
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()), C1(special_constructor ()) {}

abstract_0 func4 (C0 v95, C1 v96, C1 v97, C1 v98) {

return (((C1*) 0))->C1::func1();

}
abstract_0 func5 (C1 v99) {
C1 v100;
C1 v101;
C1 v102;

delete (new C0 ());
return abstract_0();

}
abstract_0 func6 (C0 v103, C1 v104, C1 v105, C1 v106) {
C1 v107;
C1 v108;
C1 v109;
C1 v110;

delete (new C3 ());
return ::func5(v106);

}
abstract_0 func7 (C0 v111, C3 v112, C3 v113, C3 v114) {

return abstract_0();

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var0: ClassType{0}
9    | var1: ClassType{0}
10   | var2: ClassType{0}
11   | var3: ClassType{0}
12   +---
12   +--- (virtual base class C0)
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(28)
0    +---
0    | {vfptr}
4    | var54: ClassType{1}
16   | var55: ClassType{1}
28   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(72)
0    +---
0    | {vbptr}
4    | var93: ClassType{1}
16   | var94: ClassType{1}
28   +---
28   +--- (virtual base class C2)
28   | {vfptr}
32   | var54: ClassType{1}
44   | var55: ClassType{1}
56   +---
56   | alignment: Additional padding between virtual bases 2, which ends with a zero-sized object, and 0, which leads with zero sized base.
60   +--- (virtual base class C0)
60   +---
60   +--- (virtual base class C1)
60   | {vfptr}
64   | {vbptr}
68   | var0: ClassType{0}
69   | var1: ClassType{0}
70   | var2: ClassType{0}
71   | var3: ClassType{0}
72   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 72;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 60;
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

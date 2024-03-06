// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual abstract_0 func1 ();
/* method id 403 */ C1 ();
/* method id 404 */ virtual abstract_0 func0 (C0 v0, C0 v1);
/* method id 405 */ virtual abstract_0 func2 (C0 v5, C0 v6, C0 v7);
C1 (special_constructor);
C0 v8;
abstract_1 v9;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ virtual abstract_0 func3 (abstract_1 v147, abstract_1 v148);
C2 (special_constructor);
abstract_1 v183;
abstract_1 v184;
abstract_1 v185;
abstract_1 v186;
};
abstract_0 func4 (abstract_1 v187, abstract_1 v188, abstract_1 v189, abstract_1 v190);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0 C1::func1 () {
delete (new C1 ());
return abstract_0();

}
/* method id 403 */ C1::C1 () {
return;

}
/* method id 404 */ abstract_0 C1::func0 (C0 v0, C0 v1) {
C0 v2 = *(&(*((new C0 ()))));
C0 v3 = *(&(*((new C0 ()))));
C0 v4 = *(&(*((new C0 ()))));
return abstract_0();

}
/* method id 405 */ abstract_0 C1::func2 (C0 v5, C0 v6, C0 v7) {
return (((C2*) 0))->C2::func3(abstract_1(), abstract_1());

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_1 v10 = abstract_1();
abstract_1 v11 = abstract_1();
abstract_1 v12 = abstract_1();
abstract_1 v13 = abstract_1();
return;

}
/* method id 408 */ C2::~C2 () {
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
return;

}
/* method id 409 */ abstract_0 C2::func3 (abstract_1 v147, abstract_1 v148) {
abstract_1 v149 = abstract_1();
C0 v150 = *(((C0*) 0));
abstract_1 v151 = abstract_1();
abstract_1 v152 = abstract_1();
return ((new C1 ()))->C1::func1();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

abstract_0 func4 (abstract_1 v187, abstract_1 v188, abstract_1 v189, abstract_1 v190) {
abstract_1 v191;
abstract_1 v192;
abstract_1 v193;
abstract_1 v194;

return abstract_0();

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var8: ClassType{0}
12   | var9: AbstractType{1}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
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
class C2    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var183: AbstractType{1}
12   | var184: AbstractType{1}
16   | var185: AbstractType{1}
20   | var186: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var8: ClassType{0}
40   | var9: AbstractType{1}
44   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

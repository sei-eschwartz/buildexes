// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
/* method id 409 */ virtual abstract_0 func3 (abstract_1 v151, abstract_1 v152);
C2 (special_constructor);
abstract_1 v189;
C0 v190;
abstract_1 v191;
abstract_1 v192;
};
struct C3  {
/* method id 410 */ C3 ();
/* method id 411 */ virtual ~C3 ();
C3 (special_constructor);
abstract_1 v208;
abstract_1 v209;
abstract_1 v210;
};
abstract_0 func4 (abstract_1 v211, abstract_1 v212, abstract_1 v213, abstract_1 v214);
abstract_0 func5 (abstract_1 v219, C0 v220, abstract_1 v221, abstract_1 v222);
abstract_0 func6 ();
abstract_0 func7 (abstract_1 v230, abstract_1 v231, abstract_1 v232, C0 v233);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0 C1::func1 () {
return abstract_0();

}
/* method id 403 */ C1::C1 () {
return;

}
/* method id 404 */ abstract_0 C1::func0 (C0 v0, C0 v1) {
C0 v2 = *(&(*((new C0 ()))));
C0 v3 = *(&(*((new C0 ()))));
C0 v4 = *(&(*((new C0 ()))));
return ::func5(v9, v2, v9, v9);

}
/* method id 405 */ abstract_0 C1::func2 (C0 v5, C0 v6, C0 v7) {
return abstract_0();

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
/* method id 409 */ abstract_0 C2::func3 (abstract_1 v151, abstract_1 v152) {
abstract_1 v153 = abstract_1();
C0 v154 = *(((C0*) 0));
abstract_1 v155 = abstract_1();
abstract_1 v156 = abstract_1();
return abstract_0();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
C0 v193 = *((new C0 ()));
abstract_1 v194 = abstract_1();
abstract_1 v195 = abstract_1();
abstract_1 v196 = abstract_1();
return;

}
/* method id 411 */ C3::~C3 () {
abstract_1 v197 = abstract_1();
abstract_1 v198 = abstract_1();
abstract_1 v199 = abstract_1();
delete (new C1 ());
return;

}
C3::C3 (special_constructor)  {}

abstract_0 func4 (abstract_1 v211, abstract_1 v212, abstract_1 v213, abstract_1 v214) {
abstract_1 v215;
abstract_1 v216;
abstract_1 v217;
abstract_1 v218;

return abstract_0();

}
abstract_0 func5 (abstract_1 v219, C0 v220, abstract_1 v221, abstract_1 v222) {
abstract_1 v223;
abstract_1 v224;
abstract_1 v225;

return ::func6();

}
abstract_0 func6 () {
abstract_1 v226;
abstract_1 v227;
abstract_1 v228;
abstract_1 v229;

return abstract_0();

}
abstract_0 func7 (abstract_1 v230, abstract_1 v231, abstract_1 v232, C0 v233) {
abstract_1 v234;
abstract_1 v235;

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
8    | var189: AbstractType{1}
12   | var190: ClassType{0}
16   | var191: AbstractType{1}
20   | var192: AbstractType{1}
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
/*
class C3    size(16)
0    +---
0    | {vfptr}
4    | var208: AbstractType{1}
8    | var209: AbstractType{1}
12   | var210: AbstractType{1}
16   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
abstract_0 v0;
};
struct C1 : public C0 {
/* method id 401 */ virtual abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3, abstract_0 v4);
/* method id 402 */ C1 ();
/* method id 403 */ virtual abstract_1 func0 (abstract_0 v5, abstract_0 v6);
/* method id 404 */ virtual abstract_1 func1 (C0 v10, abstract_0 v11, abstract_0 v12);
C1 (special_constructor);
C0 v13;
abstract_2 v14;
};
struct C2 : public virtual C1 {
/* method id 405 */ C2 ();
/* method id 406 */ ~C2 ();
C2 (special_constructor);
C0 v72;
C0 v73;
C0 v74;
C0 v75;
};
struct C3 : public virtual C1 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual ~C3 ();
C3 (special_constructor);
C0 v229;
C0 v230;
C0 v231;
C0 v232;
};
abstract_1 func2 (C0 v233, C0 v234);
abstract_1 func3 (abstract_2 v238, C0 v239, C0 v240, C0 v241);
abstract_1 func4 (C0 v246, C0 v247, C0 v248, C0 v249);
abstract_1 func5 (C0 v253, C0 v254, C0 v255, C0 v256);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ abstract_1 C1::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3, abstract_0 v4) {
return abstract_1();

}
/* method id 402 */ C1::C1 () {
return;

}
/* method id 403 */ abstract_1 C1::func0 (abstract_0 v5, abstract_0 v6) {
C0 v7 = *(&(*((new C0 ()))));
C0 v8 = *(&(*((new C0 ()))));
C0 v9 = *(&(*((new C0 ()))));
return abstract_1();

}
/* method id 404 */ abstract_1 C1::func1 (C0 v10, abstract_0 v11, abstract_0 v12) {
return abstract_1();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
C0 v15 = *(&(*((new C0 ()))));
C0 v16 = *(&(*((new C0 ()))));
C0 v17 = *(&(*((new C0 ()))));
C0 v18 = *(&(*((new C0 ()))));
return;

}
/* method id 406 */ C2::~C2 () {
C0 v19 = *(((C0*) 0));
C0 v20 = *(((C0*) 0));
C0 v21 = *(((C0*) 0));
C0 v22 = *(((C0*) 0));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
abstract_2 v76 = abstract_2();
C0 v77 = *(&(*(((C0*) 0))));
C0 v78 = *(&(*(((C0*) 0))));
C0 v79 = *(&(*(((C0*) 0))));
return;

}
/* method id 408 */ C3::~C3 () {
C0 v84 = *(&(*(((C0*) 0))));
C0 v85 = *(&(*(((C0*) 0))));
C0 v86 = *(&(*(((C0*) 0))));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_1 func2 (C0 v233, C0 v234) {
C0 v235;
C0 v236;
C0 v237;

return ::func4(v234, v234, v234, v234);

}
abstract_1 func3 (abstract_2 v238, C0 v239, C0 v240, C0 v241) {
C0 v242;
C0 v243;
C0 v244;
C0 v245;

return abstract_1();

}
abstract_1 func4 (C0 v246, C0 v247, C0 v248, C0 v249) {
abstract_2 v250;
C0 v251;
C0 v252;

return abstract_1();

}
abstract_1 func5 (C0 v253, C0 v254, C0 v255, C0 v256) {
C0 v257;
C0 v258;
abstract_2 v259;
C0 v260;

return abstract_1();

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | var0: AbstractType{0}
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
class C1    size(16)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | | var0: AbstractType{0}
8    | +---
8    | var13: ClassType{0}
12   | var14: AbstractType{2}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(36)
0    +---
0    | {vbptr}
4    | var72: ClassType{0}
8    | var73: ClassType{0}
12   | var74: ClassType{0}
16   | var75: ClassType{0}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | +--- (base class C0)
24   | | var0: AbstractType{0}
28   | +---
28   | var13: ClassType{0}
32   | var14: AbstractType{2}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var229: ClassType{0}
12   | var230: ClassType{0}
16   | var231: ClassType{0}
20   | var232: ClassType{0}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | +--- (base class C0)
28   | | var0: AbstractType{0}
32   | +---
32   | var13: ClassType{0}
36   | var14: AbstractType{2}
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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

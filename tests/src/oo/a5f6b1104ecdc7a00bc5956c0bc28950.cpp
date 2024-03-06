// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
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
C0 v232;
C0 v233;
C0 v234;
C0 v235;
};
struct C3 : public virtual C2 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ virtual abstract_1 func0 ();
C3 (special_constructor);
abstract_3 v315;
abstract_0 v316;
C0 v317;
abstract_3 v318;
};
abstract_1 func2 (abstract_3 v319);
abstract_1 func3 ();
abstract_1 func4 (C0 v327, abstract_3 v328, C0 v329, abstract_2 v330);
abstract_1 func5 (C0 v334, C0 v335, C0 v336, abstract_2 v337);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ abstract_1 C1::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3, abstract_0 v4) {
return ::func3();

}
/* method id 402 */ C1::C1 () {
return;

}
/* method id 403 */ abstract_1 C1::func0 (abstract_0 v5, abstract_0 v6) {
C0 v7 = *(&(*((new C0 ()))));
C0 v8 = *(&(*((new C0 ()))));
C0 v9 = *(&(*((new C0 ()))));
return ::func3();

}
/* method id 404 */ abstract_1 C1::func1 (C0 v10, abstract_0 v11, abstract_0 v12) {
return ::func3();

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
delete (new C2 ());
return;

}
/* method id 408 */ C3::~C3 () {
abstract_2 v240 = abstract_2();
C0 v241 = *(&(*((new C0 ()))));
C0 v242 = *(&(*((new C0 ()))));
C0 v243 = *(&(*((new C0 ()))));
return;

}
/* method id 409 */ abstract_1 C3::func0 () {
return ::func2(abstract_3());

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_1 func2 (abstract_3 v319) {
abstract_3 v320;
C0 v321;
abstract_0 v322;
abstract_2 v323;

return abstract_1();

}
abstract_1 func3 () {
C0 v324;
C0 v325;
abstract_3 v326;

return (((C3*) 0))->C3::func0();

}
abstract_1 func4 (C0 v327, abstract_3 v328, C0 v329, abstract_2 v330) {
C0 v331;
C0 v332;
abstract_3 v333;

return ::func3();

}
abstract_1 func5 (C0 v334, C0 v335, C0 v336, abstract_2 v337) {
C0 v338;
abstract_3 v339;

return ::func3();

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
4    | var232: ClassType{0}
8    | var233: ClassType{0}
12   | var234: ClassType{0}
16   | var235: ClassType{0}
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
class C3    size(60)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var315: AbstractType{3}
12   | var316: AbstractType{0}
16   | var317: ClassType{0}
20   | var318: AbstractType{3}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | +--- (base class C0)
28   | | var0: AbstractType{0}
32   | +---
32   | var13: ClassType{0}
36   | var14: AbstractType{2}
40   +---
40   +--- (virtual base class C2)
40   | {vbptr}
44   | var232: ClassType{0}
48   | var233: ClassType{0}
52   | var234: ClassType{0}
56   | var235: ClassType{0}
60   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 60;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
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

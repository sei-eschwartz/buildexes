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
struct C1 : public C0 {
/* method id 402 */ virtual void func1 (void** v0, void** v1, void** v2, void** v3);
/* method id 403 */ void func1 (void** v7, void** v8, void** v9);
/* method id 404 */ void func2 (void** v11, void** v12);
/* method id 405 */ virtual void func1 (void** v14);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_0 v16;
};
struct C2  {
/* method id 407 */ C2 ();
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ virtual void func3 (abstract_0 v89, abstract_0 v90);
C2 (special_constructor);
abstract_0 v310;
abstract_0 v311;
C1 v312;
abstract_0 v313;
};
struct C3 : public virtual C2, public virtual C1 {
/* method id 410 */ C3 ();
/* method id 411 */ virtual ~C3 ();
/* method id 412 */ virtual void func3 (abstract_0 v336, C1 v337);
C3 (special_constructor);
abstract_0 v427;
abstract_0 v428;
C1 v429;
abstract_0 v430;
};
void func4 (abstract_0 v431, abstract_0 v432, abstract_0 v433, abstract_0 v434);
void func5 (abstract_0 v437, abstract_0 v438, void** v439);
void func6 (abstract_0 v440, abstract_0 v441, abstract_0 v442, abstract_0 v443);
void func7 (abstract_0 v447, C1 v448);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void C1::func1 (void** v0, void** v1, void** v2, void** v3) {
void** v4 = new void* ();
void** v5 = new void* ();
void** v6 = new void* ();
return ::func5(v16, v16, v2);

}
/* method id 403 */ void C1::func1 (void** v7, void** v8, void** v9) {
void** v10 = new void* ();
return ::func5(v16, v16, v10);

}
/* method id 404 */ void C1::func2 (void** v11, void** v12) {
abstract_0 v13 = abstract_0();
return;

}
/* method id 405 */ void C1::func1 (void** v14) {
abstract_0 v15 = abstract_0();
return ::func5(abstract_0(), abstract_0(), v14);

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_0 v17 = abstract_0();
abstract_0 v18 = abstract_0();
abstract_0 v19 = abstract_0();
abstract_0 v20 = abstract_0();
return;

}
/* method id 408 */ C2::~C2 () {
abstract_0 v21 = abstract_0();
abstract_0 v22 = abstract_0();
abstract_0 v23 = abstract_0();
abstract_0 v24 = abstract_0();
return;

}
/* method id 409 */ void C2::func3 (abstract_0 v89, abstract_0 v90) {
abstract_1 v91 = abstract_1();
abstract_0 v92 = abstract_0();
abstract_0 v93 = abstract_0();
abstract_0 v94 = abstract_0();
(&(v312))->C1::func1(new void* ());
(&(v312))->C1::func1(new void* ());
(&(v312))->C1::func1(new void* ());
(&(v312))->C1::func1(new void* ());
return ::func5(v89, v89, new void* ());

}
C2::C2 (special_constructor)  {}

/* method id 410 */ C3::C3 () {
return;

}
/* method id 411 */ C3::~C3 () {
abstract_0 v318 = abstract_0();
abstract_0 v319 = abstract_0();
abstract_0 v320 = abstract_0();
abstract_0 v321 = abstract_0();
return;

}
/* method id 412 */ void C3::func3 (abstract_0 v336, C1 v337) {
abstract_0 v338 = abstract_0();
abstract_1 v339 = abstract_1();
abstract_0 v340 = abstract_0();
C1 v341 = *(((C1*) 0));
::func7(abstract_0(), v341);
::func7(abstract_0(), v341);
::func7(abstract_0(), v341);
::func7(abstract_0(), v341);
return ::func5(abstract_0(), abstract_0(), new void* ());

}
C3::C3 (special_constructor) : C2(special_constructor ()), C1(special_constructor ()) {}

void func4 (abstract_0 v431, abstract_0 v432, abstract_0 v433, abstract_0 v434) {
abstract_0 v435;
C1 v436;

delete (new C1 ());
return (((C3*) 0))->C3::func3(abstract_0(), v436);

}
void func5 (abstract_0 v437, abstract_0 v438, void** v439) {

return;

}
void func6 (abstract_0 v440, abstract_0 v441, abstract_0 v442, abstract_0 v443) {
abstract_1 v444;
abstract_0 v445;
C1 v446;

return ::func4(abstract_0(), abstract_0(), abstract_0(), abstract_0());

}
void func7 (abstract_0 v447, C1 v448) {
abstract_0 v449;
abstract_0 v450;
C1 v451;

delete (new C2 ());
return ::func5(v450, v450, new void* ());

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
class C1    size(8)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var16: AbstractType{0}
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
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(24)
0    +---
0    | {vfptr}
4    | var310: AbstractType{0}
8    | var311: AbstractType{0}
12   | var312: ClassType{1}
20   | var313: AbstractType{0}
24   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(60)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var427: AbstractType{0}
12   | var428: AbstractType{0}
16   | var429: ClassType{1}
24   | var430: AbstractType{0}
28   +---
28   +--- (virtual base class C2)
28   | {vfptr}
32   | var310: AbstractType{0}
36   | var311: AbstractType{0}
40   | var312: ClassType{1}
48   | var313: AbstractType{0}
52   +---
52   +--- (virtual base class C1)
52   | +--- (base class C0)
52   | | {vfptr}
56   | +---
56   | var16: AbstractType{0}
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
 const size_t model_offset = 52;
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

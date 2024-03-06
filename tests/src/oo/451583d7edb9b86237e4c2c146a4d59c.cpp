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
void** v338;
};
struct C3 : public C1 {
/* method id 410 */ C3 ();
/* method id 411 */ virtual ~C3 ();
C3 (special_constructor);
abstract_0 v355;
abstract_0 v356;
abstract_0 v357;
abstract_0 v358;
};
void func4 (abstract_0 v359, abstract_0 v360, abstract_1 v361, abstract_1 v362);
void func5 (abstract_1 v367, abstract_0 v368, abstract_0 v369, abstract_0 v370);
void func6 (abstract_0 v375, abstract_0 v376, abstract_1 v377, abstract_0 v378);
void func7 (abstract_1 v381, abstract_0 v382, abstract_0 v383);
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
return;

}
/* method id 403 */ void C1::func1 (void** v7, void** v8, void** v9) {
void** v10 = new void* ();
return;

}
/* method id 404 */ void C1::func2 (void** v11, void** v12) {
abstract_0 v13 = abstract_0();
delete (new C3 ());
return ::func5(abstract_1(), v13, v13, v13);

}
/* method id 405 */ void C1::func1 (void** v14) {
abstract_0 v15 = abstract_0();
delete (new C2 ());
return ::func5(abstract_1(), v16, v16, v16);

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
return;

}
C2::C2 (special_constructor)  {}

/* method id 410 */ C3::C3 () {
void** v339 = new void* ();
abstract_1 v340 = abstract_1();
abstract_0 v341 = abstract_0();
abstract_1 v342 = abstract_1();
return;

}
/* method id 411 */ C3::~C3 () {
abstract_0 v343 = abstract_0();
abstract_0 v344 = abstract_0();
abstract_0 v345 = abstract_0();
abstract_0 v346 = abstract_0();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void func4 (abstract_0 v359, abstract_0 v360, abstract_1 v361, abstract_1 v362) {
abstract_0 v363;
abstract_0 v364;
abstract_0 v365;
abstract_1 v366;

delete (new C1 ());
return ::func6(v360, v360, v361, v360);

}
void func5 (abstract_1 v367, abstract_0 v368, abstract_0 v369, abstract_0 v370) {
abstract_1 v371;
abstract_0 v372;
abstract_0 v373;
abstract_0 v374;

return;

}
void func6 (abstract_0 v375, abstract_0 v376, abstract_1 v377, abstract_0 v378) {
abstract_0 v379;
abstract_0 v380;

delete (new C2 ());
return ::func5(v377, v376, v376, v376);

}
void func7 (abstract_1 v381, abstract_0 v382, abstract_0 v383) {
abstract_0 v384;
abstract_0 v385;
abstract_0 v386;

return;

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
class C2    size(8)
0    +---
0    | {vfptr}
4    | var338: DeletablePtrType{PtrType{VoidType{}}}
8    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(24)
0    +---
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | +---
4    | | var16: AbstractType{0}
8    | +---
8    | var355: AbstractType{0}
12   | var356: AbstractType{0}
16   | var357: AbstractType{0}
20   | var358: AbstractType{0}
24   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

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
/* method id 403 */ virtual void func1 (void** v7, void** v8, void** v9);
/* method id 404 */ C1 ();
/* method id 405 */ virtual ~C1 ();
C1 (special_constructor);
abstract_0 v29;
};
struct C2  {
/* method id 406 */ C2 ();
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ virtual void func1 (abstract_0 v92, abstract_0 v93);
C2 (special_constructor);
abstract_0 v278;
abstract_0 v279;
abstract_0 v280;
abstract_0 v281;
};
struct C3  {
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ virtual void func1 (abstract_0 v351, C1 v352);
C3 (special_constructor);
abstract_0 v442;
abstract_0 v443;
C1 v444;
abstract_0 v445;
};
void func2 ();
void func3 (abstract_0 v450, abstract_0 v451, abstract_0 v452, abstract_0 v453);
void func4 (abstract_0 v457, C1 v458);
void func5 (abstract_0 v462, abstract_0 v463, abstract_0 v464, abstract_1 v465);
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
abstract_0 v10 = abstract_0();
abstract_0 v11 = abstract_0();
abstract_0 v12 = abstract_0();
return ::func5(abstract_0(), abstract_0(), abstract_0(), abstract_1());

}
/* method id 404 */ C1::C1 () {
abstract_0 v13 = abstract_0();
abstract_0 v14 = abstract_0();
abstract_0 v15 = abstract_0();
abstract_0 v16 = abstract_0();
return;

}
/* method id 405 */ C1::~C1 () {
abstract_0 v25 = abstract_0();
abstract_0 v26 = abstract_0();
abstract_0 v27 = abstract_0();
abstract_0 v28 = abstract_0();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
abstract_0 v30 = abstract_0();
abstract_0 v31 = abstract_0();
abstract_0 v32 = abstract_0();
abstract_0 v33 = abstract_0();
return;

}
/* method id 407 */ C2::~C2 () {
abstract_0 v34 = abstract_0();
abstract_0 v35 = abstract_0();
abstract_0 v36 = abstract_0();
abstract_0 v37 = abstract_0();
return;

}
/* method id 408 */ void C2::func1 (abstract_0 v92, abstract_0 v93) {
abstract_1 v94 = abstract_1();
abstract_0 v95 = abstract_0();
abstract_0 v96 = abstract_0();
abstract_0 v97 = abstract_0();
return;

}
C2::C2 (special_constructor)  {}

/* method id 409 */ C3::C3 () {
C1 v282 = *(&(*(((C1*) 0))));
return;

}
/* method id 410 */ C3::~C3 () {
abstract_0 v291 = abstract_0();
C1 v292 = *((new C1 ()));
return;

}
/* method id 411 */ void C3::func1 (abstract_0 v351, C1 v352) {
abstract_0 v353 = abstract_0();
abstract_1 v354 = abstract_1();
abstract_0 v355 = abstract_0();
C1 v356 = *(((C1*) 0));
return;

}
C3::C3 (special_constructor)  {}

void func2 () {
C1 v446;
abstract_0 v447;
abstract_0 v448;
abstract_0 v449;

return;

}
void func3 (abstract_0 v450, abstract_0 v451, abstract_0 v452, abstract_0 v453) {
abstract_1 v454;
abstract_0 v455;
C1 v456;

return ::func4(v451, *((new C1 ())));

}
void func4 (abstract_0 v457, C1 v458) {
abstract_0 v459;
abstract_0 v460;
C1 v461;

delete (new C1 ());
return ::func3(abstract_0(), abstract_0(), abstract_0(), abstract_0());

}
void func5 (abstract_0 v462, abstract_0 v463, abstract_0 v464, abstract_1 v465) {
abstract_0 v466;
abstract_0 v467;
C1 v468;

delete (new C1 ());
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
4    | var29: AbstractType{0}
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
class C2    size(20)
0    +---
0    | {vfptr}
4    | var278: AbstractType{0}
8    | var279: AbstractType{0}
12   | var280: AbstractType{0}
16   | var281: AbstractType{0}
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
}
/*
class C3    size(24)
0    +---
0    | {vfptr}
4    | var442: AbstractType{0}
8    | var443: AbstractType{0}
12   | var444: ClassType{1}
20   | var445: AbstractType{0}
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
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

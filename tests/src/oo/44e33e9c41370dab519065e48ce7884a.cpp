// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
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
/* method id 410 */ virtual void func1 (void** v180);
C2 (special_constructor);
abstract_0 v182;
};
struct C3 : public virtual C2, public virtual C1 {
/* method id 411 */ C3 ();
/* method id 412 */ virtual ~C3 ();
/* method id 413 */ virtual void func3 (abstract_0 v213, abstract_0 v214);
/* method id 414 */ virtual void func3 (abstract_0 v269, abstract_1 v270, abstract_1 v271, abstract_0 v272);
C3 (special_constructor);
abstract_0 v277;
abstract_0 v278;
abstract_0 v279;
abstract_0 v280;
};
void func4 (abstract_0 v281, void** v282, void** v283);
void func5 (abstract_0 v284);
void func6 ();
void func7 ();
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
return;

}
/* method id 405 */ void C1::func1 (void** v14) {
abstract_0 v15 = abstract_0();
return;

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
/* method id 410 */ void C2::func1 (void** v180) {
abstract_1 v181 = abstract_1();
return ::func5(v182);

}
C2::C2 (special_constructor)  {}

/* method id 411 */ C3::C3 () {
abstract_0 v183 = abstract_0();
abstract_0 v184 = abstract_0();
abstract_0 v185 = abstract_0();
abstract_0 v186 = abstract_0();
return;

}
/* method id 412 */ C3::~C3 () {
abstract_0 v187 = abstract_0();
abstract_0 v188 = abstract_0();
abstract_0 v189 = abstract_0();
abstract_0 v190 = abstract_0();
return;

}
/* method id 413 */ void C3::func3 (abstract_0 v213, abstract_0 v214) {
abstract_1 v215 = abstract_1();
abstract_0 v216 = abstract_0();
abstract_0 v217 = abstract_0();
abstract_0 v218 = abstract_0();
return ::func5(v213);

}
/* method id 414 */ void C3::func3 (abstract_0 v269, abstract_1 v270, abstract_1 v271, abstract_0 v272) {
abstract_1 v273 = abstract_1();
void** v274 = new void* ();
void** v275 = new void* ();
abstract_1 v276 = abstract_1();
return ::func5(v182);

}
C3::C3 (special_constructor) : C2(special_constructor ()), C1(special_constructor ()) {}

void func4 (abstract_0 v281, void** v282, void** v283) {

return;

}
void func5 (abstract_0 v284) {

return;

}
void func6 () {
abstract_2 v285;

return;

}
void func7 () {
abstract_0 v286;
void** v287;
void** v288;
abstract_0 v289;

return ::func4(v286, v288, v288);

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
4    | var182: AbstractType{0}
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
class C3    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var277: AbstractType{0}
12   | var278: AbstractType{0}
16   | var279: AbstractType{0}
20   | var280: AbstractType{0}
24   | {vtordisp for vbase 2}
28   +---
28   +--- (virtual base class C2)
28   | {vfptr}
32   | var182: AbstractType{0}
36   +---
36   +--- (virtual base class C1)
36   | +--- (base class C0)
36   | | {vfptr}
40   | +---
40   | var16: AbstractType{0}
44   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 44;
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
 const size_t model_offset = 36;
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

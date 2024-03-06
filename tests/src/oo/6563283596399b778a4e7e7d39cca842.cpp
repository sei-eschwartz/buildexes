// type for special constructors
struct special_constructor {};
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ virtual abstract_4 func0 (abstract_3 v4, abstract_3 v5, abstract_1 v6, abstract_4** v7);
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_1 v106;
abstract_1 v107;
};
struct C1 : public C0 {
/* method id 403 */ C1 ();
/* method id 404 */ virtual ~C1 ();
/* method id 405 */ virtual void func0 ();
C1 (special_constructor);
};
struct C2 : public C0 {
/* method id 406 */ C2 ();
C2 (special_constructor);
};
struct C3  {
/* method id 407 */ virtual ~C3 ();
/* method id 408 */ virtual void func1 (abstract_4*** v122, abstract_3 v123, abstract_1 v124, abstract_9 v125);
/* method id 409 */ C3 ();
C3 (special_constructor);
};
abstract_6 func3 (abstract_4* v130, abstract_4* v131, abstract_1 v132, abstract_1 v133);
abstract_4 func4 (abstract_0 v138, abstract_1 v139, abstract_4** v140, abstract_1 v141);
abstract_7* func5 (abstract_4** v146, abstract_3 v147, abstract_4* v148, abstract_4* v149);
// definitions
/* method id 400 */ C0::~C0 () {
abstract_0 v0 = abstract_0();
abstract_0 v1 = abstract_0();
abstract_1 v2 = abstract_1();
abstract_2 v3 = abstract_2();
v107 = abstract_1();
v107 = abstract_1();
v107 = abstract_1();
v107 = abstract_1();
return;

}
/* method id 401 */ abstract_4 C0::func0 (abstract_3 v4, abstract_3 v5, abstract_1 v6, abstract_4** v7) {
abstract_4** v8 = new abstract_4* ();
abstract_2 v9 = abstract_2();
v7 = v8;
return abstract_4();

}
/* method id 402 */ C0::C0 () {
abstract_1 v14 = abstract_1();
abstract_1 v15 = abstract_1();
abstract_1 v16 = abstract_1();
abstract_2 v17 = abstract_2();
v107 = abstract_1();
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {
abstract_1 v108 = abstract_1();
abstract_1 v109 = abstract_1();
abstract_1 v110 = abstract_1();
abstract_1 v111 = abstract_1();
delete (new C3 ());
return;

}
/* method id 404 */ C1::~C1 () {
abstract_4* v116 = new abstract_4 ();
abstract_4** v117 = new abstract_4* ();
abstract_1 v118 = abstract_1();
return;

}
/* method id 405 */ void C1::func0 () {
abstract_2 v119 = abstract_2();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C3::~C3 () {
abstract_8 v120 = abstract_8();
abstract_1 v121 = abstract_1();
delete (new C2 ());
return;

}
/* method id 408 */ void C3::func1 (abstract_4*** v122, abstract_3 v123, abstract_1 v124, abstract_9 v125) {
void* v126 = ((void*) 0);
abstract_0 v127 = abstract_0();
abstract_0 v128 = abstract_0();
abstract_1 v129 = abstract_1();
return;

}
/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

abstract_6 func3 (abstract_4* v130, abstract_4* v131, abstract_1 v132, abstract_1 v133) {
abstract_10 v134;
abstract_0 v135;
abstract_4** v136;
abstract_10 v137;

return abstract_6();

}
abstract_4 func4 (abstract_0 v138, abstract_1 v139, abstract_4** v140, abstract_1 v141) {
abstract_3 v142;
abstract_2 v143;
abstract_8 v144;
abstract_9 v145;

return abstract_4();

}
abstract_7* func5 (abstract_4** v146, abstract_3 v147, abstract_4* v148, abstract_4* v149) {

delete (new C1 ());
return new abstract_7 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var106: AbstractType{1}
8    | var107: AbstractType{1}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
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
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var106: AbstractType{1}
8    | | var107: AbstractType{1}
12   | +---
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
class C2    size(12)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var106: AbstractType{1}
8    | | var107: AbstractType{1}
12   | +---
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 4;
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

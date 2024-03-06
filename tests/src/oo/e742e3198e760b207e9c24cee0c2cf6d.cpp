// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ C0 func0 (abstract_1 v4);
C1 (special_constructor);
abstract_0 v5;
};
struct C2 : public virtual C1 {
/* method id 403 */ C0 func0 ();
/* method id 404 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C0, public C2 {
/* method id 405 */ C3 ();
/* method id 406 */ virtual ~C3 ();
/* method id 407 */ virtual C0 func1 (C0* v76, C0* v77, C0* v78, abstract_1 v79);
/* method id 408 */ C0 func1 (C0* v109, abstract_1 v110, abstract_5 v111, C0* v112);
C3 (special_constructor);
};
C0 func2 (abstract_0 v113);
C0 func3 (C0* v114, abstract_3 v115);
C0 func4 (C1 v119, C0* v120);
C0 func5 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
v5 = abstract_0();
v5 = abstract_0();
v5 = abstract_0();
return;

}
/* method id 402 */ C0 C1::func0 (abstract_1 v4) {
delete (new C1 ());
return ::func4(*(this), &(::func5()));

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C0 C2::func0 () {
C0* v6 = ((C0*) 0);
abstract_2 v7 = abstract_2();
abstract_0 v8 = abstract_0();
C0* v9 = ((C0*) 0);
::func2(v8);
delete (new C1 ());
return *(((C0*) 0));

}
/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
abstract_3 v10 = abstract_3();
C0* v11 = &(*(((C0*) 0)));
C0* v12 = &(*(((C0*) 0)));
C0* v13 = &(*(((C0*) 0)));
return;

}
/* method id 406 */ C3::~C3 () {
C0* v18 = (new C0 ());
C0* v19 = (new C0 ());
C0* v20 = (new C0 ());
C0* v21 = (new C0 ());
return;

}
/* method id 407 */ C0 C3::func1 (C0* v76, C0* v77, C0* v78, abstract_1 v79) {
abstract_4 v80 = abstract_4();
C0* v81 = (new C0 ());
C0* v82 = (new C0 ());
C0* v83 = (new C0 ());
return ::func3(v77, abstract_3());

}
/* method id 408 */ C0 C3::func1 (C0* v109, abstract_1 v110, abstract_5 v111, C0* v112) {
delete (new C3 ());
return *(v112);

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

C0 func2 (abstract_0 v113) {

v113 = v113;
v113 = v113;
v113 = v113;
v113 = v113;
return (((C1*) 0))->C1::func0(abstract_1());

}
C0 func3 (C0* v114, abstract_3 v115) {
abstract_0 v116;
C0* v117;
C0* v118;

delete (new C3 ());
return ::func4(*(((C1*) 0)), v114);

}
C0 func4 (C1 v119, C0* v120) {

delete (new C1 ());
return ::func5();

}
C0 func5 () {
abstract_2 v121;
C1 v122;
C0* v123;
abstract_2 v124;

return ::func2(abstract_0());

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
class C1    size(4)
0    +---
0    | var5: AbstractType{0}
4    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(8)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C1)
4    | var5: AbstractType{0}
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
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(12)
0    +---
0    | {vfptr}
4    | +--- (base class C2)
4    | | {vbptr}
8    | +---
8    +---
8    +--- (virtual base class C0)
8    +---
8    +--- (virtual base class C1)
8    | var5: AbstractType{0}
12   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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

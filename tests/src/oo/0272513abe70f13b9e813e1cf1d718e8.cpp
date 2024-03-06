// type for special constructors
struct special_constructor {};
struct abstract_5 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
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
/* method id 407 */ virtual C0 func1 ();
/* method id 408 */ virtual C0 func0 (C0* v45, C0* v46, abstract_1 v47, C0* v48);
C3 (special_constructor);
abstract_0 v49;
};
C0 func3 (C0* v50, abstract_4 v51);
C0 func4 ();
abstract_5 func5 (C0* v54, abstract_3 v55, C0* v56, C0 v57);
C0 func6 (C0* v62);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
::func6(v1);
::func6(v1);
return;

}
/* method id 402 */ C0 C1::func0 (abstract_1 v4) {
delete (new C2 ());
return ::func3((C0*)((new C3 ())), abstract_4());

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C0 C2::func0 () {
C0* v6 = ((C0*) 0);
abstract_2 v7 = abstract_2();
abstract_0 v8 = abstract_0();
C0* v9 = ((C0*) 0);
return *(v6);

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
/* method id 407 */ C0 C3::func1 () {
delete (new C1 ());
return ::func3((C0*)((new C3 ())), abstract_4());

}
/* method id 408 */ C0 C3::func0 (C0* v45, C0* v46, abstract_1 v47, C0* v48) {
return ::func4();

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

C0 func3 (C0* v50, abstract_4 v51) {

return *(v50);

}
C0 func4 () {
abstract_4 v52;
abstract_3 v53;

delete (new C1 ());
return ::func3(((C0*) 0), v52);

}
abstract_5 func5 (C0* v54, abstract_3 v55, C0* v56, C0 v57) {
abstract_0 v58;
abstract_4 v59;
abstract_0 v60;
abstract_0 v61;

delete (new C0 ());
return abstract_5();

}
C0 func6 (C0* v62) {

delete (new C1 ());
return ::func4();

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
class C3    size(16)
0    +---
0    | {vfptr}
4    | +--- (base class C2)
4    | | {vbptr}
8    | +---
8    | var49: AbstractType{0}
12   +---
12   +--- (virtual base class C0)
12   +---
12   +--- (virtual base class C1)
12   | var5: AbstractType{0}
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
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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

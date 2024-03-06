// type for special constructors
struct special_constructor {};
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
C1 (special_constructor);
};
struct C2 : public C0 {
/* method id 402 */ virtual ~C2 ();
/* method id 403 */ C2 ();
/* method id 404 */ virtual C1** func1 (abstract_1 v102, abstract_1 v103, abstract_1 v104, abstract_1 v105);
C2 (special_constructor);
abstract_1 v273;
abstract_1 v274;
abstract_2 v275;
abstract_1 v276;
};
struct C3 : public virtual C0, public virtual C1 {
/* method id 405 */ virtual ~C3 ();
/* method id 406 */ C3 ();
C3 (special_constructor);
abstract_1 v512;
abstract_1 v513;
abstract_2 v514;
};
// definitions
/* method id 400 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 402 */ C2::~C2 () {
abstract_1 v1 = abstract_1();
abstract_0 v2 = abstract_0();
abstract_1 v3 = abstract_1();
abstract_1 v4 = abstract_1();
return;

}
/* method id 403 */ C2::C2 () {
C1 v5 = *(&(*((new C1 ()))));
abstract_1 v6 = abstract_1();
C1 v7 = *(&(*((new C1 ()))));
return;

}
/* method id 404 */ C1** C2::func1 (abstract_1 v102, abstract_1 v103, abstract_1 v104, abstract_1 v105) {
abstract_1 v106 = abstract_1();
abstract_1 v107 = abstract_1();
abstract_1 v108 = abstract_1();
abstract_1 v109 = abstract_1();
delete (new C1 ());
return ((C1**) 0);

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C3::~C3 () {
abstract_1 v277 = abstract_1();
abstract_1 v278 = abstract_1();
abstract_1 v279 = abstract_1();
abstract_1 v280 = abstract_1();
delete (new C1 ());
return;

}
/* method id 406 */ C3::C3 () {
abstract_1 v281 = abstract_1();
C1 v282 = *((new C1 ()));
abstract_1 v283 = abstract_1();
abstract_1 v284 = abstract_1();
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

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
class C1    size(8)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | var0: AbstractType{0}
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
class C2    size(24)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | | var0: AbstractType{0}
8    | +---
8    | var273: AbstractType{1}
12   | var274: AbstractType{1}
16   | var275: AbstractType{2}
20   | var276: AbstractType{1}
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
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var512: AbstractType{1}
12   | var513: AbstractType{1}
16   | var514: AbstractType{2}
20   +---
20   +--- (virtual base class C0)
20   | var0: AbstractType{0}
24   +---
24   +--- (virtual base class C1)
24   | {vbptr}
28   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
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

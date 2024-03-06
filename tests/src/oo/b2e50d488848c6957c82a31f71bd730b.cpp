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
/* method id 400 */ C0 ();
C0 (special_constructor);
abstract_0* v0;
};
struct C1 : public C0 {
/* method id 401 */ virtual abstract_0 func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4);
/* method id 402 */ abstract_0 func0 (abstract_0* v8, abstract_0* v9, abstract_0* v10);
/* method id 403 */ void func1 (abstract_0* v12, abstract_0* v13);
/* method id 404 */ virtual void func1 (abstract_0* v15);
/* method id 405 */ C1 ();
C1 (special_constructor);
abstract_1 v17;
};
struct C2  {
/* method id 406 */ C2 ();
/* method id 407 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1 v102;
abstract_1 v103;
abstract_1 v104;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ C3 ();
C3 (special_constructor);
abstract_1 v193;
abstract_2 v194;
abstract_1 v195;
abstract_1 v196;
};
void func3 (abstract_2 v197, abstract_1 v198, abstract_1 v199, abstract_1 v200);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ abstract_0 C1::func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, abstract_0* v4) {
abstract_0* v5 = new abstract_0 ();
abstract_0* v6 = new abstract_0 ();
abstract_0* v7 = new abstract_0 ();
return abstract_0();

}
/* method id 402 */ abstract_0 C1::func0 (abstract_0* v8, abstract_0* v9, abstract_0* v10) {
abstract_0* v11 = new abstract_0 ();
delete (new C2 ());
return abstract_0();

}
/* method id 403 */ void C1::func1 (abstract_0* v12, abstract_0* v13) {
abstract_1 v14 = abstract_1();
return;

}
/* method id 404 */ void C1::func1 (abstract_0* v15) {
abstract_1 v16 = abstract_1();
return;

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
abstract_1 v18 = abstract_1();
abstract_1 v19 = abstract_1();
abstract_1 v20 = abstract_1();
abstract_1 v21 = abstract_1();
return;

}
/* method id 407 */ C2::~C2 () {
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
abstract_1 v25 = abstract_1();
delete (new C1 ());
return;

}
C2::C2 (special_constructor)  {}

/* method id 408 */ C3::~C3 () {
abstract_1 v105 = abstract_1();
abstract_1 v106 = abstract_1();
abstract_1 v107 = abstract_1();
abstract_1 v108 = abstract_1();
delete (new C1 ());
return;

}
/* method id 409 */ C3::C3 () {
abstract_1 v113 = abstract_1();
abstract_2 v114 = abstract_2();
abstract_1 v115 = abstract_1();
abstract_1 v116 = abstract_1();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void func3 (abstract_2 v197, abstract_1 v198, abstract_1 v199, abstract_1 v200) {
abstract_1 v201;
abstract_1 v202;
abstract_1 v203;
abstract_1 v204;

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | var0: PtrType{AbstractType{0}}
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
class C1    size(12)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | | var0: PtrType{AbstractType{0}}
8    | +---
8    | var17: AbstractType{1}
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
class C2    size(16)
0    +---
0    | {vfptr}
4    | var102: AbstractType{1}
8    | var103: AbstractType{1}
12   | var104: AbstractType{1}
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(48)
0    +---
0    | {vbptr}
4    | var193: AbstractType{1}
8    | var194: AbstractType{2}
12   | var195: AbstractType{1}
16   | var196: AbstractType{1}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | +--- (base class C0)
24   | | var0: PtrType{AbstractType{0}}
28   | +---
28   | var17: AbstractType{1}
32   +---
32   +--- (virtual base class C2)
32   | {vfptr}
36   | var102: AbstractType{1}
40   | var103: AbstractType{1}
44   | var104: AbstractType{1}
48   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
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

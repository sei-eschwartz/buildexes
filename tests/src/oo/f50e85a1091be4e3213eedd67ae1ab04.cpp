// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0**** func0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ abstract_0**** func0 ();
/* method id 403 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 404 */ virtual ~C2 ();
/* method id 405 */ C2 ();
/* method id 406 */ abstract_0* func1 (abstract_1 v2);
C2 (special_constructor);
C1 v3;
};
struct C3 : public C1 {
/* method id 407 */ C3 ();
C3 (special_constructor);
abstract_1 v8;
C1 v9;
C1 v10;
};
abstract_0 func2 ();
abstract_0* func3 (abstract_1 v13, abstract_1 v14, abstract_1 v15);
abstract_0 func4 (abstract_1 v17);
// definitions
/* method id 400 */ abstract_0**** C0::func0 () {
delete (new C2 ());
return new abstract_0*** ();

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0**** C1::func0 () {
return new abstract_0*** ();

}
/* method id 403 */ C1::C1 () {
delete (new C0 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::~C2 () {
C1 v0 = *(((C1*) 0));
return;

}
/* method id 405 */ C2::C2 () {
C1 v1 = *(((C1*) 0));
return;

}
/* method id 406 */ abstract_0* C2::func1 (abstract_1 v2) {
return new abstract_0 ();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
C1 v4 = *(((C1*) 0));
C1 v5 = *(((C1*) 0));
abstract_1 v6 = abstract_1();
abstract_1 v7 = abstract_1();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0 func2 () {
abstract_1 v11;
C1 v12;

v12 = v12;
v12 = v12;
v12 = v12;
v12 = v12;
return ::func4(abstract_1());

}
abstract_0* func3 (abstract_1 v13, abstract_1 v14, abstract_1 v15) {
abstract_1 v16;

v13 = abstract_1();
v13 = abstract_1();
v13 = abstract_1();
v13 = abstract_1();
return ((abstract_0*) 0);

}
abstract_0 func4 (abstract_1 v17) {
abstract_1 v18;
abstract_1 v19;
abstract_1 v20;
C3 v21;

v17 = v18;
v17 = v18;
return ::func2();

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
class C1    size(12)
0    +---
0    | {vbptr}
4    | {vtordisp for vbase 0}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
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
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var3: ClassType{1}
20   | {vtordisp for vbase 0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vbptr}
32   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(40)
0    +---
0    | +--- (base class C1)
0    | | {vbptr}
4    | +---
4    | var8: AbstractType{1}
8    | var9: ClassType{1}
20   | var10: ClassType{1}
32   | {vtordisp for vbase 0}
36   +---
36   +--- (virtual base class C0)
36   | {vfptr}
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
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

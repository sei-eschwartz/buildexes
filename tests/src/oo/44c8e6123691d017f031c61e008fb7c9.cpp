// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_5 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ C0 ();
/* method id 402 */ virtual abstract_2 func0 ();
/* method id 403 */ virtual abstract_2 func1 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual abstract_5 func0 (abstract_4 v14, abstract_1 v15);
/* method id 405 */ virtual ~C1 ();
/* method id 406 */ abstract_2 func1 ();
/* method id 407 */ C1 ();
C1 (special_constructor);
C0 v29;
abstract_6 v30;
abstract_0 v31;
};
struct C2 : public virtual C1 {
/* method id 408 */ C2 ();
C2 (special_constructor);
C0 v32;
};
struct C3  {
/* method id 410 */ C3 ();
C3 (special_constructor);
};
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
abstract_1 v4 = abstract_1();
abstract_3 v5 = abstract_3();
abstract_3 v6 = abstract_3();
abstract_1 v7 = abstract_1();
v7 = abstract_1();
return abstract_2();

}
/* method id 401 */ C0::C0 () {
abstract_3 v8 = abstract_3();
return;

}
/* method id 402 */ abstract_2 C0::func0 () {
abstract_0 v9 = abstract_0();
abstract_2* v10 = new abstract_2 ();
abstract_4 v11 = abstract_4();
abstract_1 v12 = abstract_1();
v9 = v9;
v9 = v9;
return abstract_2();

}
/* method id 403 */ abstract_2 C0::func1 () {
abstract_0 v13 = abstract_0();
return abstract_2();

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_5 C1::func0 (abstract_4 v14, abstract_1 v15) {
return abstract_5();

}
/* method id 405 */ C1::~C1 () {
abstract_1 v16 = abstract_1();
abstract_1 v17 = abstract_1();
abstract_6 v18 = abstract_6();
abstract_2* v19 = new abstract_2 ();
delete (new C2 ());
return;

}
/* method id 406 */ abstract_2 C1::func1 () {
abstract_6 v20 = abstract_6();
abstract_4 v21 = abstract_4();
abstract_2* v22 = new abstract_2 ();
abstract_1 v23 = abstract_1();
return abstract_2();

}
/* method id 407 */ C1::C1 () {
abstract_1 v25 = abstract_1();
abstract_2* v26 = new abstract_2 ();
abstract_2* v27 = new abstract_2 ();
abstract_4 v28 = abstract_4();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var29: ClassType{0}
12   | var30: AbstractType{6}
16   | var31: AbstractType{0}
20   | {vtordisp for vbase 0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(36)
0    +---
0    | {vbptr}
4    | var32: ClassType{0}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var29: ClassType{0}
28   | var30: AbstractType{6}
32   | var31: AbstractType{0}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(0)
0    +---
0    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 1;
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

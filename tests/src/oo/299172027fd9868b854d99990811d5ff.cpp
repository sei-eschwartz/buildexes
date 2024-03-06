// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ C0 ();
/* method id 403 */ virtual abstract_2 func0 (abstract_3 v8);
C0 (special_constructor);
abstract_1 v9;
abstract_1 v10;
abstract_1 v11;
abstract_1 v12;
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
/* method id 405 */ abstract_2 func0 (abstract_1 v21, abstract_2** v22, abstract_1 v23);
/* method id 406 */ void func1 (abstract_1 v24, abstract_0 v25);
/* method id 407 */ virtual void func1 (abstract_0 v27);
C1 (special_constructor);
abstract_1 v29;
};
struct C2 : public virtual C1 {
/* method id 408 */ C2 ();
/* method id 409 */ virtual void func1 (abstract_1 v34, abstract_1 v35);
/* method id 410 */ virtual void func0 (abstract_4 v60, abstract_1 v61);
/* method id 411 */ virtual void func1 (abstract_2** v63, C0 v64);
C2 (special_constructor);
abstract_0 v69;
};
struct C3 : public virtual C1 {
/* method id 412 */ C3 ();
C3 (special_constructor);
abstract_1 v71;
abstract_6 v72;
};
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
v9 = v12;
v9 = v12;
v9 = v12;
v9 = v12;
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
delete (new C2 ());
return abstract_2();

}
/* method id 402 */ C0::C0 () {
abstract_0 v7 = abstract_0();
delete (new C1 ());
return;

}
/* method id 403 */ abstract_2 C0::func0 (abstract_3 v8) {
return abstract_2();

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
abstract_1 v13 = abstract_1();
abstract_1 v14 = abstract_1();
abstract_3 v15 = abstract_3();
abstract_3 v16 = abstract_3();
delete (new C2 ());
return;

}
/* method id 405 */ abstract_2 C1::func0 (abstract_1 v21, abstract_2** v22, abstract_1 v23) {
v11 = abstract_1();
v11 = abstract_1();
v11 = abstract_1();
return abstract_2();

}
/* method id 406 */ void C1::func1 (abstract_1 v24, abstract_0 v25) {
abstract_4 v26 = abstract_4();
v24 = v12;
return;

}
/* method id 407 */ void C1::func1 (abstract_0 v27) {
abstract_4 v28 = abstract_4();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {
abstract_1 v30 = abstract_1();
abstract_3 v31 = abstract_3();
abstract_1 v32 = abstract_1();
abstract_1 v33 = abstract_1();
return;

}
/* method id 409 */ void C2::func1 (abstract_1 v34, abstract_1 v35) {
abstract_4 v36 = abstract_4();
abstract_1 v37 = abstract_1();
abstract_1 v38 = abstract_1();
abstract_1 v39 = abstract_1();
return;

}
/* method id 410 */ void C2::func0 (abstract_4 v60, abstract_1 v61) {
abstract_0 v62 = abstract_0();
return (((C2*) 0))->C2::func1(new abstract_2* (), *((new C0 ())));

}
/* method id 411 */ void C2::func1 (abstract_2** v63, C0 v64) {
abstract_0 v65 = abstract_0();
abstract_3 v66 = abstract_3();
abstract_5 v67 = abstract_5();
abstract_2** v68 = new abstract_2* ();
delete (new C1 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {
abstract_0 v70 = abstract_0();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var9: AbstractType{1}
8    | var10: AbstractType{1}
12   | var11: AbstractType{1}
16   | var12: AbstractType{1}
20   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var29: AbstractType{1}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var9: AbstractType{1}
20   | var10: AbstractType{1}
24   | var11: AbstractType{1}
28   | var12: AbstractType{1}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var69: AbstractType{0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var9: AbstractType{1}
20   | var10: AbstractType{1}
24   | var11: AbstractType{1}
28   | var12: AbstractType{1}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   | var29: AbstractType{1}
44   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(44)
0    +---
0    | {vbptr}
4    | var71: AbstractType{1}
8    | var72: AbstractType{6}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var9: AbstractType{1}
20   | var10: AbstractType{1}
24   | var11: AbstractType{1}
28   | var12: AbstractType{1}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   | var29: AbstractType{1}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
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

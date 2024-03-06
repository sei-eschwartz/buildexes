// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_5 { int x; };
struct abstract_0 { int x; };
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
abstract_0 v2;
abstract_0 v3;
abstract_0 v4;
abstract_0 v5;
};
struct C1 : public virtual C0 {
/* method id 401 */ virtual abstract_1* func0 (abstract_0 v6);
/* method id 402 */ C1 ();
C1 (special_constructor);
abstract_0 v12;
abstract_0 v13;
abstract_0 v14;
};
struct C2 : public C1 {
/* method id 403 */ virtual ~C2 ();
/* method id 404 */ C2 ();
C2 (special_constructor);
C1 v21;
C1 v22;
C1 v23;
C1 v24;
};
struct C3  {
/* method id 405 */ virtual abstract_1* func0 (abstract_2 v25);
/* method id 406 */ virtual ~C3 ();
/* method id 407 */ C3 ();
/* method id 408 */ virtual abstract_1* func0 (abstract_0 v29);
C3 (special_constructor);
C1 v30;
C1 v31;
abstract_3 v32;
abstract_0 v33;
};
abstract_1 func1 ();
abstract_1* func2 (abstract_3 v37, C1 v38);
abstract_1* func3 (abstract_4 v40, C1 v41, C1 v42, abstract_1*** v43);
abstract_5 func4 (abstract_4 v47, C1 v48);
// definitions
/* method id 400 */ C0::C0 () {
abstract_0 v0 = abstract_0();
abstract_0 v1 = abstract_0();
::func2(abstract_3(), *((new C1 ())));
::func2(abstract_3(), *((new C1 ())));
::func2(abstract_3(), *((new C1 ())));
::func2(abstract_3(), *((new C1 ())));
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ abstract_1* C1::func0 (abstract_0 v6) {
abstract_0 v7 = abstract_0();
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
return ((abstract_1*) 0);

}
/* method id 402 */ C1::C1 () {
abstract_0 v11 = abstract_0();
delete (new C0 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::~C2 () {
abstract_0 v15 = abstract_0();
abstract_0 v16 = abstract_0();
abstract_0 v17 = abstract_0();
abstract_0 v18 = abstract_0();
v4 = v14;
v4 = abstract_0();
v4 = abstract_0();
v4 = abstract_0();
return;

}
/* method id 404 */ C2::C2 () {
delete (new C3 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 405 */ abstract_1* C3::func0 (abstract_2 v25) {
return ((abstract_1*) 0);

}
/* method id 406 */ C3::~C3 () {
abstract_2 v26 = abstract_2();
return;

}
/* method id 407 */ C3::C3 () {
abstract_2 v27 = abstract_2();
C1 v28 = *(((C1*) 0));
return;

}
/* method id 408 */ abstract_1* C3::func0 (abstract_0 v29) {
return ((abstract_1*) 0);

}
C3::C3 (special_constructor)  {}

abstract_1 func1 () {
abstract_3 v34;
C1 v35;
abstract_0 v36;

return abstract_1();

}
abstract_1* func2 (abstract_3 v37, C1 v38) {
abstract_3 v39;

return ((abstract_1*) 0);

}
abstract_1* func3 (abstract_4 v40, C1 v41, C1 v42, abstract_1*** v43) {
abstract_1*** v44;
C1 v45;
abstract_0 v46;

return new abstract_1 ();

}
abstract_5 func4 (abstract_4 v47, C1 v48) {

return abstract_5();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var2: AbstractType{0}
4    | var3: AbstractType{0}
8    | var4: AbstractType{0}
12   | var5: AbstractType{0}
16   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var12: AbstractType{0}
12   | var13: AbstractType{0}
16   | var14: AbstractType{0}
20   +---
20   +--- (virtual base class C0)
20   | var2: AbstractType{0}
24   | var3: AbstractType{0}
28   | var4: AbstractType{0}
32   | var5: AbstractType{0}
36   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(180)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var12: AbstractType{0}
12   | | var13: AbstractType{0}
16   | | var14: AbstractType{0}
20   | +---
20   | var21: ClassType{1}
56   | var22: ClassType{1}
92   | var23: ClassType{1}
128  | var24: ClassType{1}
164  +---
164  +--- (virtual base class C0)
164  | var2: AbstractType{0}
168  | var3: AbstractType{0}
172  | var4: AbstractType{0}
176  | var5: AbstractType{0}
180  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 180;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(84)
0    +---
0    | {vfptr}
4    | var30: ClassType{1}
40   | var31: ClassType{1}
76   | var32: AbstractType{3}
80   | var33: AbstractType{0}
84   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 84;
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

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ virtual abstract_0 func2 (abstract_0* v1, abstract_0* v2, C0 v3);
/* method id 404 */ abstract_0 func3 (C0 v4);
/* method id 405 */ virtual abstract_0 func4 (C0 v9, abstract_0* v10);
/* method id 406 */ C1 ();
C1 (special_constructor);
C0 v12;
C0 v13;
abstract_0* v14;
abstract_0* v15;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
C0 v16;
C0 v17;
abstract_1 v18;
C0 v19;
};
struct C3 : public C1 {
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ C3 ();
C3 (special_constructor);
C0 v33;
C1 v34;
C0 v35;
C2 v36;
};
abstract_0 func8 (abstract_1 v37);
abstract_0 func9 (abstract_1 v38, abstract_1 v39);
abstract_0 func10 (C0 v43, C0 v44, C0 v45, C0 v46);
abstract_0 func11 (C0 v51, C0 v52, abstract_1 v53, C0 v54);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::~C1 () {
abstract_0* v0 = new abstract_0 ();
v12 = v13;
v12 = v13;
v12 = v13;
v12 = v13;
return;

}
/* method id 403 */ abstract_0 C1::func2 (abstract_0* v1, abstract_0* v2, C0 v3) {
return ::func9(abstract_1(), abstract_1());

}
/* method id 404 */ abstract_0 C1::func3 (C0 v4) {
C0 v5 = *(((C0*) 0));
C0 v6 = *(((C0*) 0));
abstract_1 v7 = abstract_1();
abstract_0* v8 = new abstract_0 ();
return abstract_0();

}
/* method id 405 */ abstract_0 C1::func4 (C0 v9, abstract_0* v10) {
abstract_0* v11 = ((abstract_0*) 0);
return ::func9(abstract_1(), abstract_1());

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::~C3 () {
abstract_2 v20 = abstract_2();
abstract_1 v21 = abstract_1();
C0 v22 = *(((C0*) 0));
C0 v23 = *(((C0*) 0));
return;

}
/* method id 410 */ C3::C3 () {
abstract_1 v24 = abstract_1();
C0 v25 = *(&(*((new C0 ()))));
C0 v26 = *(&(*((new C0 ()))));
abstract_2 v27 = abstract_2();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0 func8 (abstract_1 v37) {

return abstract_0();

}
abstract_0 func9 (abstract_1 v38, abstract_1 v39) {
abstract_3 v40;
C0 v41;
abstract_0* v42;

return (((C1*) 0))->C1::func4(v41, v42);

}
abstract_0 func10 (C0 v43, C0 v44, C0 v45, C0 v46) {
C0 v47;
C0 v48;
abstract_2 v49;
C0 v50;

return ::func9(abstract_1(), abstract_1());

}
abstract_0 func11 (C0 v51, C0 v52, abstract_1 v53, C0 v54) {
C0 v55;
abstract_3 v56;
C0 v57;
abstract_3 v58;

delete (new C1 ());
return abstract_0();

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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var12: ClassType{0}
12   | var13: ClassType{0}
16   | var14: PtrType{AbstractType{0}}
20   | var15: PtrType{AbstractType{0}}
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
class C2    size(48)
0    +---
0    | {vbptr}
4    | var16: ClassType{0}
8    | var17: ClassType{0}
12   | var18: AbstractType{1}
16   | var19: ClassType{0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var12: ClassType{0}
36   | var13: ClassType{0}
40   | var14: PtrType{AbstractType{0}}
44   | var15: PtrType{AbstractType{0}}
48   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(112)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var12: ClassType{0}
12   | | var13: ClassType{0}
16   | | var14: PtrType{AbstractType{0}}
20   | | var15: PtrType{AbstractType{0}}
24   | +---
24   | var33: ClassType{0}
28   | var34: ClassType{1}
56   | var35: ClassType{0}
60   | var36: ClassType{2}
108  +---
108  +--- (virtual base class C0)
108  | {vfptr}
112  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 112;
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

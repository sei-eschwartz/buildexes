// type for special constructors
struct special_constructor {};
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
/* method id 411 */ virtual abstract_0 func1 (abstract_0* v35, C1 v36, C0 v37, abstract_0* v38);
/* method id 412 */ virtual abstract_0 func8 (abstract_3 v71, abstract_0* v72);
C3 (special_constructor);
C0 v77;
abstract_0* v78;
C0 v79;
C0 v80;
};
abstract_0 func9 (abstract_1 v81, C0 v82, C0 v83, abstract_0* v84);
abstract_0 func10 (abstract_0* v85);
abstract_0 func11 (C0 v90, abstract_4 v91, C0 v92, C0 v93);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::~C1 () {
abstract_0* v0 = new abstract_0 ();
v15 = new abstract_0 ();
return;

}
/* method id 403 */ abstract_0 C1::func2 (abstract_0* v1, abstract_0* v2, C0 v3) {
return abstract_0();

}
/* method id 404 */ abstract_0 C1::func3 (C0 v4) {
C0 v5 = *(((C0*) 0));
C0 v6 = *(((C0*) 0));
abstract_1 v7 = abstract_1();
abstract_0* v8 = new abstract_0 ();
v4 = *(((C0*) 0));
v4 = *(((C0*) 0));
v4 = *(((C0*) 0));
v4 = *(((C0*) 0));
return ::func10(v14);

}
/* method id 405 */ abstract_0 C1::func4 (C0 v9, abstract_0* v10) {
abstract_0* v11 = ((abstract_0*) 0);
delete (new C1 ());
return ::func9(abstract_1(), v12, v12, v10);

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
C0 v22 = *(&(*((new C0 ()))));
C0 v23 = *(&(*((new C0 ()))));
::func10(v14);
::func10(v14);
::func10(v14);
::func10(v14);
return;

}
/* method id 410 */ C3::C3 () {
C0 v24 = *(((C0*) 0));
C0 v25 = *(((C0*) 0));
abstract_1 v26 = abstract_1();
C0 v27 = *(((C0*) 0));
delete (new C3 ());
return;

}
/* method id 411 */ abstract_0 C3::func1 (abstract_0* v35, C1 v36, C0 v37, abstract_0* v38) {
C0 v39 = *(&(*(((C0*) 0))));
C0 v40 = *(&(*(((C0*) 0))));
abstract_1 v41 = abstract_1();
abstract_4 v42 = abstract_4();
delete (new C3 ());
return ::func10(v14);

}
/* method id 412 */ abstract_0 C3::func8 (abstract_3 v71, abstract_0* v72) {
abstract_3 v73 = abstract_3();
C0 v74 = *(((C0*) 0));
abstract_1 v75 = abstract_1();
C0 v76 = *(((C0*) 0));
delete (new C3 ());
return ::func10(v15);

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0 func9 (abstract_1 v81, C0 v82, C0 v83, abstract_0* v84) {

return ((new C1 ()))->C1::func4(v83, new abstract_0 ());

}
abstract_0 func10 (abstract_0* v85) {
C0 v86;
C0 v87;
C1 v88;
C0 v89;

return abstract_0();

}
abstract_0 func11 (C0 v90, abstract_4 v91, C0 v92, C0 v93) {
abstract_0* v94;
C0 v95;
C0 v96;
C0 v97;

delete (new C1 ());
delete (new C3 ());
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
class C3    size(44)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var12: ClassType{0}
12   | | var13: ClassType{0}
16   | | var14: PtrType{AbstractType{0}}
20   | | var15: PtrType{AbstractType{0}}
24   | +---
24   | var77: ClassType{0}
28   | var78: PtrType{AbstractType{0}}
32   | var79: ClassType{0}
36   | var80: ClassType{0}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
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

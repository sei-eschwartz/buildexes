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
/* method id 405 */ virtual abstract_2 func0 ();
C1 (special_constructor);
abstract_1 v29;
abstract_1 v30;
C0 v31;
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_3 v39;
};
struct C3 : public virtual C1, public C2 {
/* method id 407 */ ~C3 ();
/* method id 408 */ abstract_2 func0 (C1 v42, abstract_1 v43, abstract_1 v44, C0 v45);
/* method id 409 */ virtual abstract_2 func0 (abstract_1 v50, abstract_1 v51);
/* method id 410 */ virtual abstract_2 func0 ();
/* method id 411 */ C3 ();
C3 (special_constructor);
};
abstract_2* func3 ();
abstract_2* func4 (abstract_1 v56);
abstract_5 func5 (C1 v61, abstract_4 v62, abstract_4 v63);
abstract_2* func6 (abstract_6 v65, abstract_3 v66, abstract_4 v67, abstract_0 v68);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return abstract_2();

}
/* method id 402 */ C0::C0 () {
abstract_0 v7 = abstract_0();
delete (new C3 ());
return;

}
/* method id 403 */ abstract_2 C0::func0 (abstract_3 v8) {
delete (new C0 ());
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
/* method id 405 */ abstract_2 C1::func0 () {
C0 v25 = *(&(*((new C0 ()))));
abstract_1 v26 = abstract_1();
abstract_3 v27 = abstract_3();
abstract_1 v28 = abstract_1();
return abstract_2();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
abstract_1 v32 = abstract_1();
C0 v33 = *(&(*((new C0 ()))));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::~C3 () {
abstract_4 v40 = abstract_4();
abstract_4 v41 = abstract_4();
return;

}
/* method id 408 */ abstract_2 C3::func0 (C1 v42, abstract_1 v43, abstract_1 v44, C0 v45) {
abstract_1 v46 = abstract_1();
C0 v47 = *(((C0*) 0));
C1 v48 = *((new C1 ()));
C0 v49 = *(((C0*) 0));
delete (new C0 ());
return abstract_2();

}
/* method id 409 */ abstract_2 C3::func0 (abstract_1 v50, abstract_1 v51) {
abstract_1 v52 = abstract_1();
abstract_1 v53 = abstract_1();
abstract_1 v54 = abstract_1();
abstract_1 v55 = abstract_1();
return abstract_2();

}
/* method id 410 */ abstract_2 C3::func0 () {
return abstract_2();

}
/* method id 411 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_2* func3 () {

return ((abstract_2*) 0);

}
abstract_2* func4 (abstract_1 v56) {
abstract_1 v57;
C0 v58;
abstract_1 v59;
C3 v60;

return ::func3();

}
abstract_5 func5 (C1 v61, abstract_4 v62, abstract_4 v63) {
abstract_5** v64;

return abstract_5();

}
abstract_2* func6 (abstract_6 v65, abstract_3 v66, abstract_4 v67, abstract_0 v68) {

delete (new C1 ());
return ((abstract_2*) 0);

}
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
class C1    size(56)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var29: AbstractType{1}
12   | var30: AbstractType{1}
16   | var31: ClassType{0}
36   +---
36   +--- (virtual base class C0)
36   | {vfptr}
40   | var9: AbstractType{1}
44   | var10: AbstractType{1}
48   | var11: AbstractType{1}
52   | var12: AbstractType{1}
56   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 56;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(64)
0    +---
0    | {vbptr}
4    | var39: AbstractType{3}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var9: AbstractType{1}
16   | var10: AbstractType{1}
20   | var11: AbstractType{1}
24   | var12: AbstractType{1}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var29: AbstractType{1}
40   | var30: AbstractType{1}
44   | var31: ClassType{0}
64   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 64;
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
class C3    size(72)
0    +---
0    | +--- (base class C2)
0    | | {vbptr}
4    | | var39: AbstractType{3}
8    | +---
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var9: AbstractType{1}
20   | var10: AbstractType{1}
24   | var11: AbstractType{1}
28   | var12: AbstractType{1}
32   +---
32   | {vtordisp for vbase 1}
36   +--- (virtual base class C1)
36   | {vfptr}
40   | {vbptr}
44   | var29: AbstractType{1}
48   | var30: AbstractType{1}
52   | var31: ClassType{0}
72   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 72;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
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
 const size_t model_offset = 0;
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

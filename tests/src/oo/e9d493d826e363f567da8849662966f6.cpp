// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct abstract_11 { int x; };
struct abstract_12 { int x; };
struct abstract_13 { int x; };
struct abstract_14 { int x; };
struct abstract_15 { int x; };
struct abstract_16 { int x; };
struct abstract_17 { int x; };
struct abstract_18 { int x; };
struct abstract_19 { int x; };
struct abstract_20 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v7);
/* method id 403 */ virtual ~C0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_0 v12;
abstract_4 v13;
};
struct C1 : public C0 {
/* method id 405 */ C1 ();
/* method id 406 */ virtual void func0 ();
/* method id 407 */ virtual ~C1 ();
C1 (special_constructor);
abstract_0 v29;
abstract_0 v30;
};
struct C2 : public virtual C1 {
/* method id 408 */ C2 ();
/* method id 409 */ virtual void func0 (abstract_1 v33);
/* method id 410 */ virtual abstract_16 func0 (abstract_0 v36, abstract_0 v37, abstract_1 v38, abstract_5* v39);
/* method id 411 */ virtual abstract_13 func3 (abstract_5* v41, abstract_0 v42, abstract_5* v43, abstract_0 v44);
C2 (special_constructor);
};
void func5 (abstract_5* v45, abstract_1 v46);
abstract_13* func6 (abstract_1 v48, abstract_5*** v49, abstract_1 v50, abstract_3 v51);
abstract_5 func7 (abstract_5* v55, abstract_2* v56, abstract_1 v57, abstract_5*** v58);
abstract_13* func8 (abstract_1 v63, abstract_2* v64, abstract_1 v65, abstract_1 v66);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return abstract_2();

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7) {
delete (new C1 ());
return abstract_2();

}
/* method id 403 */ C0::~C0 () {
abstract_0 v8 = abstract_0();
abstract_3 v9 = abstract_3();
abstract_3 v10 = abstract_3();
abstract_1 v11 = abstract_1();
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {
return;

}
/* method id 406 */ void C1::func0 () {
abstract_1 v14 = abstract_1();
abstract_1 v15 = abstract_1();
abstract_1 v16 = abstract_1();
return ::func5(((abstract_5*) 0), v14);

}
/* method id 407 */ C1::~C1 () {
abstract_1 v21 = abstract_1();
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {
abstract_5* v31 = new abstract_5 ();
abstract_5*** v32 = new abstract_5** ();
return;

}
/* method id 409 */ void C2::func0 (abstract_1 v33) {
abstract_0 v34 = abstract_0();
abstract_0 v35 = abstract_0();
return ::func5(new abstract_5 (), v33);

}
/* method id 410 */ abstract_16 C2::func0 (abstract_0 v36, abstract_0 v37, abstract_1 v38, abstract_5* v39) {
abstract_2* v40 = new abstract_2 ();
return abstract_16();

}
/* method id 411 */ abstract_13 C2::func3 (abstract_5* v41, abstract_0 v42, abstract_5* v43, abstract_0 v44) {
return abstract_13();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

void func5 (abstract_5* v45, abstract_1 v46) {
abstract_4 v47;

return (((C1*) 0))->C1::func0();

}
abstract_13* func6 (abstract_1 v48, abstract_5*** v49, abstract_1 v50, abstract_3 v51) {
abstract_1 v52;
abstract_1 v53;
abstract_0 v54;

return new abstract_13 ();

}
abstract_5 func7 (abstract_5* v55, abstract_2* v56, abstract_1 v57, abstract_5*** v58) {
abstract_1 v59;
abstract_1 v60;
abstract_3 v61;
abstract_1 v62;

return abstract_5();

}
abstract_13* func8 (abstract_1 v63, abstract_2* v64, abstract_1 v65, abstract_1 v66) {
abstract_0 v67;
abstract_1 v68;
abstract_3 v69;
abstract_1 v70;

delete (new C1 ());
return new abstract_13 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var12: AbstractType{0}
8    | var13: AbstractType{4}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(20)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var12: AbstractType{0}
8    | | var13: AbstractType{4}
12   | +---
12   | var29: AbstractType{0}
16   | var30: AbstractType{0}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | +--- (base class C0)
8    | | {vfptr}
12   | | var12: AbstractType{0}
16   | | var13: AbstractType{4}
20   | +---
20   | var29: AbstractType{0}
24   | var30: AbstractType{0}
28   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

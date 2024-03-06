// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
abstract_1 v0;
};
struct C1  {
/* method id 402 */ virtual abstract_0 func0 (abstract_1 v1);
/* method id 403 */ abstract_0 func0 (abstract_0* v3, abstract_0** v4, abstract_0* v5);
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_1 v7;
};
struct C2  {
/* method id 405 */ C2 ();
/* method id 406 */ ~C2 ();
/* method id 407 */ abstract_0 func3 (C0 v23);
/* method id 408 */ virtual abstract_2 func0 (C0 v28, abstract_1 v29, C0 v30, abstract_0* v31);
C2 (special_constructor);
abstract_1 v36;
};
struct C3 : public virtual C2, public virtual C1, public virtual C0 {
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ C3 ();
C3 (special_constructor);
abstract_0* v40;
abstract_0* v41;
C0 v42;
};
abstract_2 func5 ();
abstract_3 func6 (abstract_4 v46);
abstract_2 func7 (abstract_3* v47, abstract_1 v48);
abstract_3 func8 (abstract_0* v53, abstract_0* v54, abstract_0** v55, C3 v56);
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return abstract_0();

}
/* method id 401 */ C0::C0 () {
delete (new C2 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0 C1::func0 (abstract_1 v1) {
abstract_1 v2 = abstract_1();
return abstract_0();

}
/* method id 403 */ abstract_0 C1::func0 (abstract_0* v3, abstract_0** v4, abstract_0* v5) {
delete (new C1 ());
return abstract_0();

}
/* method id 404 */ C1::C1 () {
abstract_1 v6 = abstract_1();
return;

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {
abstract_0* v8 = new abstract_0 ();
C0 v9 = *(((C0*) 0));
C0 v10 = *(((C0*) 0));
C0 v11 = *(((C0*) 0));
return;

}
/* method id 406 */ C2::~C2 () {
abstract_0* v14 = new abstract_0 ();
abstract_0* v15 = new abstract_0 ();
C0 v16 = *((new C0 ()));
abstract_0** v17 = new abstract_0* ();
delete (new C1 ());
return;

}
/* method id 407 */ abstract_0 C2::func3 (C0 v23) {
C0 v24 = *((new C0 ()));
abstract_0* v25 = ((abstract_0*) 0);
C0 v26 = *((new C0 ()));
abstract_0* v27 = new abstract_0 ();
return abstract_0();

}
/* method id 408 */ abstract_2 C2::func0 (C0 v28, abstract_1 v29, C0 v30, abstract_0* v31) {
abstract_0** v32 = new abstract_0* ();
abstract_0* v33 = ((abstract_0*) 0);
abstract_0* v34 = ((abstract_0*) 0);
C0 v35 = *(((C0*) 0));
return abstract_2();

}
C2::C2 (special_constructor)  {}

/* method id 409 */ C3::~C3 () {
abstract_0* v37 = ((abstract_0*) 0);
abstract_0* v38 = ((abstract_0*) 0);
C0 v39 = *(((C0*) 0));
return;

}
/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()), C1(special_constructor ()), C0(special_constructor ()) {}

abstract_2 func5 () {
abstract_0* v43;
abstract_0* v44;
C0 v45;

v44 = new abstract_0 ();
v44 = new abstract_0 ();
v44 = new abstract_0 ();
v44 = new abstract_0 ();
return ::func7(new abstract_3 (), abstract_1());

}
abstract_3 func6 (abstract_4 v46) {

return abstract_3();

}
abstract_2 func7 (abstract_3* v47, abstract_1 v48) {
abstract_0* v49;
C3 v50;
abstract_0* v51;
C3 v52;

delete (new C1 ());
return ::func5();

}
abstract_3 func8 (abstract_0* v53, abstract_0* v54, abstract_0** v55, C3 v56) {
abstract_0** v57;
abstract_0** v58;

return ::func6(abstract_4());

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var0: AbstractType{1}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
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
0    | {vfptr}
4    | var7: AbstractType{1}
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
}
/*
class C2    size(8)
0    +---
0    | {vfptr}
4    | var36: AbstractType{1}
8    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 8;
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
0    | {vfptr}
4    | {vbptr}
8    | var40: PtrType{AbstractType{0}}
12   | var41: PtrType{AbstractType{0}}
16   | var42: ClassType{0}
24   +---
24   +--- (virtual base class C2)
24   | {vfptr}
28   | var36: AbstractType{1}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | var7: AbstractType{1}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   | var0: AbstractType{1}
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

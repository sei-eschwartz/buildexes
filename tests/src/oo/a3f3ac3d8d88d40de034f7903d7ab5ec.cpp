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
/* method id 406 */ virtual ~C2 ();
/* method id 407 */ abstract_0 func2 (abstract_3 v28);
C2 (special_constructor);
abstract_1 v33;
};
struct C3 : public virtual C0, public C2, public C1 {
/* method id 408 */ C3 ();
C3 (special_constructor);
abstract_4 v34;
abstract_0* v35;
abstract_1 v36;
abstract_3 v37;
};
abstract_0 func4 (C0 v38, abstract_1 v39, abstract_0** v40, abstract_0* v41);
abstract_0 func5 (C0 v46, abstract_1 v47, abstract_0** v48, abstract_0* v49);
void func6 (abstract_0** v51, C0 v52, abstract_0** v53, abstract_1 v54);
void func7 (C0 v55, abstract_1 v56, void** v57, abstract_1 v58);
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return abstract_0();

}
/* method id 401 */ C0::C0 () {
delete (new C1 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0 C1::func0 (abstract_1 v1) {
abstract_1 v2 = abstract_1();
delete (new C1 ());
return abstract_0();

}
/* method id 403 */ abstract_0 C1::func0 (abstract_0* v3, abstract_0** v4, abstract_0* v5) {
return abstract_0();

}
/* method id 404 */ C1::C1 () {
abstract_1 v6 = abstract_1();
return;

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {
abstract_0* v8 = ((abstract_0*) 0);
abstract_0** v9 = new abstract_0* ();
return;

}
/* method id 406 */ C2::~C2 () {
abstract_0* v10 = ((abstract_0*) 0);
C0 v11 = *(((C0*) 0));
C0 v12 = *(((C0*) 0));
abstract_0** v13 = new abstract_0* ();
return;

}
/* method id 407 */ abstract_0 C2::func2 (abstract_3 v28) {
abstract_1 v29 = abstract_1();
abstract_2 v30 = abstract_2();
abstract_1 v31 = abstract_1();
abstract_1 v32 = abstract_1();
delete (new C2 ());
return abstract_0();

}
C2::C2 (special_constructor)  {}

/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()), C1(special_constructor ()) {}

abstract_0 func4 (C0 v38, abstract_1 v39, abstract_0** v40, abstract_0* v41) {
abstract_0** v42;
abstract_1 v43;
abstract_0* v44;
abstract_0** v45;

return abstract_0();

}
abstract_0 func5 (C0 v46, abstract_1 v47, abstract_0** v48, abstract_0* v49) {
abstract_1 v50;

return (((C1*) 0))->C1::func0(abstract_1());

}
void func6 (abstract_0** v51, C0 v52, abstract_0** v53, abstract_1 v54) {

return;

}
void func7 (C0 v55, abstract_1 v56, void** v57, abstract_1 v58) {
void* v59;
abstract_2 v60;
abstract_1 v61;
abstract_3 v62;

return ::func6(new abstract_0* (), v55, new abstract_0* (), abstract_1());

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
4    | var33: AbstractType{1}
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
class C3    size(44)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | var33: AbstractType{1}
8    | +---
8    | +--- (base class C1)
8    | | {vfptr}
12   | | var7: AbstractType{1}
16   | +---
16   | {vbptr}
20   | var34: AbstractType{4}
24   | var35: PtrType{AbstractType{0}}
28   | var36: AbstractType{1}
32   | var37: AbstractType{3}
36   +---
36   +--- (virtual base class C0)
36   | {vfptr}
40   | var0: AbstractType{1}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
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
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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

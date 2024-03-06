// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_4 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ virtual abstract_0* func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3);
/* method id 402 */ virtual abstract_0* func0 (abstract_0** v4, abstract_0** v5, abstract_0** v6, abstract_0** v7);
/* method id 403 */ virtual abstract_0* func0 (abstract_0** v13, abstract_0** v14, abstract_1 v15, abstract_0** v16);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_2 v20;
abstract_1 v21;
abstract_0** v22;
abstract_0** v23;
};
struct C1 : public C0 {
/* method id 405 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 406 */ virtual abstract_0* func1 ();
/* method id 407 */ abstract_0** func0 ();
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_0** v30;
abstract_0** v31;
abstract_1 v32;
abstract_1 v33;
};
struct C3  {
/* method id 409 */ C3 ();
C3 (special_constructor);
abstract_3 v34;
abstract_1 v35;
abstract_0** v36;
};
abstract_0*** func5 (abstract_0* v37, abstract_1 v38, abstract_4** v39);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
::func5(new abstract_0 (), v21, new abstract_4* ());
::func5(new abstract_0 (), v21, new abstract_4* ());
::func5(new abstract_0 (), v21, new abstract_4* ());
::func5(new abstract_0 (), v21, new abstract_4* ());
return new abstract_0 ();

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3) {
return ((abstract_0*) 0);

}
/* method id 402 */ abstract_0* C0::func0 (abstract_0** v4, abstract_0** v5, abstract_0** v6, abstract_0** v7) {
delete (new C1 ());
return new abstract_0 ();

}
/* method id 403 */ abstract_0* C0::func0 (abstract_0** v13, abstract_0** v14, abstract_1 v15, abstract_0** v16) {
abstract_2 v17 = abstract_2();
abstract_2 v18 = abstract_2();
abstract_1 v19 = abstract_1();
delete (new C1 ());
return new abstract_0 ();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ abstract_0* C2::func1 () {
abstract_0** v24 = ((abstract_0**) 0);
return ((abstract_0*) 0);

}
/* method id 407 */ abstract_0** C2::func0 () {
abstract_0** v25 = ((abstract_0**) 0);
return v31;

}
/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

abstract_0*** func5 (abstract_0* v37, abstract_1 v38, abstract_4** v39) {
abstract_0** v40;
abstract_0** v41;
abstract_1 v42;
abstract_2 v43;

return ((abstract_0***) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var20: AbstractType{2}
8    | var21: AbstractType{1}
12   | var22: PtrType{PtrType{AbstractType{0}}}
16   | var23: PtrType{PtrType{AbstractType{0}}}
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
class C1    size(20)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var20: AbstractType{2}
8    | | var21: AbstractType{1}
12   | | var22: PtrType{PtrType{AbstractType{0}}}
16   | | var23: PtrType{PtrType{AbstractType{0}}}
20   | +---
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
class C2    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var30: PtrType{PtrType{AbstractType{0}}}
12   | var31: PtrType{PtrType{AbstractType{0}}}
16   | var32: AbstractType{1}
20   | var33: AbstractType{1}
24   +---
24   +--- (virtual base class C1)
24   | +--- (base class C0)
24   | | {vfptr}
28   | | var20: AbstractType{2}
32   | | var21: AbstractType{1}
36   | | var22: PtrType{PtrType{AbstractType{0}}}
40   | | var23: PtrType{PtrType{AbstractType{0}}}
44   | +---
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
class C3    size(12)
0    +---
0    | var34: AbstractType{3}
4    | var35: AbstractType{1}
8    | var36: PtrType{PtrType{AbstractType{0}}}
12   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 12;
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

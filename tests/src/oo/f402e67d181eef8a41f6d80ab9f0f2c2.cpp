// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ ~C0 ();
/* method id 402 */ abstract_1 func0 (abstract_1** v3, abstract_1** v4);
/* method id 403 */ virtual abstract_1 func1 (abstract_1** v5, abstract_0 v6);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_3 v11;
abstract_0 v12;
abstract_0 v13;
};
struct C1 : public C0 {
/* method id 405 */ virtual abstract_1 func3 (abstract_1** v14, abstract_0 v15);
/* method id 406 */ virtual abstract_1 func1 (abstract_2 v19, C0 v20, C0 v21);
/* method id 407 */ C1 ();
C1 (special_constructor);
abstract_1** v23;
abstract_1* v24;
abstract_0 v25;
abstract_0 v26;
};
struct C2 : public virtual C1 {
/* method id 408 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C1 {
/* method id 409 */ virtual abstract_1 func1 (abstract_2 v28, abstract_2 v29);
/* method id 410 */ C3 ();
C3 (special_constructor);
C0 v31;
abstract_3 v32;
C0 v33;
C0 v34;
};
abstract_1 func6 (abstract_0 v35, abstract_4 v36);
abstract_1* func7 (C0 v37, abstract_1* v38, C0 v39, abstract_4 v40);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
delete (new C3 ());
::func6(v12, abstract_4());
return ::func6(abstract_0(), abstract_4());

}
/* method id 401 */ C0::~C0 () {
return;

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v3, abstract_1** v4) {
return abstract_1();

}
/* method id 403 */ abstract_1 C0::func1 (abstract_1** v5, abstract_0 v6) {
abstract_2 v7 = abstract_2();
abstract_2 v8 = abstract_2();
abstract_1** v9 = new abstract_1* ();
abstract_0 v10 = abstract_0();
delete (new C1 ());
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func3 (abstract_1** v14, abstract_0 v15) {
abstract_1* v16 = new abstract_1 ();
abstract_1** v17 = new abstract_1* ();
C0 v18 = *(((C0*) 0));
return (((C1*) 0))->C1::func1(abstract_2(), v18, v18);

}
/* method id 406 */ abstract_1 C1::func1 (abstract_2 v19, C0 v20, C0 v21) {
C0 v22 = *(&(*((new C0 ()))));
return (((C1*) 0))->C1::func3(new abstract_1* (), v12);

}
/* method id 407 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {
abstract_1** v27 = new abstract_1* ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ abstract_1 C3::func1 (abstract_2 v28, abstract_2 v29) {
abstract_1** v30 = new abstract_1* ();
return (((C1*) 0))->C1::func3(v30, v25);

}
/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_1 func6 (abstract_0 v35, abstract_4 v36) {

delete (new C1 ());
return (((C3*) 0))->C3::func1(abstract_2(), abstract_2());

}
abstract_1* func7 (C0 v37, abstract_1* v38, C0 v39, abstract_4 v40) {
abstract_2 v41;
abstract_1** v42;
abstract_4 v43;
abstract_1** v44;

return v38;

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var11: AbstractType{3}
8    | var12: AbstractType{0}
12   | var13: AbstractType{0}
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
class C1    size(32)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var11: AbstractType{3}
8    | | var12: AbstractType{0}
12   | | var13: AbstractType{0}
16   | +---
16   | var23: DeletablePtrType{PtrType{AbstractType{1}}}
20   | var24: PtrType{AbstractType{1}}
24   | var25: AbstractType{0}
28   | var26: AbstractType{0}
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
class C2    size(36)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C1)
4    | +--- (base class C0)
4    | | {vfptr}
8    | | var11: AbstractType{3}
12   | | var12: AbstractType{0}
16   | | var13: AbstractType{0}
20   | +---
20   | var23: DeletablePtrType{PtrType{AbstractType{1}}}
24   | var24: PtrType{AbstractType{1}}
28   | var25: AbstractType{0}
32   | var26: AbstractType{0}
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
 const size_t model_offset = 4;
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
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | | var11: AbstractType{3}
8    | | | var12: AbstractType{0}
12   | | | var13: AbstractType{0}
16   | | +---
16   | | var23: DeletablePtrType{PtrType{AbstractType{1}}}
20   | | var24: PtrType{AbstractType{1}}
24   | | var25: AbstractType{0}
28   | | var26: AbstractType{0}
32   | +---
32   | var31: ClassType{0}
48   | var32: AbstractType{3}
52   | var33: ClassType{0}
68   | var34: ClassType{0}
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

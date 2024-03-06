// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ abstract_1 func0 (abstract_1** v4, abstract_1** v5);
/* method id 403 */ abstract_1 func1 (abstract_1** v6, abstract_0 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1** v9;
abstract_2 v10;
abstract_1** v11;
abstract_0 v12;
};
struct C1 : public C0 {
/* method id 405 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0 {
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_0 v17;
abstract_2 v18;
abstract_3 v19;
abstract_2 v20;
};
struct C3 : public virtual C1 {
/* method id 407 */ virtual abstract_4 func0 (abstract_0 v21, abstract_1** v22);
/* method id 408 */ C3 ();
C3 (special_constructor);
};
abstract_1 func5 ();
abstract_4 func6 (abstract_1** v26, abstract_1** v27, abstract_1** v28);
abstract_4 func7 (abstract_1** v31, abstract_1** v32, abstract_1** v33, abstract_1** v34);
abstract_4 func8 (abstract_1** v39, abstract_1** v40, abstract_1** v41, abstract_1** v42);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
delete (new C1 ());
return ::func5();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return ::func5();

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v4, abstract_1** v5) {
return abstract_1();

}
/* method id 403 */ abstract_1 C0::func1 (abstract_1** v6, abstract_0 v7) {
abstract_1** v8 = new abstract_1* ();
return ::func5();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {
abstract_1** v13 = new abstract_1* ();
abstract_2 v14 = abstract_2();
abstract_1** v15 = new abstract_1* ();
abstract_0 v16 = abstract_0();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ abstract_4 C3::func0 (abstract_0 v21, abstract_1** v22) {
return abstract_4();

}
/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_1 func5 () {
abstract_5 v23;
abstract_1** v24;
abstract_0 v25;

return abstract_1();

}
abstract_4 func6 (abstract_1** v26, abstract_1** v27, abstract_1** v28) {
abstract_1** v29;
abstract_0 v30;

delete (new C1 ());
return abstract_4();

}
abstract_4 func7 (abstract_1** v31, abstract_1** v32, abstract_1** v33, abstract_1** v34) {
abstract_1** v35;
abstract_1** v36;
abstract_2 v37;
abstract_1** v38;

return abstract_4();

}
abstract_4 func8 (abstract_1** v39, abstract_1** v40, abstract_1** v41, abstract_1** v42) {
abstract_1** v43;
abstract_1** v44;

::func6(v41, v41, v41);
::func6(v41, v41, v41);
::func6(v41, v41, v41);
::func6(v41, v41, v41);
return ::func7(v41, v41, v41, v41);

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var9: DeletablePtrType{PtrType{AbstractType{1}}}
4    | var10: AbstractType{2}
8    | var11: DeletablePtrType{PtrType{AbstractType{1}}}
12   | var12: AbstractType{0}
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
class C1    size(16)
0    +---
0    | +--- (base class C0)
0    | | var9: DeletablePtrType{PtrType{AbstractType{1}}}
4    | | var10: AbstractType{2}
8    | | var11: DeletablePtrType{PtrType{AbstractType{1}}}
12   | | var12: AbstractType{0}
16   | +---
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
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
4    | var17: AbstractType{0}
8    | var18: AbstractType{2}
12   | var19: AbstractType{3}
16   | var20: AbstractType{2}
20   +---
20   +--- (virtual base class C0)
20   | var9: DeletablePtrType{PtrType{AbstractType{1}}}
24   | var10: AbstractType{2}
28   | var11: DeletablePtrType{PtrType{AbstractType{1}}}
32   | var12: AbstractType{0}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | +--- (base class C0)
8    | | var9: DeletablePtrType{PtrType{AbstractType{1}}}
12   | | var10: AbstractType{2}
16   | | var11: DeletablePtrType{PtrType{AbstractType{1}}}
20   | | var12: AbstractType{0}
24   | +---
24   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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

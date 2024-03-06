// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ abstract_1 func0 (abstract_1** v4, abstract_1** v5);
/* method id 403 */ virtual abstract_1 func1 (abstract_1** v6, abstract_0 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1** v9;
abstract_2 v10;
};
struct C1 : public virtual C0 {
/* method id 405 */ C1 ();
/* method id 406 */ virtual abstract_1 func1 ();
/* method id 407 */ virtual abstract_1 func3 (abstract_1** v12, abstract_1** v13, abstract_2 v14, abstract_1** v15);
/* method id 408 */ virtual abstract_1 func0 (abstract_2 v16, abstract_1** v17);
C1 (special_constructor);
abstract_2 v19;
abstract_1** v20;
abstract_1** v21;
abstract_1** v22;
};
struct C2 : public C1 {
/* method id 409 */ virtual ~C2 ();
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_1** v71;
abstract_1** v72;
abstract_1** v73;
};
struct C3 : public virtual C1 {
/* method id 411 */ C3 ();
/* method id 412 */ virtual ~C3 ();
C3 (special_constructor);
};
abstract_1 func4 (abstract_1** v101);
abstract_1 func5 (abstract_1** v105, abstract_1** v106);
abstract_1 func6 (abstract_1** v110, abstract_2 v111, abstract_1** v112, abstract_1** v113);
abstract_1 func7 (abstract_1** v118, abstract_1** v119, abstract_1** v120, abstract_1** v121);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return ::func5(new abstract_1* (), new abstract_1* ());

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return ::func5(v9, v9);

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v4, abstract_1** v5) {
return ::func5(v5, v5);

}
/* method id 403 */ abstract_1 C0::func1 (abstract_1** v6, abstract_0 v7) {
abstract_1** v8 = new abstract_1* ();
::func5(v6, v6);
::func5(v6, v6);
::func5(v6, v6);
::func5(v6, v6);
return ::func5(v6, v6);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {
abstract_0 v11 = abstract_0();
return;

}
/* method id 406 */ abstract_1 C1::func1 () {
::func5(v21, v21);
::func5(v21, v21);
return ::func5(v21, v21);

}
/* method id 407 */ abstract_1 C1::func3 (abstract_1** v12, abstract_1** v13, abstract_2 v14, abstract_1** v15) {
::func5(v9, v9);
::func5(v9, v9);
::func5(v9, v9);
::func5(v9, v9);
return abstract_1();

}
/* method id 408 */ abstract_1 C1::func0 (abstract_2 v16, abstract_1** v17) {
abstract_0 v18 = abstract_0();
return abstract_1();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::~C2 () {
abstract_1** v23 = new abstract_1* ();
abstract_1** v24 = new abstract_1* ();
abstract_1** v25 = new abstract_1* ();
abstract_1** v26 = new abstract_1* ();
return;

}
/* method id 410 */ C2::C2 () {
abstract_1** v27 = new abstract_1* ();
abstract_1** v28 = new abstract_1* ();
abstract_1** v29 = new abstract_1* ();
abstract_2 v30 = abstract_2();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 411 */ C3::C3 () {
abstract_1** v74 = new abstract_1* ();
abstract_1** v75 = new abstract_1* ();
abstract_1** v76 = new abstract_1* ();
abstract_1** v77 = new abstract_1* ();
return;

}
/* method id 412 */ C3::~C3 () {
abstract_1** v82 = new abstract_1* ();
abstract_1** v83 = new abstract_1* ();
abstract_1** v84 = new abstract_1* ();
abstract_1** v85 = new abstract_1* ();
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_1 func4 (abstract_1** v101) {
abstract_1** v102;
abstract_1** v103;
abstract_1** v104;

return abstract_1();

}
abstract_1 func5 (abstract_1** v105, abstract_1** v106) {
abstract_1** v107;
abstract_1** v108;
abstract_1** v109;

return (((C1*) 0))->C1::func0(abstract_2(), v106);

}
abstract_1 func6 (abstract_1** v110, abstract_2 v111, abstract_1** v112, abstract_1** v113) {
abstract_1** v114;
abstract_1** v115;
abstract_2 v116;
abstract_2 v117;

return ::func5(v113, v113);

}
abstract_1 func7 (abstract_1** v118, abstract_1** v119, abstract_1** v120, abstract_1** v121) {
abstract_1** v122;
abstract_1** v123;
abstract_2 v124;
C3 v125;

return ::func5(v118, v118);

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var9: DeletablePtrType{PtrType{AbstractType{1}}}
8    | var10: AbstractType{2}
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
class C1    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var19: AbstractType{2}
12   | var20: DeletablePtrType{PtrType{AbstractType{1}}}
16   | var21: DeletablePtrType{PtrType{AbstractType{1}}}
20   | var22: DeletablePtrType{PtrType{AbstractType{1}}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var9: DeletablePtrType{PtrType{AbstractType{1}}}
32   | var10: AbstractType{2}
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
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var19: AbstractType{2}
12   | | var20: DeletablePtrType{PtrType{AbstractType{1}}}
16   | | var21: DeletablePtrType{PtrType{AbstractType{1}}}
20   | | var22: DeletablePtrType{PtrType{AbstractType{1}}}
24   | +---
24   | var71: DeletablePtrType{PtrType{AbstractType{1}}}
28   | var72: DeletablePtrType{PtrType{AbstractType{1}}}
32   | var73: DeletablePtrType{PtrType{AbstractType{1}}}
36   +---
36   +--- (virtual base class C0)
36   | {vfptr}
40   | var9: DeletablePtrType{PtrType{AbstractType{1}}}
44   | var10: AbstractType{2}
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
class C3    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var9: DeletablePtrType{PtrType{AbstractType{1}}}
16   | var10: AbstractType{2}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var19: AbstractType{2}
32   | var20: DeletablePtrType{PtrType{AbstractType{1}}}
36   | var21: DeletablePtrType{PtrType{AbstractType{1}}}
40   | var22: DeletablePtrType{PtrType{AbstractType{1}}}
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
 const size_t model_offset = 20;
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

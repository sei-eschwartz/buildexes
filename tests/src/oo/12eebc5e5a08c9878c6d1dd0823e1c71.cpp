// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ virtual C0 func0 (C0* v7, C0* v8);
C1 (special_constructor);
C0* v10;
abstract_0 v11;
C0* v12;
C0* v13;
};
struct C2 : public virtual C1, public C0 {
/* method id 404 */ C2 ();
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ virtual C0 func1 (C0* v29, abstract_0 v30);
/* method id 407 */ C0 func1 (abstract_1 v38);
C2 (special_constructor);
};
struct C3 : public C0, public virtual C1 {
/* method id 408 */ virtual C0 func0 (abstract_1 v39, abstract_0 v40);
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
C3 (special_constructor);
C0* v73;
C0** v74;
};
C0 func2 (C0* v75, C0* v76, C0** v77);
C0 func3 (C0** v82, C0* v83, C0** v84, C0* v85);
C0 func4 (C0** v90, C0* v91, C0* v92, C0** v93);
abstract_2 func5 (C0* v98, abstract_0 v99);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = ((C0*) 0);
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
C0* v6 = ((C0*) 0);
return;

}
/* method id 403 */ C0 C1::func0 (C0* v7, C0* v8) {
return ::func3(new C0* (), v8, new C0* (), v8);

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::C2 () {
C0* v14 = (new C0 ());
C0* v15 = (new C0 ());
C0* v16 = (new C0 ());
C0* v17 = (new C0 ());
return;

}
/* method id 405 */ C2::~C2 () {
C0* v18 = (new C0 ());
C0* v19 = (new C0 ());
C0* v20 = (new C0 ());
C0* v21 = (new C0 ());
return;

}
/* method id 406 */ C0 C2::func1 (C0* v29, abstract_0 v30) {
abstract_0 v31 = abstract_0();
C0* v32 = ((C0*) 0);
return ::func3(new C0* (), v13, new C0* (), v13);

}
/* method id 407 */ C0 C2::func1 (abstract_1 v38) {
return ::func3(new C0* (), v13, new C0* (), v13);

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 408 */ C0 C3::func0 (abstract_1 v39, abstract_0 v40) {
abstract_1 v41 = abstract_1();
C0* v42 = (new C0 ());
C0** v43 = new C0* ();
C0* v44 = (new C0 ());
return ::func3(v74, v13, v74, v13);

}
/* method id 409 */ C3::C3 () {
C0* v45 = ((C0*) 0);
C0* v46 = ((C0*) 0);
abstract_1 v47 = abstract_1();
C0* v48 = ((C0*) 0);
return;

}
/* method id 410 */ C3::~C3 () {
C0* v53 = (new C0 ());
C0* v54 = (new C0 ());
C0** v55 = new C0* ();
C0* v56 = (new C0 ());
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

C0 func2 (C0* v75, C0* v76, C0** v77) {
C0* v78;
C0* v79;
abstract_1 v80;
C0* v81;

return ::func4(v77, v78, v78, v77);

}
C0 func3 (C0** v82, C0* v83, C0** v84, C0* v85) {
C0* v86;
C0** v87;
abstract_0 v88;
C0** v89;

return (((C3*) 0))->C3::func0(abstract_1(), v88);

}
C0 func4 (C0** v90, C0* v91, C0* v92, C0** v93) {
abstract_1 v94;
C0* v95;
C0* v96;
abstract_0 v97;

return ::func3(new C0* (), v92, new C0* (), v92);

}
abstract_2 func5 (C0* v98, abstract_0 v99) {

return abstract_2();

}
#include <iostream>
void check_driver() {
/*
class C0    size(0)
0    +---
0    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 1;
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
0    | {vfptr}
4    | var10: PtrType{ClassType{0}}
8    | var11: AbstractType{0}
12   | var12: PtrType{ClassType{0}}
16   | var13: PtrType{ClassType{0}}
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
}
/*
class C2    size(28)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var10: PtrType{ClassType{0}}
16   | var11: AbstractType{0}
20   | var12: PtrType{ClassType{0}}
24   | var13: PtrType{ClassType{0}}
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(36)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | {vbptr}
8    | var73: PtrType{ClassType{0}}
12   | var74: DeletablePtrType{PtrType{ClassType{0}}}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | var10: PtrType{ClassType{0}}
24   | var11: AbstractType{0}
28   | var12: PtrType{ClassType{0}}
32   | var13: PtrType{ClassType{0}}
36   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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

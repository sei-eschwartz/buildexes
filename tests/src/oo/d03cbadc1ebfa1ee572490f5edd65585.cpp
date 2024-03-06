// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
/* method id 402 */ ~C1 ();
/* method id 403 */ C0 func0 (abstract_0 v10);
/* method id 404 */ virtual C0 func0 ();
C1 (special_constructor);
abstract_0 v18;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 405 */ C2 ();
C2 (special_constructor);
abstract_0 v21;
C0* v22;
C0* v23;
C0* v24;
};
struct C3 : public C1, public virtual C0 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual ~C3 ();
C3 (special_constructor);
C0* v52;
C0* v53;
C0* v54;
};
C0 func3 (C0* v55, C0* v56);
C0 func4 (C0* v59, C0* v60, C0* v61, C0* v62);
C0 func5 ();
C0 func6 (C0* v69, C0* v70, abstract_0 v71, C0* v72);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
delete (new C1 ());
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = ((C0*) 0);
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
return;

}
/* method id 403 */ C0 C1::func0 (abstract_0 v10) {
C0* v11 = &(*((new C0 ())));
C0* v12 = &(*((new C0 ())));
C0* v13 = &(*((new C0 ())));
abstract_0 v14 = abstract_0();
v10 = v18;
return ::func3((new C0 ()), (new C0 ()));

}
/* method id 404 */ C0 C1::func0 () {
C0* v15 = (new C0 ());
C0* v16 = (new C0 ());
C0* v17 = (new C0 ());
return ::func4((new C0 ()), (new C0 ()), (new C0 ()), v17);

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
C0* v25 = ((C0*) 0);
C0* v26 = ((C0*) 0);
abstract_0 v27 = abstract_0();
C0* v28 = ((C0*) 0);
delete (new C0 ());
return;

}
/* method id 408 */ C3::~C3 () {
C0* v37 = &(*(((C0*) 0)));
C0* v38 = &(*(((C0*) 0)));
C0* v39 = &(*(((C0*) 0)));
C0* v40 = &(*(((C0*) 0)));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

C0 func3 (C0* v55, C0* v56) {
C0* v57;
C0* v58;

return *(v56);

}
C0 func4 (C0* v59, C0* v60, C0* v61, C0* v62) {
C0* v63;
C0* v64;
C0* v65;
C0* v66;

return ::func5();

}
C0 func5 () {
C0* v67;
C0* v68;

delete (new C2 ());
return ::func4((new C0 ()), ((C0*) 0), (new C0 ()), (new C0 ()));

}
C0 func6 (C0* v69, C0* v70, abstract_0 v71, C0* v72) {
C0* v73;
C0* v74;

delete (new C1 ());
return ::func4(v70, v70, v70, v70);

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
class C1    size(8)
0    +---
0    | {vfptr}
4    | var18: AbstractType{0}
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
class C2    size(28)
0    +---
0    | {vbptr}
4    | var21: AbstractType{0}
8    | var22: PtrType{ClassType{0}}
12   | var23: PtrType{ClassType{0}}
16   | var24: PtrType{ClassType{0}}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | var18: AbstractType{0}
28   +---
28   +--- (virtual base class C0)
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
 const size_t model_offset = 20;
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
 const size_t model_offset = 28;
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
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var18: AbstractType{0}
8    | +---
8    | {vbptr}
12   | var52: PtrType{ClassType{0}}
16   | var53: PtrType{ClassType{0}}
20   | var54: PtrType{ClassType{0}}
24   +---
24   +--- (virtual base class C0)
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
 const size_t model_offset = 0;
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
 const size_t model_offset = 24;
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

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
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
C0 v11;
C0* v12;
C0* v13;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 404 */ C2 ();
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ virtual C0 func0 (C0** v24);
/* method id 407 */ C0* func1 (abstract_0 v25);
C2 (special_constructor);
C1 v27;
C0* v28;
C0* v29;
C0* v30;
};
struct C3 : public virtual C1, public C2 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual ~C3 ();
C3 (special_constructor);
};
C0* func2 (C0* v55, abstract_0 v56);
C0* func3 (abstract_1 v59, C0* v60, C0* v61, C0 v62);
C0* func4 ();
C0* func5 (C0* v70, C0 v71, C0* v72, C0* v73);
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
return v11;

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::C2 () {
C0 v14 = *((new C0 ()));
C0* v15 = ((C0*) 0);
C0* v16 = ((C0*) 0);
C0* v17 = ((C0*) 0);
return;

}
/* method id 405 */ C2::~C2 () {
C0* v19 = ((C0*) 0);
C0* v20 = ((C0*) 0);
C0* v21 = ((C0*) 0);
return;

}
/* method id 406 */ C0 C2::func0 (C0** v24) {
return *(v12);

}
/* method id 407 */ C0* C2::func1 (abstract_0 v25) {
C1 v26 = *(&(*((new C1 ()))));
return ((C0*) 0);

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
abstract_1 v31 = abstract_1();
return;

}
/* method id 409 */ C3::~C3 () {
C0* v40 = &((((C1*) 0))->C1::func0((new C0 ()), (new C0 ())));
abstract_1 v41 = abstract_1();
C0* v42 = &((((C1*) 0))->C1::func0((new C0 ()), (new C0 ())));
C0* v43 = &((((C1*) 0))->C1::func0((new C0 ()), (new C0 ())));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

C0* func2 (C0* v55, abstract_0 v56) {
C0* v57;
abstract_0 v58;

return ::func4();

}
C0* func3 (abstract_1 v59, C0* v60, C0* v61, C0 v62) {
C0* v63;
C0* v64;
abstract_0 v65;
C0* v66;

return v60;

}
C0* func4 () {
C0* v67;
C0* v68;
abstract_0 v69;

return (new C0 ());

}
C0* func5 (C0* v70, C0 v71, C0* v72, C0* v73) {
abstract_0 v74;

return (new C0 ());

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
8    | var11: ClassType{0}
9    | alignment: 
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
class C2    size(60)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var27: ClassType{1}
28   | var28: PtrType{ClassType{0}}
32   | var29: PtrType{ClassType{0}}
36   | var30: PtrType{ClassType{0}}
40   +---
40   +--- (virtual base class C0)
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | var10: PtrType{ClassType{0}}
48   | var11: ClassType{0}
49   | alignment: 
52   | var12: PtrType{ClassType{0}}
56   | var13: PtrType{ClassType{0}}
60   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 60;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(64)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | | var27: ClassType{1}
28   | | var28: PtrType{ClassType{0}}
32   | | var29: PtrType{ClassType{0}}
36   | | var30: PtrType{ClassType{0}}
40   | +---
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | var10: PtrType{ClassType{0}}
48   | var11: ClassType{0}
49   | alignment: 
52   | var12: PtrType{ClassType{0}}
56   | var13: PtrType{ClassType{0}}
60   +---
60   | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 0, which leads with zero sized base.
64   +--- (virtual base class C0)
64   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 64;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
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

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
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ virtual abstract_0 func1 (abstract_0** v0, abstract_0** v1, abstract_0** v2, abstract_0** v3);
C0 (special_constructor);
abstract_1 v8;
abstract_1 v9;
abstract_0** v10;
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual abstract_0 func0 (abstract_1 v11, abstract_0** v12);
/* method id 404 */ C1 ();
/* method id 405 */ virtual ~C1 ();
C1 (special_constructor);
abstract_1 v32;
abstract_1 v33;
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_1 v34;
abstract_1 v35;
abstract_1 v36;
abstract_1 v37;
};
struct C3 : public virtual C2 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ virtual abstract_0 func3 (abstract_1 v89, abstract_1 v90);
C3 (special_constructor);
abstract_2 v126;
abstract_1 v127;
abstract_1 v128;
abstract_1 v129;
};
abstract_0 func4 ();
abstract_0 func5 (abstract_1 v132, abstract_1 v133, abstract_1 v134, abstract_1 v135);
// definitions
/* method id 400 */ C0::C0 () {
return;

}
/* method id 401 */ C0::~C0 () {
v10 = v10;
return;

}
/* method id 402 */ abstract_0 C0::func1 (abstract_0** v0, abstract_0** v1, abstract_0** v2, abstract_0** v3) {
abstract_0** v4 = new abstract_0* ();
abstract_0** v5 = new abstract_0* ();
abstract_0** v6 = new abstract_0* ();
abstract_0** v7 = new abstract_0* ();
return (((C1*) 0))->C1::func0(v8, v1);

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0 C1::func0 (abstract_1 v11, abstract_0** v12) {
abstract_1 v13 = abstract_1();
abstract_1 v14 = abstract_1();
abstract_0** v15 = new abstract_0* ();
abstract_1 v16 = abstract_1();
return abstract_0();

}
/* method id 404 */ C1::C1 () {
abstract_1 v17 = abstract_1();
abstract_1 v18 = abstract_1();
abstract_1 v19 = abstract_1();
abstract_1 v20 = abstract_1();
v20 = v8;
return;

}
/* method id 405 */ C1::~C1 () {
abstract_1 v21 = abstract_1();
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
abstract_1 v38 = abstract_1();
delete (new C1 ());
return;

}
/* method id 409 */ C3::~C3 () {
abstract_1 v43 = abstract_1();
abstract_1 v44 = abstract_1();
return;

}
/* method id 410 */ abstract_0 C3::func3 (abstract_1 v89, abstract_1 v90) {
abstract_2 v91 = abstract_2();
abstract_1 v92 = abstract_1();
abstract_1 v93 = abstract_1();
abstract_1 v94 = abstract_1();
return abstract_0();

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_0 func4 () {
abstract_1 v130;
abstract_1 v131;

return abstract_0();

}
abstract_0 func5 (abstract_1 v132, abstract_1 v133, abstract_1 v134, abstract_1 v135) {
abstract_1 v136;
abstract_1 v137;
abstract_1 v138;
abstract_1 v139;

delete (new C1 ());
return abstract_0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var8: AbstractType{1}
8    | var9: AbstractType{1}
12   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
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
0    | {vfptr}
4    | {vbptr}
8    | var32: AbstractType{1}
12   | var33: AbstractType{1}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var8: AbstractType{1}
24   | var9: AbstractType{1}
28   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
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
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(52)
0    +---
0    | {vbptr}
4    | var34: AbstractType{1}
8    | var35: AbstractType{1}
12   | var36: AbstractType{1}
16   | var37: AbstractType{1}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var8: AbstractType{1}
28   | var9: AbstractType{1}
32   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
36   +---
36   +--- (virtual base class C1)
36   | {vfptr}
40   | {vbptr}
44   | var32: AbstractType{1}
48   | var33: AbstractType{1}
52   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(76)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var126: AbstractType{2}
12   | var127: AbstractType{1}
16   | var128: AbstractType{1}
20   | var129: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var8: AbstractType{1}
32   | var9: AbstractType{1}
36   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | {vbptr}
48   | var32: AbstractType{1}
52   | var33: AbstractType{1}
56   +---
56   +--- (virtual base class C2)
56   | {vbptr}
60   | var34: AbstractType{1}
64   | var35: AbstractType{1}
68   | var36: AbstractType{1}
72   | var37: AbstractType{1}
76   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 76;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 56;
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

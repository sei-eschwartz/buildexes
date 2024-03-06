// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
};
struct C2 : public virtual C1 {
/* method id 406 */ virtual abstract_0 func2 (abstract_1 v56, abstract_0** v57);
/* method id 407 */ C2 ();
/* method id 408 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1 v104;
abstract_1 v105;
abstract_1 v106;
abstract_1 v107;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ virtual abstract_0 func2 (abstract_1 v112);
/* method id 411 */ C3 ();
C3 (special_constructor);
abstract_1 v134;
abstract_1 v135;
};
abstract_0 func4 (abstract_1 v136);
abstract_0 func5 (abstract_0** v139, abstract_0** v140);
abstract_0 func6 ();
abstract_0 func7 ();
// definitions
/* method id 400 */ C0::C0 () {
return;

}
/* method id 401 */ C0::~C0 () {
return;

}
/* method id 402 */ abstract_0 C0::func1 (abstract_0** v0, abstract_0** v1, abstract_0** v2, abstract_0** v3) {
abstract_0** v4 = new abstract_0* ();
abstract_0** v5 = new abstract_0* ();
abstract_0** v6 = new abstract_0* ();
abstract_0** v7 = new abstract_0* ();
return abstract_0();

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
delete (new C1 ());
return;

}
/* method id 405 */ C1::~C1 () {
abstract_1 v21 = abstract_1();
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
abstract_0** v24 = new abstract_0* ();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ abstract_0 C2::func2 (abstract_1 v56, abstract_0** v57) {
abstract_1 v58 = abstract_1();
abstract_1 v59 = abstract_1();
abstract_0** v60 = new abstract_0* ();
abstract_1 v61 = abstract_1();
return abstract_0();

}
/* method id 407 */ C2::C2 () {
abstract_1 v62 = abstract_1();
abstract_1 v63 = abstract_1();
abstract_1 v64 = abstract_1();
abstract_1 v65 = abstract_1();
return;

}
/* method id 408 */ C2::~C2 () {
abstract_1 v66 = abstract_1();
abstract_1 v67 = abstract_1();
abstract_1 v68 = abstract_1();
abstract_1 v69 = abstract_1();
delete (new C0 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::~C3 () {
abstract_1 v108 = abstract_1();
abstract_1 v109 = abstract_1();
abstract_1 v110 = abstract_1();
abstract_1 v111 = abstract_1();
delete (new C0 ());
delete (new C3 ());
return;

}
/* method id 410 */ abstract_0 C3::func2 (abstract_1 v112) {
abstract_1 v113 = abstract_1();
abstract_1 v114 = abstract_1();
abstract_1 v115 = abstract_1();
return ::func5(v10, v10);

}
/* method id 411 */ C3::C3 () {
abstract_1 v116 = abstract_1();
abstract_1 v117 = abstract_1();
abstract_0** v118 = new abstract_0* ();
abstract_1 v119 = abstract_1();
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func4 (abstract_1 v136) {
abstract_0** v137;
abstract_0** v138;

v136 = abstract_1();
v136 = abstract_1();
v136 = abstract_1();
return ::func5(new abstract_0* (), new abstract_0* ());

}
abstract_0 func5 (abstract_0** v139, abstract_0** v140) {

return abstract_0();

}
abstract_0 func6 () {
abstract_0** v141;
abstract_1 v142;
abstract_1 v143;
abstract_1 v144;

v142 = abstract_1();
return ::func4(abstract_1());

}
abstract_0 func7 () {
abstract_1 v145;
abstract_1 v146;

return ::func4(abstract_1());

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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var8: AbstractType{1}
16   | var9: AbstractType{1}
20   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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
0    | {vfptr}
4    | {vbptr}
8    | var104: AbstractType{1}
12   | var105: AbstractType{1}
16   | var106: AbstractType{1}
20   | var107: AbstractType{1}
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
0    | {vfptr}
4    | {vbptr}
8    | var134: AbstractType{1}
12   | var135: AbstractType{1}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var8: AbstractType{1}
24   | var9: AbstractType{1}
28   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   +---
40   +--- (virtual base class C2)
40   | {vfptr}
44   | {vbptr}
48   | var104: AbstractType{1}
52   | var105: AbstractType{1}
56   | var106: AbstractType{1}
60   | var107: AbstractType{1}
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
 const size_t model_offset = 32;
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
 const size_t model_offset = 40;
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

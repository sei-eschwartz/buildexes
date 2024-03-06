// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_3 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
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
/* method id 406 */ virtual void func2 (abstract_1 v49, abstract_0** v50);
C1 (special_constructor);
void* v55;
abstract_1 v56;
abstract_1 v57;
void* v58;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ virtual void func3 (abstract_1 v61, void* v62, abstract_1 v63, abstract_1 v64);
/* method id 409 */ virtual void func2 (abstract_0** v69, abstract_1 v70, void** v71, abstract_1 v72);
/* method id 410 */ virtual abstract_0 func0 (abstract_1 v77, abstract_0** v78);
/* method id 411 */ C2 ();
C2 (special_constructor);
abstract_1 v80;
abstract_1 v81;
abstract_0** v82;
abstract_1 v83;
};
struct C3 : public virtual C1 {
/* method id 412 */ C3 ();
/* method id 413 */ virtual abstract_3 func0 (abstract_2 v84, abstract_0** v85, abstract_0** v86, abstract_1 v87);
/* method id 414 */ virtual ~C3 ();
/* method id 415 */ virtual abstract_3* func1 (abstract_3* v92, abstract_0** v93, abstract_2 v94, abstract_0** v95);
C3 (special_constructor);
C0 v96;
};
abstract_3* func5 (abstract_1 v97);
void func6 (abstract_3* v100, abstract_3* v101, abstract_4 v102, abstract_1 v103);
void func7 (abstract_0** v108);
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
abstract_1 v24 = abstract_1();
delete (new C1 ());
return;

}
/* method id 406 */ void C1::func2 (abstract_1 v49, abstract_0** v50) {
void* v51 = ((void*) 0);
void* v52 = ((void*) 0);
abstract_1 v53 = abstract_1();
abstract_1 v54 = abstract_1();
delete (new C1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::~C2 () {
abstract_1 v59 = abstract_1();
abstract_1 v60 = abstract_1();
return;

}
/* method id 408 */ void C2::func3 (abstract_1 v61, void* v62, abstract_1 v63, abstract_1 v64) {
abstract_1 v65 = abstract_1();
abstract_0** v66 = new abstract_0* ();
abstract_1 v67 = abstract_1();
abstract_1 v68 = abstract_1();
return ::func7(v10);

}
/* method id 409 */ void C2::func2 (abstract_0** v69, abstract_1 v70, void** v71, abstract_1 v72) {
void* v73 = ((void*) 0);
abstract_2 v74 = abstract_2();
abstract_1 v75 = abstract_1();
abstract_0** v76 = new abstract_0* ();
v10 = v10;
v10 = v10;
v10 = v10;
return ::func7(v10);

}
/* method id 410 */ abstract_0 C2::func0 (abstract_1 v77, abstract_0** v78) {
abstract_1 v79 = abstract_1();
delete (new C1 ());
return abstract_0();

}
/* method id 411 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {
delete (new C2 ());
return;

}
/* method id 413 */ abstract_3 C3::func0 (abstract_2 v84, abstract_0** v85, abstract_0** v86, abstract_1 v87) {
return abstract_3();

}
/* method id 414 */ C3::~C3 () {
abstract_1 v88 = abstract_1();
abstract_2 v89 = abstract_2();
abstract_2 v90 = abstract_2();
abstract_3* v91 = new abstract_3 ();
return;

}
/* method id 415 */ abstract_3* C3::func1 (abstract_3* v92, abstract_0** v93, abstract_2 v94, abstract_0** v95) {
return v92;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_3* func5 (abstract_1 v97) {
C0 v98;
abstract_0** v99;

return ((abstract_3*) 0);

}
void func6 (abstract_3* v100, abstract_3* v101, abstract_4 v102, abstract_1 v103) {
abstract_5 v104;
void* v105;
abstract_2 v106;
abstract_0** v107;

delete (new C2 ());
return (((C1*) 0))->C1::func2(v103, v107);

}
void func7 (abstract_0** v108) {

return;

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
class C1    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var55: PtrType{VoidType{}}
12   | var56: AbstractType{1}
16   | var57: AbstractType{1}
20   | var58: PtrType{VoidType{}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var8: AbstractType{1}
32   | var9: AbstractType{1}
36   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
40   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 40;
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
class C2    size(68)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var80: AbstractType{1}
12   | var81: AbstractType{1}
16   | var82: DeletablePtrType{PtrType{AbstractType{0}}}
20   | var83: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var8: AbstractType{1}
32   | var9: AbstractType{1}
36   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
40   +---
40   | {vtordisp for vbase 1}
44   +--- (virtual base class C1)
44   | {vfptr}
48   | {vbptr}
52   | var55: PtrType{VoidType{}}
56   | var56: AbstractType{1}
60   | var57: AbstractType{1}
64   | var58: PtrType{VoidType{}}
68   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 68;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
 const size_t model_offset = 44;
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
8    | var96: ClassType{0}
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
48   | var55: PtrType{VoidType{}}
52   | var56: AbstractType{1}
56   | var57: AbstractType{1}
60   | var58: PtrType{VoidType{}}
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

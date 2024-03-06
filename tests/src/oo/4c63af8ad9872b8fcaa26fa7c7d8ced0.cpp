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
void*** v0;
void*** v1;
void*** v2;
void*** v3;
};
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
/* method id 402 */ virtual ~C1 ();
C1 (special_constructor);
void*** v28;
void*** v29;
void*** v30;
};
struct C2 : public virtual C1 {
/* method id 403 */ C2 ();
/* method id 404 */ virtual abstract_0** func0 (void*** v31, void*** v32, void*** v33, void*** v34);
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ abstract_0** func0 (void*** v42);
C2 (special_constructor);
abstract_2 v47;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 407 */ C3 ();
/* method id 408 */ ~C3 ();
/* method id 409 */ virtual void** func0 (void*** v56);
/* method id 410 */ virtual abstract_0** func0 (abstract_1 v58, abstract_1 v59, abstract_1 v60);
C3 (special_constructor);
abstract_1 v65;
abstract_1 v66;
abstract_1 v67;
abstract_2 v68;
};
abstract_0**** func1 (abstract_1 v69, abstract_1 v70, abstract_1 v71, abstract_1 v72);
abstract_0* func2 (abstract_1 v77, abstract_1 v78, abstract_1 v79, abstract_1 v80);
abstract_0* func3 (abstract_1 v85, abstract_0* v86, abstract_1 v87, abstract_0* v88);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
void*** v4 = ((void***) 0);
void*** v5 = ((void***) 0);
void*** v6 = ((void***) 0);
void*** v7 = ((void***) 0);
return;

}
/* method id 402 */ C1::~C1 () {
void*** v16 = ((void***) 0);
void*** v17 = ((void***) 0);
void*** v18 = ((void***) 0);
void*** v19 = ((void***) 0);
delete (new C1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {
return;

}
/* method id 404 */ abstract_0** C2::func0 (void*** v31, void*** v32, void*** v33, void*** v34) {
void*** v35 = ((void***) 0);
void*** v36 = new void** ();
void*** v37 = new void** ();
return new abstract_0* ();

}
/* method id 405 */ C2::~C2 () {
void*** v38 = ((void***) 0);
delete (new C2 ());
return;

}
/* method id 406 */ abstract_0** C2::func0 (void*** v42) {
abstract_1 v43 = abstract_1();
abstract_2 v44 = abstract_2();
abstract_2 v45 = abstract_2();
void*** v46 = ((void***) 0);
return new abstract_0* ();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
abstract_1 v48 = abstract_1();
abstract_1 v49 = abstract_1();
abstract_2 v50 = abstract_2();
abstract_2 v51 = abstract_2();
delete (new C2 ());
return;

}
/* method id 408 */ C3::~C3 () {
abstract_2 v52 = abstract_2();
abstract_1 v53 = abstract_1();
abstract_1 v54 = abstract_1();
abstract_1 v55 = abstract_1();
delete (new C1 ());
return;

}
/* method id 409 */ void** C3::func0 (void*** v56) {
abstract_2 v57 = abstract_2();
return ((void**) 0);

}
/* method id 410 */ abstract_0** C3::func0 (abstract_1 v58, abstract_1 v59, abstract_1 v60) {
abstract_2 v61 = abstract_2();
abstract_1 v62 = abstract_1();
abstract_2 v63 = abstract_2();
abstract_1 v64 = abstract_1();
delete (new C1 ());
return new abstract_0* ();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0**** func1 (abstract_1 v69, abstract_1 v70, abstract_1 v71, abstract_1 v72) {
abstract_1 v73;
abstract_1 v74;
abstract_2 v75;
abstract_1 v76;

return new abstract_0*** ();

}
abstract_0* func2 (abstract_1 v77, abstract_1 v78, abstract_1 v79, abstract_1 v80) {
abstract_1 v81;
void*** v82;
abstract_0* v83;
abstract_0* v84;

return v83;

}
abstract_0* func3 (abstract_1 v85, abstract_0* v86, abstract_1 v87, abstract_0* v88) {
abstract_1 v89;
abstract_1 v90;
abstract_1 v91;
abstract_1 v92;

return v88;

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var0: PtrType{PtrType{PtrType{VoidType{}}}}
4    | var1: PtrType{PtrType{PtrType{VoidType{}}}}
8    | var2: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var3: PtrType{PtrType{PtrType{VoidType{}}}}
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
class C1    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var28: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var29: PtrType{PtrType{PtrType{VoidType{}}}}
16   | var30: PtrType{PtrType{PtrType{VoidType{}}}}
20   +---
20   +--- (virtual base class C0)
20   | var0: PtrType{PtrType{PtrType{VoidType{}}}}
24   | var1: PtrType{PtrType{PtrType{VoidType{}}}}
28   | var2: PtrType{PtrType{PtrType{VoidType{}}}}
32   | var3: PtrType{PtrType{PtrType{VoidType{}}}}
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
 const size_t model_offset = 20;
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
8    | var47: AbstractType{2}
12   +---
12   +--- (virtual base class C0)
12   | var0: PtrType{PtrType{PtrType{VoidType{}}}}
16   | var1: PtrType{PtrType{PtrType{VoidType{}}}}
20   | var2: PtrType{PtrType{PtrType{VoidType{}}}}
24   | var3: PtrType{PtrType{PtrType{VoidType{}}}}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var28: PtrType{PtrType{PtrType{VoidType{}}}}
40   | var29: PtrType{PtrType{PtrType{VoidType{}}}}
44   | var30: PtrType{PtrType{PtrType{VoidType{}}}}
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
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(72)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var65: AbstractType{1}
12   | var66: AbstractType{1}
16   | var67: AbstractType{1}
20   | var68: AbstractType{2}
24   +---
24   +--- (virtual base class C0)
24   | var0: PtrType{PtrType{PtrType{VoidType{}}}}
28   | var1: PtrType{PtrType{PtrType{VoidType{}}}}
32   | var2: PtrType{PtrType{PtrType{VoidType{}}}}
36   | var3: PtrType{PtrType{PtrType{VoidType{}}}}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | {vbptr}
48   | var28: PtrType{PtrType{PtrType{VoidType{}}}}
52   | var29: PtrType{PtrType{PtrType{VoidType{}}}}
56   | var30: PtrType{PtrType{PtrType{VoidType{}}}}
60   +---
60   +--- (virtual base class C2)
60   | {vfptr}
64   | {vbptr}
68   | var47: AbstractType{2}
72   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 72;
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
 const size_t model_offset = 60;
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

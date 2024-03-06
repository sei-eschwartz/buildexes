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
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ virtual C0 func0 (C0* v7, C0* v8);
C1 (special_constructor);
C0** v13;
C0* v14;
C0* v15;
C0* v16;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 404 */ virtual ~C2 ();
/* method id 405 */ C2 ();
C2 (special_constructor);
C0* v25;
C0* v26;
C0** v27;
C0* v28;
};
struct C3 : public virtual C1, public virtual C0, public virtual C2 {
/* method id 406 */ C3 ();
/* method id 407 */ virtual ~C3 ();
C3 (special_constructor);
};
C0 func3 (C0** v52, abstract_0 v53, abstract_0 v54);
C0 func4 (C0* v58, C0* v59, C0* v60, C0** v61);
C0 func5 (C0* v64, C0* v65, C0* v66, C0* v67);
C0 func6 (C0* v72, C0* v73, abstract_1 v74, C0* v75);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
delete (new C2 ());
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
delete (new C1 ());
return ::func6((new C0 ()), (new C0 ()), abstract_1(), (new C0 ()));

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::~C2 () {
C0* v17 = (new C0 ());
abstract_0 v18 = abstract_0();
C0** v19 = new C0* ();
C0* v20 = (new C0 ());
delete (new C1 ());
return;

}
/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
C0** v29 = new C0* ();
C0* v30 = ((C0*) 0);
C0* v31 = ((C0*) 0);
C0* v32 = ((C0*) 0);
delete (new C1 ());
::func3(v13, abstract_0(), abstract_0());
return;

}
/* method id 407 */ C3::~C3 () {
C0** v33 = new C0* ();
C0* v34 = ((C0*) 0);
C0* v35 = ((C0*) 0);
C0* v36 = ((C0*) 0);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()), C2(special_constructor ()) {}

C0 func3 (C0** v52, abstract_0 v53, abstract_0 v54) {
C0* v55;
abstract_1 v56;
C0* v57;

return (((C1*) 0))->C1::func0(v57, v57);

}
C0 func4 (C0* v58, C0* v59, C0* v60, C0** v61) {
C0* v62;
abstract_1 v63;

return *(v59);

}
C0 func5 (C0* v64, C0* v65, C0* v66, C0* v67) {
abstract_1 v68;
C0* v69;
C0* v70;
C0* v71;

return *(v66);

}
C0 func6 (C0* v72, C0* v73, abstract_1 v74, C0* v75) {
abstract_1 v76;
C0* v77;
C0* v78;
C0* v79;

return *(v79);

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
4    | var13: DeletablePtrType{PtrType{ClassType{0}}}
8    | var14: PtrType{ClassType{0}}
12   | var15: PtrType{ClassType{0}}
16   | var16: PtrType{ClassType{0}}
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
class C2    size(40)
0    +---
0    | {vbptr}
4    | var25: PtrType{ClassType{0}}
8    | var26: PtrType{ClassType{0}}
12   | var27: DeletablePtrType{PtrType{ClassType{0}}}
16   | var28: PtrType{ClassType{0}}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | var13: DeletablePtrType{PtrType{ClassType{0}}}
28   | var14: PtrType{ClassType{0}}
32   | var15: PtrType{ClassType{0}}
36   | var16: PtrType{ClassType{0}}
40   +---
40   +--- (virtual base class C0)
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
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
 const size_t model_offset = 40;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(44)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C1)
4    | {vfptr}
8    | var13: DeletablePtrType{PtrType{ClassType{0}}}
12   | var14: PtrType{ClassType{0}}
16   | var15: PtrType{ClassType{0}}
20   | var16: PtrType{ClassType{0}}
24   +---
24   +--- (virtual base class C0)
24   +---
24   +--- (virtual base class C2)
24   | {vbptr}
28   | var25: PtrType{ClassType{0}}
32   | var26: PtrType{ClassType{0}}
36   | var27: DeletablePtrType{PtrType{ClassType{0}}}
40   | var28: PtrType{ClassType{0}}
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
 const size_t model_offset = 4;
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
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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

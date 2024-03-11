// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
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
/* method id 404 */ virtual C0 func0 (C0* v10, abstract_1 v11, abstract_1 v12, C0* v13);
C1 (special_constructor);
C0* v18;
abstract_1 v19;
C0* v20;
abstract_2 v21;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ C2 ();
C2 (special_constructor);
C0* v28;
C0* v29;
abstract_2 v30;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 407 */ virtual ~C3 ();
/* method id 408 */ C3 ();
/* method id 409 */ C0 func0 (C0* v70, C0* v71, C0* v72, abstract_1 v73);
C3 (special_constructor);
abstract_3 v85;
C0* v86;
abstract_0 v87;
};
C0 func1 (C0* v88, abstract_1 v89, C0* v90, C0* v91);
C0 func2 (C0* v96, C0* v97, C0* v98);
C0 func3 (C0* v101, C0* v102, C0* v103, C0* v104);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
::func2(v18, v18, v18);
::func2(v18, v18, v18);
::func2(v18, v18, v18);
::func2(v18, v18, v18);
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
return ::func2((new C0 ()), (new C0 ()), (new C0 ()));

}
/* method id 404 */ C0 C1::func0 (C0* v10, abstract_1 v11, abstract_1 v12, C0* v13) {
abstract_1 v14 = abstract_1();
abstract_2 v15 = abstract_2();
abstract_1 v16 = abstract_1();
C0* v17 = ((C0*) 0);
return ::func2(v10, v10, v10);

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::~C2 () {
C0* v22 = ((C0*) 0);
C0* v23 = ((C0*) 0);
C0* v24 = ((C0*) 0);
C0* v25 = ((C0*) 0);
::func2(v18, v18, v18);
return;

}
/* method id 406 */ C2::C2 () {
C0* v26 = ((C0*) 0);
abstract_2 v27 = abstract_2();
::func2(v18, v18, v18);
::func2(v18, v18, v18);
::func2(v18, v18, v18);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 407 */ C3::~C3 () {
return;

}
/* method id 408 */ C3::C3 () {
C0* v31 = (new C0 ());
abstract_1 v32 = abstract_1();
C0* v33 = (new C0 ());
C0* v34 = (new C0 ());
::func2(v20, v20, v20);
::func2(v20, v20, v20);
::func2(v20, v20, v20);
::func2(v20, v20, v20);
return;

}
/* method id 409 */ C0 C3::func0 (C0* v70, C0* v71, C0* v72, abstract_1 v73) {
C0* v74 = &(*(&(*(((C0*) 0)))));
C0* v75 = &(*(&(*(((C0*) 0)))));
C0* v76 = &(*(&(*(((C0*) 0)))));
C0* v77 = &(*(&(*(((C0*) 0)))));
::func2(v20, v20, v20);
return ::func2((new C0 ()), (new C0 ()), (new C0 ()));

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

C0 func1 (C0* v88, abstract_1 v89, C0* v90, C0* v91) {
C0* v92;
C0* v93;
C0* v94;
C0* v95;

return *(v95);

}
C0 func2 (C0* v96, C0* v97, C0* v98) {
C0* v99;
C0* v100;

return *(v98);

}
C0 func3 (C0* v101, C0* v102, C0* v103, C0* v104) {
C0* v105;
abstract_1 v106;
C0* v107;
C0* v108;

return ::func2(v105, v105, v105);

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
4    | var18: PtrType{ClassType{0}}
8    | var19: AbstractType{1}
12   | var20: PtrType{ClassType{0}}
16   | var21: AbstractType{2}
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
class C2    size(36)
0    +---
0    | {vbptr}
4    | var28: PtrType{ClassType{0}}
8    | var29: PtrType{ClassType{0}}
12   | var30: AbstractType{2}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | var18: PtrType{ClassType{0}}
24   | var19: AbstractType{1}
28   | var20: PtrType{ClassType{0}}
32   | var21: AbstractType{2}
36   +---
36   +--- (virtual base class C0)
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
 const size_t model_offset = 36;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(52)
0    +---
0    | {vbptr}
4    | var85: AbstractType{3}
8    | var86: PtrType{ClassType{0}}
12   | var87: AbstractType{0}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | var18: PtrType{ClassType{0}}
24   | var19: AbstractType{1}
28   | var20: PtrType{ClassType{0}}
32   | var21: AbstractType{2}
36   +---
36   +--- (virtual base class C0)
36   +---
36   +--- (virtual base class C2)
36   | {vbptr}
40   | var28: PtrType{ClassType{0}}
44   | var29: PtrType{ClassType{0}}
48   | var30: AbstractType{2}
52   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
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

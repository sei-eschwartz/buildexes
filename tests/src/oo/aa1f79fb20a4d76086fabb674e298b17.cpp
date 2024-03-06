// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual abstract_0 func1 ();
/* method id 403 */ C1 ();
/* method id 404 */ virtual abstract_0 func0 (C0 v0, C0 v1);
/* method id 405 */ virtual abstract_0 func2 (C0 v5, C0 v6, C0 v7);
C1 (special_constructor);
C0 v8;
abstract_1 v9;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
/* method id 408 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1 v29;
abstract_1 v30;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ virtual abstract_0 func0 (abstract_1 v38, abstract_1 v39, abstract_1 v40);
C3 (special_constructor);
abstract_1 v87;
abstract_1 v88;
abstract_1 v89;
};
abstract_0 func4 (abstract_1 v90, abstract_1 v91, abstract_1 v92, abstract_1 v93);
abstract_0 func5 (C0 v98, abstract_1 v99, abstract_1 v100);
abstract_0 func6 (abstract_1 v104, abstract_1 v105, abstract_1 v106, abstract_1 v107);
abstract_0 func7 (C0 v112, abstract_1 v113, abstract_1 v114, abstract_1 v115);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0 C1::func1 () {
::func5(v8, v9, v9);
::func5(v8, v9, v9);
::func5(v8, v9, v9);
::func5(v8, v9, v9);
return ::func5(v8, v9, v9);

}
/* method id 403 */ C1::C1 () {
return;

}
/* method id 404 */ abstract_0 C1::func0 (C0 v0, C0 v1) {
C0 v2 = *(&(*((new C0 ()))));
C0 v3 = *(&(*((new C0 ()))));
C0 v4 = *(&(*((new C0 ()))));
::func5(v2, v9, v9);
::func5(v2, v9, v9);
::func5(v2, v9, v9);
::func5(v2, v9, v9);
return ::func5(v1, v9, v9);

}
/* method id 405 */ abstract_0 C1::func2 (C0 v5, C0 v6, C0 v7) {
return ::func5(v6, v9, v9);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_1 v10 = abstract_1();
abstract_1 v11 = abstract_1();
abstract_1 v12 = abstract_1();
abstract_1 v13 = abstract_1();
return;

}
/* method id 408 */ C2::~C2 () {
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
abstract_1 v31 = abstract_1();
abstract_1 v32 = abstract_1();
abstract_1 v33 = abstract_1();
delete (new C1 ());
return;

}
/* method id 410 */ C3::~C3 () {
abstract_1 v34 = abstract_1();
abstract_1 v35 = abstract_1();
abstract_1 v36 = abstract_1();
abstract_1 v37 = abstract_1();
::func5(v8, v9, v9);
::func5(v8, v9, v9);
::func5(v8, v9, v9);
::func5(v8, v9, v9);
return;

}
/* method id 411 */ abstract_0 C3::func0 (abstract_1 v38, abstract_1 v39, abstract_1 v40) {
abstract_1 v41 = abstract_1();
abstract_1 v42 = abstract_1();
abstract_1 v43 = abstract_1();
abstract_1 v44 = abstract_1();
::func5(v8, v89, v89);
::func5(v8, v89, v89);
::func5(v8, v89, v89);
::func5(v8, v89, v89);
return ::func5(v8, abstract_1(), abstract_1());

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func4 (abstract_1 v90, abstract_1 v91, abstract_1 v92, abstract_1 v93) {
abstract_1 v94;
abstract_1 v95;
abstract_1 v96;
abstract_1 v97;

return abstract_0();

}
abstract_0 func5 (C0 v98, abstract_1 v99, abstract_1 v100) {
abstract_1 v101;
abstract_1 v102;
abstract_1 v103;

return abstract_0();

}
abstract_0 func6 (abstract_1 v104, abstract_1 v105, abstract_1 v106, abstract_1 v107) {
abstract_1 v108;
abstract_1 v109;
abstract_1 v110;
abstract_1 v111;

return abstract_0();

}
abstract_0 func7 (C0 v112, abstract_1 v113, abstract_1 v114, abstract_1 v115) {

delete (new C3 ());
return ::func5(v112, v113, v113);

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 4;
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
4    | {vbptr}
8    | var8: ClassType{0}
12   | var9: AbstractType{1}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
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
class C2    size(32)
0    +---
0    | {vbptr}
4    | var29: AbstractType{1}
8    | var30: AbstractType{1}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var8: ClassType{0}
28   | var9: AbstractType{1}
32   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 32;
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
 }}}
/*
class C3    size(52)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var87: AbstractType{1}
12   | var88: AbstractType{1}
16   | var89: AbstractType{1}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var8: ClassType{0}
36   | var9: AbstractType{1}
40   +---
40   +--- (virtual base class C2)
40   | {vbptr}
44   | var29: AbstractType{1}
48   | var30: AbstractType{1}
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
 const size_t model_offset = 24;
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

// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual abstract_0 func1 ();
/* method id 403 */ C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
C0 v2;
C0 v3;
};
struct C2  {
/* method id 405 */ abstract_0 func2 ();
/* method id 406 */ C2 ();
/* method id 407 */ virtual ~C2 ();
C2 (special_constructor);
C1 v12;
C1 v13;
C1 v14;
C0 v15;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 408 */ C3 ();
C3 (special_constructor);
C1 v16;
C1 v17;
C1 v18;
C1 v19;
};
abstract_0 func6 (C1 v20, C1 v21, C1 v22, C0 v23);
abstract_0 func7 ();
abstract_0 func8 (C1 v32, C1 v33, C0 v34, C0 v35);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0 C1::func1 () {
delete (new C1 ());
return abstract_0();

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ abstract_0 C2::func2 () {
return abstract_0();

}
/* method id 406 */ C2::C2 () {
v13 = v14;
v13 = v14;
v13 = v14;
v13 = v14;
return;

}
/* method id 407 */ C2::~C2 () {
C1 v8 = *((new C1 ()));
C1 v9 = *((new C1 ()));
C1 v10 = *((new C1 ()));
C0 v11 = *(&(*(((C0*) 0))));
v15 = v15;
v15 = v15;
v15 = v15;
v15 = v15;
return;

}
C2::C2 (special_constructor)  {}

/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func6 (C1 v20, C1 v21, C1 v22, C0 v23) {
C1 v24;
C1 v25;
C1 v26;
C1 v27;

v21 = *(&(v21));
v21 = *(&(v21));
return abstract_0();

}
abstract_0 func7 () {
C1 v28;
C1 v29;
C1 v30;
C1 v31;

delete (new C1 ());
return abstract_0();

}
abstract_0 func8 (C1 v32, C1 v33, C0 v34, C0 v35) {
C0 v36;

::func7();
return abstract_0();

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var0: ClassType{0}
9    | var1: ClassType{0}
10   | var2: ClassType{0}
11   | var3: ClassType{0}
12   +---
12   +--- (virtual base class C0)
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(44)
0    +---
0    | {vfptr}
4    | var12: ClassType{1}
16   | var13: ClassType{1}
28   | var14: ClassType{1}
40   | var15: ClassType{0}
41   | alignment: 
44   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(108)
0    +---
0    | {vbptr}
4    | var16: ClassType{1}
16   | var17: ClassType{1}
28   | var18: ClassType{1}
40   | var19: ClassType{1}
52   +---
52   +--- (virtual base class C0)
52   +---
52   +--- (virtual base class C1)
52   | {vfptr}
56   | {vbptr}
60   | var0: ClassType{0}
61   | var1: ClassType{0}
62   | var2: ClassType{0}
63   | var3: ClassType{0}
64   +---
64   +--- (virtual base class C2)
64   | {vfptr}
68   | var12: ClassType{1}
80   | var13: ClassType{1}
92   | var14: ClassType{1}
104  | var15: ClassType{0}
105  | alignment: 
108  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 108;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 52;
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
 const size_t model_offset = 64;
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

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
abstract_0 v2;
abstract_0 v3;
abstract_0 v4;
abstract_0 v5;
};
struct C1 : public virtual C0 {
/* method id 401 */ virtual C0* func0 (abstract_0 v6, abstract_0 v7);
/* method id 402 */ virtual void* func0 (abstract_0 v8, abstract_0 v9, abstract_0 v10, abstract_0 v11);
/* method id 403 */ C1 ();
C1 (special_constructor);
abstract_0 v16;
abstract_0 v17;
abstract_0 v18;
abstract_0 v19;
};
struct C2 : public virtual C1 {
/* method id 404 */ C2 ();
/* method id 405 */ virtual ~C2 ();
C2 (special_constructor);
abstract_0 v130;
abstract_0 v131;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 406 */ C3 ();
/* method id 407 */ virtual ~C3 ();
/* method id 408 */ virtual C0** func2 (abstract_0 v137, abstract_0 v138, abstract_0 v139);
/* method id 409 */ virtual C0** func3 (abstract_0 v143);
C3 (special_constructor);
abstract_2 v148;
abstract_2 v149;
abstract_0 v150;
abstract_2 v151;
};
// definitions
/* method id 400 */ C0::C0 () {
abstract_0 v0 = abstract_0();
abstract_0 v1 = abstract_0();
((new C3 ()))->C3::func3(v1);
((new C3 ()))->C3::func3(v1);
((new C3 ()))->C3::func3(v1);
((new C3 ()))->C3::func3(v1);
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C0* C1::func0 (abstract_0 v6, abstract_0 v7) {
return ((C0*) 0);

}
/* method id 402 */ void* C1::func0 (abstract_0 v8, abstract_0 v9, abstract_0 v10, abstract_0 v11) {
abstract_0 v12 = abstract_0();
abstract_0 v13 = abstract_0();
abstract_0 v14 = abstract_0();
abstract_0 v15 = abstract_0();
return ((void*) 0);

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {
abstract_0 v20 = abstract_0();
abstract_0 v21 = abstract_0();
abstract_0 v22 = abstract_0();
abstract_0 v23 = abstract_0();
delete (new C2 ());
return;

}
/* method id 405 */ C2::~C2 () {
abstract_0 v34 = abstract_0();
abstract_0 v35 = abstract_0();
abstract_0 v36 = abstract_0();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
abstract_0 v132 = abstract_0();
return;

}
/* method id 407 */ C3::~C3 () {
abstract_0 v133 = abstract_0();
abstract_0 v134 = abstract_0();
abstract_0 v135 = abstract_0();
abstract_0 v136 = abstract_0();
return;

}
/* method id 408 */ C0** C3::func2 (abstract_0 v137, abstract_0 v138, abstract_0 v139) {
abstract_0 v140 = abstract_0();
abstract_0 v141 = abstract_0();
abstract_0 v142 = abstract_0();
return ((C0**) 0);

}
/* method id 409 */ C0** C3::func3 (abstract_0 v143) {
abstract_0 v144 = abstract_0();
C0*** v145 = new C0** ();
abstract_1 v146 = abstract_1();
abstract_1 v147 = abstract_1();
return ((C0**) 0);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var2: AbstractType{0}
4    | var3: AbstractType{0}
8    | var4: AbstractType{0}
12   | var5: AbstractType{0}
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
8    | var16: AbstractType{0}
12   | var17: AbstractType{0}
16   | var18: AbstractType{0}
20   | var19: AbstractType{0}
24   +---
24   +--- (virtual base class C0)
24   | var2: AbstractType{0}
28   | var3: AbstractType{0}
32   | var4: AbstractType{0}
36   | var5: AbstractType{0}
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
class C2    size(56)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var130: AbstractType{0}
12   | var131: AbstractType{0}
16   +---
16   +--- (virtual base class C0)
16   | var2: AbstractType{0}
20   | var3: AbstractType{0}
24   | var4: AbstractType{0}
28   | var5: AbstractType{0}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   | var16: AbstractType{0}
44   | var17: AbstractType{0}
48   | var18: AbstractType{0}
52   | var19: AbstractType{0}
56   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 56;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(80)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var148: AbstractType{2}
12   | var149: AbstractType{2}
16   | var150: AbstractType{0}
20   | var151: AbstractType{2}
24   +---
24   +--- (virtual base class C0)
24   | var2: AbstractType{0}
28   | var3: AbstractType{0}
32   | var4: AbstractType{0}
36   | var5: AbstractType{0}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | {vbptr}
48   | var16: AbstractType{0}
52   | var17: AbstractType{0}
56   | var18: AbstractType{0}
60   | var19: AbstractType{0}
64   +---
64   +--- (virtual base class C2)
64   | {vfptr}
68   | {vbptr}
72   | var130: AbstractType{0}
76   | var131: AbstractType{0}
80   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 80;
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

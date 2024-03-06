// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ virtual ~C1 ();
/* method id 402 */ virtual abstract_0 func0 (abstract_0* v2, abstract_0* v3);
/* method id 403 */ C1 ();
C1 (special_constructor);
abstract_0* v5;
abstract_0* v6;
C0 v7;
};
struct C2 : public C1 {
/* method id 404 */ C2 ();
C2 (special_constructor);
C0 v8;
abstract_0* v9;
C0 v10;
C0 v11;
};
struct C3 : public virtual C2, public virtual C0 {
/* method id 405 */ C3 ();
C3 (special_constructor);
C0 v23;
C0 v24;
C0 v25;
C0 v26;
};
abstract_0 func2 (C0 v27, C0 v28, abstract_0* v29, C0 v30);
abstract_0 func3 (C0 v33, C0 v34, C0 v35, C0 v36);
abstract_0 func4 (C0 v41, abstract_0* v42, abstract_0* v43, abstract_0* v44);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::~C1 () {
abstract_0* v0 = ((abstract_0*) 0);
abstract_0* v1 = ((abstract_0*) 0);
return;

}
/* method id 402 */ abstract_0 C1::func0 (abstract_0* v2, abstract_0* v3) {
abstract_0* v4 = new abstract_0 ();
return ::func2(v7, v7, v6, v7);

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::C2 () {
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
abstract_0* v12 = ((abstract_0*) 0);
abstract_0* v13 = ((abstract_0*) 0);
C0 v14 = *((new C0 ()));
C0 v15 = *((new C0 ()));
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()), C0(special_constructor ()) {}

abstract_0 func2 (C0 v27, C0 v28, abstract_0* v29, C0 v30) {
C0 v31;
C0 v32;

return ::func4(v28, v29, v29, v29);

}
abstract_0 func3 (C0 v33, C0 v34, C0 v35, C0 v36) {
abstract_0* v37;
C0 v38;
C0 v39;
C0 v40;

return ::func4(v36, new abstract_0 (), new abstract_0 (), new abstract_0 ());

}
abstract_0 func4 (C0 v41, abstract_0* v42, abstract_0* v43, abstract_0* v44) {
C0 v45;
abstract_0* v46;

return ::func3(v41, v41, v45, v45);

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | var5: PtrType{AbstractType{0}}
8    | var6: PtrType{AbstractType{0}}
12   | var7: ClassType{0}
13   | alignment: 
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(28)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var5: PtrType{AbstractType{0}}
8    | | var6: PtrType{AbstractType{0}}
12   | | var7: ClassType{0}
13   | | alignment: 
16   | +---
16   | var8: ClassType{0}
17   | alignment: 
20   | var9: PtrType{AbstractType{0}}
24   | var10: ClassType{0}
25   | var11: ClassType{0}
26   | alignment: 
28   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(40)
0    +---
0    | {vbptr}
4    | var23: ClassType{0}
5    | var24: ClassType{0}
6    | var25: ClassType{0}
7    | var26: ClassType{0}
8    +---
8    +--- (virtual base class C2)
8    | +--- (base class C1)
8    | | {vfptr}
12   | | var5: PtrType{AbstractType{0}}
16   | | var6: PtrType{AbstractType{0}}
20   | | var7: ClassType{0}
21   | | alignment: 
24   | +---
24   | var8: ClassType{0}
25   | alignment: 
28   | var9: PtrType{AbstractType{0}}
32   | var10: ClassType{0}
33   | var11: ClassType{0}
34   | alignment: 
36   +---
36   | alignment: Additional padding between virtual bases 2, which ends with a zero-sized object, and 0, which leads with zero sized base.
40   +--- (virtual base class C0)
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

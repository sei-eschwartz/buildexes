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
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
C1 (special_constructor);
C0 v4;
C0* v5;
C0* v6;
C0* v7;
};
struct C2 : public virtual C1 {
/* method id 402 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C1, public C2 {
/* method id 403 */ C3 ();
/* method id 404 */ virtual C0 func0 (C0* v14, C0* v15);
/* method id 405 */ virtual C0 func0 (C0 v16, C0* v17);
/* method id 406 */ virtual C0 func1 (C0 v21, C1 v22, C0 v23, C0 v24);
C3 (special_constructor);
C2 v25;
abstract_0 v26;
C1 v27;
C0 v28;
};
C0 func2 (C0* v29, C0* v30, C0* v31, C0 v32);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
delete (new C3 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 402 */ C2::C2 () {
C0* v8 = ((C0*) 0);
C0* v9 = ((C0*) 0);
C0* v10 = ((C0*) 0);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 403 */ C3::C3 () {
C0* v11 = &(*(((C0*) 0)));
C0 v12 = *(((C0*) 0));
C0 v13 = *((C0*)(((C1*) 0)));
delete (new C1 ());
return;

}
/* method id 404 */ C0 C3::func0 (C0* v14, C0* v15) {
delete (new C1 ());
return v4;

}
/* method id 405 */ C0 C3::func0 (C0 v16, C0* v17) {
C1 v18 = *(&(*((new C1 ()))));
C0* v19 = &(*((C0*)(((C1*) 0))));
C2 v20 = *(((C2*) 0));
return v4;

}
/* method id 406 */ C0 C3::func1 (C0 v21, C1 v22, C0 v23, C0 v24) {
return v28;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

C0 func2 (C0* v29, C0* v30, C0* v31, C0 v32) {

delete (new C2 ());
return *(((C0*) 0));

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
0    | {vbptr}
4    | var4: ClassType{0}
5    | alignment: 
8    | var5: PtrType{ClassType{0}}
12   | var6: PtrType{ClassType{0}}
16   | var7: PtrType{ClassType{0}}
20   +---
20   +--- (virtual base class C0)
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
class C2    size(24)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    +---
4    +--- (virtual base class C1)
4    | {vbptr}
8    | var4: ClassType{0}
9    | alignment: 
12   | var5: PtrType{ClassType{0}}
16   | var6: PtrType{ClassType{0}}
20   | var7: PtrType{ClassType{0}}
24   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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
4    | +--- (base class C2)
4    | | {vbptr}
8    | +---
8    | var25: ClassType{2}
32   | var26: AbstractType{0}
36   | var27: ClassType{1}
56   | var28: ClassType{0}
57   | alignment: 
60   +---
60   +--- (virtual base class C0)
60   +---
60   +--- (virtual base class C1)
60   | {vbptr}
64   | var4: ClassType{0}
65   | alignment: 
68   | var5: PtrType{ClassType{0}}
72   | var6: PtrType{ClassType{0}}
76   | var7: PtrType{ClassType{0}}
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
 const size_t model_offset = 60;
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
 const size_t model_offset = 4;
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

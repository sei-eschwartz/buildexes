// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_10 { int x; };
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
/* method id 406 */ virtual abstract_0 func1 (abstract_1 v42, abstract_3 v43, abstract_1 v44);
C2 (special_constructor);
C1 v45;
};
struct C3 : public virtual C2 {
/* method id 407 */ ~C3 ();
/* method id 408 */ virtual abstract_0* func0 (abstract_1 v47, C1 v48, void*** v49, C1 v50);
/* method id 409 */ virtual void func0 ();
/* method id 410 */ C3 ();
C3 (special_constructor);
C1 v58;
abstract_1 v59;
abstract_1 v60;
void*** v61;
};
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
delete (new C2 ());
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
return;

}
/* method id 406 */ abstract_0 C2::func1 (abstract_1 v42, abstract_3 v43, abstract_1 v44) {
v30 = ((void***) 0);
v30 = ((void***) 0);
v30 = ((void***) 0);
v30 = ((void***) 0);
return abstract_0();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::~C3 () {
void*** v46 = new void** ();
return;

}
/* method id 408 */ abstract_0* C3::func0 (abstract_1 v47, C1 v48, void*** v49, C1 v50) {
abstract_4 v51 = abstract_4();
abstract_4 v52 = abstract_4();
return new abstract_0 ();

}
/* method id 409 */ void C3::func0 () {
abstract_3 v53 = abstract_3();
abstract_3 v54 = abstract_3();
delete (new C1 ());
return;

}
/* method id 410 */ C3::C3 () {
abstract_10 v55 = abstract_10();
C1 v56 = *(&(*(((C1*) 0))));
abstract_10 v57 = abstract_10();
delete (new C2 ());
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

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
class C2    size(80)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var45: ClassType{1}
44   +---
44   +--- (virtual base class C0)
44   | var0: PtrType{PtrType{PtrType{VoidType{}}}}
48   | var1: PtrType{PtrType{PtrType{VoidType{}}}}
52   | var2: PtrType{PtrType{PtrType{VoidType{}}}}
56   | var3: PtrType{PtrType{PtrType{VoidType{}}}}
60   +---
60   +--- (virtual base class C1)
60   | {vfptr}
64   | {vbptr}
68   | var28: PtrType{PtrType{PtrType{VoidType{}}}}
72   | var29: PtrType{PtrType{PtrType{VoidType{}}}}
76   | var30: PtrType{PtrType{PtrType{VoidType{}}}}
80   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 80;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 60;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(136)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var58: ClassType{1}
44   | var59: AbstractType{1}
48   | var60: AbstractType{1}
52   | var61: PtrType{PtrType{PtrType{VoidType{}}}}
56   +---
56   +--- (virtual base class C0)
56   | var0: PtrType{PtrType{PtrType{VoidType{}}}}
60   | var1: PtrType{PtrType{PtrType{VoidType{}}}}
64   | var2: PtrType{PtrType{PtrType{VoidType{}}}}
68   | var3: PtrType{PtrType{PtrType{VoidType{}}}}
72   +---
72   +--- (virtual base class C1)
72   | {vfptr}
76   | {vbptr}
80   | var28: PtrType{PtrType{PtrType{VoidType{}}}}
84   | var29: PtrType{PtrType{PtrType{VoidType{}}}}
88   | var30: PtrType{PtrType{PtrType{VoidType{}}}}
92   +---
92   +--- (virtual base class C2)
92   | {vfptr}
96   | {vbptr}
100  | var45: ClassType{1}
136  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 136;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 92;
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

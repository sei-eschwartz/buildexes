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
/* method id 406 */ virtual void** func0 (abstract_1 v42, abstract_1 v43, void*** v44);
C2 (special_constructor);
abstract_1 v47;
abstract_1 v48;
void*** v49;
abstract_1 v50;
};
struct C3 : public virtual C1 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual void** func0 (void*** v55);
/* method id 409 */ virtual abstract_0** func0 (abstract_1 v57, abstract_1 v58, abstract_1 v59);
/* method id 410 */ virtual ~C3 ();
C3 (special_constructor);
abstract_1 v68;
abstract_1 v69;
abstract_1 v70;
abstract_2 v71;
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
delete (new C3 ());
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
/* method id 406 */ void** C2::func0 (abstract_1 v42, abstract_1 v43, void*** v44) {
void*** v45 = new void** ();
abstract_1 v46 = abstract_1();
return new void* ();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
abstract_2 v51 = abstract_2();
abstract_1 v52 = abstract_1();
abstract_1 v53 = abstract_1();
abstract_1 v54 = abstract_1();
return;

}
/* method id 408 */ void** C3::func0 (void*** v55) {
abstract_2 v56 = abstract_2();
return new void* ();

}
/* method id 409 */ abstract_0** C3::func0 (abstract_1 v57, abstract_1 v58, abstract_1 v59) {
abstract_2 v60 = abstract_2();
abstract_1 v61 = abstract_1();
abstract_2 v62 = abstract_2();
abstract_1 v63 = abstract_1();
return new abstract_0* ();

}
/* method id 410 */ C3::~C3 () {
abstract_2 v64 = abstract_2();
abstract_1 v65 = abstract_1();
abstract_1 v66 = abstract_1();
abstract_1 v67 = abstract_1();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

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
class C2    size(60)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var47: AbstractType{1}
12   | var48: AbstractType{1}
16   | var49: PtrType{PtrType{PtrType{VoidType{}}}}
20   | var50: AbstractType{1}
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
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 60;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(60)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var68: AbstractType{1}
12   | var69: AbstractType{1}
16   | var70: AbstractType{1}
20   | var71: AbstractType{2}
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
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 60;
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

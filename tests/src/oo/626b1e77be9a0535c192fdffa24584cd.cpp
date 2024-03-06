// type for special constructors
struct special_constructor {};
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
/* method id 402 */ virtual C0**** func2 (void*** v0, void*** v1, void*** v2, void*** v3);
/* method id 403 */ C1 ();
C1 (special_constructor);
void*** v8;
void*** v9;
void*** v10;
void*** v11;
};
struct C2 : public virtual C1 {
/* method id 405 */ virtual void**** func0 (void*** v12, void*** v13, void*** v14, void*** v15);
/* method id 406 */ virtual void*** func3 ();
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ virtual void*** func4 ();
/* method id 409 */ C2 ();
C2 (special_constructor);
void*** v18;
void*** v19;
};
struct C3 : public virtual C0, public virtual C1, public virtual C2 {
/* method id 410 */ C3 ();
/* method id 411 */ virtual void**** func0 (void*** v25, void*** v26, void*** v27, void*** v28);
C3 (special_constructor);
void*** v29;
void*** v30;
};
C0*** func8 (void*** v31, void*** v32, void*** v33, void*** v34);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0**** C1::func2 (void*** v0, void*** v1, void*** v2, void*** v3) {
void*** v4 = new void** ();
void*** v5 = new void** ();
void*** v6 = new void** ();
void*** v7 = new void** ();
return new C0*** ();

}
/* method id 403 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ void**** C2::func0 (void*** v12, void*** v13, void*** v14, void*** v15) {
void*** v16 = new void** ();
return new void*** ();

}
/* method id 406 */ void*** C2::func3 () {
return new void** ();

}
/* method id 407 */ C2::~C2 () {
void*** v17 = new void** ();
return;

}
/* method id 408 */ void*** C2::func4 () {
return ((void***) 0);

}
/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
void*** v20 = new void** ();
return;

}
/* method id 411 */ void**** C3::func0 (void*** v25, void*** v26, void*** v27, void*** v28) {
return new void*** ();

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

C0*** func8 (void*** v31, void*** v32, void*** v33, void*** v34) {
void*** v35;
void*** v36;
void*** v37;
void*** v38;

return ((C0***) 0);

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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var8: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
12   | var9: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
16   | var10: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
20   | var11: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
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
class C2    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var18: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
12   | var19: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var8: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
32   | var9: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
36   | var10: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
40   | var11: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
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
 }}}
/*
class C3    size(60)
0    +---
0    | {vbptr}
4    | var29: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
8    | var30: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var8: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
28   | var9: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
32   | var10: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
36   | var11: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
40   +---
40   | {vtordisp for vbase 2}
44   +--- (virtual base class C2)
44   | {vfptr}
48   | {vbptr}
52   | var18: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
56   | var19: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
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
 const size_t model_offset = 44;
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

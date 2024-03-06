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
/* method id 405 */ C0*** func0 (void*** v12, void*** v13, void*** v14, void*** v15);
/* method id 406 */ virtual void** func2 (void*** v17, void*** v18, void*** v19);
/* method id 407 */ C2 ();
C2 (special_constructor);
void*** v21;
void*** v22;
void*** v23;
};
struct C3 : public virtual C0, public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
C3 (special_constructor);
void*** v24;
void*** v25;
void*** v26;
void*** v27;
};
void** func8 (void*** v28);
void* func9 (C3 v31, C3 v32, C3 v33, C3 v34);
void* func10 (C3 v39, void*** v40, C3 v41, void*** v42);
void*** func11 (C3 v45, C3 v46, C3 v47, C3 v48);
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

/* method id 405 */ C0*** C2::func0 (void*** v12, void*** v13, void*** v14, void*** v15) {
void*** v16 = new void** ();
delete (new C1 ());
return new C0** ();

}
/* method id 406 */ void** C2::func2 (void*** v17, void*** v18, void*** v19) {
void*** v20 = new void** ();
return new void* ();

}
/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

void** func8 (void*** v28) {
void*** v29;
C3 v30;

delete (new C2 ());
return new void* ();

}
void* func9 (C3 v31, C3 v32, C3 v33, C3 v34) {
C3 v35;
C3 v36;
C3 v37;
C3 v38;

return ((void*) 0);

}
void* func10 (C3 v39, void*** v40, C3 v41, void*** v42) {
void*** v43;
C3 v44;

return ((void*) 0);

}
void*** func11 (C3 v45, C3 v46, C3 v47, C3 v48) {
C3 v49;
C3 v50;
C3 v51;
C3 v52;

delete (new C2 ());
return ((void***) 0);

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
class C2    size(48)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var21: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
12   | var22: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
16   | var23: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var8: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
36   | var9: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
40   | var10: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
44   | var11: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
48   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(68)
0    +---
0    | {vbptr}
4    | var24: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
8    | var25: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
12   | var26: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
16   | var27: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var8: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
36   | var9: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
40   | var10: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
44   | var11: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
48   +---
48   +--- (virtual base class C2)
48   | {vfptr}
52   | {vbptr}
56   | var21: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
60   | var22: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
64   | var23: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
68   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 68;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
 const size_t model_offset = 48;
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

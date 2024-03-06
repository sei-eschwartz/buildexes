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
/* method id 402 */ virtual void*** func2 ();
/* method id 403 */ void**** func2 (void**** v0);
/* method id 404 */ void func0 ();
/* method id 405 */ virtual void*** func2 (void**** v3, void**** v4, void**** v5, void**** v6);
/* method id 406 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 408 */ C2 ();
C2 (special_constructor);
void**** v7;
};
struct C3 : public virtual C2 {
/* method id 410 */ void*** func2 (void**** v8, void**** v9, void**** v10, void**** v11);
/* method id 411 */ virtual void** func0 (void**** v14, C2 v15, C2 v16, C2 v17);
/* method id 412 */ C3 ();
/* method id 413 */ ~C3 ();
C3 (special_constructor);
C2 v22;
C2 v23;
};
void** func7 (abstract_0 v24, void**** v25, C2 v26, C2 v27);
void*** func8 (C2 v31, C2 v32, C2 v33, C2 v34);
void** func9 (C3 v36, C2 v37, C3 v38, void**** v39);
void func10 (void**** v40);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void*** C1::func2 () {
return ((void***) 0);

}
/* method id 403 */ void**** C1::func2 (void**** v0) {
void**** v1 = new void*** ();
return new void*** ();

}
/* method id 404 */ void C1::func0 () {
void**** v2 = new void*** ();
return;

}
/* method id 405 */ void*** C1::func2 (void**** v3, void**** v4, void**** v5, void**** v6) {
return ((void***) 0);

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ void*** C3::func2 (void**** v8, void**** v9, void**** v10, void**** v11) {
C2 v12 = *(((C2*) 0));
C2 v13 = *(&(*((new C2 ()))));
return ((void***) 0);

}
/* method id 411 */ void** C3::func0 (void**** v14, C2 v15, C2 v16, C2 v17) {
return new void* ();

}
/* method id 412 */ C3::C3 () {
C2 v18 = *(&(*((new C2 ()))));
return;

}
/* method id 413 */ C3::~C3 () {
void**** v19 = new void*** ();
C2 v20 = *((new C2 ()));
void**** v21 = new void*** ();
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void** func7 (abstract_0 v24, void**** v25, C2 v26, C2 v27) {
C2 v28;
C3 v29;
C2 v30;

return new void* ();

}
void*** func8 (C2 v31, C2 v32, C2 v33, C2 v34) {
C3 v35;

return new void** ();

}
void** func9 (C3 v36, C2 v37, C3 v38, void**** v39) {

return new void* ();

}
void func10 (void**** v40) {
C2 v41;
abstract_0 v42;
abstract_1 v43;
C2 v44;

return;

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
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
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(20)
0    +---
0    | {vbptr}
4    | var7: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | {vbptr}
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(72)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var22: ClassType{2}
28   | var23: ClassType{2}
48   +---
48   +--- (virtual base class C0)
48   | {vfptr}
52   +---
52   | {vtordisp for vbase 1}
56   +--- (virtual base class C1)
56   | {vfptr}
60   | {vbptr}
64   +---
64   +--- (virtual base class C2)
64   | {vbptr}
68   | var7: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
72   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 72;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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

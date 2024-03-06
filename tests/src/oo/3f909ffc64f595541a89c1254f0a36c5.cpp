// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
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
/* method id 402 */ virtual void func1 (void** v0);
/* method id 403 */ void func1 (void** v3, void** v4, void** v5, void** v6);
/* method id 404 */ C1 ();
C1 (special_constructor);
void** v8;
void* v9;
void** v10;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 406 */ C2 ();
/* method id 407 */ virtual void func4 (void* v15, void* v16, void** v17, void* v18);
/* method id 408 */ virtual void func1 ();
/* method id 409 */ virtual ~C2 ();
C2 (special_constructor);
void* v30;
abstract_0 v31;
void* v32;
void* v33;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ C3 ();
C3 (special_constructor);
void* v47;
void* v48;
};
void func5 (abstract_0 v49, void* v50, void* v51);
void func6 (void* v56, void* v57, void* v58);
abstract_1 func7 (void* v60);
abstract_1 func8 (abstract_0 v61, abstract_0 v62, void* v63, void* v64);
// definitions
/* method id 400 */ C0::~C0 () {
::func6(((void*) 0), ((void*) 0), ((void*) 0));
::func6(((void*) 0), ((void*) 0), ((void*) 0));
::func6(((void*) 0), ((void*) 0), ((void*) 0));
::func6(((void*) 0), ((void*) 0), ((void*) 0));
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void C1::func1 (void** v0) {
void** v1 = new void* ();
void** v2 = new void* ();
return ::func6(v9, v9, v9);

}
/* method id 403 */ void C1::func1 (void** v3, void** v4, void** v5, void** v6) {
void** v7 = new void* ();
::func6(v9, v9, v9);
::func6(v9, v9, v9);
::func6(v9, v9, v9);
return;

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
void* v11 = ((void*) 0);
void* v12 = ((void*) 0);
void* v13 = ((void*) 0);
void* v14 = ((void*) 0);
return;

}
/* method id 407 */ void C2::func4 (void* v15, void* v16, void** v17, void* v18) {
void** v19 = new void* ();
abstract_0 v20 = abstract_0();
void* v21 = ((void*) 0);
void** v22 = new void* ();
::func6(v9, v9, v9);
::func6(v9, v9, v9);
::func6(v9, v9, v9);
::func6(v9, v9, v9);
return ::func6(((void*) 0), ((void*) 0), ((void*) 0));

}
/* method id 408 */ void C2::func1 () {
abstract_0 v23 = abstract_0();
delete (new C1 ());
return ::func6(v30, v30, v30);

}
/* method id 409 */ C2::~C2 () {
abstract_0 v26 = abstract_0();
void* v27 = ((void*) 0);
void* v28 = ((void*) 0);
void* v29 = ((void*) 0);
::func6(v27, v27, v27);
::func6(v27, v27, v27);
::func6(v27, v27, v27);
::func6(v27, v27, v27);
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 410 */ C3::~C3 () {
abstract_0 v34 = abstract_0();
void* v35 = ((void*) 0);
abstract_0 v36 = abstract_0();
void* v37 = ((void*) 0);
::func6(((void*) 0), ((void*) 0), ((void*) 0));
v10 = v8;
return;

}
/* method id 411 */ C3::C3 () {
abstract_0 v42 = abstract_0();
void* v43 = ((void*) 0);
void* v44 = ((void*) 0);
void* v45 = ((void*) 0);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void func5 (abstract_0 v49, void* v50, void* v51) {
void* v52;
void* v53;
abstract_0 v54;
void* v55;

return ((new C1 ()))->C1::func1(new void* ());

}
void func6 (void* v56, void* v57, void* v58) {
void** v59;

return;

}
abstract_1 func7 (void* v60) {

return abstract_1();

}
abstract_1 func8 (abstract_0 v61, abstract_0 v62, void* v63, void* v64) {

return ::func7(v64);

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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var8: DeletablePtrType{PtrType{VoidType{}}}
12   | var9: PtrType{VoidType{}}
16   | var10: DeletablePtrType{PtrType{VoidType{}}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
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
class C2    size(48)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var30: PtrType{VoidType{}}
12   | var31: AbstractType{0}
16   | var32: PtrType{VoidType{}}
20   | var33: PtrType{VoidType{}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var8: DeletablePtrType{PtrType{VoidType{}}}
40   | var9: PtrType{VoidType{}}
44   | var10: DeletablePtrType{PtrType{VoidType{}}}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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
4    | var47: PtrType{VoidType{}}
8    | var48: PtrType{VoidType{}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var8: DeletablePtrType{PtrType{VoidType{}}}
28   | var9: PtrType{VoidType{}}
32   | var10: DeletablePtrType{PtrType{VoidType{}}}
36   +---
36   +--- (virtual base class C2)
36   | {vfptr}
40   | {vbptr}
44   | var30: PtrType{VoidType{}}
48   | var31: AbstractType{0}
52   | var32: PtrType{VoidType{}}
56   | var33: PtrType{VoidType{}}
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
 const size_t model_offset = 36;
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

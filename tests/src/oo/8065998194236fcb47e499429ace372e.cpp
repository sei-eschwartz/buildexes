// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void func0 (abstract_0 v0);
/* method id 401 */ void func1 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ void func0 (void** v4, void** v5);
/* method id 403 */ virtual void func2 (void** v6, abstract_0 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
void** v9;
abstract_1 v10;
};
struct C1 : public virtual C0 {
/* method id 405 */ C1 ();
/* method id 406 */ virtual void func1 ();
/* method id 407 */ virtual void func3 (void** v12, void** v13, abstract_1 v14, void** v15);
/* method id 408 */ virtual void func0 (abstract_1 v16, void** v17);
C1 (special_constructor);
abstract_1 v19;
void** v20;
void** v21;
void** v22;
};
struct C2 : public C1 {
/* method id 409 */ virtual ~C2 ();
/* method id 410 */ C2 ();
/* method id 411 */ void func4 (void** v57, abstract_1 v58, abstract_2 v59, void** v60);
C2 (special_constructor);
};
struct C3 : public C0 {
/* method id 412 */ C3 ();
/* method id 413 */ virtual ~C3 ();
/* method id 414 */ virtual void func1 ();
/* method id 415 */ virtual void func3 (void** v63, void** v64, abstract_1 v65, void** v66);
C3 (special_constructor);
abstract_0 v67;
};
void func6 ();
void func7 (void** v71, void** v72, void** v73, void** v74);
void func8 (void** v78, void** v79);
void func9 (void** v84, void** v85, abstract_1 v86, void** v87);
// definitions
/* method id 400 */ void C0::func0 (abstract_0 v0) {
delete (new C2 ());
return ::func7(v9, v9, v9, v9);

}
/* method id 401 */ void C0::func1 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return;

}
/* method id 402 */ void C0::func0 (void** v4, void** v5) {
delete (new C1 ());
return ::func7(new void* (), new void* (), new void* (), new void* ());

}
/* method id 403 */ void C0::func2 (void** v6, abstract_0 v7) {
void** v8 = new void* ();
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {
abstract_0 v11 = abstract_0();
return;

}
/* method id 406 */ void C1::func1 () {
delete (new C1 ());
return ::func7(v9, v9, v9, v9);

}
/* method id 407 */ void C1::func3 (void** v12, void** v13, abstract_1 v14, void** v15) {
return;

}
/* method id 408 */ void C1::func0 (abstract_1 v16, void** v17) {
abstract_0 v18 = abstract_0();
delete (new C2 ());
return ::func7(v9, v9, v9, v9);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::~C2 () {
void** v23 = new void* ();
void** v24 = new void* ();
void** v25 = new void* ();
void** v26 = new void* ();
return;

}
/* method id 410 */ C2::C2 () {
void** v27 = new void* ();
void** v28 = new void* ();
void** v29 = new void* ();
abstract_1 v30 = abstract_1();
return;

}
/* method id 411 */ void C2::func4 (void** v57, abstract_1 v58, abstract_2 v59, void** v60) {
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {
void** v61 = new void* ();
return;

}
/* method id 413 */ C3::~C3 () {
delete (new C1 ());
return;

}
/* method id 414 */ void C3::func1 () {
return;

}
/* method id 415 */ void C3::func3 (void** v63, void** v64, abstract_1 v65, void** v66) {
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()) {}

void func6 () {
abstract_2 v68;
abstract_3 v69;
abstract_0 v70;

return ::func8(new void* (), new void* ());

}
void func7 (void** v71, void** v72, void** v73, void** v74) {
void** v75;
void** v76;
void** v77;

return ::func8(v72, v72);

}
void func8 (void** v78, void** v79) {
void** v80;
void** v81;
void** v82;
void** v83;

delete (new C1 ());
return ::func7(v81, v81, v81, v81);

}
void func9 (void** v84, void** v85, abstract_1 v86, void** v87) {
void** v88;
void** v89;
void** v90;
void** v91;

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var9: DeletablePtrType{PtrType{VoidType{}}}
8    | var10: AbstractType{1}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
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
8    | var19: AbstractType{1}
12   | var20: DeletablePtrType{PtrType{VoidType{}}}
16   | var21: DeletablePtrType{PtrType{VoidType{}}}
20   | var22: DeletablePtrType{PtrType{VoidType{}}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var9: DeletablePtrType{PtrType{VoidType{}}}
32   | var10: AbstractType{1}
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
class C2    size(36)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var19: AbstractType{1}
12   | | var20: DeletablePtrType{PtrType{VoidType{}}}
16   | | var21: DeletablePtrType{PtrType{VoidType{}}}
20   | | var22: DeletablePtrType{PtrType{VoidType{}}}
24   | +---
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var9: DeletablePtrType{PtrType{VoidType{}}}
32   | var10: AbstractType{1}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
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
class C3    size(16)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var9: DeletablePtrType{PtrType{VoidType{}}}
8    | | var10: AbstractType{1}
12   | +---
12   | var67: AbstractType{0}
16   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

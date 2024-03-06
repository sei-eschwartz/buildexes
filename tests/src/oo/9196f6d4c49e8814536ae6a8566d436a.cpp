// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
void** v4;
void** v5;
};
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
/* method id 402 */ virtual abstract_3*** func1 (void** v10, void** v11, void*** v12, void*** v13);
/* method id 403 */ virtual abstract_5 func1 ();
/* method id 404 */ virtual ~C1 ();
C1 (special_constructor);
void*** v26;
void*** v27;
void*** v28;
abstract_6 v29;
};
struct C2  {
/* method id 405 */ C2 ();
C2 (special_constructor);
void*** v34;
};
struct C3 : public C1, public virtual C2 {
/* method id 406 */ C3 ();
/* method id 407 */ virtual void** func2 (void*** v40);
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ void* func1 (abstract_7 v76);
C3 (special_constructor);
};
void func3 ();
void* func4 ();
void*** func5 (void*** v79);
void func6 (void** v80, void** v81);
// definitions
/* method id 400 */ C0::C0 () {
void** v0 = new void* ();
void** v1 = new void* ();
void** v2 = new void* ();
void** v3 = new void* ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
void** v6 = ((void**) 0);
void** v7 = ((void**) 0);
void** v8 = ((void**) 0);
void** v9 = ((void**) 0);
delete (new C1 ());
return;

}
/* method id 402 */ abstract_3*** C1::func1 (void** v10, void** v11, void*** v12, void*** v13) {
void** v14 = ((void**) 0);
abstract_6 v15 = abstract_6();
void*** v16 = new void** ();
void** v17 = ((void**) 0);
return ((abstract_3***) 0);

}
/* method id 403 */ abstract_5 C1::func1 () {
abstract_6 v18 = abstract_6();
v5 = ((void**) 0);
v5 = ((void**) 0);
v5 = ((void**) 0);
return abstract_5();

}
/* method id 404 */ C1::~C1 () {
abstract_6 v22 = abstract_6();
void*** v23 = new void** ();
abstract_6 v24 = abstract_6();
void*** v25 = new void** ();
v5 = ((void**) 0);
v5 = ((void**) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
void*** v30 = new void** ();
void*** v31 = new void** ();
void*** v32 = new void** ();
void*** v33 = new void** ();
return;

}
C2::C2 (special_constructor)  {}

/* method id 406 */ C3::C3 () {
abstract_6 v35 = abstract_6();
void*** v36 = new void** ();
void*** v37 = new void** ();
void*** v38 = new void** ();
v4 = ((void**) 0);
v4 = ((void**) 0);
v4 = ((void**) 0);
return;

}
/* method id 407 */ void** C3::func2 (void*** v40) {
abstract_6 v41 = abstract_6();
void*** v42 = new void** ();
abstract_6 v43 = abstract_6();
void*** v44 = new void** ();
return new void* ();

}
/* method id 408 */ C3::~C3 () {
abstract_6 v45 = abstract_6();
void*** v46 = new void** ();
void*** v47 = new void** ();
void*** v48 = new void** ();
delete (new C3 ());
v4 = v4;
v4 = v4;
return;

}
/* method id 409 */ void* C3::func1 (abstract_7 v76) {
v4 = v4;
v4 = v4;
v4 = v4;
v4 = v4;
return ::func4();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void func3 () {
void*** v77;
void*** v78;

return;

}
void* func4 () {

delete (new C1 ());
return ((void*) 0);

}
void*** func5 (void*** v79) {

return ((void***) 0);

}
void func6 (void** v80, void** v81) {

return ::func3();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | var4: PtrType{PtrType{VoidType{}}}
4    | var5: PtrType{PtrType{VoidType{}}}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var26: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
12   | var27: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
16   | var28: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
20   | var29: AbstractType{6}
24   +---
24   +--- (virtual base class C0)
24   | var4: PtrType{PtrType{VoidType{}}}
28   | var5: PtrType{PtrType{VoidType{}}}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
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
class C2    size(4)
0    +---
0    | var34: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
4    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(36)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var26: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
12   | | var27: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
16   | | var28: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
20   | | var29: AbstractType{6}
24   | +---
24   +---
24   +--- (virtual base class C0)
24   | var4: PtrType{PtrType{VoidType{}}}
28   | var5: PtrType{PtrType{VoidType{}}}
32   +---
32   +--- (virtual base class C2)
32   | var34: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
36   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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
 const size_t model_offset = 32;
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

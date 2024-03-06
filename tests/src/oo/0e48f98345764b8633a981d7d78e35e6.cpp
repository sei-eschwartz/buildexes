// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ virtual void*** func1 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_1*** v8;
abstract_1*** v9;
};
struct C1 : public C0 {
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ abstract_0 func2 (abstract_1*** v11, abstract_1*** v12, abstract_1*** v13);
/* method id 405 */ void func0 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 407 */ virtual abstract_0 func1 ();
/* method id 408 */ virtual void* func4 (abstract_2 v20, abstract_1*** v21, abstract_2 v22);
/* method id 409 */ C2 ();
C2 (special_constructor);
abstract_2 v27;
abstract_2 v28;
abstract_2 v29;
abstract_3 v30;
};
abstract_1**** func6 ();
abstract_4 func7 ();
void** func8 (abstract_2 v34, abstract_5 v35);
void* func9 (abstract_1*** v36, abstract_5 v37, abstract_5 v38, abstract_5 v39);
// definitions
/* method id 400 */ C0::~C0 () {
abstract_1*** v0 = new abstract_1** ();
abstract_1*** v1 = ((abstract_1***) 0);
abstract_1*** v2 = new abstract_1** ();
delete (new C1 ());
v8 = v1;
return;

}
/* method id 401 */ void*** C0::func1 () {
abstract_1*** v3 = ((abstract_1***) 0);
abstract_1*** v4 = ((abstract_1***) 0);
abstract_1*** v5 = ((abstract_1***) 0);
abstract_1*** v6 = ((abstract_1***) 0);
delete (new C1 ());
return new void** ();

}
/* method id 402 */ C0::C0 () {
delete (new C0 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::~C1 () {
abstract_1*** v10 = new abstract_1** ();
delete (new C2 ());
return;

}
/* method id 404 */ abstract_0 C1::func2 (abstract_1*** v11, abstract_1*** v12, abstract_1*** v13) {
return abstract_0();

}
/* method id 405 */ void C1::func0 () {
::func7();
::func7();
return;

}
/* method id 406 */ C1::C1 () {
abstract_2 v17 = abstract_2();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ abstract_0 C2::func1 () {
abstract_1*** v18 = new abstract_1** ();
abstract_1*** v19 = new abstract_1** ();
delete (new C0 ());
return (((C1*) 0))->C1::func2(v19, v19, v19);

}
/* method id 408 */ void* C2::func4 (abstract_2 v20, abstract_1*** v21, abstract_2 v22) {
abstract_1*** v23 = new abstract_1** ();
abstract_2 v24 = abstract_2();
abstract_3 v25 = abstract_3();
abstract_2 v26 = abstract_2();
return ((void*) 0);

}
/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

abstract_1**** func6 () {
abstract_1*** v31;
C0 v32;
abstract_1*** v33;

return new abstract_1*** ();

}
abstract_4 func7 () {

delete (new C0 ());
::func6();
return abstract_4();

}
void** func8 (abstract_2 v34, abstract_5 v35) {

delete (new C1 ());
return new void* ();

}
void* func9 (abstract_1*** v36, abstract_5 v37, abstract_5 v38, abstract_5 v39) {
abstract_5 v40;
abstract_5 v41;
abstract_2 v42;
abstract_2 v43;

v36 = new abstract_1** ();
return (((C2*) 0))->C2::func4(v42, v36, v42);

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var8: PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}
8    | var9: PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}
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
class C1    size(12)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var8: PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}
8    | | var9: PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}
12   | +---
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
 const size_t model_offset = 0;
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
0    | {vfptr}
4    | var27: AbstractType{2}
8    | var28: AbstractType{2}
12   | var29: AbstractType{2}
16   | var30: AbstractType{3}
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
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

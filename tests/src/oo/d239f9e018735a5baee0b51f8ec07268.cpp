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
/* method id 400 */ abstract_0* func0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
abstract_0* v0;
};
struct C1 : public C0 {
/* method id 402 */ ~C1 ();
/* method id 403 */ abstract_0* func0 (abstract_0* v1, abstract_0* v2);
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_0* v7;
abstract_0* v8;
abstract_0* v9;
};
struct C2 : public C1 {
/* method id 405 */ C2 ();
/* method id 406 */ virtual abstract_0* func2 (abstract_0* v11, abstract_0* v12, abstract_0* v13, abstract_0* v14);
/* method id 407 */ virtual void*** func3 (abstract_0* v19, abstract_0* v20, abstract_0* v21);
C2 (special_constructor);
void*** v25;
abstract_0* v26;
};
struct C3 : public C1 {
/* method id 408 */ C3 ();
/* method id 409 */ abstract_0* func2 (abstract_0* v28, abstract_0* v29, abstract_1 v30, abstract_1 v31);
/* method id 410 */ abstract_0* func0 ();
/* method id 411 */ virtual void*** func1 ();
C3 (special_constructor);
};
abstract_0* func4 (void*** v39, void*** v40);
abstract_0* func5 ();
abstract_0* func6 (void*** v43);
abstract_0* func7 (abstract_2 v44, void*** v45, abstract_2 v46);
// definitions
/* method id 400 */ abstract_0* C0::func0 () {
::func5();
::func5();
return ::func5();

}
/* method id 401 */ C0::C0 () {
delete (new C0 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::~C1 () {
delete (new C0 ());
delete (new C3 ());
return;

}
/* method id 403 */ abstract_0* C1::func0 (abstract_0* v1, abstract_0* v2) {
abstract_0* v3 = ((abstract_0*) 0);
abstract_0* v4 = ((abstract_0*) 0);
return v7;

}
/* method id 404 */ C1::C1 () {
abstract_0* v5 = ((abstract_0*) 0);
delete (new C3 ());
v8 = v8;
v8 = v8;
v8 = v8;
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
abstract_0* v10 = ((abstract_0*) 0);
return;

}
/* method id 406 */ abstract_0* C2::func2 (abstract_0* v11, abstract_0* v12, abstract_0* v13, abstract_0* v14) {
abstract_0* v15 = ((abstract_0*) 0);
abstract_0* v16 = ((abstract_0*) 0);
abstract_0* v17 = ((abstract_0*) 0);
abstract_0* v18 = ((abstract_0*) 0);
return ((abstract_0*) 0);

}
/* method id 407 */ void*** C2::func3 (abstract_0* v19, abstract_0* v20, abstract_0* v21) {
abstract_0* v22 = new abstract_0 ();
abstract_0* v23 = new abstract_0 ();
::func5();
return ((void***) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
abstract_1 v27 = abstract_1();
return;

}
/* method id 409 */ abstract_0* C3::func2 (abstract_0* v28, abstract_0* v29, abstract_1 v30, abstract_1 v31) {
return ::func5();

}
/* method id 410 */ abstract_0* C3::func0 () {
void*** v33 = new void** ();
void*** v34 = new void** ();
abstract_0* v35 = ((abstract_0*) 0);
void*** v36 = new void** ();
delete (new C2 ());
return v0;

}
/* method id 411 */ void*** C3::func1 () {
abstract_1 v37 = abstract_1();
abstract_0* v38 = new abstract_0 ();
return ((void***) 0);

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0* func4 (void*** v39, void*** v40) {

return new abstract_0 ();

}
abstract_0* func5 () {
void*** v41;
abstract_0* v42;

return ((abstract_0*) 0);

}
abstract_0* func6 (void*** v43) {

return ((abstract_0*) 0);

}
abstract_0* func7 (abstract_2 v44, void*** v45, abstract_2 v46) {
abstract_0* v47;
void* v48;
void*** v49;
abstract_0* v50;

return v50;

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | var0: PtrType{AbstractType{0}}
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
class C1    size(16)
0    +---
0    | +--- (base class C0)
0    | | var0: PtrType{AbstractType{0}}
4    | +---
4    | var7: PtrType{AbstractType{0}}
8    | var8: PtrType{AbstractType{0}}
12   | var9: PtrType{AbstractType{0}}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
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
class C2    size(28)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | +--- (base class C0)
4    | | | var0: PtrType{AbstractType{0}}
8    | | +---
8    | | var7: PtrType{AbstractType{0}}
12   | | var8: PtrType{AbstractType{0}}
16   | | var9: PtrType{AbstractType{0}}
20   | +---
20   | var25: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
24   | var26: PtrType{AbstractType{0}}
28   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 28;
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
class C3    size(20)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | +--- (base class C0)
4    | | | var0: PtrType{AbstractType{0}}
8    | | +---
8    | | var7: PtrType{AbstractType{0}}
12   | | var8: PtrType{AbstractType{0}}
16   | | var9: PtrType{AbstractType{0}}
20   | +---
20   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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

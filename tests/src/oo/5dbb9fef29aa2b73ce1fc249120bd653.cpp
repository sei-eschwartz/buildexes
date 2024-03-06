// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_0 func0 (void* v0);
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
void* v5;
};
struct C1 : public virtual C0 {
/* method id 403 */ abstract_0 func2 ();
/* method id 404 */ virtual abstract_0 func1 ();
/* method id 405 */ C1 ();
C1 (special_constructor);
void* v7;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual abstract_0 func4 (void* v11);
/* method id 411 */ virtual abstract_0 func0 (abstract_1 v12, void* v13);
/* method id 412 */ virtual ~C3 ();
C3 (special_constructor);
abstract_1 v25;
abstract_1 v26;
void* v27;
abstract_1 v28;
};
abstract_0 func7 ();
abstract_0 func8 (abstract_1 v31, void* v32, abstract_1 v33, abstract_1 v34);
abstract_2 func9 (abstract_1 v39, abstract_3 v40, abstract_1 v41, void* v42);
abstract_0 func10 (void* v43);
// definitions
/* method id 400 */ abstract_0 C0::func0 (void* v0) {
void* v1 = ((void*) 0);
return ::func8(abstract_1(), v1, abstract_1(), abstract_1());

}
/* method id 401 */ C0::~C0 () {
void* v2 = ((void*) 0);
void* v3 = ((void*) 0);
void* v4 = ((void*) 0);
return;

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0 C1::func2 () {
delete (new C1 ());
return (((C1*) 0))->C1::func1();

}
/* method id 404 */ abstract_0 C1::func1 () {
void* v6 = ((void*) 0);
return ::func8(abstract_1(), v6, abstract_1(), abstract_1());

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
abstract_1 v8 = abstract_1();
void* v9 = ((void*) 0);
abstract_2* v10 = ((abstract_2*) 0);
return;

}
/* method id 410 */ abstract_0 C3::func4 (void* v11) {
return ::func8(v25, ((void*) 0), v25, v25);

}
/* method id 411 */ abstract_0 C3::func0 (abstract_1 v12, void* v13) {
C1 v14 = *(&(*((new C1 ()))));
abstract_1 v15 = abstract_1();
C2 v16 = *((new C2 ()));
v14 = v14;
v14 = v14;
v14 = v14;
return ::func8(abstract_1(), v5, abstract_1(), abstract_1());

}
/* method id 412 */ C3::~C3 () {
abstract_1 v21 = abstract_1();
abstract_4 v22 = abstract_4();
C2 v23 = *(((C2*) 0));
void* v24 = ((void*) 0);
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_0 func7 () {
abstract_1 v29;
void* v30;

delete (new C2 ());
return (((C1*) 0))->C1::func1();

}
abstract_0 func8 (abstract_1 v31, void* v32, abstract_1 v33, abstract_1 v34) {
abstract_1 v35;
abstract_3 v36;
abstract_1 v37;
abstract_1 v38;

return ::func10(v32);

}
abstract_2 func9 (abstract_1 v39, abstract_3 v40, abstract_1 v41, void* v42) {

v40 = v40;
v40 = v40;
v40 = v40;
v40 = v40;
return abstract_2();

}
abstract_0 func10 (void* v43) {
abstract_1 v44;
abstract_1 v45;
void* v46;

return (((C1*) 0))->C1::func1();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var5: PtrType{VoidType{}}
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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var7: PtrType{VoidType{}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var5: PtrType{VoidType{}}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(24)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    | var5: PtrType{VoidType{}}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | {vbptr}
20   | var7: PtrType{VoidType{}}
24   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 24;
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
class C3    size(44)
0    +---
0    | {vfptr}
4    | +--- (base class C2)
4    | | {vbptr}
8    | +---
8    | var25: AbstractType{1}
12   | var26: AbstractType{1}
16   | var27: PtrType{VoidType{}}
20   | var28: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var5: PtrType{VoidType{}}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   | var7: PtrType{VoidType{}}
44   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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

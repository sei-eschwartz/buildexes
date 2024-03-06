// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
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
/* method id 402 */ virtual void func2 ();
/* method id 403 */ virtual void func3 (abstract_0 v1, void* v2);
/* method id 404 */ void func4 ();
/* method id 405 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 407 */ virtual abstract_1 func7 ();
/* method id 408 */ virtual abstract_3 func8 ();
/* method id 409 */ abstract_3 func9 ();
/* method id 410 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 412 */ virtual abstract_3 func12 ();
/* method id 413 */ virtual abstract_3* func13 ();
/* method id 414 */ C3 ();
C3 (special_constructor);
void* v25;
void* v26;
void* v27;
};
abstract_1 func15 (void* v28, void* v29, void* v30, void* v31);
abstract_3 func16 (void* v35, void* v36);
abstract_3 func17 (void* v40, void* v41, void** v42, void* v43);
abstract_1 func18 (void* v48);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void C1::func2 () {
abstract_0 v0 = abstract_0();
return;

}
/* method id 403 */ void C1::func3 (abstract_0 v1, void* v2) {
void* v3 = ((void*) 0);
abstract_0 v4 = abstract_0();
return;

}
/* method id 404 */ void C1::func4 () {
void** v5 = new void* ();
return ((new C1 ()))->C1::func3(abstract_0(), ((void*) 0));

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ abstract_1 C2::func7 () {
void** v6 = new void* ();
abstract_2 v7 = abstract_2();
v7 = v7;
v7 = v7;
v7 = v7;
return abstract_1();

}
/* method id 408 */ abstract_3 C2::func8 () {
void* v8 = ((void*) 0);
abstract_0 v9 = abstract_0();
v9 = abstract_0();
v9 = abstract_0();
v9 = abstract_0();
v9 = abstract_0();
return abstract_3();

}
/* method id 409 */ abstract_3 C2::func9 () {
void** v10 = new void* ();
v10 = v10;
return abstract_3();

}
/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ abstract_3 C3::func12 () {
void** v11 = new void* ();
abstract_4 v12 = abstract_4();
v12 = v12;
return ::func16(v27, v27);

}
/* method id 413 */ abstract_3* C3::func13 () {
void* v13 = ((void*) 0);
void* v14 = ((void*) 0);
void* v15 = ((void*) 0);
void* v16 = ((void*) 0);
delete (new C3 ());
return ((abstract_3*) 0);

}
/* method id 414 */ C3::C3 () {
void* v17 = ((void*) 0);
void* v18 = ((void*) 0);
void* v19 = ((void*) 0);
void* v20 = ((void*) 0);
v17 = ((void*) 0);
v17 = ((void*) 0);
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_1 func15 (void* v28, void* v29, void* v30, void* v31) {
void* v32;
void* v33;
void* v34;

return ::func18(v34);

}
abstract_3 func16 (void* v35, void* v36) {
void* v37;
void* v38;
void* v39;

v37 = v38;
v37 = v38;
v37 = v38;
return ::func17(v38, v38, new void* (), v38);

}
abstract_3 func17 (void* v40, void* v41, void** v42, void* v43) {
void* v44;
void* v45;
void* v46;
void* v47;

v46 = v41;
v46 = v41;
return ::func16(v41, v41);

}
abstract_1 func18 (void* v48) {
void* v49;
void* v50;
void* v51;

v49 = v49;
v49 = v49;
v49 = v49;
return ::func15(((void*) 0), ((void*) 0), ((void*) 0), ((void*) 0));

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
0    | {vfptr}
4    | {vbptr}
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
class C3    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var25: PtrType{VoidType{}}
12   | var26: PtrType{VoidType{}}
16   | var27: PtrType{VoidType{}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   +---
32   +--- (virtual base class C2)
32   | {vfptr}
36   | {vbptr}
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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

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
/* method id 415 */ virtual ~C3 ();
C3 (special_constructor);
void* v25;
void* v26;
void* v27;
void** v28;
};
abstract_1 func14 (void* v29, void* v30, void* v31, void* v32);
abstract_1 func15 (void** v37, void* v38, void* v39);
abstract_3 func16 (void* v43, void* v44, void** v45, void* v46);
abstract_1 func17 (void* v51);
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
return (((C1*) 0))->C1::func4();

}
/* method id 404 */ void C1::func4 () {
void** v5 = new void* ();
delete (new C1 ());
return;

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ abstract_1 C2::func7 () {
void** v6 = new void* ();
abstract_2 v7 = abstract_2();
delete (new C1 ());
return ::func15(new void* (), ((void*) 0), ((void*) 0));

}
/* method id 408 */ abstract_3 C2::func8 () {
void* v8 = ((void*) 0);
abstract_0 v9 = abstract_0();
return ::func16(((void*) 0), ((void*) 0), new void* (), ((void*) 0));

}
/* method id 409 */ abstract_3 C2::func9 () {
void** v10 = new void* ();
return (((C2*) 0))->C2::func8();

}
/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ abstract_3 C3::func12 () {
void** v11 = new void* ();
abstract_4 v12 = abstract_4();
::func15(new void* (), ((void*) 0), ((void*) 0));
::func15(new void* (), ((void*) 0), ((void*) 0));
::func15(new void* (), ((void*) 0), ((void*) 0));
::func15(new void* (), ((void*) 0), ((void*) 0));
return ::func16(((void*) 0), ((void*) 0), new void* (), ((void*) 0));

}
/* method id 413 */ abstract_3* C3::func13 () {
void* v13 = ((void*) 0);
void* v14 = ((void*) 0);
void* v15 = ((void*) 0);
void* v16 = ((void*) 0);
return ((abstract_3*) 0);

}
/* method id 414 */ C3::C3 () {
void* v17 = ((void*) 0);
void* v18 = ((void*) 0);
void* v19 = ((void*) 0);
void* v20 = ((void*) 0);
return;

}
/* method id 415 */ C3::~C3 () {
void* v21 = ((void*) 0);
void* v22 = ((void*) 0);
void* v23 = ((void*) 0);
void* v24 = ((void*) 0);
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_1 func14 (void* v29, void* v30, void* v31, void* v32) {
void* v33;
void* v34;
void* v35;
void* v36;

return ::func17(v33);

}
abstract_1 func15 (void** v37, void* v38, void* v39) {
void* v40;
void* v41;
void* v42;

return abstract_1();

}
abstract_3 func16 (void* v43, void* v44, void** v45, void* v46) {
void* v47;
void* v48;
void* v49;
void* v50;

::func15(v45, v43, v43);
return abstract_3();

}
abstract_1 func17 (void* v51) {
void* v52;
void* v53;
void* v54;

return ::func15(new void* (), v54, v54);

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
class C3    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var25: PtrType{VoidType{}}
12   | var26: PtrType{VoidType{}}
16   | var27: PtrType{VoidType{}}
20   | var28: DeletablePtrType{PtrType{VoidType{}}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   +---
36   +--- (virtual base class C2)
36   | {vfptr}
40   | {vbptr}
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
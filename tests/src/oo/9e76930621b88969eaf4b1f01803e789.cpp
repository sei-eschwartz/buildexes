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
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
/* method id 402 */ void* func2 ();
/* method id 403 */ virtual void* func0 (void* v2);
C0 (special_constructor);
void* v4;
abstract_0 v5;
};
struct C1 : public virtual C0 {
/* method id 404 */ void* func3 ();
/* method id 405 */ C1 ();
/* method id 406 */ virtual void func1 ();
/* method id 407 */ virtual ~C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 408 */ C2 ();
C2 (special_constructor);
void* v8;
void* v9;
void* v10;
void* v11;
};
struct C3 : public C0 {
/* method id 410 */ C3 ();
/* method id 411 */ virtual void* func1 (C1 v19, void* v20, C2 v21, C1 v22);
/* method id 412 */ virtual void func6 (C2 v27);
/* method id 413 */ virtual void func5 (void* v32, void* v33, abstract_2 v34);
C3 (special_constructor);
};
void* func7 ();
void* func8 (void* v37);
void* func9 (C1 v42, abstract_0 v43, abstract_0 v44);
void* func10 (abstract_0 v49, abstract_0 v50);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C2 ());
return;

}
/* method id 401 */ C0::C0 () {
void* v0 = ((void*) 0);
return;

}
/* method id 402 */ void* C0::func2 () {
void* v1 = ((void*) 0);
delete (new C1 ());
return v4;

}
/* method id 403 */ void* C0::func0 (void* v2) {
void* v3 = ((void*) 0);
return v2;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ void* C1::func3 () {
return v4;

}
/* method id 405 */ C1::C1 () {
return;

}
/* method id 406 */ void C1::func1 () {
void* v6 = ((void*) 0);
delete (new C1 ());
return;

}
/* method id 407 */ C1::~C1 () {
void* v7 = ((void*) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
void* v12 = ((void*) 0);
void* v13 = ((void*) 0);
abstract_0 v14 = abstract_0();
return;

}
/* method id 411 */ void* C3::func1 (C1 v19, void* v20, C2 v21, C1 v22) {
abstract_0 v23 = abstract_0();
void* v24 = ((void*) 0);
abstract_0 v25 = abstract_0();
abstract_0 v26 = abstract_0();
delete (new C1 ());
return v20;

}
/* method id 412 */ void C3::func6 (C2 v27) {
C2 v28 = *(&(*(((C2*) 0))));
void* v29 = ((void*) 0);
abstract_1 v30 = abstract_1();
abstract_0 v31 = abstract_0();
return (((C1*) 0))->C1::func1();

}
/* method id 413 */ void C3::func5 (void* v32, void* v33, abstract_2 v34) {
C2 v35 = *(((C2*) 0));
v4 = ((void*) 0);
v4 = ((void*) 0);
v4 = ((void*) 0);
v4 = ((void*) 0);
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()) {}

void* func7 () {
abstract_0 v36;

return ((void*) 0);

}
void* func8 (void* v37) {
abstract_0 v38;
abstract_1 v39;
C1 v40;
abstract_0 v41;

return v37;

}
void* func9 (C1 v42, abstract_0 v43, abstract_0 v44) {
abstract_0 v45;
abstract_0 v46;
abstract_0 v47;
abstract_0 v48;

return ::func8(((void*) 0));

}
void* func10 (abstract_0 v49, abstract_0 v50) {
abstract_0 v51;
abstract_0 v52;
C1 v53;
abstract_0 v54;

return ::func8(((void*) 0));

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var4: PtrType{VoidType{}}
8    | var5: AbstractType{0}
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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var4: PtrType{VoidType{}}
16   | var5: AbstractType{0}
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
class C2    size(40)
0    +---
0    | {vbptr}
4    | var8: PtrType{VoidType{}}
8    | var9: PtrType{VoidType{}}
12   | var10: PtrType{VoidType{}}
16   | var11: PtrType{VoidType{}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var4: PtrType{VoidType{}}
28   | var5: AbstractType{0}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(12)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var4: PtrType{VoidType{}}
8    | | var5: AbstractType{0}
12   | +---
12   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 12;
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

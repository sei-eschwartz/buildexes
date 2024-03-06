// type for special constructors
struct special_constructor {};
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ void* func0 (abstract_0 v0, abstract_0 v1);
/* method id 401 */ virtual void func0 ();
/* method id 402 */ virtual void func1 (abstract_0 v6);
/* method id 403 */ virtual void func1 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 405 */ virtual void* func2 (abstract_1 v12, abstract_2 v13, void* v14, void* v15);
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ void func1 ();
/* method id 408 */ C1 ();
C1 (special_constructor);
};
struct C2 : public C1 {
/* method id 409 */ virtual void func4 (void* v17, abstract_0 v18);
/* method id 410 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C2 {
/* method id 411 */ virtual abstract_3 func6 (void* v19);
/* method id 412 */ virtual void* func3 (void* v21, void* v22, abstract_0 v23);
/* method id 413 */ virtual void func1 (abstract_0 v25);
/* method id 414 */ virtual ~C3 ();
/* method id 415 */ C3 ();
C3 (special_constructor);
abstract_0 v26;
};
void func9 ();
// definitions
/* method id 400 */ void* C0::func0 (abstract_0 v0, abstract_0 v1) {
abstract_0 v2 = abstract_0();
return ((void*) 0);

}
/* method id 401 */ void C0::func0 () {
abstract_0 v3 = abstract_0();
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
return ::func9();

}
/* method id 402 */ void C0::func1 (abstract_0 v6) {
abstract_0 v7 = abstract_0();
void* v8 = ((void*) 0);
abstract_1 v9 = abstract_1();
abstract_1 v10 = abstract_1();
return ::func9();

}
/* method id 403 */ void C0::func1 () {
abstract_0 v11 = abstract_0();
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ void* C1::func2 (abstract_1 v12, abstract_2 v13, void* v14, void* v15) {
return v14;

}
/* method id 406 */ C1::~C1 () {
abstract_3* v16 = new abstract_3 ();
return;

}
/* method id 407 */ void C1::func1 () {
return ::func9();

}
/* method id 408 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ void C2::func4 (void* v17, abstract_0 v18) {
return;

}
/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 411 */ abstract_3 C3::func6 (void* v19) {
abstract_0 v20 = abstract_0();
return abstract_3();

}
/* method id 412 */ void* C3::func3 (void* v21, void* v22, abstract_0 v23) {
abstract_4 v24 = abstract_4();
return ((void*) 0);

}
/* method id 413 */ void C3::func1 (abstract_0 v25) {
return ::func9();

}
/* method id 414 */ C3::~C3 () {
return;

}
/* method id 415 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func9 () {
abstract_5 v27;

return (((C1*) 0))->C1::func1();

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
class C1    size(4)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 4;
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
class C2    size(4)
0    +---
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | +---
4    | +---
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
class C3    size(8)
0    +---
0    | +--- (base class C2)
0    | | +--- (base class C1)
0    | | | +--- (base class C0)
0    | | | | {vfptr}
4    | | | +---
4    | | +---
4    | +---
4    | var26: AbstractType{0}
8    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

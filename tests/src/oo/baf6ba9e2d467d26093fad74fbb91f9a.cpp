// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public C1 {
/* method id 402 */ virtual void func2 (C1 v0, C1 v1);
/* method id 403 */ void func3 (C1 v4, C1 v5);
/* method id 404 */ virtual void func0 ();
/* method id 405 */ virtual abstract_1 func0 (void* v11, void* v12);
/* method id 406 */ C2 ();
C2 (special_constructor);
void* v13;
};
void func5 (C1 v14, abstract_0 v15);
abstract_1 func6 (void* v20, void* v21, void* v22, C1 v23);
void func7 (void* v24, void* v25);
abstract_1 func8 (void* v29, void* v30, void* v31, abstract_0 v32);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 402 */ void C2::func2 (C1 v0, C1 v1) {
C1 v2 = *(((C1*) 0));
C1 v3 = *(((C1*) 0));
return (&(*(((C2*) 0))))->C2::func0();

}
/* method id 403 */ void C2::func3 (C1 v4, C1 v5) {
C1 v6 = *((new C1 ()));
return;

}
/* method id 404 */ void C2::func0 () {
C1 v7 = *(&(*((new C1 ()))));
void* v8 = ((void*) 0);
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
return;

}
/* method id 405 */ abstract_1 C2::func0 (void* v11, void* v12) {
return abstract_1();

}
/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

void func5 (C1 v14, abstract_0 v15) {
void* v16;
void* v17;
C1 v18;
void* v19;

return ::func7(((void*) 0), ((void*) 0));

}
abstract_1 func6 (void* v20, void* v21, void* v22, C1 v23) {

return abstract_1();

}
void func7 (void* v24, void* v25) {
void* v26;
void* v27;
void* v28;

return;

}
abstract_1 func8 (void* v29, void* v30, void* v31, abstract_0 v32) {
void* v33;
abstract_0 v34;

return abstract_1();

}
#include <iostream>
void check_driver() {
/*
class C0    size(0)
0    +---
0    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 1;
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
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
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
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(12)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | {vbptr}
8    | +---
8    | var13: PtrType{VoidType{}}
12   +---
12   +--- (virtual base class C0)
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

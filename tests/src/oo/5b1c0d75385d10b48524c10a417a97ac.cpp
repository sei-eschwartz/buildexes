// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 401 */ void func1 (void** v0);
/* method id 402 */ virtual void func0 (void** v3, void** v4, void** v5);
/* method id 403 */ C1 ();
C1 (special_constructor);
void** v10;
void** v11;
void** v12;
};
struct C2 : public virtual C0 {
/* method id 404 */ C2 ();
C2 (special_constructor);
};
struct C3  {
/* method id 405 */ virtual void func2 (void** v13, void** v14);
/* method id 406 */ C3 ();
/* method id 407 */ virtual ~C3 ();
/* method id 408 */ virtual void func3 ();
C3 (special_constructor);
};
void func4 (void* v192, abstract_0 v193, abstract_0 v194, C1 v195);
abstract_1 func5 (abstract_0 v200, abstract_0 v201, C1 v202, C1 v203);
abstract_1 func6 ();
void* func7 (C1 v208);
// definitions
/* method id 400 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func1 (void** v0) {
void** v1 = new void* ();
void** v2 = new void* ();
return;

}
/* method id 402 */ void C1::func0 (void** v3, void** v4, void** v5) {
void** v6 = new void* ();
void** v7 = new void* ();
void** v8 = new void* ();
void** v9 = new void* ();
return;

}
/* method id 403 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ void C3::func2 (void** v13, void** v14) {
void** v15 = new void* ();
void** v16 = new void* ();
void** v17 = new void* ();
void** v18 = new void* ();
return;

}
/* method id 406 */ C3::C3 () {
void** v19 = new void* ();
void** v20 = new void* ();
void** v21 = new void* ();
void** v22 = new void* ();
return;

}
/* method id 407 */ C3::~C3 () {
void** v27 = new void* ();
void** v28 = new void* ();
void** v29 = new void* ();
void** v30 = new void* ();
return;

}
/* method id 408 */ void C3::func3 () {
void** v188 = new void* ();
C1 v189 = *(&(*((new C1 ()))));
void** v190 = new void* ();
C1 v191 = *(&(*((new C1 ()))));
return;

}
C3::C3 (special_constructor)  {}

void func4 (void* v192, abstract_0 v193, abstract_0 v194, C1 v195) {
void** v196;
abstract_0 v197;
C1 v198;
void** v199;

return;

}
abstract_1 func5 (abstract_0 v200, abstract_0 v201, C1 v202, C1 v203) {
abstract_2 v204;

return ::func6();

}
abstract_1 func6 () {
void* v205;
void** v206;
void** v207;

return abstract_1();

}
void* func7 (C1 v208) {
void** v209;

return ((void*) 0);

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | var10: DeletablePtrType{PtrType{VoidType{}}}
8    | var11: DeletablePtrType{PtrType{VoidType{}}}
12   | var12: DeletablePtrType{PtrType{VoidType{}}}
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
class C2    size(4)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

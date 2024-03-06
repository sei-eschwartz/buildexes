// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ void func0 (void* v4, void* v5, void* v6, void* v7);
/* method id 403 */ virtual void func0 ();
/* method id 404 */ virtual void func0 (void* v14, void* v15);
C1 (special_constructor);
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 405 */ C2 ();
/* method id 406 */ virtual void func0 (C1 v24, void* v25, C1 v26, void* v27);
C2 (special_constructor);
void* v46;
C1 v47;
C1 v48;
C1 v49;
};
struct C3  {
/* method id 407 */ C3 ();
C3 (special_constructor);
void* v50;
C1 v51;
C1 v52;
};
void func5 ();
void func6 (C1 v55, void* v56, C1 v57, C1 v58);
void func7 (void* v60, C1 v61, C1 v62);
void func8 (C1 v65, C1 v66, abstract_0 v67, void* v68);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
void* v0 = ((void*) 0);
void* v1 = ((void*) 0);
void* v2 = ((void*) 0);
void* v3 = ((void*) 0);
delete (new C0 ());
return;

}
/* method id 402 */ void C1::func0 (void* v4, void* v5, void* v6, void* v7) {
void* v8 = ((void*) 0);
void* v9 = ((void*) 0);
void* v10 = ((void*) 0);
void* v11 = ((void*) 0);
return;

}
/* method id 403 */ void C1::func0 () {
delete (new C1 ());
return;

}
/* method id 404 */ void C1::func0 (void* v14, void* v15) {
void* v16 = ((void*) 0);
delete (new C1 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {
void* v17 = ((void*) 0);
C1 v18 = *(&(*(((C1*) 0))));
C1 v19 = *(&(*(((C1*) 0))));
void* v20 = ((void*) 0);
return;

}
/* method id 406 */ void C2::func0 (C1 v24, void* v25, C1 v26, void* v27) {
C1 v28 = *(&(*((new C1 ()))));
C1 v29 = *(&(*((new C1 ()))));
delete (new C1 ());
return ::func5();

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 407 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

void func5 () {
void* v53;
C1 v54;

delete (new C3 ());
return;

}
void func6 (C1 v55, void* v56, C1 v57, C1 v58) {
void* v59;

delete (new C1 ());
return;

}
void func7 (void* v60, C1 v61, C1 v62) {
void* v63;
C1 v64;

delete (new C3 ());
return ::func6(v61, v63, v61, v61);

}
void func8 (C1 v65, C1 v66, abstract_0 v67, void* v68) {
C1 v69;
C1 v70;
void* v71;
abstract_0 v72;

delete (new C1 ());
return;

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
0    | {vfptr}
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
}
/*
class C2    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var46: PtrType{VoidType{}}
12   | var47: ClassType{1}
16   | var48: ClassType{1}
20   | var49: ClassType{1}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   +---
28   +--- (virtual base class C0)
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
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(12)
0    +---
0    | var50: PtrType{VoidType{}}
4    | var51: ClassType{1}
8    | var52: ClassType{1}
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
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

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
/* method id 406 */ virtual ~C2 ();
/* method id 407 */ virtual void func0 (C1 v33, void* v34, C1 v35, void* v36);
C2 (special_constructor);
void* v42;
C1 v43;
C1 v44;
C1 v45;
};
struct C3  {
/* method id 408 */ C3 ();
C3 (special_constructor);
void* v46;
C1 v47;
C1 v48;
};
void func4 ();
void func5 (C1 v51, void* v52, C1 v53, C1 v54);
void func6 (void* v56, C1 v57, C1 v58);
void func7 (C1 v61, C1 v62, abstract_0 v63, void* v64);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
void* v0 = ((void*) 0);
void* v1 = ((void*) 0);
void* v2 = ((void*) 0);
void* v3 = ((void*) 0);
return;

}
/* method id 402 */ void C1::func0 (void* v4, void* v5, void* v6, void* v7) {
void* v8 = ((void*) 0);
void* v9 = ((void*) 0);
void* v10 = ((void*) 0);
void* v11 = ((void*) 0);
return ::func4();

}
/* method id 403 */ void C1::func0 () {
return;

}
/* method id 404 */ void C1::func0 (void* v14, void* v15) {
void* v16 = ((void*) 0);
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
/* method id 406 */ C2::~C2 () {
return;

}
/* method id 407 */ void C2::func0 (C1 v33, void* v34, C1 v35, void* v36) {
C1 v37 = *(&(*((new C1 ()))));
C1 v38 = *(&(*((new C1 ()))));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

void func4 () {
void* v49;
C1 v50;

return ::func5(v50, v49, v50, v50);

}
void func5 (C1 v51, void* v52, C1 v53, C1 v54) {
void* v55;

return;

}
void func6 (void* v56, C1 v57, C1 v58) {
void* v59;
C1 v60;

return;

}
void func7 (C1 v61, C1 v62, abstract_0 v63, void* v64) {
C1 v65;
C1 v66;
void* v67;
C1 v68;

return ::func6(v67, *(((C1*) 0)), v68);

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
8    | var42: PtrType{VoidType{}}
12   | var43: ClassType{1}
16   | var44: ClassType{1}
20   | var45: ClassType{1}
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
0    | var46: PtrType{VoidType{}}
4    | var47: ClassType{1}
8    | var48: ClassType{1}
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

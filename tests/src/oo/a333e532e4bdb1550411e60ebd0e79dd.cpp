// type for special constructors
struct special_constructor {};
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
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ void func1 (void* v40, C1 v41);
C2 (special_constructor);
};
struct C3  {
/* method id 409 */ C3 ();
C3 (special_constructor);
void* v45;
C1 v46;
C1 v47;
};
void func5 (C1 v48, C1 v49, C1 v50, C1 v51);
void func6 (C1 v56, void* v57, C1 v58, C1 v59);
void func7 (C1 v63, C1 v64, C1 v65, C1 v66);
void func8 (C1 v67, C1 v68);
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
delete (new C1 ());
return;

}
/* method id 403 */ void C1::func0 () {
return;

}
/* method id 404 */ void C1::func0 (void* v14, void* v15) {
void* v16 = ((void*) 0);
delete (new C1 ());
return ::func8(*((new C1 ())), *((new C1 ())));

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
return;

}
/* method id 407 */ C2::~C2 () {
C1 v38 = *((new C1 ()));
C1 v39 = *((new C1 ()));
return;

}
/* method id 408 */ void C2::func1 (void* v40, C1 v41) {
void* v42 = ((void*) 0);
C1 v43 = *(((C1*) 0));
C1 v44 = *(((C1*) 0));
::func8(v43, v43);
::func8(v43, v43);
::func8(v43, v43);
::func8(v43, v43);
return ::func5(v43, v43, v43, v43);

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

void func5 (C1 v48, C1 v49, C1 v50, C1 v51) {
C1 v52;
C1 v53;
C1 v54;
C1 v55;

delete (new C2 ());
return ::func7(v54, v54, v54, v54);

}
void func6 (C1 v56, void* v57, C1 v58, C1 v59) {
C1 v60;
C1 v61;
C1 v62;

return;

}
void func7 (C1 v63, C1 v64, C1 v65, C1 v66) {

return;

}
void func8 (C1 v67, C1 v68) {
C1 v69;
C1 v70;

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
class C2    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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
 const size_t model_offset = 12;
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
0    | var45: PtrType{VoidType{}}
4    | var46: ClassType{1}
8    | var47: ClassType{1}
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

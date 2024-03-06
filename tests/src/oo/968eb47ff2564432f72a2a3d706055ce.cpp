// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
void* v45;
void* v46;
void* v47;
};
struct C1 : public virtual C0 {
/* method id 402 */ C1 ();
C1 (special_constructor);
void* v60;
void* v61;
};
struct C2 : public virtual C1 {
/* method id 404 */ virtual ~C2 ();
/* method id 405 */ C2 ();
/* method id 406 */ virtual void func0 (void* v149);
C2 (special_constructor);
void* v150;
};
void func2 (void* v151, void* v152);
// definitions
/* method id 400 */ C0::~C0 () {
void* v0 = ((void*) 0);
void* v1 = ((void*) 0);
return;

}
/* method id 401 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
void* v48 = ((void*) 0);
void* v49 = ((void*) 0);
void* v50 = ((void*) 0);
void* v51 = ((void*) 0);
delete (new C2 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::~C2 () {
void* v62 = ((void*) 0);
void* v63 = ((void*) 0);
void* v64 = ((void*) 0);
void* v65 = ((void*) 0);
::func2(((void*) 0), ((void*) 0));
::func2(((void*) 0), ((void*) 0));
::func2(((void*) 0), ((void*) 0));
::func2(((void*) 0), ((void*) 0));
return;

}
/* method id 405 */ C2::C2 () {
void* v66 = ((void*) 0);
void* v67 = ((void*) 0);
void* v68 = ((void*) 0);
void* v69 = ((void*) 0);
return;

}
/* method id 406 */ void C2::func0 (void* v149) {
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

void func2 (void* v151, void* v152) {
void* v153;
void* v154;

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var45: PtrType{VoidType{}}
8    | var46: PtrType{VoidType{}}
12   | var47: PtrType{VoidType{}}
16   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(28)
0    +---
0    | {vbptr}
4    | var60: PtrType{VoidType{}}
8    | var61: PtrType{VoidType{}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var45: PtrType{VoidType{}}
20   | var46: PtrType{VoidType{}}
24   | var47: PtrType{VoidType{}}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
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
class C2    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var150: PtrType{VoidType{}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var45: PtrType{VoidType{}}
20   | var46: PtrType{VoidType{}}
24   | var47: PtrType{VoidType{}}
28   +---
28   +--- (virtual base class C1)
28   | {vbptr}
32   | var60: PtrType{VoidType{}}
36   | var61: PtrType{VoidType{}}
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
 const size_t model_offset = 28;
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

// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 402 */ C1 ();
/* method id 403 */ void func1 (void* v5, void* v6, void* v7, void* v8);
/* method id 404 */ virtual void func0 ();
/* method id 405 */ virtual void func0 (void* v15, void* v16);
C1 (special_constructor);
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 406 */ C2 ();
/* method id 407 */ void func0 (C1 v25, void* v26, C1 v27, void* v28);
/* method id 408 */ virtual void func0 ();
/* method id 409 */ ~C2 ();
C2 (special_constructor);
C1 v35;
void* v36;
C1 v37;
void* v38;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 410 */ ~C3 ();
/* method id 411 */ virtual void func1 (void* v43, C1 v44, C1 v45, C1 v46);
/* method id 412 */ C3 ();
C3 (special_constructor);
void* v59;
C1 v60;
};
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {
void* v0 = ((void*) 0);
delete (new C1 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
void* v1 = ((void*) 0);
void* v2 = ((void*) 0);
void* v3 = ((void*) 0);
void* v4 = ((void*) 0);
delete (new C3 ());
return;

}
/* method id 403 */ void C1::func1 (void* v5, void* v6, void* v7, void* v8) {
void* v9 = ((void*) 0);
void* v10 = ((void*) 0);
void* v11 = ((void*) 0);
void* v12 = ((void*) 0);
delete (new C2 ());
return;

}
/* method id 404 */ void C1::func0 () {
delete (new C1 ());
return;

}
/* method id 405 */ void C1::func0 (void* v15, void* v16) {
void* v17 = ((void*) 0);
v15 = v15;
return;

}
C1::C1 (special_constructor)  {}

/* method id 406 */ C2::C2 () {
void* v18 = ((void*) 0);
C1 v19 = *(&(*(((C1*) 0))));
C1 v20 = *(&(*(((C1*) 0))));
void* v21 = ((void*) 0);
return;

}
/* method id 407 */ void C2::func0 (C1 v25, void* v26, C1 v27, void* v28) {
C1 v29 = *(&(*(((C1*) 0))));
C1 v30 = *(((C1*) 0));
return;

}
/* method id 408 */ void C2::func0 () {
v36 = v36;
v36 = v36;
return;

}
/* method id 409 */ C2::~C2 () {
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 410 */ C3::~C3 () {
C1 v39 = *(((C1*) 0));
void* v40 = ((void*) 0);
void* v41 = ((void*) 0);
C1 v42 = *(&(*((new C1 ()))));
delete (new C3 ());
return;

}
/* method id 411 */ void C3::func1 (void* v43, C1 v44, C1 v45, C1 v46) {
void* v47 = ((void*) 0);
C1 v48 = *(&(*(((C1*) 0))));
C1 v49 = *(&(*(((C1*) 0))));
void* v50 = ((void*) 0);
return ((new C1 ()))->C1::func0(v36, ((void*) 0));

}
/* method id 412 */ C3::C3 () {
void* v51 = ((void*) 0);
C1 v52 = *((new C1 ()));
void* v53 = ((void*) 0);
void* v54 = ((void*) 0);
v35 = v35;
v35 = v35;
v35 = v35;
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

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
0    | {vbptr}
4    | var35: ClassType{1}
8    | var36: PtrType{VoidType{}}
12   | var37: ClassType{1}
16   | var38: PtrType{VoidType{}}
20   | {vtordisp for vbase 1}
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
class C3    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var59: PtrType{VoidType{}}
12   | var60: ClassType{1}
16   | {vtordisp for vbase 1}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   +---
24   +--- (virtual base class C0)
24   +---
24   +--- (virtual base class C2)
24   | {vbptr}
28   | var35: ClassType{1}
32   | var36: PtrType{VoidType{}}
36   | var37: ClassType{1}
40   | var38: PtrType{VoidType{}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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

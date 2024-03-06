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
/* method id 406 */ void func0 (C1 v24, void* v25, C1 v26, void* v27);
/* method id 407 */ virtual void func0 ();
/* method id 408 */ ~C2 ();
C2 (special_constructor);
C1 v34;
void* v35;
C1 v36;
void* v37;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ ~C3 ();
/* method id 410 */ virtual void func1 (void* v42, C1 v43, C1 v44, C1 v45);
/* method id 411 */ void func1 (void* v52, void* v53, C1 v54);
/* method id 412 */ C3 ();
C3 (special_constructor);
C1 v59;
void* v60;
void* v61;
C1 v62;
};
void func3 ();
void func4 (void* v64, C1 v65, C1 v66);
void func5 (C1 v69, C1 v70, abstract_0 v71, void* v72);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
void* v0 = ((void*) 0);
void* v1 = ((void*) 0);
void* v2 = ((void*) 0);
void* v3 = ((void*) 0);
v2 = v0;
v2 = v0;
v2 = v0;
v2 = v0;
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
v18 = v34;
v18 = v34;
v18 = v34;
return;

}
/* method id 406 */ void C2::func0 (C1 v24, void* v25, C1 v26, void* v27) {
C1 v28 = *(&(*(((C1*) 0))));
C1 v29 = *(((C1*) 0));
v29 = v24;
return ::func4(((void*) 0), *((new C1 ())), v24);

}
/* method id 407 */ void C2::func0 () {
return;

}
/* method id 408 */ C2::~C2 () {
delete (new C3 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 409 */ C3::~C3 () {
C1 v38 = *(((C1*) 0));
void* v39 = ((void*) 0);
void* v40 = ((void*) 0);
C1 v41 = *(&(*((new C1 ()))));
::func3();
::func3();
::func3();
return;

}
/* method id 410 */ void C3::func1 (void* v42, C1 v43, C1 v44, C1 v45) {
void* v46 = ((void*) 0);
C1 v47 = *((new C1 ()));
C1 v48 = *((new C1 ()));
void* v49 = ((void*) 0);
return ::func4(((void*) 0), v44, v44);

}
/* method id 411 */ void C3::func1 (void* v52, void* v53, C1 v54) {
void* v55 = ((void*) 0);
C1 v56 = *((new C1 ()));
C1 v57 = *((new C1 ()));
C1 v58 = *(&(*((new C1 ()))));
return;

}
/* method id 412 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void func3 () {
C1 v63;

delete (new C1 ());
return ::func4(((void*) 0), v63, v63);

}
void func4 (void* v64, C1 v65, C1 v66) {
void* v67;
C1 v68;

delete (new C1 ());
return;

}
void func5 (C1 v69, C1 v70, abstract_0 v71, void* v72) {
C1 v73;
C1 v74;
void* v75;
C1 v76;

return (((C2*) 0))->C2::func0();

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
0    | {vbptr}
4    | var34: ClassType{1}
8    | var35: PtrType{VoidType{}}
12   | var36: ClassType{1}
16   | var37: PtrType{VoidType{}}
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
class C3    size(52)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var59: ClassType{1}
12   | var60: PtrType{VoidType{}}
16   | var61: PtrType{VoidType{}}
20   | var62: ClassType{1}
24   | {vtordisp for vbase 1}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   +---
32   +--- (virtual base class C0)
32   +---
32   +--- (virtual base class C2)
32   | {vbptr}
36   | var34: ClassType{1}
40   | var35: PtrType{VoidType{}}
44   | var36: ClassType{1}
48   | var37: PtrType{VoidType{}}
52   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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
 const size_t model_offset = 32;
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

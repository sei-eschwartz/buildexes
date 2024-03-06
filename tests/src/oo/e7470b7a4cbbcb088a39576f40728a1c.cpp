// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ C1 ();
/* method id 405 */ C0 func0 (abstract_0* v5, C0* v6, C0* v7, C0* v8);
C1 (special_constructor);
abstract_1** v9;
};
struct C2 : public virtual C0 {
/* method id 406 */ abstract_1* func0 (abstract_1** v10, abstract_1** v11, abstract_0* v12);
/* method id 407 */ virtual abstract_1* func1 ();
/* method id 408 */ C2 ();
/* method id 409 */ abstract_3 func3 (abstract_2 v21, abstract_0* v22, abstract_2 v23, C0* v24);
C2 (special_constructor);
abstract_0* v27;
};
struct C3 : public virtual C0 {
/* method id 411 */ virtual ~C3 ();
/* method id 412 */ C0* func4 (C0* v36, C0*** v37, C0* v38);
/* method id 413 */ void func5 (C0* v39, abstract_0* v40);
/* method id 414 */ virtual void func1 (abstract_0* v42);
/* method id 415 */ C3 ();
C3 (special_constructor);
};
C0* func7 (C0* v44, abstract_4 v45);
C0 func8 ();
C0* func9 (C0* v53, abstract_1** v54, C0* v55, C0* v56);
C0* func10 (abstract_4 v61);
// definitions
/* method id 400 */ C0::~C0 () {
::func7((new C0 ()), abstract_4());
::func7((new C0 ()), abstract_4());
::func7((new C0 ()), abstract_4());
::func7((new C0 ()), abstract_4());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
return ((C0*) 0);

}
/* method id 403 */ C1::~C1 () {
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
abstract_1** v3 = ((abstract_1**) 0);
return;

}
/* method id 404 */ C1::C1 () {
abstract_0* v4 = new abstract_0 ();
return;

}
/* method id 405 */ C0 C1::func0 (abstract_0* v5, C0* v6, C0* v7, C0* v8) {
return ::func8();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ abstract_1* C2::func0 (abstract_1** v10, abstract_1** v11, abstract_0* v12) {
C0* v13 = (new C0 ());
C0* v14 = (new C0 ());
abstract_1** v15 = ((abstract_1**) 0);
return ((abstract_1*) 0);

}
/* method id 407 */ abstract_1* C2::func1 () {
abstract_0* v16 = ((abstract_0*) 0);
abstract_0* v17 = ((abstract_0*) 0);
abstract_2 v18 = abstract_2();
abstract_2 v19 = abstract_2();
return new abstract_1 ();

}
/* method id 408 */ C2::C2 () {
abstract_0* v20 = ((abstract_0*) 0);
return;

}
/* method id 409 */ abstract_3 C2::func3 (abstract_2 v21, abstract_0* v22, abstract_2 v23, C0* v24) {
abstract_0* v25 = new abstract_0 ();
C0* v26 = &(*((new C0 ())));
return abstract_3();

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 411 */ C3::~C3 () {
C0* v28 = (new C0 ());
C1 v29 = *(&(*((new C1 ()))));
C0* v30 = (new C0 ());
C2 v31 = *(&(*(((C2*) 0))));
return;

}
/* method id 412 */ C0* C3::func4 (C0* v36, C0*** v37, C0* v38) {
delete (new C1 ());
return (new C0 ());

}
/* method id 413 */ void C3::func5 (C0* v39, abstract_0* v40) {
abstract_4 v41 = abstract_4();
return ((new C3 ()))->C3::func1(v40);

}
/* method id 414 */ void C3::func1 (abstract_0* v42) {
C2 v43 = *(((C2*) 0));
return;

}
/* method id 415 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()) {}

C0* func7 (C0* v44, abstract_4 v45) {
C0* v46;
C0* v47;
abstract_4 v48;
C0* v49;

delete (new C1 ());
return v46;

}
C0 func8 () {
C0* v50;
C0* v51;
abstract_4 v52;

return *(v51);

}
C0* func9 (C0* v53, abstract_1** v54, C0* v55, C0* v56) {
abstract_4 v57;
C0* v58;
abstract_4 v59;
C0* v60;

::func8();
return v56;

}
C0* func10 (abstract_4 v61) {
C0* v62;
C0* v63;
C2 v64;
C0* v65;

return v62;

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var9: PtrType{PtrType{AbstractType{1}}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
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
class C2    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var27: PtrType{AbstractType{0}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
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
 }}}
/*
class C3    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
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
 const size_t model_offset = 8;
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

// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual void func0 (abstract_1 v5, abstract_0 v6);
/* method id 402 */ virtual abstract_2 func0 (abstract_1 v8, abstract_1 v9, abstract_1 v10);
/* method id 403 */ virtual abstract_2* func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1 v12;
};
struct C1  {
/* method id 405 */ virtual ~C1 ();
/* method id 406 */ virtual abstract_2* func1 (abstract_1 v13, abstract_0 v14);
/* method id 407 */ virtual abstract_2** func0 ();
/* method id 408 */ abstract_3 func1 (abstract_1 v17, abstract_1 v18, abstract_1 v19);
/* method id 409 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public C1 {
/* method id 410 */ virtual abstract_2 func3 (abstract_1 v20, abstract_0 v21);
/* method id 411 */ C2 ();
/* method id 412 */ virtual ~C2 ();
C2 (special_constructor);
};
struct C3 : public C1 {
/* method id 413 */ C3 ();
/* method id 414 */ virtual ~C3 ();
C3 (special_constructor);
abstract_0 v37;
abstract_0 v38;
abstract_1 v39;
abstract_1 v40;
};
void func4 (abstract_0 v41, abstract_2*** v42, abstract_1 v43, abstract_0 v44);
abstract_2 func5 (abstract_2*** v45, void* v46);
abstract_2 func6 (abstract_1 v50, abstract_1 v51, abstract_1 v52, abstract_1 v53);
abstract_2 func7 ();
// definitions
/* method id 400 */ void C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
abstract_0 v4 = abstract_0();
delete (new C2 ());
return ::func4(abstract_0(), new abstract_2** (), v12, abstract_0());

}
/* method id 401 */ void C0::func0 (abstract_1 v5, abstract_0 v6) {
abstract_0 v7 = abstract_0();
return;

}
/* method id 402 */ abstract_2 C0::func0 (abstract_1 v8, abstract_1 v9, abstract_1 v10) {
return abstract_2();

}
/* method id 403 */ abstract_2* C0::func0 () {
abstract_0 v11 = abstract_0();
delete (new C0 ());
return ((abstract_2*) 0);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::~C1 () {
delete (new C1 ());
return;

}
/* method id 406 */ abstract_2* C1::func1 (abstract_1 v13, abstract_0 v14) {
abstract_0 v15 = abstract_0();
::func7();
::func7();
::func7();
return new abstract_2 ();

}
/* method id 407 */ abstract_2** C1::func0 () {
abstract_0 v16 = abstract_0();
delete (new C1 ());
return new abstract_2* ();

}
/* method id 408 */ abstract_3 C1::func1 (abstract_1 v17, abstract_1 v18, abstract_1 v19) {
return abstract_3();

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 410 */ abstract_2 C2::func3 (abstract_1 v20, abstract_0 v21) {
void* v22 = ((void*) 0);
return abstract_2();

}
/* method id 411 */ C2::C2 () {
abstract_2* v23 = new abstract_2 ();
abstract_2*** v24 = ((abstract_2***) 0);
::func5(v24, ((void*) 0));
v24 = new abstract_2** ();
::func5(v24, ((void*) 0));
return;

}
/* method id 412 */ C2::~C2 () {
abstract_2*** v25 = new abstract_2** ();
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 413 */ C3::C3 () {
void* v26 = ((void*) 0);
abstract_2*** v27 = ((abstract_2***) 0);
abstract_2*** v28 = ((abstract_2***) 0);
delete (new C1 ());
return;

}
/* method id 414 */ C3::~C3 () {
abstract_1 v33 = abstract_1();
abstract_1 v34 = abstract_1();
abstract_1 v35 = abstract_1();
abstract_1 v36 = abstract_1();
::func5(new abstract_2** (), ((void*) 0));
::func5(new abstract_2** (), ((void*) 0));
v36 = abstract_1();
::func5(new abstract_2** (), ((void*) 0));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void func4 (abstract_0 v41, abstract_2*** v42, abstract_1 v43, abstract_0 v44) {

return;

}
abstract_2 func5 (abstract_2*** v45, void* v46) {
abstract_4 v47;
abstract_1 v48;
abstract_0 v49;

return ::func6(v48, v48, v48, v48);

}
abstract_2 func6 (abstract_1 v50, abstract_1 v51, abstract_1 v52, abstract_1 v53) {
abstract_1 v54;
abstract_1 v55;
abstract_1 v56;
abstract_1 v57;

return ::func7();

}
abstract_2 func7 () {
abstract_1 v58;
abstract_5 v59;
abstract_2*** v60;
abstract_1 v61;

return abstract_2();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var12: AbstractType{1}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
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
class C2    size(16)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | +---
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var12: AbstractType{1}
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
 const size_t model_offset = 8;
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
class C3    size(20)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | +---
4    | var37: AbstractType{0}
8    | var38: AbstractType{0}
12   | var39: AbstractType{1}
16   | var40: AbstractType{1}
20   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

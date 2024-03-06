// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_5 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ abstract_2* func1 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_1 v3);
/* method id 402 */ virtual abstract_2* func1 ();
/* method id 403 */ virtual abstract_2** func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1 v7;
};
struct C1  {
/* method id 405 */ virtual ~C1 ();
/* method id 406 */ virtual abstract_2** func1 (abstract_1 v8, abstract_0 v9);
/* method id 407 */ virtual abstract_2*** func0 ();
/* method id 408 */ virtual abstract_2* func0 (abstract_0 v12);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_0 v17;
};
struct C2 : public virtual C0, public C1 {
/* method id 410 */ void func4 (abstract_1 v18, abstract_0 v19);
/* method id 411 */ virtual abstract_2* func1 (abstract_0 v21);
/* method id 412 */ virtual abstract_2 func5 ();
/* method id 413 */ abstract_2 func6 (abstract_0 v25, abstract_1 v26, abstract_0 v27);
/* method id 414 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 416 */ abstract_2* func9 ();
/* method id 417 */ virtual abstract_2* func10 (abstract_1 v29, abstract_0 v30);
/* method id 418 */ virtual abstract_2** func11 (abstract_1 v34, abstract_1 v35);
/* method id 419 */ C3 ();
C3 (special_constructor);
abstract_2* v43;
};
abstract_2** func13 ();
abstract_5 func14 (abstract_2*** v48, abstract_1 v49, abstract_1 v50);
void func15 ();
abstract_2*** func16 (abstract_2** v52);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ abstract_2* C0::func1 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_1 v3) {
abstract_0 v4 = abstract_0();
delete (new C1 ());
return ((abstract_2*) 0);

}
/* method id 402 */ abstract_2* C0::func1 () {
abstract_0 v5 = abstract_0();
return new abstract_2 ();

}
/* method id 403 */ abstract_2** C0::func0 () {
abstract_0 v6 = abstract_0();
return new abstract_2* ();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::~C1 () {
return;

}
/* method id 406 */ abstract_2** C1::func1 (abstract_1 v8, abstract_0 v9) {
abstract_0 v10 = abstract_0();
delete (new C1 ());
return new abstract_2* ();

}
/* method id 407 */ abstract_2*** C1::func0 () {
abstract_0 v11 = abstract_0();
return new abstract_2** ();

}
/* method id 408 */ abstract_2* C1::func0 (abstract_0 v12) {
abstract_1 v13 = abstract_1();
abstract_0 v14 = abstract_0();
abstract_2** v15 = new abstract_2* ();
abstract_1 v16 = abstract_1();
return new abstract_2 ();

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 410 */ void C2::func4 (abstract_1 v18, abstract_0 v19) {
abstract_3 v20 = abstract_3();
v7 = v18;
return ::func15();

}
/* method id 411 */ abstract_2* C2::func1 (abstract_0 v21) {
abstract_1 v22 = abstract_1();
abstract_0 v23 = abstract_0();
return new abstract_2 ();

}
/* method id 412 */ abstract_2 C2::func5 () {
abstract_2** v24 = new abstract_2* ();
delete (new C2 ());
return abstract_2();

}
/* method id 413 */ abstract_2 C2::func6 (abstract_0 v25, abstract_1 v26, abstract_0 v27) {
abstract_0 v28 = abstract_0();
v17 = v25;
v17 = v25;
v17 = v25;
v17 = v25;
return abstract_2();

}
/* method id 414 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 416 */ abstract_2* C3::func9 () {
return new abstract_2 ();

}
/* method id 417 */ abstract_2* C3::func10 (abstract_1 v29, abstract_0 v30) {
abstract_1 v31 = abstract_1();
abstract_1 v32 = abstract_1();
abstract_0 v33 = abstract_0();
return new abstract_2 ();

}
/* method id 418 */ abstract_2** C3::func11 (abstract_1 v34, abstract_1 v35) {
C1 v36 = *(&(*((new C1 ()))));
abstract_1 v37 = abstract_1();
C2 v38 = *(((C2*) 0));
return new abstract_2* ();

}
/* method id 419 */ C3::C3 () {
abstract_3 v39 = abstract_3();
abstract_1 v40 = abstract_1();
abstract_4 v41 = abstract_4();
abstract_4 v42 = abstract_4();
delete (new C3 ());
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_2** func13 () {
C1 v44;
abstract_2*** v45;
abstract_4 v46;
abstract_2* v47;

return ((abstract_2**) 0);

}
abstract_5 func14 (abstract_2*** v48, abstract_1 v49, abstract_1 v50) {
abstract_0 v51;

return abstract_5();

}
void func15 () {

return;

}
abstract_2*** func16 (abstract_2** v52) {
abstract_2** v53;

return new abstract_2** ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var7: AbstractType{1}
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
class C1    size(8)
0    +---
0    | {vfptr}
4    | var17: AbstractType{0}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(20)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var17: AbstractType{0}
8    | +---
8    | {vbptr}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var7: AbstractType{1}
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
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
class C3    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var43: PtrType{AbstractType{2}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var7: AbstractType{1}
20   +---
20   +--- (virtual base class C2)
20   | +--- (base class C1)
20   | | {vfptr}
24   | | var17: AbstractType{0}
28   | +---
28   | {vbptr}
32   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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

// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ ~C0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 404 */ abstract_1 func1 ();
/* method id 405 */ abstract_1 func2 (abstract_0 v5);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_0 v8;
abstract_0 v9;
abstract_0 v10;
abstract_0 v11;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 408 */ void func3 (abstract_1** v12);
/* method id 409 */ abstract_1 func1 ();
/* method id 410 */ abstract_1* func3 (abstract_0 v20, abstract_0 v21, abstract_1** v22);
/* method id 411 */ C2 ();
C2 (special_constructor);
abstract_1** v24;
};
struct C3  {
/* method id 413 */ ~C3 ();
/* method id 414 */ abstract_1* func5 ();
/* method id 415 */ C3 ();
C3 (special_constructor);
};
void func7 ();
abstract_2* func8 ();
abstract_1* func9 (abstract_1** v33, abstract_0 v34, abstract_0 v35, abstract_0 v36);
abstract_1 func10 (C3 v41, C3 v42, abstract_1** v43);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return ((new C1 ()))->C1::func2(v1);

}
/* method id 402 */ C0::~C0 () {
return;

}
/* method id 403 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_1 C1::func1 () {
delete (new C3 ());
return ((new C1 ()))->C1::func2(v10);

}
/* method id 405 */ abstract_1 C1::func2 (abstract_0 v5) {
return abstract_1();

}
/* method id 406 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ void C2::func3 (abstract_1** v12) {
abstract_1** v13 = new abstract_1* ();
abstract_1** v14 = new abstract_1* ();
abstract_1** v15 = new abstract_1* ();
return ::func7();

}
/* method id 409 */ abstract_1 C2::func1 () {
abstract_1** v16 = ((abstract_1**) 0);
abstract_1** v17 = ((abstract_1**) 0);
abstract_1** v18 = ((abstract_1**) 0);
abstract_0 v19 = abstract_0();
return abstract_1();

}
/* method id 410 */ abstract_1* C2::func3 (abstract_0 v20, abstract_0 v21, abstract_1** v22) {
abstract_1** v23 = ((abstract_1**) 0);
return new abstract_1 ();

}
/* method id 411 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 413 */ C3::~C3 () {
return;

}
/* method id 414 */ abstract_1* C3::func5 () {
abstract_1** v27 = new abstract_1* ();
abstract_1** v28 = new abstract_1* ();
abstract_0 v29 = abstract_0();
abstract_0 v30 = abstract_0();
return new abstract_1 ();

}
/* method id 415 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

void func7 () {
abstract_1** v31;
abstract_1** v32;

return;

}
abstract_2* func8 () {

return ((abstract_2*) 0);

}
abstract_1* func9 (abstract_1** v33, abstract_0 v34, abstract_0 v35, abstract_0 v36) {
abstract_0 v37;
abstract_1** v38;
abstract_1** v39;
abstract_1** v40;

delete (new C3 ());
return new abstract_1 ();

}
abstract_1 func10 (C3 v41, C3 v42, abstract_1** v43) {

return ((new C1 ()))->C1::func2(abstract_0());

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
class C1    size(20)
0    +---
0    | {vbptr}
4    | var8: AbstractType{0}
8    | var9: AbstractType{0}
12   | var10: AbstractType{0}
16   | var11: AbstractType{0}
20   +---
20   +--- (virtual base class C0)
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(28)
0    +---
0    | {vbptr}
4    | var24: PtrType{PtrType{AbstractType{1}}}
8    +---
8    +--- (virtual base class C0)
8    +---
8    +--- (virtual base class C1)
8    | {vbptr}
12   | var8: AbstractType{0}
16   | var9: AbstractType{0}
20   | var10: AbstractType{0}
24   | var11: AbstractType{0}
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
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(0)
0    +---
0    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 1;
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

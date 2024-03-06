// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ abstract_1 func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_1 func0 ();
/* method id 406 */ C1 ();
/* method id 407 */ virtual abstract_1 func1 (abstract_2 v17, abstract_2 v18);
C1 (special_constructor);
abstract_2 v20;
};
struct C2 : public virtual C1 {
/* method id 408 */ void func3 (abstract_0 v21, abstract_2 v22, abstract_1*** v23);
/* method id 409 */ C2 ();
/* method id 410 */ virtual ~C2 ();
C2 (special_constructor);
abstract_2 v38;
abstract_0 v39;
};
struct C3 : public virtual C1 {
/* method id 411 */ C3 ();
/* method id 412 */ virtual ~C3 ();
/* method id 413 */ virtual abstract_1* func3 (abstract_2 v58, abstract_0 v59);
C3 (special_constructor);
};
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 () {
delete (new C3 ());
return abstract_1();

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7) {
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func0 () {
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_1* v10 = ((abstract_1*) 0);
abstract_0 v11 = abstract_0();
return (this)->C1::func1(abstract_2(), abstract_2());

}
/* method id 406 */ C1::C1 () {
abstract_1* v12 = new abstract_1 ();
abstract_2 v13 = abstract_2();
C0 v14 = *(((C0*) 0));
return;

}
/* method id 407 */ abstract_1 C1::func1 (abstract_2 v17, abstract_2 v18) {
abstract_2 v19 = abstract_2();
return abstract_1();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ void C2::func3 (abstract_0 v21, abstract_2 v22, abstract_1*** v23) {
abstract_1** v24 = new abstract_1* ();
abstract_1** v25 = new abstract_1* ();
abstract_2 v26 = abstract_2();
abstract_1* v27 = ((abstract_1*) 0);
delete (new C1 ());
v38 = abstract_2();
return;

}
/* method id 409 */ C2::C2 () {
abstract_1* v28 = ((abstract_1*) 0);
abstract_2 v29 = abstract_2();
abstract_3 v30 = abstract_3();
abstract_3 v31 = abstract_3();
delete (new C1 ());
v29 = v38;
return;

}
/* method id 410 */ C2::~C2 () {
abstract_2 v34 = abstract_2();
abstract_2 v35 = abstract_2();
abstract_2 v36 = abstract_2();
C0 v37 = *(&(*(((C0*) 0))));
delete (new C2 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 411 */ C3::C3 () {
abstract_2 v40 = abstract_2();
abstract_2 v41 = abstract_2();
abstract_0 v42 = abstract_0();
abstract_2 v43 = abstract_2();
return;

}
/* method id 412 */ C3::~C3 () {
abstract_2 v44 = abstract_2();
abstract_2 v45 = abstract_2();
abstract_0 v46 = abstract_0();
delete (new C1 ());
return;

}
/* method id 413 */ abstract_1* C3::func3 (abstract_2 v58, abstract_0 v59) {
abstract_2 v60 = abstract_2();
abstract_1* v61 = ((abstract_1*) 0);
abstract_2 v62 = abstract_2();
abstract_0 v63 = abstract_0();
v58 = v58;
v58 = v58;
return v61;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var20: AbstractType{2}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
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
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var38: AbstractType{2}
12   | var39: AbstractType{0}
16   | {vtordisp for vbase 0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var20: AbstractType{2}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
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
 }}}
/*
class C3    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var20: AbstractType{2}
28   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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

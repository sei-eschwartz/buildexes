// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_10 { int x; };
struct abstract_11 { int x; };
struct abstract_12 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_9 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v7, abstract_1 v8);
/* method id 403 */ virtual abstract_2 func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 405 */ virtual abstract_2 func1 (abstract_3 v14, abstract_4 v15, abstract_1 v16, abstract_1 v17);
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ virtual abstract_6 func0 (abstract_5* v19, abstract_1 v20);
/* method id 408 */ virtual abstract_7*** func2 (abstract_1 v21, abstract_1 v22, abstract_1 v23);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_8* v28;
abstract_0 v29;
};
struct C2 : public virtual C1 {
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_8* v30;
abstract_4 v31;
C1 v32;
};
struct C3 : public C1 {
/* method id 412 */ ~C3 ();
/* method id 413 */ virtual abstract_10 func6 (abstract_0 v37, abstract_3 v38);
/* method id 414 */ virtual abstract_11 func1 (abstract_3 v39);
/* method id 415 */ C3 ();
C3 (special_constructor);
};
abstract_12 func7 (abstract_8* v40, abstract_5* v41);
abstract_2 func8 ();
abstract_7** func9 ();
abstract_5* func10 (abstract_1 v42, C3 v43);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
delete (new C0 ());
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
delete (new C1 ());
return ::func8();

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
::func10(v8, *((new C3 ())));
::func10(v8, *((new C3 ())));
::func10(v8, *((new C3 ())));
::func10(v8, *((new C3 ())));
return ::func8();

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
delete (new C1 ());
v13 = v13;
return abstract_2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func1 (abstract_3 v14, abstract_4 v15, abstract_1 v16, abstract_1 v17) {
::func8();
::func8();
::func8();
::func8();
return abstract_2();

}
/* method id 406 */ C1::~C1 () {
abstract_5* v18 = new abstract_5 ();
return;

}
/* method id 407 */ abstract_6 C1::func0 (abstract_5* v19, abstract_1 v20) {
return abstract_6();

}
/* method id 408 */ abstract_7*** C1::func2 (abstract_1 v21, abstract_1 v22, abstract_1 v23) {
abstract_0 v24 = abstract_0();
abstract_8* v25 = ((abstract_8*) 0);
abstract_4 v26 = abstract_4();
abstract_8* v27 = ((abstract_8*) 0);
return ((abstract_7***) 0);

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::~C3 () {
abstract_1 v33 = abstract_1();
abstract_8* v34 = new abstract_8 ();
abstract_8* v35 = new abstract_8 ();
abstract_9 v36 = abstract_9();
return;

}
/* method id 413 */ abstract_10 C3::func6 (abstract_0 v37, abstract_3 v38) {
return abstract_10();

}
/* method id 414 */ abstract_11 C3::func1 (abstract_3 v39) {
return abstract_11();

}
/* method id 415 */ C3::C3 () {
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_12 func7 (abstract_8* v40, abstract_5* v41) {

delete (new C1 ());
return abstract_12();

}
abstract_2 func8 () {

delete (new C1 ());
return abstract_2();

}
abstract_7** func9 () {

delete (new C2 ());
return ((abstract_7**) 0);

}
abstract_5* func10 (abstract_1 v42, C3 v43) {
abstract_0 v44;
abstract_0 v45;

delete (new C2 ());
return new abstract_5 ();

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
class C1    size(12)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var28: PtrType{AbstractType{8}}
8    | var29: AbstractType{0}
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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
0    | {vbptr}
4    | var30: PtrType{AbstractType{8}}
8    | var31: AbstractType{4}
12   | var32: ClassType{1}
24   +---
24   +--- (virtual base class C1)
24   | +--- (base class C0)
24   | | {vfptr}
28   | +---
28   | var28: PtrType{AbstractType{8}}
32   | var29: AbstractType{0}
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
class C3    size(12)
0    +---
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | +---
4    | | var28: PtrType{AbstractType{8}}
8    | | var29: AbstractType{0}
12   | +---
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

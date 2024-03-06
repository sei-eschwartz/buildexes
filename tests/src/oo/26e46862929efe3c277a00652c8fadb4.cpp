// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_4 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
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
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ virtual abstract_0 func2 (abstract_0* v1);
/* method id 404 */ virtual abstract_0 func1 ();
/* method id 405 */ virtual abstract_0 func1 (C0 v5);
/* method id 406 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
/* method id 408 */ virtual abstract_0 func1 ();
/* method id 409 */ virtual ~C2 ();
C2 (special_constructor);
};
struct C3 : public C1 {
/* method id 410 */ virtual abstract_0 func3 ();
/* method id 411 */ C3 ();
/* method id 412 */ abstract_0 func4 (abstract_0* v29, C0 v30, C0 v31, C0 v32);
/* method id 413 */ abstract_0 func4 (C0 v37, abstract_0** v38, C0 v39);
C3 (special_constructor);
abstract_3 v40;
C0 v41;
abstract_0* v42;
};
abstract_0 func6 (C0 v43, abstract_1 v44, C0 v45, C0 v46);
abstract_0 func7 (C0 v48, C0 v49);
abstract_0 func8 (C0 v54, abstract_1 v55, C0 v56, C0 v57);
abstract_4 func9 (C0 v59, abstract_2 v60, C0 v61, C0 v62);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C1 ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::~C1 () {
abstract_0* v0 = new abstract_0 ();
(&(*((new C3 ()))))->C3::func3();
(&(*((new C3 ()))))->C3::func3();
(&(*((new C3 ()))))->C3::func3();
(&(*((new C3 ()))))->C3::func3();
return;

}
/* method id 403 */ abstract_0 C1::func2 (abstract_0* v1) {
return abstract_0();

}
/* method id 404 */ abstract_0 C1::func1 () {
C0 v2 = *(&(*(((C0*) 0))));
C0 v3 = *(&(*(((C0*) 0))));
C0 v4 = *(&(*(((C0*) 0))));
::func7(v3, v3);
::func7(v3, v3);
return abstract_0();

}
/* method id 405 */ abstract_0 C1::func1 (C0 v5) {
C0 v6 = *(&(*(((C0*) 0))));
C0 v7 = *(&(*(((C0*) 0))));
abstract_0* v8 = ((abstract_0*) 0);
abstract_1 v9 = abstract_1();
return abstract_0();

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
delete (new C1 ());
return;

}
/* method id 408 */ abstract_0 C2::func1 () {
abstract_1 v18 = abstract_1();
abstract_1 v19 = abstract_1();
abstract_2 v20 = abstract_2();
C0 v21 = *(((C0*) 0));
return ::func7(*((new C0 ())), v21);

}
/* method id 409 */ C2::~C2 () {
C0 v22 = *((new C0 ()));
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
abstract_0* v25 = new abstract_0 ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ abstract_0 C3::func3 () {
C0 v26 = *(&(*(((C0*) 0))));
::func7(v41, v41);
::func7(v41, v41);
::func7(v41, v41);
return ::func6(v41, abstract_1(), v41, v41);

}
/* method id 411 */ C3::C3 () {
abstract_1 v27 = abstract_1();
abstract_0* v28 = ((abstract_0*) 0);
v28 = ((abstract_0*) 0);
v28 = ((abstract_0*) 0);
v28 = ((abstract_0*) 0);
v28 = ((abstract_0*) 0);
return;

}
/* method id 412 */ abstract_0 C3::func4 (abstract_0* v29, C0 v30, C0 v31, C0 v32) {
C0 v33 = *(&(*(((C0*) 0))));
abstract_2 v34 = abstract_2();
C0 v35 = *(&(*(((C0*) 0))));
C0 v36 = *(&(*(((C0*) 0))));
v33 = v35;
return abstract_0();

}
/* method id 413 */ abstract_0 C3::func4 (C0 v37, abstract_0** v38, C0 v39) {
v41 = v37;
return ::func6(v37, abstract_1(), v37, v37);

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0 func6 (C0 v43, abstract_1 v44, C0 v45, C0 v46) {
C0 v47;

return abstract_0();

}
abstract_0 func7 (C0 v48, C0 v49) {
C0 v50;
C0 v51;
C0 v52;
C0 v53;

return abstract_0();

}
abstract_0 func8 (C0 v54, abstract_1 v55, C0 v56, C0 v57) {
C0 v58;

return ::func7(*((new C0 ())), v58);

}
abstract_4 func9 (C0 v59, abstract_2 v60, C0 v61, C0 v62) {
C0 v63;
C0 v64;
abstract_1 v65;
C0 v66;

delete (new C1 ());
return abstract_4();

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
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
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
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(20)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    +---
8    | {vtordisp for vbase 1}
12   +--- (virtual base class C1)
12   | {vfptr}
16   | {vbptr}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(24)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | +---
8    | var40: AbstractType{3}
12   | var41: ClassType{0}
16   | var42: PtrType{AbstractType{0}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 24;
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

// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
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
/* method id 405 */ virtual abstract_2 func1 ();
/* method id 406 */ ~C1 ();
/* method id 407 */ abstract_2 func2 ();
/* method id 408 */ virtual abstract_2 func1 (abstract_0 v20);
/* method id 409 */ C1 ();
C1 (special_constructor);
C0 v22;
};
struct C2 : public virtual C1 {
/* method id 410 */ virtual ~C2 ();
/* method id 411 */ C2 ();
/* method id 412 */ virtual abstract_2 func3 (abstract_1 v32, C0 v33);
C2 (special_constructor);
};
struct C3 : public virtual C1 {
/* method id 413 */ C3 ();
/* method id 414 */ virtual abstract_2 func3 (abstract_1 v50, abstract_1 v51, abstract_1 v52, abstract_1 v53);
/* method id 415 */ virtual ~C3 ();
/* method id 416 */ abstract_2 func3 ();
C3 (special_constructor);
};
abstract_4 func4 ();
abstract_4 func5 (abstract_0 v87);
abstract_4 func6 (abstract_1 v92, abstract_1 v93, abstract_1 v94, abstract_1 v95);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return ((new C1 ()))->C1::func2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return (((C1*) 0))->C1::func2();

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
return abstract_2();

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
return (&(*(((C1*) 0))))->C1::func2();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func1 () {
abstract_1 v14 = abstract_1();
C0 v15 = *((new C0 ()));
delete (new C1 ());
return (((C1*) 0))->C1::func2();

}
/* method id 406 */ C1::~C1 () {
abstract_1 v16 = abstract_1();
abstract_1 v17 = abstract_1();
C0 v18 = *(&(*((new C0 ()))));
abstract_1 v19 = abstract_1();
return;

}
/* method id 407 */ abstract_2 C1::func2 () {
return (((C3*) 0))->C3::func3();

}
/* method id 408 */ abstract_2 C1::func1 (abstract_0 v20) {
abstract_1 v21 = abstract_1();
return abstract_2();

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C2::~C2 () {
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
abstract_1 v25 = abstract_1();
abstract_1 v26 = abstract_1();
return;

}
/* method id 411 */ C2::C2 () {
C0 v27 = *(&(*((new C0 ()))));
::func5(abstract_0());
::func5(abstract_0());
::func5(abstract_0());
::func5(abstract_0());
return;

}
/* method id 412 */ abstract_2 C2::func3 (abstract_1 v32, C0 v33) {
abstract_1 v34 = abstract_1();
abstract_3 v35 = abstract_3();
abstract_1 v36 = abstract_1();
C0 v37 = *(((C0*) 0));
return abstract_2();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 413 */ C3::C3 () {
return;

}
/* method id 414 */ abstract_2 C3::func3 (abstract_1 v50, abstract_1 v51, abstract_1 v52, abstract_1 v53) {
return (((C1*) 0))->C1::func2();

}
/* method id 415 */ C3::~C3 () {
abstract_1 v54 = abstract_1();
abstract_1 v55 = abstract_1();
abstract_1 v56 = abstract_1();
abstract_1 v57 = abstract_1();
delete (new C1 ());
return;

}
/* method id 416 */ abstract_2 C3::func3 () {
abstract_1 v84 = abstract_1();
abstract_0 v85 = abstract_0();
return abstract_2();

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_4 func4 () {
abstract_0 v86;

return abstract_4();

}
abstract_4 func5 (abstract_0 v87) {
abstract_1 v88;
abstract_1 v89;
abstract_1 v90;
abstract_1 v91;

return abstract_4();

}
abstract_4 func6 (abstract_1 v92, abstract_1 v93, abstract_1 v94, abstract_1 v95) {
abstract_1 v96;
abstract_1 v97;
abstract_1 v98;
abstract_1 v99;

return ::func5(abstract_0());

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
class C1    size(8)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var22: ClassType{0}
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
class C2    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | +--- (base class C0)
8    | | {vfptr}
12   | +---
12   | var22: ClassType{0}
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
class C3    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | +--- (base class C0)
8    | | {vfptr}
12   | +---
12   | var22: ClassType{0}
16   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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

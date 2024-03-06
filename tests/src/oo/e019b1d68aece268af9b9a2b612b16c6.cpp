// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_5 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_6 { int x; };
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
/* method id 405 */ abstract_2 func1 (abstract_3 v14, abstract_1 v15, abstract_3 v16);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_3 v19;
abstract_4 v20;
abstract_0 v21;
abstract_1 v22;
};
struct C2  {
/* method id 407 */ abstract_2 func0 (abstract_4 v23, abstract_4 v24, abstract_1 v25, abstract_1 v26);
/* method id 408 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C1 {
/* method id 409 */ virtual abstract_5 func4 (abstract_1 v27, abstract_1 v28, abstract_1 v29);
/* method id 410 */ virtual abstract_5 func5 (abstract_4 v30, abstract_0 v31, abstract_3 v32, abstract_4 v33);
/* method id 411 */ virtual abstract_5 func6 (abstract_0 v35, abstract_1 v36, abstract_5** v37, abstract_1 v38);
/* method id 412 */ ~C3 ();
/* method id 413 */ C3 ();
C3 (special_constructor);
abstract_1 v43;
abstract_6 v44;
abstract_1 v45;
abstract_5** v46;
};
abstract_5 func8 (abstract_1 v47, abstract_4 v48, abstract_1 v49, abstract_1 v50);
abstract_5 func9 (abstract_5** v53, abstract_1 v54, abstract_1 v55, abstract_1 v56);
abstract_5 func10 (abstract_1 v61, abstract_6 v62, abstract_1 v63, abstract_1 v64);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return (((C1*) 0))->C1::func1(abstract_3(), v5, abstract_3());

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
return (((C1*) 0))->C1::func1(abstract_3(), v8, abstract_3());

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
return (((C1*) 0))->C1::func1(abstract_3(), abstract_1(), abstract_3());

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func1 (abstract_3 v14, abstract_1 v15, abstract_3 v16) {
abstract_1 v17 = abstract_1();
abstract_1 v18 = abstract_1();
return abstract_2();

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ abstract_2 C2::func0 (abstract_4 v23, abstract_4 v24, abstract_1 v25, abstract_1 v26) {
return abstract_2();

}
/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 409 */ abstract_5 C3::func4 (abstract_1 v27, abstract_1 v28, abstract_1 v29) {
delete (new C0 ());
delete (new C3 ());
return ::func9(v46, v27, v27, v27);

}
/* method id 410 */ abstract_5 C3::func5 (abstract_4 v30, abstract_0 v31, abstract_3 v32, abstract_4 v33) {
C2 v34 = *(&(*(((C2*) 0))));
return abstract_5();

}
/* method id 411 */ abstract_5 C3::func6 (abstract_0 v35, abstract_1 v36, abstract_5** v37, abstract_1 v38) {
abstract_3 v39 = abstract_3();
abstract_6 v40 = abstract_6();
abstract_1 v41 = abstract_1();
abstract_0 v42 = abstract_0();
return abstract_5();

}
/* method id 412 */ C3::~C3 () {
return;

}
/* method id 413 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_5 func8 (abstract_1 v47, abstract_4 v48, abstract_1 v49, abstract_1 v50) {
abstract_1 v51;
abstract_0 v52;

return abstract_5();

}
abstract_5 func9 (abstract_5** v53, abstract_1 v54, abstract_1 v55, abstract_1 v56) {
abstract_1 v57;
abstract_4 v58;
abstract_1 v59;
abstract_6 v60;

return abstract_5();

}
abstract_5 func10 (abstract_1 v61, abstract_6 v62, abstract_1 v63, abstract_1 v64) {
abstract_1 v65;
abstract_0 v66;
abstract_1 v67;
abstract_1 v68;

delete (new C2 ());
return ::func9(new abstract_5* (), v65, v65, v65);

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
class C1    size(20)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var19: AbstractType{3}
8    | var20: AbstractType{4}
12   | var21: AbstractType{0}
16   | var22: AbstractType{1}
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
class C2    size(0)
0    +---
0    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(36)
0    +---
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | +---
4    | | var19: AbstractType{3}
8    | | var20: AbstractType{4}
12   | | var21: AbstractType{0}
16   | | var22: AbstractType{1}
20   | +---
20   | var43: AbstractType{1}
24   | var44: AbstractType{6}
28   | var45: AbstractType{1}
32   | var46: DeletablePtrType{PtrType{AbstractType{5}}}
36   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 36;
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

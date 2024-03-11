// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ abstract_1 func0 (abstract_0 v4, abstract_0 v5);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 405 */ virtual abstract_1 func2 (abstract_0 v6, abstract_0 v7);
/* method id 406 */ C1 ();
/* method id 407 */ virtual abstract_1 func1 ();
/* method id 408 */ virtual abstract_1 func3 (abstract_1* v12, C0 v13, abstract_1* v14);
C1 (special_constructor);
abstract_1* v19;
C0 v20;
abstract_1* v21;
abstract_0 v22;
};
struct C2 : public C1 {
/* method id 409 */ virtual ~C2 ();
/* method id 410 */ virtual abstract_1 func0 (abstract_1* v27, abstract_2 v28, abstract_1* v29, abstract_2 v30);
/* method id 411 */ C2 ();
C2 (special_constructor);
abstract_1* v33;
abstract_1* v34;
};
abstract_1 func5 (abstract_4 v35);
abstract_1 func6 (abstract_3 v36, C0 v37, abstract_1* v38);
abstract_1 func7 (abstract_4 v43, abstract_1* v44, abstract_1* v45, abstract_1* v46);
abstract_1 func8 (abstract_4 v51, abstract_1* v52, abstract_1* v53, C0 v54);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
delete (new C1 ());
return ::func6(abstract_3(), *(((C0*) 0)), new abstract_1 ());

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 () {
return ::func5(abstract_4());

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v4, abstract_0 v5) {
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func2 (abstract_0 v6, abstract_0 v7) {
abstract_1* v8 = new abstract_1 ();
return ::func6(abstract_3(), v20, v21);

}
/* method id 406 */ C1::C1 () {
abstract_1* v9 = ((abstract_1*) 0);
return;

}
/* method id 407 */ abstract_1 C1::func1 () {
C0 v10 = *(&(*((new C0 ()))));
abstract_2 v11 = abstract_2();
return ::func6(abstract_3(), v20, v21);

}
/* method id 408 */ abstract_1 C1::func3 (abstract_1* v12, C0 v13, abstract_1* v14) {
C0 v15 = *(((C0*) 0));
abstract_2 v16 = abstract_2();
abstract_3 v17 = abstract_3();
abstract_1* v18 = ((abstract_1*) 0);
delete (new C1 ());
return ::func6(abstract_3(), v13, v12);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::~C2 () {
abstract_0 v23 = abstract_0();
abstract_4 v24 = abstract_4();
abstract_1* v25 = new abstract_1 ();
abstract_2 v26 = abstract_2();
delete (new C1 ());
return;

}
/* method id 410 */ abstract_1 C2::func0 (abstract_1* v27, abstract_2 v28, abstract_1* v29, abstract_2 v30) {
C0 v31 = *((new C0 ()));
C0 v32 = *((new C0 ()));
return ::func8(abstract_4(), v19, v19, v31);

}
/* method id 411 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

abstract_1 func5 (abstract_4 v35) {

return abstract_1();

}
abstract_1 func6 (abstract_3 v36, C0 v37, abstract_1* v38) {
abstract_1* v39;
C0 v40;
abstract_5 v41;
abstract_1* v42;

return abstract_1();

}
abstract_1 func7 (abstract_4 v43, abstract_1* v44, abstract_1* v45, abstract_1* v46) {
abstract_1* v47;
abstract_2 v48;
abstract_1* v49;
abstract_5 v50;

return abstract_1();

}
abstract_1 func8 (abstract_4 v51, abstract_1* v52, abstract_1* v53, C0 v54) {
abstract_1* v55;
abstract_4 v56;
abstract_4 v57;
abstract_0 v58;

return ::func6(abstract_3(), v54, v52);

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
4    | var19: PtrType{AbstractType{1}}
8    | var20: ClassType{0}
12   | var21: PtrType{AbstractType{1}}
16   | var22: AbstractType{0}
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
class C2    size(28)
0    +---
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | +---
4    | | var19: PtrType{AbstractType{1}}
8    | | var20: ClassType{0}
12   | | var21: PtrType{AbstractType{1}}
16   | | var22: AbstractType{0}
20   | +---
20   | var33: PtrType{AbstractType{1}}
24   | var34: PtrType{AbstractType{1}}
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
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
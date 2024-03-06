// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 401 */ abstract_1 func0 (abstract_0 v8, abstract_0 v9, abstract_0 v10);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ abstract_1 func0 (abstract_0 v22, abstract_0 v23, abstract_2 v24, abstract_2 v25);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_1 func1 ();
/* method id 406 */ abstract_1 func1 (abstract_2 v27, abstract_0 v28, abstract_3 v29, abstract_2 v30);
/* method id 407 */ virtual abstract_1 func1 (abstract_2 v33, abstract_2 v34, abstract_3 v35, abstract_2 v36);
/* method id 408 */ virtual abstract_1 func0 (abstract_3 v37, abstract_2 v38);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_2 v40;
abstract_3 v41;
abstract_2 v42;
};
struct C2 : public C1 {
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_0 v43;
abstract_1* v44;
abstract_1* v45;
};
struct C3  {
/* method id 411 */ C3 ();
/* method id 412 */ abstract_1 func4 (abstract_2 v47, abstract_1* v48, abstract_2 v49, abstract_1* v50);
/* method id 413 */ abstract_1 func5 (abstract_2 v55, abstract_2 v56, abstract_1** v57, abstract_1** v58);
/* method id 414 */ virtual abstract_4 func0 (abstract_1** v60, C0 v61, abstract_1** v62, abstract_2 v63);
C3 (special_constructor);
C0 v66;
abstract_5 v67;
abstract_0 v68;
abstract_1* v69;
};
abstract_4 func6 (abstract_1** v70, abstract_3 v71, C0 v72, abstract_5 v73);
abstract_4 func7 (abstract_1** v75, abstract_1** v76, C0 v77);
abstract_4 func8 (abstract_1** v82, abstract_0 v83);
abstract_4 func9 (abstract_1** v88, abstract_1** v89);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3) {
v2 = v1;
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v8, abstract_0 v9, abstract_0 v10) {
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 () {
return abstract_1();

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v22, abstract_0 v23, abstract_2 v24, abstract_2 v25) {
delete (new C1 ());
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func1 () {
abstract_2 v26 = abstract_2();
return abstract_1();

}
/* method id 406 */ abstract_1 C1::func1 (abstract_2 v27, abstract_0 v28, abstract_3 v29, abstract_2 v30) {
abstract_2 v31 = abstract_2();
abstract_3 v32 = abstract_3();
return abstract_1();

}
/* method id 407 */ abstract_1 C1::func1 (abstract_2 v33, abstract_2 v34, abstract_3 v35, abstract_2 v36) {
return abstract_1();

}
/* method id 408 */ abstract_1 C1::func0 (abstract_3 v37, abstract_2 v38) {
abstract_0 v39 = abstract_0();
return abstract_1();

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 411 */ C3::C3 () {
abstract_2 v46 = abstract_2();
return;

}
/* method id 412 */ abstract_1 C3::func4 (abstract_2 v47, abstract_1* v48, abstract_2 v49, abstract_1* v50) {
abstract_0 v51 = abstract_0();
abstract_1* v52 = ((abstract_1*) 0);
C0 v53 = *(((C0*) 0));
abstract_0 v54 = abstract_0();
delete (new C1 ());
return abstract_1();

}
/* method id 413 */ abstract_1 C3::func5 (abstract_2 v55, abstract_2 v56, abstract_1** v57, abstract_1** v58) {
abstract_1** v59 = new abstract_1* ();
return abstract_1();

}
/* method id 414 */ abstract_4 C3::func0 (abstract_1** v60, C0 v61, abstract_1** v62, abstract_2 v63) {
C0 v64 = *(&(*((new C0 ()))));
abstract_2 v65 = abstract_2();
return abstract_4();

}
C3::C3 (special_constructor)  {}

abstract_4 func6 (abstract_1** v70, abstract_3 v71, C0 v72, abstract_5 v73) {
abstract_0 v74;

return abstract_4();

}
abstract_4 func7 (abstract_1** v75, abstract_1** v76, C0 v77) {
abstract_1** v78;
abstract_3 v79;
C0 v80;
abstract_0 v81;

return ::func8(v78, v81);

}
abstract_4 func8 (abstract_1** v82, abstract_0 v83) {
abstract_1** v84;
abstract_2 v85;
C0 v86;
abstract_2 v87;

delete (new C3 ());
return ::func9(new abstract_1* (), new abstract_1* ());

}
abstract_4 func9 (abstract_1** v88, abstract_1** v89) {

return ::func7(new abstract_1* (), new abstract_1* (), *(((C0*) 0)));

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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var40: AbstractType{2}
12   | var41: AbstractType{3}
16   | var42: AbstractType{2}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
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
class C2    size(36)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var40: AbstractType{2}
12   | | var41: AbstractType{3}
16   | | var42: AbstractType{2}
20   | +---
20   | var43: AbstractType{0}
24   | var44: PtrType{AbstractType{1}}
28   | var45: PtrType{AbstractType{1}}
32   +---
32   +--- (virtual base class C0)
32   | {vfptr}
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
0    | {vfptr}
4    | var66: ClassType{0}
8    | var67: AbstractType{5}
12   | var68: AbstractType{0}
16   | var69: PtrType{AbstractType{1}}
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
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

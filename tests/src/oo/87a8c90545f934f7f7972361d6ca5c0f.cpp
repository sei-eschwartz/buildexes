// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_9 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_10 { int x; };
struct abstract_11 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_1*** func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 401 */ virtual abstract_1** func0 (abstract_2 v6, abstract_2 v7);
/* method id 402 */ ~C0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
/* method id 405 */ virtual abstract_1*** func0 (abstract_0 v16, abstract_0 v17, abstract_0 v18, abstract_0 v19);
/* method id 406 */ virtual abstract_6 func1 ();
C1 (special_constructor);
abstract_8 v25;
abstract_2 v26;
abstract_0 v27;
};
struct C2  {
/* method id 408 */ C2 ();
/* method id 409 */ virtual abstract_1*** func1 ();
C2 (special_constructor);
abstract_8 v33;
abstract_2 v34;
C1 v35;
};
struct C3  {
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ C3 ();
C3 (special_constructor);
abstract_2 v41;
abstract_2 v42;
abstract_7 v43;
abstract_2 v44;
};
abstract_1* func4 (abstract_2 v45, abstract_2 v46, abstract_2 v47, abstract_2 v48);
abstract_9 func5 (abstract_1** v53, abstract_10 v54, abstract_2 v55, abstract_6* v56);
abstract_1* func6 (abstract_2 v58, abstract_7 v59, abstract_2 v60, abstract_7 v61);
abstract_1** func7 (abstract_1*** v66, abstract_11 v67, abstract_2 v68, abstract_0 v69);
// definitions
/* method id 400 */ abstract_1*** C0::func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3) {
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
return ((abstract_1***) 0);

}
/* method id 401 */ abstract_1** C0::func0 (abstract_2 v6, abstract_2 v7) {
abstract_2 v8 = abstract_2();
abstract_1*** v9 = new abstract_1** ();
abstract_3 v10 = abstract_3();
abstract_3 v11 = abstract_3();
return ((abstract_1**) 0);

}
/* method id 402 */ C0::~C0 () {
return;

}
/* method id 403 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
abstract_2 v12 = abstract_2();
abstract_4 v13 = abstract_4();
abstract_4 v14 = abstract_4();
abstract_2 v15 = abstract_2();
return;

}
/* method id 405 */ abstract_1*** C1::func0 (abstract_0 v16, abstract_0 v17, abstract_0 v18, abstract_0 v19) {
abstract_0 v20 = abstract_0();
return ((abstract_1***) 0);

}
/* method id 406 */ abstract_6 C1::func1 () {
abstract_7 v21 = abstract_7();
abstract_1** v22 = ((abstract_1**) 0);
abstract_2 v23 = abstract_2();
C0 v24 = *(&(*((new C0 ()))));
return abstract_6();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {
abstract_7 v28 = abstract_7();
abstract_1** v29 = ((abstract_1**) 0);
C0 v30 = *(((C0*) 0));
abstract_2 v31 = abstract_2();
return;

}
/* method id 409 */ abstract_1*** C2::func1 () {
return ((abstract_1***) 0);

}
C2::C2 (special_constructor)  {}

/* method id 410 */ C3::~C3 () {
return;

}
/* method id 411 */ C3::C3 () {
return;

}
C3::C3 (special_constructor)  {}

abstract_1* func4 (abstract_2 v45, abstract_2 v46, abstract_2 v47, abstract_2 v48) {
abstract_2 v49;
abstract_1*** v50;
abstract_2 v51;
abstract_2 v52;

return ((abstract_1*) 0);

}
abstract_9 func5 (abstract_1** v53, abstract_10 v54, abstract_2 v55, abstract_6* v56) {
abstract_0 v57;

return abstract_9();

}
abstract_1* func6 (abstract_2 v58, abstract_7 v59, abstract_2 v60, abstract_7 v61) {
abstract_7 v62;
abstract_2 v63;
C0 v64;
abstract_2 v65;

return new abstract_1 ();

}
abstract_1** func7 (abstract_1*** v66, abstract_11 v67, abstract_2 v68, abstract_0 v69) {

return ((abstract_1**) 0);

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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var25: AbstractType{8}
12   | var26: AbstractType{2}
16   | var27: AbstractType{0}
20   | {vtordisp for vbase 0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(40)
0    +---
0    | {vfptr}
4    | var33: AbstractType{8}
8    | var34: AbstractType{2}
12   | var35: ClassType{1}
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(20)
0    +---
0    | {vfptr}
4    | var41: AbstractType{2}
8    | var42: AbstractType{2}
12   | var43: AbstractType{7}
16   | var44: AbstractType{2}
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

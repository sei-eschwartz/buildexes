// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual abstract_0** func0 ();
C1 (special_constructor);
abstract_0* v0;
};
struct C2 : public C1, public C0 {
/* method id 403 */ virtual abstract_0** func0 ();
/* method id 404 */ abstract_0 func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, C1 v4);
/* method id 405 */ C2 ();
C2 (special_constructor);
abstract_0* v7;
C1 v8;
C1 v9;
};
struct C3  {
/* method id 406 */ virtual abstract_1 func1 ();
/* method id 407 */ virtual abstract_1 func2 (C1 v10, abstract_0* v11, abstract_0* v12);
/* method id 408 */ virtual abstract_0 func0 (C1 v13);
/* method id 409 */ virtual abstract_0* func0 (C2 v18, C1 v19, abstract_0* v20, C1 v21);
/* method id 410 */ C3 ();
C3 (special_constructor);
C1 v26;
C1 v27;
C1 v28;
C2 v29;
};
abstract_1 func4 (C1 v30, C1 v31, C1 v32, C2 v33);
abstract_1 func5 (C1 v38, C2 v39, C1 v40, C1 v41);
abstract_0** func6 (C1 v46, C1 v47, C1 v48);
abstract_0* func7 (C1 v51, C2 v52, C1 v53, C1 v54);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
return;

}
/* method id 402 */ abstract_0** C1::func0 () {
return new abstract_0* ();

}
C1::C1 (special_constructor)  {}

/* method id 403 */ abstract_0** C2::func0 () {
return ((abstract_0**) 0);

}
/* method id 404 */ abstract_0 C2::func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, C1 v4) {
C1 v5 = *(((C1*) 0));
abstract_0* v6 = new abstract_0 ();
return abstract_0();

}
/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 406 */ abstract_1 C3::func1 () {
return abstract_1();

}
/* method id 407 */ abstract_1 C3::func2 (C1 v10, abstract_0* v11, abstract_0* v12) {
return abstract_1();

}
/* method id 408 */ abstract_0 C3::func0 (C1 v13) {
C1 v14 = *(((C1*) 0));
C1 v15 = *(((C1*) 0));
C2 v16 = *(((C2*) 0));
C1 v17 = *(((C1*) 0));
return abstract_0();

}
/* method id 409 */ abstract_0* C3::func0 (C2 v18, C1 v19, abstract_0* v20, C1 v21) {
C1 v22 = *((new C1 ()));
C2 v23 = *((new C2 ()));
C1 v24 = *((new C1 ()));
C1 v25 = *((new C1 ()));
return v20;

}
/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

abstract_1 func4 (C1 v30, C1 v31, C1 v32, C2 v33) {
C1 v34;
C1 v35;
C1 v36;
C1 v37;

::func6(v35, v35, v35);
::func6(v35, v35, v35);
::func6(v35, v35, v35);
::func6(v35, v35, v35);
return ::func5(v35, v33, v35, v35);

}
abstract_1 func5 (C1 v38, C2 v39, C1 v40, C1 v41) {
C1 v42;
C2 v43;
C1 v44;
C1 v45;

return abstract_1();

}
abstract_0** func6 (C1 v46, C1 v47, C1 v48) {
C1 v49;
C1 v50;

delete (new C1 ());
return new abstract_0* ();

}
abstract_0* func7 (C1 v51, C2 v52, C1 v53, C1 v54) {
C1 v55;
C2 v56;
C1 v57;
C1 v58;

return ((abstract_0*) 0);

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
class C1    size(8)
0    +---
0    | {vfptr}
4    | var0: PtrType{AbstractType{0}}
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
class C2    size(28)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var0: PtrType{AbstractType{0}}
8    | +---
8    | +--- (base class C0)
8    | +---
8    | var7: PtrType{AbstractType{0}}
12   | var8: ClassType{1}
20   | var9: ClassType{1}
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
 }} {
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
 }}}
/*
class C3    size(56)
0    +---
0    | {vfptr}
4    | var26: ClassType{1}
12   | var27: ClassType{1}
20   | var28: ClassType{1}
28   | var29: ClassType{2}
56   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 56;
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

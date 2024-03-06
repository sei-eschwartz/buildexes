// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_5 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ virtual abstract_0* func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3);
/* method id 402 */ virtual abstract_0* func0 (abstract_0** v4, abstract_0** v5, abstract_0** v6, abstract_0** v7);
/* method id 403 */ virtual abstract_0** func0 (abstract_0** v8, abstract_0** v9, abstract_0** v10, abstract_1 v11);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_3 v16;
abstract_3 v17;
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_0* func2 (abstract_1 v18, abstract_1 v19);
/* method id 406 */ virtual abstract_0** func1 (abstract_0** v21, abstract_3 v22);
/* method id 407 */ C1 ();
/* method id 408 */ abstract_0* func0 (abstract_0** v29, abstract_0** v30, abstract_0** v31, abstract_0** v32);
C1 (special_constructor);
abstract_1 v37;
abstract_0*** v38;
abstract_0** v39;
};
struct C2 : public C0 {
/* method id 409 */ abstract_0* func0 (abstract_0*** v40, abstract_1 v41);
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_3 v46;
abstract_1 v47;
abstract_1 v48;
};
abstract_5 func3 ();
abstract_5 func4 (abstract_0*** v49);
abstract_5 func5 (abstract_4 v50, abstract_2 v51, abstract_1 v52);
abstract_0 func6 ();
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
return new abstract_0 ();

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3) {
delete (new C2 ());
return new abstract_0 ();

}
/* method id 402 */ abstract_0* C0::func0 (abstract_0** v4, abstract_0** v5, abstract_0** v6, abstract_0** v7) {
return ((abstract_0*) 0);

}
/* method id 403 */ abstract_0** C0::func0 (abstract_0** v8, abstract_0** v9, abstract_0** v10, abstract_1 v11) {
abstract_2 v12 = abstract_2();
abstract_1 v13 = abstract_1();
abstract_1 v14 = abstract_1();
abstract_3 v15 = abstract_3();
delete (new C2 ());
v16 = v15;
return ((abstract_0**) 0);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_0* C1::func2 (abstract_1 v18, abstract_1 v19) {
abstract_0** v20 = new abstract_0* ();
delete (new C1 ());
v19 = abstract_1();
return new abstract_0 ();

}
/* method id 406 */ abstract_0** C1::func1 (abstract_0** v21, abstract_3 v22) {
abstract_0** v23 = ((abstract_0**) 0);
abstract_2 v24 = abstract_2();
abstract_4 v25 = abstract_4();
abstract_1 v26 = abstract_1();
return v23;

}
/* method id 407 */ C1::C1 () {
abstract_0** v27 = ((abstract_0**) 0);
abstract_1 v28 = abstract_1();
::func3();
::func3();
::func3();
::func3();
return;

}
/* method id 408 */ abstract_0* C1::func0 (abstract_0** v29, abstract_0** v30, abstract_0** v31, abstract_0** v32) {
abstract_4 v33 = abstract_4();
abstract_0*** v34 = new abstract_0** ();
abstract_0*** v35 = new abstract_0** ();
abstract_0*** v36 = new abstract_0** ();
delete (new C1 ());
v32 = v32;
v32 = v32;
::func6();
return ((abstract_0*) 0);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ abstract_0* C2::func0 (abstract_0*** v40, abstract_1 v41) {
abstract_0** v42 = ((abstract_0**) 0);
::func4(v40);
::func4(v40);
::func4(v40);
::func4(v40);
return ((abstract_0*) 0);

}
/* method id 410 */ C2::C2 () {
abstract_2 v43 = abstract_2();
abstract_1 v44 = abstract_1();
delete (new C0 ());
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

abstract_5 func3 () {

::func5(abstract_4(), abstract_2(), abstract_1());
::func5(abstract_4(), abstract_2(), abstract_1());
::func5(abstract_4(), abstract_2(), abstract_1());
::func5(abstract_4(), abstract_2(), abstract_1());
return abstract_5();

}
abstract_5 func4 (abstract_0*** v49) {

return abstract_5();

}
abstract_5 func5 (abstract_4 v50, abstract_2 v51, abstract_1 v52) {
abstract_2 v53;
abstract_1 v54;
C1 v55;

return ::func3();

}
abstract_0 func6 () {
abstract_1 v56;
abstract_6 v57;
abstract_3 v58;
abstract_4 v59;

return abstract_0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var16: AbstractType{3}
8    | var17: AbstractType{3}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var37: AbstractType{1}
12   | var38: PtrType{PtrType{PtrType{AbstractType{0}}}}
16   | var39: PtrType{PtrType{AbstractType{0}}}
20   | {vtordisp for vbase 0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var16: AbstractType{3}
32   | var17: AbstractType{3}
36   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 36;
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
class C2    size(24)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var16: AbstractType{3}
8    | | var17: AbstractType{3}
12   | +---
12   | var46: AbstractType{3}
16   | var47: AbstractType{1}
20   | var48: AbstractType{1}
24   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

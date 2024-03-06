// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
abstract_0** v1;
abstract_0** v2;
abstract_0** v3;
abstract_0** v4;
};
struct C1  {
/* method id 401 */ ~C1 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
};
struct C2 : public C0, public C1 {
/* method id 403 */ C2 ();
/* method id 404 */ virtual abstract_0* func0 ();
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ virtual abstract_0* func2 (C1 v10, abstract_0** v11, abstract_1 v12, abstract_1 v13);
C2 (special_constructor);
abstract_0** v18;
};
struct C3 : public C1, public C0 {
/* method id 407 */ void func3 (abstract_1 v19, abstract_0** v20);
/* method id 408 */ virtual abstract_0* func1 (abstract_0** v22);
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
C3 (special_constructor);
abstract_1 v33;
abstract_1 v34;
abstract_1 v35;
abstract_2 v36;
};
abstract_0* func4 (abstract_1 v37, abstract_4 v38, abstract_4 v39, abstract_1 v40);
abstract_0* func5 ();
abstract_0* func6 (abstract_1 v48, abstract_1 v49, abstract_2 v50, abstract_1 v51);
abstract_0* func7 (abstract_1 v56);
// definitions
/* method id 400 */ C0::C0 () {
abstract_0** v0 = ((abstract_0**) 0);
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::~C1 () {
return;

}
/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::C2 () {
return;

}
/* method id 404 */ abstract_0* C2::func0 () {
return ::func7(abstract_1());

}
/* method id 405 */ C2::~C2 () {
abstract_0** v5 = new abstract_0* ();
abstract_1 v6 = abstract_1();
abstract_1 v7 = abstract_1();
abstract_2 v8 = abstract_2();
delete (new C3 ());
return;

}
/* method id 406 */ abstract_0* C2::func2 (C1 v10, abstract_0** v11, abstract_1 v12, abstract_1 v13) {
abstract_1 v14 = abstract_1();
abstract_1 v15 = abstract_1();
abstract_1 v16 = abstract_1();
abstract_1 v17 = abstract_1();
return ((abstract_0*) 0);

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 407 */ void C3::func3 (abstract_1 v19, abstract_0** v20) {
abstract_4 v21 = abstract_4();
return;

}
/* method id 408 */ abstract_0* C3::func1 (abstract_0** v22) {
abstract_4 v23 = abstract_4();
return ((abstract_0*) 0);

}
/* method id 409 */ C3::C3 () {
abstract_1 v24 = abstract_1();
abstract_1 v25 = abstract_1();
abstract_1 v26 = abstract_1();
abstract_1 v27 = abstract_1();
return;

}
/* method id 410 */ C3::~C3 () {
abstract_1 v29 = abstract_1();
abstract_1 v30 = abstract_1();
abstract_1 v31 = abstract_1();
abstract_1 v32 = abstract_1();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

abstract_0* func4 (abstract_1 v37, abstract_4 v38, abstract_4 v39, abstract_1 v40) {
abstract_1 v41;
abstract_1 v42;
abstract_1 v43;

return new abstract_0 ();

}
abstract_0* func5 () {
abstract_1 v44;
abstract_1 v45;
abstract_1 v46;
abstract_1 v47;

return ((abstract_0*) 0);

}
abstract_0* func6 (abstract_1 v48, abstract_1 v49, abstract_2 v50, abstract_1 v51) {
abstract_1 v52;
abstract_1 v53;
abstract_1 v54;
abstract_1 v55;

return ((abstract_0*) 0);

}
abstract_0* func7 (abstract_1 v56) {
abstract_1 v57;
abstract_1 v58;

return new abstract_0 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var1: PtrType{PtrType{AbstractType{0}}}
4    | var2: PtrType{PtrType{AbstractType{0}}}
8    | var3: PtrType{PtrType{AbstractType{0}}}
12   | var4: PtrType{PtrType{AbstractType{0}}}
16   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(0)
0    +---
0    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(24)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | | var1: PtrType{PtrType{AbstractType{0}}}
8    | | var2: PtrType{PtrType{AbstractType{0}}}
12   | | var3: PtrType{PtrType{AbstractType{0}}}
16   | | var4: PtrType{PtrType{AbstractType{0}}}
20   | +---
20   | +--- (base class C1)
20   | +---
20   | var18: PtrType{PtrType{AbstractType{0}}}
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
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(36)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | +---
4    | +--- (base class C0)
4    | | var1: PtrType{PtrType{AbstractType{0}}}
8    | | var2: PtrType{PtrType{AbstractType{0}}}
12   | | var3: PtrType{PtrType{AbstractType{0}}}
16   | | var4: PtrType{PtrType{AbstractType{0}}}
20   | +---
20   | var33: AbstractType{1}
24   | var34: AbstractType{1}
28   | var35: AbstractType{1}
32   | var36: AbstractType{2}
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
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

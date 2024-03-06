// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1** func0 (abstract_0 v0);
/* method id 401 */ abstract_1* func0 (abstract_1*** v2, abstract_1*** v3);
/* method id 402 */ abstract_1** func1 (abstract_1*** v4, abstract_0 v5);
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_1**** v7;
abstract_1*** v8;
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
/* method id 405 */ abstract_1* func1 (abstract_0 v13, abstract_1*** v14, abstract_0 v15, abstract_0 v16);
C1 (special_constructor);
};
struct C2 : public virtual C0 {
/* method id 406 */ virtual abstract_1** func1 (abstract_1*** v18, abstract_2 v19, abstract_1*** v20, abstract_2 v21);
/* method id 407 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C0, public C1 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual abstract_1** func1 (abstract_1*** v27, abstract_1*** v28, abstract_1**** v29, abstract_1*** v30);
C3 (special_constructor);
abstract_1**** v34;
abstract_1*** v35;
abstract_0 v36;
abstract_1**** v37;
};
abstract_1* func2 (abstract_0 v38, abstract_1*** v39, abstract_1**** v40, abstract_1*** v41);
abstract_1 func3 (abstract_1*** v45, abstract_2 v46);
abstract_1* func4 (abstract_1*** v48);
abstract_1* func5 (abstract_2 v49, abstract_1*** v50, abstract_2 v51);
// definitions
/* method id 400 */ abstract_1** C0::func0 (abstract_0 v0) {
abstract_0 v1 = abstract_0();
return ((abstract_1**) 0);

}
/* method id 401 */ abstract_1* C0::func0 (abstract_1*** v2, abstract_1*** v3) {
return new abstract_1 ();

}
/* method id 402 */ abstract_1** C0::func1 (abstract_1*** v4, abstract_0 v5) {
abstract_1**** v6 = new abstract_1*** ();
return (((C0*) 0))->C0::func0(abstract_0());

}
/* method id 403 */ C0::C0 () {
v7 = v7;
v7 = v7;
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {
abstract_1**** v9 = new abstract_1*** ();
abstract_1*** v10 = new abstract_1** ();
abstract_1*** v11 = new abstract_1** ();
abstract_0 v12 = abstract_0();
v10 = v10;
v10 = v10;
return;

}
/* method id 405 */ abstract_1* C1::func1 (abstract_0 v13, abstract_1*** v14, abstract_0 v15, abstract_0 v16) {
abstract_0 v17 = abstract_0();
delete (new C3 ());
return new abstract_1 ();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ abstract_1** C2::func1 (abstract_1*** v18, abstract_2 v19, abstract_1*** v20, abstract_2 v21) {
abstract_1**** v22 = new abstract_1*** ();
delete (new C2 ());
return new abstract_1* ();

}
/* method id 407 */ C2::C2 () {
delete (new C3 ());
v8 = v8;
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
abstract_2 v23 = abstract_2();
abstract_0 v24 = abstract_0();
abstract_0 v25 = abstract_0();
abstract_1*** v26 = new abstract_1** ();
v7 = v7;
v7 = v7;
v7 = v7;
return;

}
/* method id 409 */ abstract_1** C3::func1 (abstract_1*** v27, abstract_1*** v28, abstract_1**** v29, abstract_1*** v30) {
abstract_0 v31 = abstract_0();
abstract_1*** v32 = new abstract_1** ();
abstract_0 v33 = abstract_0();
delete (new C2 ());
return ((abstract_1**) 0);

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

abstract_1* func2 (abstract_0 v38, abstract_1*** v39, abstract_1**** v40, abstract_1*** v41) {
abstract_1*** v42;
abstract_1*** v43;
abstract_1*** v44;

return ::func4(new abstract_1** ());

}
abstract_1 func3 (abstract_1*** v45, abstract_2 v46) {
abstract_1*** v47;

return abstract_1();

}
abstract_1* func4 (abstract_1*** v48) {

return ((abstract_1*) 0);

}
abstract_1* func5 (abstract_2 v49, abstract_1*** v50, abstract_2 v51) {
abstract_0 v52;
abstract_1*** v53;
abstract_1*** v54;
abstract_0 v55;

v54 = new abstract_1** ();
v54 = new abstract_1** ();
v54 = new abstract_1** ();
v54 = new abstract_1** ();
return ((abstract_1*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | var7: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{1}}}}}
4    | var8: DeletablePtrType{PtrType{PtrType{AbstractType{1}}}}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
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
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | var7: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{1}}}}}
8    | var8: DeletablePtrType{PtrType{PtrType{AbstractType{1}}}}
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
 const size_t model_offset = 4;
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
8    +--- (virtual base class C0)
8    | var7: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{1}}}}}
12   | var8: DeletablePtrType{PtrType{PtrType{AbstractType{1}}}}
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
class C3    size(32)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | {vbptr}
8    | +---
8    | var34: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{1}}}}}
12   | var35: DeletablePtrType{PtrType{PtrType{AbstractType{1}}}}
16   | var36: AbstractType{0}
20   | var37: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{1}}}}}
24   +---
24   +--- (virtual base class C0)
24   | var7: DeletablePtrType{PtrType{PtrType{PtrType{AbstractType{1}}}}}
28   | var8: DeletablePtrType{PtrType{PtrType{AbstractType{1}}}}
32   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

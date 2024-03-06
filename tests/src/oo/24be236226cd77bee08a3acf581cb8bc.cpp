// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ virtual void** func0 ();
/* method id 402 */ C0 ();
/* method id 403 */ virtual abstract_0*** func1 (abstract_0*** v2, abstract_0*** v3, abstract_0* v4, abstract_0*** v5);
C0 (special_constructor);
abstract_0* v6;
};
struct C1 : public C0 {
/* method id 404 */ ~C1 ();
/* method id 405 */ abstract_0* func1 (abstract_0*** v7, abstract_0* v8);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_0* v13;
abstract_0* v14;
abstract_0*** v15;
};
struct C2 : public C0 {
/* method id 407 */ C2 ();
/* method id 408 */ void* func3 (abstract_0*** v17, abstract_0*** v18, abstract_0*** v19, abstract_0*** v20);
/* method id 409 */ virtual ~C2 ();
/* method id 410 */ virtual abstract_0*** func1 (void*** v40, void*** v41);
C2 (special_constructor);
void*** v42;
abstract_0*** v43;
void*** v44;
abstract_0*** v45;
};
struct C3 : public C2 {
/* method id 411 */ ~C3 ();
/* method id 412 */ virtual abstract_0 func0 (abstract_0*** v47, abstract_0* v48, abstract_0*** v49, void*** v50);
/* method id 413 */ C3 ();
C3 (special_constructor);
};
abstract_0 func5 (abstract_0* v51);
void** func6 (abstract_0*** v52, void*** v53);
void* func7 (void*** v57, abstract_0*** v58, abstract_1** v59, C1 v60);
void** func8 (abstract_0* v62, abstract_0*** v63, abstract_0* v64);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C1 ());
return;

}
/* method id 401 */ void** C0::func0 () {
v6 = v6;
return ((void**) 0);

}
/* method id 402 */ C0::C0 () {
abstract_0* v0 = new abstract_0 ();
abstract_0*** v1 = ((abstract_0***) 0);
::func5(v6);
::func5(v6);
::func5(v6);
::func5(v6);
return;

}
/* method id 403 */ abstract_0*** C0::func1 (abstract_0*** v2, abstract_0*** v3, abstract_0* v4, abstract_0*** v5) {
::func6(v3, new void** ());
::func6(v3, new void** ());
::func6(v3, new void** ());
::func6(v3, new void** ());
return v2;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::~C1 () {
v14 = ((abstract_0*) 0);
v14 = ((abstract_0*) 0);
v14 = ((abstract_0*) 0);
v14 = ((abstract_0*) 0);
return;

}
/* method id 405 */ abstract_0* C1::func1 (abstract_0*** v7, abstract_0* v8) {
abstract_0*** v9 = ((abstract_0***) 0);
abstract_0*** v10 = ((abstract_0***) 0);
delete (new C0 ());
return new abstract_0 ();

}
/* method id 406 */ C1::C1 () {
abstract_0*** v11 = ((abstract_0***) 0);
::func6(v15, ((void***) 0));
::func6(v15, ((void***) 0));
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_0*** v16 = ((abstract_0***) 0);
return;

}
/* method id 408 */ void* C2::func3 (abstract_0*** v17, abstract_0*** v18, abstract_0*** v19, abstract_0*** v20) {
abstract_0*** v21 = new abstract_0** ();
return ((void*) 0);

}
/* method id 409 */ C2::~C2 () {
abstract_0*** v23 = new abstract_0** ();
v43 = v23;
v43 = v23;
v43 = v23;
v43 = v23;
return;

}
/* method id 410 */ abstract_0*** C2::func1 (void*** v40, void*** v41) {
return v43;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 411 */ C3::~C3 () {
abstract_0* v46 = ((abstract_0*) 0);
return;

}
/* method id 412 */ abstract_0 C3::func0 (abstract_0*** v47, abstract_0* v48, abstract_0*** v49, void*** v50) {
return ::func5(v48);

}
/* method id 413 */ C3::C3 () {
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_0 func5 (abstract_0* v51) {

return abstract_0();

}
void** func6 (abstract_0*** v52, void*** v53) {
abstract_0* v54;
abstract_0*** v55;
abstract_1** v56;

v53 = new void** ();
return new void* ();

}
void* func7 (void*** v57, abstract_0*** v58, abstract_1** v59, C1 v60) {
abstract_0*** v61;

delete (new C1 ());
return ((void*) 0);

}
void** func8 (abstract_0* v62, abstract_0*** v63, abstract_0* v64) {

return new void* ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var6: PtrType{AbstractType{0}}
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
class C1    size(20)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var6: PtrType{AbstractType{0}}
8    | +---
8    | var13: PtrType{AbstractType{0}}
12   | var14: PtrType{AbstractType{0}}
16   | var15: PtrType{PtrType{PtrType{AbstractType{0}}}}
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
class C2    size(24)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var6: PtrType{AbstractType{0}}
8    | +---
8    | var42: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var43: PtrType{PtrType{PtrType{AbstractType{0}}}}
16   | var44: PtrType{PtrType{PtrType{VoidType{}}}}
20   | var45: PtrType{PtrType{PtrType{AbstractType{0}}}}
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
/*
class C3    size(24)
0    +---
0    | +--- (base class C2)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | | var6: PtrType{AbstractType{0}}
8    | | +---
8    | | var42: PtrType{PtrType{PtrType{VoidType{}}}}
12   | | var43: PtrType{PtrType{PtrType{AbstractType{0}}}}
16   | | var44: PtrType{PtrType{PtrType{VoidType{}}}}
20   | | var45: PtrType{PtrType{PtrType{AbstractType{0}}}}
24   | +---
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

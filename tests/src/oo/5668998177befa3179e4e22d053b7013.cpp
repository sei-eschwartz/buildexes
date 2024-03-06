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
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual void*** func2 ();
/* method id 403 */ void**** func2 (void**** v0);
/* method id 404 */ void*** func0 (C0 v2, abstract_0 v3);
/* method id 405 */ C1 ();
C1 (special_constructor);
void**** v10;
void**** v11;
abstract_0 v12;
void**** v13;
};
struct C2  {
/* method id 407 */ ~C2 ();
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_0 v20;
void**** v21;
abstract_0 v22;
abstract_0 v23;
};
struct C3  {
/* method id 409 */ C3 ();
/* method id 410 */ virtual void**** func2 (abstract_1 v27, C0 v28);
/* method id 411 */ virtual void** func0 (void**** v29, C0 v30);
/* method id 412 */ virtual void**** func3 ();
C3 (special_constructor);
};
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void*** C1::func2 () {
return new void** ();

}
/* method id 403 */ void**** C1::func2 (void**** v0) {
void**** v1 = new void*** ();
(((C3*) 0))->C3::func3();
(((C3*) 0))->C3::func3();
(((C3*) 0))->C3::func3();
(((C3*) 0))->C3::func3();
return v1;

}
/* method id 404 */ void*** C1::func0 (C0 v2, abstract_0 v3) {
void**** v4 = new void*** ();
void**** v5 = new void*** ();
void**** v6 = new void*** ();
return new void** ();

}
/* method id 405 */ C1::C1 () {
C0 v7 = *(&(*((new C0 ()))));
C0 v8 = *(&(*((new C0 ()))));
void**** v9 = new void*** ();
delete (new C1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::~C2 () {
C0 v14 = *((new C0 ()));
(((C3*) 0))->C3::func0(new void*** (), v14);
(((C3*) 0))->C3::func0(new void*** (), v14);
(((C3*) 0))->C3::func0(new void*** (), v14);
(((C3*) 0))->C3::func0(new void*** (), v14);
return;

}
/* method id 408 */ C2::C2 () {
void**** v15 = new void*** ();
return;

}
C2::C2 (special_constructor)  {}

/* method id 409 */ C3::C3 () {
C0 v24 = *(&(*(((C0*) 0))));
void**** v25 = new void*** ();
abstract_1 v26 = abstract_1();
return;

}
/* method id 410 */ void**** C3::func2 (abstract_1 v27, C0 v28) {
return new void*** ();

}
/* method id 411 */ void** C3::func0 (void**** v29, C0 v30) {
C0 v31 = *(((C0*) 0));
C0 v32 = *(((C0*) 0));
C0 v33 = *(((C0*) 0));
C2 v34 = *((new C2 ()));
return new void* ();

}
/* method id 412 */ void**** C3::func3 () {
C0 v35 = *(((C0*) 0));
void**** v36 = new void*** ();
(((C3*) 0))->C3::func0(new void*** (), v35);
(((C3*) 0))->C3::func0(new void*** (), v35);
(((C3*) 0))->C3::func0(new void*** (), v35);
(((C3*) 0))->C3::func0(new void*** (), v35);
return v36;

}
C3::C3 (special_constructor)  {}

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
8    | var10: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | var11: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | var12: AbstractType{0}
20   | var13: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
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
class C2    size(16)
0    +---
0    | var20: AbstractType{0}
4    | var21: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
8    | var22: AbstractType{0}
12   | var23: AbstractType{0}
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
}
/*
class C3    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 4;
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

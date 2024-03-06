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
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ ~C1 ();
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_1** v4;
abstract_1** v5;
};
struct C2  {
/* method id 405 */ C0 func2 ();
/* method id 406 */ C2 ();
C2 (special_constructor);
};
struct C3  {
/* method id 407 */ C3 ();
/* method id 408 */ virtual C0 func5 (abstract_1** v12, C0* v13, abstract_0* v14);
/* method id 409 */ abstract_1* func0 (C0* v15);
/* method id 410 */ virtual C0 func0 (abstract_0* v20, C2 v21, C2 v22);
C3 (special_constructor);
C2 v24;
C2 v25;
};
abstract_1 func6 (C2 v26, abstract_0* v27, C0* v28, abstract_1** v29);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C3 ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
return &(*(((C0*) 0)));

}
/* method id 403 */ C1::~C1 () {
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
abstract_1** v3 = ((abstract_1**) 0);
return;

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C0 C2::func2 () {
abstract_0* v6 = ((abstract_0*) 0);
C0* v7 = (new C0 ());
return (((C3*) 0))->C3::func5(new abstract_1* (), (new C0 ()), v6);

}
/* method id 406 */ C2::C2 () {
abstract_0* v8 = new abstract_0 ();
abstract_0* v9 = new abstract_0 ();
abstract_1** v10 = new abstract_1* ();
return;

}
C2::C2 (special_constructor)  {}

/* method id 407 */ C3::C3 () {
abstract_0* v11 = ((abstract_0*) 0);
return;

}
/* method id 408 */ C0 C3::func5 (abstract_1** v12, C0* v13, abstract_0* v14) {
delete (new C0 ());
return *(v13);

}
/* method id 409 */ abstract_1* C3::func0 (C0* v15) {
C0* v16 = &(*(((C0*) 0)));
C0* v17 = &(*(((C0*) 0)));
C2 v18 = *((new C2 ()));
C2 v19 = *((new C2 ()));
return ((abstract_1*) 0);

}
/* method id 410 */ C0 C3::func0 (abstract_0* v20, C2 v21, C2 v22) {
C2 v23 = *(((C2*) 0));
return *((new C0 ()));

}
C3::C3 (special_constructor)  {}

abstract_1 func6 (C2 v26, abstract_0* v27, C0* v28, abstract_1** v29) {
C2 v30;
abstract_0* v31;
C2 v32;
C2 v33;

return abstract_1();

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
0    | {vfptr}
4    | {vbptr}
8    | var4: PtrType{PtrType{AbstractType{1}}}
12   | var5: PtrType{PtrType{AbstractType{1}}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
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
 const size_t model_offset = 16;
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
class C3    size(8)
0    +---
0    | {vfptr}
4    | var24: ClassType{2}
5    | var25: ClassType{2}
6    | alignment: 
8    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 8;
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

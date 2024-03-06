// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void func0 ();
/* method id 401 */ virtual void* func0 (void**** v0);
/* method id 402 */ virtual ~C0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
void**** v11;
};
struct C1  {
/* method id 404 */ virtual void**** func0 ();
/* method id 405 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 406 */ C2 ();
/* method id 407 */ virtual ~C2 ();
C2 (special_constructor);
void**** v21;
abstract_0 v22;
abstract_0 v23;
void** v24;
};
struct C3  {
/* method id 408 */ virtual void* func0 (abstract_0 v25, abstract_0 v26);
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ virtual void**** func1 ();
C3 (special_constructor);
abstract_2 v49;
};
// definitions
/* method id 400 */ void C0::func0 () {
v11 = v11;
v11 = v11;
v11 = v11;
v11 = v11;
return;

}
/* method id 401 */ void* C0::func0 (void**** v0) {
void**** v1 = new void*** ();
void**** v2 = new void*** ();
void**** v3 = new void*** ();
void**** v4 = new void*** ();
delete (new C2 ());
return ((void*) 0);

}
/* method id 402 */ C0::~C0 () {
void**** v5 = new void*** ();
void**** v6 = new void*** ();
void**** v7 = new void*** ();
v5 = v5;
v5 = v5;
v5 = v5;
return;

}
/* method id 403 */ C0::C0 () {
void**** v8 = new void*** ();
void**** v9 = new void*** ();
void**** v10 = new void*** ();
v9 = new void*** ();
v9 = new void*** ();
v11 = new void*** ();
v11 = new void*** ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ void**** C1::func0 () {
void**** v12 = new void*** ();
void**** v13 = new void*** ();
abstract_0 v14 = abstract_0();
abstract_0 v15 = abstract_0();
delete (new C0 ());
v15 = abstract_0();
v15 = v15;
v15 = v15;
return new void*** ();

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 406 */ C2::C2 () {
abstract_0 v16 = abstract_0();
v16 = abstract_0();
return;

}
/* method id 407 */ C2::~C2 () {
abstract_0 v17 = abstract_0();
return;

}
C2::C2 (special_constructor)  {}

/* method id 408 */ void* C3::func0 (abstract_0 v25, abstract_0 v26) {
void** v27 = new void* ();
abstract_0 v28 = abstract_0();
abstract_0 v29 = abstract_0();
abstract_0 v30 = abstract_0();
return ((void*) 0);

}
/* method id 409 */ C3::C3 () {
void** v31 = new void* ();
void** v32 = new void* ();
void** v33 = new void* ();
void** v34 = new void* ();
v33 = v33;
v33 = v33;
v33 = v33;
return;

}
/* method id 410 */ C3::~C3 () {
abstract_0 v35 = abstract_0();
void** v36 = ((void**) 0);
v35 = abstract_0();
v35 = abstract_0();
v36 = v36;
v36 = v36;
return;

}
/* method id 411 */ void**** C3::func1 () {
abstract_1 v47 = abstract_1();
abstract_0 v48 = abstract_0();
v48 = abstract_0();
v48 = abstract_0();
return new void*** ();

}
C3::C3 (special_constructor)  {}

#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var11: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
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
class C1    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(20)
0    +---
0    | {vfptr}
4    | var21: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | var22: AbstractType{0}
12   | var23: AbstractType{0}
16   | var24: DeletablePtrType{PtrType{VoidType{}}}
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
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
4    | var49: AbstractType{2}
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

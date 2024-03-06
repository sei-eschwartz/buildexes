// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void func0 ();
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_0 v10;
};
struct C1  {
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ C1 ();
C1 (special_constructor);
void* v11;
};
struct C2  {
/* method id 405 */ C2 ();
/* method id 406 */ ~C2 ();
/* method id 407 */ virtual void func1 ();
C2 (special_constructor);
abstract_0 v18;
abstract_1 v19;
abstract_0 v20;
abstract_0 v21;
};
struct C3  {
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ C3 ();
C3 (special_constructor);
};
void func2 (void* v38, abstract_0 v39, abstract_0 v40, abstract_0 v41);
void func3 (abstract_0 v46, abstract_1 v47, abstract_3 v48, abstract_0 v49);
void func4 (abstract_1 v51, abstract_0 v52, abstract_0 v53);
void func5 (abstract_0 v58, abstract_0 v59, abstract_0 v60);
// definitions
/* method id 400 */ void C0::func0 () {
void* v0 = ((void*) 0);
void* v1 = ((void*) 0);
delete (new C2 ());
return;

}
/* method id 401 */ C0::~C0 () {
void* v2 = ((void*) 0);
abstract_0 v3 = abstract_0();
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
return;

}
/* method id 402 */ C0::C0 () {
void* v6 = ((void*) 0);
abstract_0 v7 = abstract_0();
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
delete (new C1 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::~C1 () {
return;

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {
return;

}
/* method id 406 */ C2::~C2 () {
delete (new C1 ());
return;

}
/* method id 407 */ void C2::func1 () {
abstract_0 v13 = abstract_0();
abstract_0 v14 = abstract_0();
abstract_0 v15 = abstract_0();
void* v16 = ((void*) 0);
return;

}
C2::C2 (special_constructor)  {}

/* method id 408 */ C3::~C3 () {
abstract_1 v22 = abstract_1();
abstract_0 v23 = abstract_0();
abstract_0 v24 = abstract_0();
abstract_1 v25 = abstract_1();
return;

}
/* method id 409 */ C3::C3 () {
abstract_0 v26 = abstract_0();
abstract_0 v27 = abstract_0();
abstract_0 v28 = abstract_0();
abstract_1 v29 = abstract_1();
delete (new C3 ());
return;

}
C3::C3 (special_constructor)  {}

void func2 (void* v38, abstract_0 v39, abstract_0 v40, abstract_0 v41) {
abstract_0 v42;
abstract_2 v43;
void* v44;
abstract_0 v45;

delete (new C1 ());
return ::func4(abstract_1(), v45, v45);

}
void func3 (abstract_0 v46, abstract_1 v47, abstract_3 v48, abstract_0 v49) {
void* v50;

return;

}
void func4 (abstract_1 v51, abstract_0 v52, abstract_0 v53) {
abstract_0 v54;
abstract_0 v55;
abstract_0 v56;
abstract_0 v57;

return;

}
void func5 (abstract_0 v58, abstract_0 v59, abstract_0 v60) {
abstract_0 v61;
void* v62;
abstract_0 v63;
abstract_0 v64;

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var10: AbstractType{0}
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
class C1    size(8)
0    +---
0    | {vfptr}
4    | var11: PtrType{VoidType{}}
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
class C2    size(20)
0    +---
0    | {vfptr}
4    | var18: AbstractType{0}
8    | var19: AbstractType{1}
12   | var20: AbstractType{0}
16   | var21: AbstractType{0}
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

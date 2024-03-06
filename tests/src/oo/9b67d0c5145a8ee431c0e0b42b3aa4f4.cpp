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
/* method id 402 */ virtual ~C1 ();
C1 (special_constructor);
abstract_0 v7;
C0* v8;
abstract_0 v9;
C0* v10;
};
struct C2  {
/* method id 403 */ virtual ~C2 ();
/* method id 404 */ virtual C0 func0 ();
/* method id 405 */ C2 ();
C2 (special_constructor);
C0* v12;
C0* v13;
abstract_0 v14;
abstract_0 v15;
};
struct C3  {
/* method id 406 */ C3 ();
/* method id 407 */ ~C3 ();
C3 (special_constructor);
C0* v19;
abstract_0 v20;
};
C0 func2 (C0* v21, C0* v22, C0* v23, C0* v24);
C0 func3 (C0* v29, abstract_1 v30, abstract_1 v31, abstract_0 v32);
C0 func4 (abstract_0 v33, C0* v34, C0* v35, C0* v36);
C0 func5 (C0* v41, C0* v42);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = ((C0*) 0);
C0* v4 = ((C0*) 0);
C0* v5 = ((C0*) 0);
abstract_0 v6 = abstract_0();
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::~C2 () {
return;

}
/* method id 404 */ C0 C2::func0 () {
C0* v11 = ((C0*) 0);
return *(v12);

}
/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 406 */ C3::C3 () {
return;

}
/* method id 407 */ C3::~C3 () {
C0* v16 = &(*(&(*((new C0 ())))));
C0* v17 = &(*(&(*((new C0 ())))));
C0* v18 = &(*(&(*((new C0 ())))));
return;

}
C3::C3 (special_constructor)  {}

C0 func2 (C0* v21, C0* v22, C0* v23, C0* v24) {
C0* v25;
abstract_0 v26;
C0* v27;
C0* v28;

return *(v28);

}
C0 func3 (C0* v29, abstract_1 v30, abstract_1 v31, abstract_0 v32) {

return *(v29);

}
C0 func4 (abstract_0 v33, C0* v34, C0* v35, C0* v36) {
C0* v37;
abstract_1 v38;
C0* v39;
C0* v40;

v34 = &((((C2*) 0))->C2::func0());
v34 = &((((C2*) 0))->C2::func0());
v34 = &((((C2*) 0))->C2::func0());
return *(v34);

}
C0 func5 (C0* v41, C0* v42) {
C0* v43;
C0* v44;
C0* v45;

return *(v44);

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | var7: AbstractType{0}
8    | var8: PtrType{ClassType{0}}
12   | var9: AbstractType{0}
16   | var10: PtrType{ClassType{0}}
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
}
/*
class C2    size(20)
0    +---
0    | {vfptr}
4    | var12: PtrType{ClassType{0}}
8    | var13: PtrType{ClassType{0}}
12   | var14: AbstractType{0}
16   | var15: AbstractType{0}
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
0    | var19: PtrType{ClassType{0}}
4    | var20: AbstractType{0}
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

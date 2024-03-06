// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
C1 (special_constructor);
C0* v4;
};
struct C2  {
/* method id 402 */ C2 ();
C2 (special_constructor);
abstract_0 v6;
C0* v7;
C0* v8;
C0* v9;
};
struct C3  {
/* method id 403 */ C3 ();
C3 (special_constructor);
};
C0 func2 (C0* v18, abstract_0 v19, C0* v20);
void func3 (abstract_0 v25);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
v4 = (new C0 ());
v4 = (new C0 ());
v4 = (new C0 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 402 */ C2::C2 () {
C0* v5 = (new C0 ());
return;

}
C2::C2 (special_constructor)  {}

/* method id 403 */ C3::C3 () {
abstract_0 v10 = abstract_0();
C0* v11 = (new C0 ());
v10 = v10;
v10 = v10;
v10 = v10;
return;

}
C3::C3 (special_constructor)  {}

C0 func2 (C0* v18, abstract_0 v19, C0* v20) {
abstract_0 v21;
abstract_0 v22;
C0* v23;
C0* v24;

return *(v24);

}
void func3 (abstract_0 v25) {

return;

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
class C1    size(4)
0    +---
0    | var4: PtrType{ClassType{0}}
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
class C2    size(16)
0    +---
0    | var6: AbstractType{0}
4    | var7: PtrType{ClassType{0}}
8    | var8: PtrType{ClassType{0}}
12   | var9: PtrType{ClassType{0}}
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
class C3    size(0)
0    +---
0    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 1;
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

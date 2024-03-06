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
/* method id 400 */ C0 ();
/* method id 401 */ ~C0 ();
C0 (special_constructor);
abstract_0 v5;
abstract_1 v6;
};
struct C1  {
/* method id 402 */ C1 ();
C1 (special_constructor);
abstract_1 v9;
};
struct C2  {
/* method id 403 */ C2 ();
C2 (special_constructor);
abstract_0 v12;
};
struct C3  {
/* method id 404 */ ~C3 ();
/* method id 405 */ C3 ();
C3 (special_constructor);
};
void func3 (abstract_0 v22, abstract_0 v23, abstract_0 v24, abstract_0 v25);
void func4 (abstract_2 v26, abstract_1 v27, C0 v28, C0 v29);
void func5 (void* v30, abstract_0 v31, abstract_1 v32);
void func6 ();
// definitions
/* method id 400 */ C0::C0 () {
abstract_0 v0 = abstract_0();
delete (new C1 ());
return;

}
/* method id 401 */ C0::~C0 () {
delete (new C1 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
abstract_0 v7 = abstract_0();
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::C2 () {
abstract_1 v10 = abstract_1();
abstract_1 v11 = abstract_1();
return;

}
C2::C2 (special_constructor)  {}

/* method id 404 */ C3::~C3 () {
C0 v13 = *(&(*((new C0 ()))));
abstract_1 v14 = abstract_1();
abstract_1 v15 = abstract_1();
delete (new C3 ());
return;

}
/* method id 405 */ C3::C3 () {
return;

}
C3::C3 (special_constructor)  {}

void func3 (abstract_0 v22, abstract_0 v23, abstract_0 v24, abstract_0 v25) {

return ::func5(((void*) 0), v23, abstract_1());

}
void func4 (abstract_2 v26, abstract_1 v27, C0 v28, C0 v29) {

return ::func5(((void*) 0), abstract_0(), v27);

}
void func5 (void* v30, abstract_0 v31, abstract_1 v32) {
void* v33;
abstract_0 v34;
abstract_0 v35;
abstract_0 v36;

return;

}
void func6 () {

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | var5: AbstractType{0}
4    | var6: AbstractType{1}
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
0    | var9: AbstractType{1}
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
class C2    size(4)
0    +---
0    | var12: AbstractType{0}
4    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 4;
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

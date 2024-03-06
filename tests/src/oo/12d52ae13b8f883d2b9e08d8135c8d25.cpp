// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ virtual abstract_2* func1 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_1 v3);
/* method id 402 */ virtual abstract_3 func1 (abstract_1 v5, abstract_1 v6, abstract_1 v7);
/* method id 403 */ virtual abstract_3* func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1 v9;
};
struct C1  {
/* method id 405 */ virtual ~C1 ();
/* method id 406 */ virtual abstract_4 func1 (abstract_1 v10, abstract_1 v11);
/* method id 407 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 408 */ virtual abstract_2 func1 ();
/* method id 409 */ C2 ();
C2 (special_constructor);
abstract_1 v15;
abstract_0 v16;
};
struct C3  {
/* method id 410 */ abstract_2 func1 ();
/* method id 411 */ C3 ();
/* method id 412 */ virtual ~C3 ();
C3 (special_constructor);
abstract_6 v25;
abstract_1 v26;
abstract_0 v27;
abstract_6 v28;
};
abstract_2 func3 ();
abstract_3 func4 (abstract_5 v30, abstract_7 v31);
abstract_4 func5 (abstract_1 v32, abstract_8 v33);
abstract_2* func6 (abstract_9 v34);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ abstract_2* C0::func1 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_1 v3) {
abstract_0 v4 = abstract_0();
return ::func6(abstract_9());

}
/* method id 402 */ abstract_3 C0::func1 (abstract_1 v5, abstract_1 v6, abstract_1 v7) {
return ::func4(abstract_5(), abstract_7());

}
/* method id 403 */ abstract_3* C0::func0 () {
abstract_0 v8 = abstract_0();
return ((abstract_3*) 0);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::~C1 () {
delete (new C1 ());
return;

}
/* method id 406 */ abstract_4 C1::func1 (abstract_1 v10, abstract_1 v11) {
::func6(abstract_9());
::func6(abstract_9());
::func6(abstract_9());
::func6(abstract_9());
return ::func5(v11, abstract_8());

}
/* method id 407 */ C1::C1 () {
return;

}
C1::C1 (special_constructor)  {}

/* method id 408 */ abstract_2 C2::func1 () {
abstract_0 v12 = abstract_0();
abstract_1 v13 = abstract_1();
abstract_5 v14 = abstract_5();
return ::func3();

}
/* method id 409 */ C2::C2 () {
delete (new C1 ());
return;

}
C2::C2 (special_constructor)  {}

/* method id 410 */ abstract_2 C3::func1 () {
C1 v17 = *(&(*((new C1 ()))));
abstract_6 v18 = abstract_6();
return abstract_2();

}
/* method id 411 */ C3::C3 () {
return;

}
/* method id 412 */ C3::~C3 () {
abstract_0 v22 = abstract_0();
abstract_1 v23 = abstract_1();
abstract_0 v24 = abstract_0();
::func4(abstract_5(), abstract_7());
::func4(abstract_5(), abstract_7());
::func4(abstract_5(), abstract_7());
::func4(abstract_5(), abstract_7());
return;

}
C3::C3 (special_constructor)  {}

abstract_2 func3 () {
abstract_1 v29;

v29 = v29;
return abstract_2();

}
abstract_3 func4 (abstract_5 v30, abstract_7 v31) {

v31 = abstract_7();
return abstract_3();

}
abstract_4 func5 (abstract_1 v32, abstract_8 v33) {

delete (new C2 ());
return abstract_4();

}
abstract_2* func6 (abstract_9 v34) {
abstract_7 v35;
abstract_1 v36;
C1 v37;
abstract_0 v38;

delete (new C3 ());
return new abstract_2 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var9: AbstractType{1}
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
class C2    size(12)
0    +---
0    | {vfptr}
4    | var15: AbstractType{1}
8    | var16: AbstractType{0}
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(20)
0    +---
0    | {vfptr}
4    | var25: AbstractType{6}
8    | var26: AbstractType{1}
12   | var27: AbstractType{0}
16   | var28: AbstractType{6}
20   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 20;
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

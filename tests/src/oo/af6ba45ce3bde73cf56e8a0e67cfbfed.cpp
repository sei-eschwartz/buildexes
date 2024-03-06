// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_3 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ abstract_0 func0 ();
/* method id 401 */ abstract_0 func0 (abstract_1 v0);
/* method id 402 */ virtual abstract_3 func1 (abstract_1 v1, abstract_2 v2, abstract_1 v3, abstract_1 v4);
/* method id 403 */ virtual abstract_0 func1 (abstract_2 v5);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_2 v6;
abstract_2 v7;
};
struct C1  {
/* method id 405 */ virtual abstract_3 func1 (abstract_1 v8);
/* method id 406 */ abstract_3 func0 (abstract_1 v11, abstract_2 v12, abstract_2 v13);
/* method id 407 */ abstract_3 func3 ();
/* method id 408 */ virtual ~C1 ();
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_1 v16;
abstract_4 v17;
};
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return abstract_0();

}
/* method id 401 */ abstract_0 C0::func0 (abstract_1 v0) {
return (this)->C0::func1(abstract_2());

}
/* method id 402 */ abstract_3 C0::func1 (abstract_1 v1, abstract_2 v2, abstract_1 v3, abstract_1 v4) {
return abstract_3();

}
/* method id 403 */ abstract_0 C0::func1 (abstract_2 v5) {
return abstract_0();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_3 C1::func1 (abstract_1 v8) {
abstract_1 v9 = abstract_1();
abstract_1 v10 = abstract_1();
(((C1*) 0))->C1::func3();
(((C1*) 0))->C1::func3();
(((C1*) 0))->C1::func3();
return ((new C1 ()))->C1::func3();

}
/* method id 406 */ abstract_3 C1::func0 (abstract_1 v11, abstract_2 v12, abstract_2 v13) {
(this)->C1::func1(abstract_1());
return (this)->C1::func3();

}
/* method id 407 */ abstract_3 C1::func3 () {
abstract_2 v14 = abstract_2();
return (this)->C1::func0(v16, abstract_2(), abstract_2());

}
/* method id 408 */ C1::~C1 () {
abstract_1 v15 = abstract_1();
return;

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var6: AbstractType{2}
8    | var7: AbstractType{2}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
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
0    | {vfptr}
4    | var16: AbstractType{1}
8    | var17: AbstractType{4}
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
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

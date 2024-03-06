// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ ~C0 ();
/* method id 402 */ abstract_1 func0 (abstract_1** v3, abstract_1** v4);
/* method id 403 */ abstract_1 func1 (abstract_1** v5, abstract_0 v6);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_0 v8;
};
abstract_1 func3 (abstract_0 v9, abstract_1** v10);
abstract_1 func4 (abstract_2 v13, abstract_0 v14);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
v8 = v8;
v8 = v8;
v8 = v8;
return abstract_1();

}
/* method id 401 */ C0::~C0 () {
(this)->C0::func1(new abstract_1* (), v8);
return;

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v3, abstract_1** v4) {
v8 = v8;
return abstract_1();

}
/* method id 403 */ abstract_1 C0::func1 (abstract_1** v5, abstract_0 v6) {
abstract_1** v7 = new abstract_1* ();
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

abstract_1 func3 (abstract_0 v9, abstract_1** v10) {
abstract_0 v11;
abstract_0 v12;

(((C0*) 0))->C0::func1(v10, v11);
v10 = new abstract_1* ();
(((C0*) 0))->C0::func1(v10, v11);
v10 = new abstract_1* ();
return abstract_1();

}
abstract_1 func4 (abstract_2 v13, abstract_0 v14) {

v13 = abstract_2();
v13 = abstract_2();
v13 = abstract_2();
v13 = abstract_2();
return abstract_1();

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | var8: AbstractType{0}
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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

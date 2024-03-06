// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C0  {
/* method id 400 */ abstract_0 func0 ();
/* method id 401 */ abstract_0 func0 (abstract_1 v0);
/* method id 402 */ abstract_0 func1 ();
/* method id 403 */ ~C0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1 v2;
};
abstract_0 func3 (abstract_1 v3);
abstract_0 func4 (abstract_1 v4, abstract_1 v5, abstract_1 v6);
abstract_0** func5 (C0 v10, C0 v11, abstract_1 v12);
abstract_0** func6 ();
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return ::func4(v2, v2, v2);

}
/* method id 401 */ abstract_0 C0::func0 (abstract_1 v0) {
::func4(v2, v2, v2);
::func4(v2, v2, v2);
::func4(v2, v2, v2);
::func4(v2, v2, v2);
return ::func4(v2, v2, v2);

}
/* method id 402 */ abstract_0 C0::func1 () {
::func4(v2, v2, v2);
::func4(v2, v2, v2);
::func4(v2, v2, v2);
::func4(v2, v2, v2);
return abstract_0();

}
/* method id 403 */ C0::~C0 () {
abstract_1 v1 = abstract_1();
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

abstract_0 func3 (abstract_1 v3) {

return abstract_0();

}
abstract_0 func4 (abstract_1 v4, abstract_1 v5, abstract_1 v6) {
abstract_1 v7;
abstract_1 v8;
C0 v9;

return (((C0*) 0))->C0::func0();

}
abstract_0** func5 (C0 v10, C0 v11, abstract_1 v12) {
C0 v13;
abstract_2 v14;
abstract_2 v15;
C0 v16;

return new abstract_0* ();

}
abstract_0** func6 () {
C0 v17;
C0 v18;

delete (new C0 ());
return new abstract_0* ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | var2: AbstractType{1}
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

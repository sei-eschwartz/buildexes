// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ C0 ();
/* method id 403 */ abstract_1 func1 (abstract_0 v6, abstract_0 v7);
C0 (special_constructor);
abstract_0 v9;
};
abstract_1 func2 (abstract_0 v10, abstract_0 v11);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
::func2(v9, v9);
v9 = v9;
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return (((C0*) 0))->C0::func1(abstract_0(), abstract_0());

}
/* method id 402 */ C0::C0 () {
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
return;

}
/* method id 403 */ abstract_1 C0::func1 (abstract_0 v6, abstract_0 v7) {
abstract_1** v8 = new abstract_1* ();
return abstract_1();

}
C0::C0 (special_constructor)  {}

abstract_1 func2 (abstract_0 v10, abstract_0 v11) {

(((C0*) 0))->C0::func0(v11);
return (((C0*) 0))->C0::func0(v10);

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | var9: AbstractType{0}
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

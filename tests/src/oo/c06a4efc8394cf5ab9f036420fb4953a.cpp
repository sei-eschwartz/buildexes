// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ abstract_1 func0 (abstract_0 v4, abstract_1** v5, abstract_0 v6, abstract_2 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_3 v9;
};
abstract_1 func2 (abstract_1** v10);
abstract_1 func3 (abstract_1* v11);
abstract_1 func4 (abstract_1** v12);
abstract_1 func5 (abstract_0 v13, abstract_1** v14, abstract_0 v15);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return ::func3(((abstract_1*) 0));

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 () {
return ::func5(abstract_0(), new abstract_1* (), abstract_0());

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v4, abstract_1** v5, abstract_0 v6, abstract_2 v7) {
abstract_1** v8 = new abstract_1* ();
return ::func5(abstract_0(), v8, abstract_0());

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

abstract_1 func2 (abstract_1** v10) {

v10 = new abstract_1* ();
v10 = new abstract_1* ();
return ::func4(new abstract_1* ());

}
abstract_1 func3 (abstract_1* v11) {

return ::func2(new abstract_1* ());

}
abstract_1 func4 (abstract_1** v12) {

(((C0*) 0))->C0::func0();
::func5(abstract_0(), new abstract_1* (), abstract_0());
return ::func2(new abstract_1* ());

}
abstract_1 func5 (abstract_0 v13, abstract_1** v14, abstract_0 v15) {
abstract_0 v16;

(((C0*) 0))->C0::func0();
::func3(((abstract_1*) 0));
::func3(((abstract_1*) 0));
return ::func2(new abstract_1* ());

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var9: AbstractType{3}
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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

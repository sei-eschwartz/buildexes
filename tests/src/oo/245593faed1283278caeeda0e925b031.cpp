// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ abstract_1 func0 (abstract_1** v4, abstract_1** v5);
/* method id 403 */ abstract_1 func1 (abstract_1** v6, abstract_0 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_0 v9;
};
abstract_1 func3 (abstract_1** v10, abstract_1** v11, abstract_1** v12, abstract_1* v13);
abstract_1 func4 ();
abstract_2 func5 (abstract_1* v18, abstract_1** v19, abstract_0 v20);
abstract_2 func6 ();
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
delete (new C0 ());
return ::func4();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return ::func4();

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v4, abstract_1** v5) {
return ::func4();

}
/* method id 403 */ abstract_1 C0::func1 (abstract_1** v6, abstract_0 v7) {
abstract_1** v8 = new abstract_1* ();
return ((new C0 ()))->C0::func0(v7);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

abstract_1 func3 (abstract_1** v10, abstract_1** v11, abstract_1** v12, abstract_1* v13) {

::func4();
::func4();
return abstract_1();

}
abstract_1 func4 () {
abstract_1* v14;
abstract_1* v15;
abstract_0 v16;
abstract_1* v17;

delete (new C0 ());
return ((new C0 ()))->C0::func0(v16);

}
abstract_2 func5 (abstract_1* v18, abstract_1** v19, abstract_0 v20) {
abstract_1** v21;
abstract_1** v22;

return abstract_2();

}
abstract_2 func6 () {
abstract_1** v23;
abstract_3 v24;
abstract_1** v25;
abstract_3 v26;

return ::func5(new abstract_1 (), v23, abstract_0());

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

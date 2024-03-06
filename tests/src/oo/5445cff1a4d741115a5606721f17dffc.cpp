// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C0  {
/* method id 400 */ abstract_0 func0 (abstract_0* v0);
/* method id 401 */ abstract_0 func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3);
/* method id 402 */ abstract_0 func0 (abstract_0** v4, abstract_0** v5);
/* method id 403 */ abstract_0 func1 (abstract_0** v6, abstract_0* v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_0* v9;
};
abstract_0 func3 (abstract_0* v10, abstract_0* v11);
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0) {
v0 = v0;
return (((C0*) 0))->C0::func1(new abstract_0* (), v0);

}
/* method id 401 */ abstract_0 C0::func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3) {
return abstract_0();

}
/* method id 402 */ abstract_0 C0::func0 (abstract_0** v4, abstract_0** v5) {
(((C0*) 0))->C0::func1(v5, v9);
(((C0*) 0))->C0::func1(v5, v9);
return abstract_0();

}
/* method id 403 */ abstract_0 C0::func1 (abstract_0** v6, abstract_0* v7) {
abstract_0** v8 = new abstract_0* ();
((new C0 ()))->C0::func0(v8, v8);
((new C0 ()))->C0::func0(v8, v8);
((new C0 ()))->C0::func0(v8, v8);
((new C0 ()))->C0::func0(v8, v8);
return abstract_0();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

abstract_0 func3 (abstract_0* v10, abstract_0* v11) {

(((C0*) 0))->C0::func1(new abstract_0* (), new abstract_0 ());
(((C0*) 0))->C0::func1(new abstract_0* (), new abstract_0 ());
v11 = v11;
return abstract_0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | var9: PtrType{AbstractType{0}}
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

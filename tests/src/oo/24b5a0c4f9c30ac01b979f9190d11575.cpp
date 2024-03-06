// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual C0 func1 (C0* v5, abstract_0 v6);
/* method id 403 */ C0 func2 (C0* v10, C0* v11);
C1 (special_constructor);
};
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
(this)->C1::func2(v1, v1);
(this)->C1::func2(v1, v1);
(this)->C1::func2(v1, v1);
(this)->C1::func2(v1, v1);
return;

}
/* method id 402 */ C0 C1::func1 (C0* v5, abstract_0 v6) {
C0* v7 = ((C0*) 0);
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
delete (new C1 ());
return *(v7);

}
/* method id 403 */ C0 C1::func2 (C0* v10, C0* v11) {
delete (new C1 ());
return ((new C1 ()))->C1::func1(v11, abstract_0());

}
C1::C1 (special_constructor)  {}

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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

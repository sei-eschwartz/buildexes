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
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ C0 func1 (C0* v4);
C1 (special_constructor);
abstract_0 v8;
C0* v9;
C0* v10;
abstract_0 v11;
};
C0 func3 (C0* v12, C1 v13, C0* v14, abstract_0 v15);
C0 func4 (abstract_0 v16);
C0 func5 ();
C0 func6 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = (new C0 ());
v10 = (new C0 ());
return;

}
/* method id 403 */ C0 C1::func1 (C0* v4) {
delete (new C1 ());
return *(v4);

}
C1::C1 (special_constructor)  {}

C0 func3 (C0* v12, C1 v13, C0* v14, abstract_0 v15) {

delete (new C1 ());
return *(&(::func5()));

}
C0 func4 (abstract_0 v16) {

return *(&(*((new C0 ()))));

}
C0 func5 () {

return *(((C0*) 0));

}
C0 func6 () {

return *((new C0 ()));

}
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
class C1    size(20)
0    +---
0    | {vfptr}
4    | var8: AbstractType{0}
8    | var9: PtrType{ClassType{0}}
12   | var10: PtrType{ClassType{0}}
16   | var11: AbstractType{0}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
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

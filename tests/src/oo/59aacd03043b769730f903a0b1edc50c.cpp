// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ ~C1 ();
/* method id 403 */ C0 func0 (C0* v7, abstract_0 v8);
C1 (special_constructor);
abstract_0 v13;
abstract_0 v14;
C0* v15;
};
C0 func2 (C0* v16, C0* v17, abstract_0 v18, abstract_1 v19);
C0 func3 ();
C0 func4 ();
C0 func5 (abstract_0 v26);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = &(*(((C0*) 0)));
C0* v4 = (new C0 ());
C0* v5 = (new C0 ());
C0* v6 = (new C0 ());
return;

}
/* method id 403 */ C0 C1::func0 (C0* v7, abstract_0 v8) {
C0* v9 = ((C0*) 0);
C0* v10 = ((C0*) 0);
return ::func3();

}
C1::C1 (special_constructor)  {}

C0 func2 (C0* v16, C0* v17, abstract_0 v18, abstract_1 v19) {
C0* v20;
abstract_0 v21;

return ::func3();

}
C0 func3 () {

delete (new C1 ());
return (((C1*) 0))->C1::func0(&(::func4()), abstract_0());

}
C0 func4 () {
abstract_1 v22;
abstract_0 v23;
C0* v24;
C0* v25;

delete (new C1 ());
return (((C1*) 0))->C1::func0((new C0 ()), v23);

}
C0 func5 (abstract_0 v26) {
C0* v27;
C0* v28;
abstract_1 v29;
C0* v30;

::func3();
::func3();
::func3();
::func3();
return (((C1*) 0))->C1::func0(&(::func3()), v26);

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
class C1    size(12)
0    +---
0    | var13: AbstractType{0}
4    | var14: AbstractType{0}
8    | var15: PtrType{ClassType{0}}
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

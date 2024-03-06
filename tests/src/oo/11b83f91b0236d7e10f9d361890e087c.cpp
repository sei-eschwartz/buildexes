// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual C0 func1 (C0* v3, C0* v4, abstract_0 v5);
C1 (special_constructor);
abstract_0 v9;
C0* v10;
};
struct C2  {
/* method id 403 */ C0 func2 (C0* v11, C0* v12, C0** v13, C0** v14);
/* method id 404 */ virtual C0 func0 (C0** v16, C0* v17, C0** v18);
/* method id 405 */ C2 ();
/* method id 406 */ void func0 ();
C2 (special_constructor);
C0* v26;
abstract_0 v27;
};
struct C3  {
/* method id 407 */ C3 ();
C3 (special_constructor);
C1 v28;
};
abstract_1 func4 ();
void* func5 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = ((C0*) 0);
return;

}
/* method id 402 */ C0 C1::func1 (C0* v3, C0* v4, abstract_0 v5) {
C0* v6 = (new C0 ());
C0* v7 = (new C0 ());
C0* v8 = (new C0 ());
return *(v6);

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C0 C2::func2 (C0* v11, C0* v12, C0** v13, C0** v14) {
C0** v15 = new C0* ();
v27 = v27;
return (((C2*) 0))->C2::func0(v14, (new C0 ()), v14);

}
/* method id 404 */ C0 C2::func0 (C0** v16, C0* v17, C0** v18) {
C1 v19 = *(&(*((new C1 ()))));
C0** v20 = new C0* ();
delete (new C3 ());
return *(v26);

}
/* method id 405 */ C2::C2 () {
C0** v21 = new C0* ();
C0* v22 = ((C0*) 0);
C0* v23 = ((C0*) 0);
C1 v24 = *(((C1*) 0));
return;

}
/* method id 406 */ void C2::func0 () {
C0* v25 = (new C0 ());
v27 = abstract_0();
v27 = abstract_0();
return;

}
C2::C2 (special_constructor)  {}

/* method id 407 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

abstract_1 func4 () {
abstract_0 v29;
abstract_0 v30;

delete (new C3 ());
return abstract_1();

}
void* func5 () {
C1 v31;
C1 v32;
abstract_0 v33;
C0** v34;

return ((void*) 0);

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
0    | {vfptr}
4    | var9: AbstractType{0}
8    | var10: PtrType{ClassType{0}}
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
/*
class C2    size(12)
0    +---
0    | {vfptr}
4    | var26: PtrType{ClassType{0}}
8    | var27: AbstractType{0}
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(12)
0    +---
0    | var28: ClassType{1}
12   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 404 */ virtual void func0 (C0 v0);
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ C2 ();
C2 (special_constructor);
};
struct C3  {
/* method id 407 */ virtual ~C3 ();
/* method id 408 */ C3 ();
C3 (special_constructor);
};
void func5 (C0 v1);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::~C1 () {
::func5(*((new C0 ())));
return;

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 404 */ void C2::func0 (C0 v0) {
return;

}
/* method id 405 */ C2::~C2 () {
::func5(*((new C0 ())));
::func5(*((new C0 ())));
::func5(*((new C0 ())));
::func5(*((new C0 ())));
return;

}
/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 407 */ C3::~C3 () {
return;

}
/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

void func5 (C0 v1) {
C0 v2;
C3 v3;
C3 v4;

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | {vfptr}
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
/*
class C2    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 4;
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

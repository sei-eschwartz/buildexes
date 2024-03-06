// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

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
C0 func2 (C0** v0, C0** v1);
C0 func3 (C0** v3, C0** v4, C0** v5);
C0 func4 (abstract_0 v9);
C0 func5 (abstract_0 v12);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::~C1 () {
return;

}
/* method id 403 */ C1::C1 () {
::func3(new C0* (), new C0* (), new C0* ());
::func3(new C0* (), new C0* (), new C0* ());
::func3(new C0* (), new C0* (), new C0* ());
return;

}
C1::C1 (special_constructor)  {}

C0 func2 (C0** v0, C0** v1) {
C0** v2;

v1 = v2;
v1 = v2;
v1 = v2;
v1 = v2;
return *(((C0*) 0));

}
C0 func3 (C0** v3, C0** v4, C0** v5) {
C0** v6;
C0** v7;
C0** v8;

delete (new C0 ());
return ::func4(abstract_0());

}
C0 func4 (abstract_0 v9) {
C0** v10;
abstract_0 v11;

::func3(v10, v10, v10);
::func3(v10, v10, v10);
::func3(v10, v10, v10);
::func3(v10, v10, v10);
return ::func3(v10, v10, v10);

}
C0 func5 (abstract_0 v12) {

::func3(new C0* (), new C0* (), new C0* ());
::func3(new C0* (), new C0* (), new C0* ());
::func3(new C0* (), new C0* (), new C0* ());
::func3(new C0* (), new C0* (), new C0* ());
return ::func3(new C0* (), new C0* (), new C0* ());

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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ void func0 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
C0 v1;
};
void* func1 (C0 v2);
void func2 (C0 v4, C0 v5);
void* func3 (C1 v9, C1 v10, C0 v11);
void* func4 (C1 v16);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
::func4(*(((C1*) 0)));
return ::func2(v1, v1);

}
/* method id 402 */ C1::C1 () {
C0 v0 = *((new C0 ()));
v1 = *(((C0*) 0));
v1 = *(((C0*) 0));
return;

}
C1::C1 (special_constructor)  {}

void* func1 (C0 v2) {
C0 v3;

return ((void*) 0);

}
void func2 (C0 v4, C0 v5) {
C0 v6;
C0 v7;
C1 v8;

(&(v8))->C1::func0();
(&(v8))->C1::func0();
(&(v8))->C1::func0();
(&(v8))->C1::func0();
return (((C1*) 0))->C1::func0();

}
void* func3 (C1 v9, C1 v10, C0 v11) {
C0 v12;
C1 v13;
C1 v14;
C1 v15;

return ::func4(*(((C1*) 0)));

}
void* func4 (C1 v16) {
C1 v17;
C1 v18;
C1 v19;

v17 = *(((C1*) 0));
v17 = *(((C1*) 0));
v17 = *(((C1*) 0));
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
class C1    size(1)
0    +---
0    | var1: ClassType{0}
1    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 1;
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

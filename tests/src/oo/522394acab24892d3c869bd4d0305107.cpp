// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
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
C1 (special_constructor);
C0 v0;
C0 v1;
};
struct C2  {
/* method id 402 */ abstract_0 func1 ();
/* method id 403 */ C2 ();
/* method id 404 */ virtual ~C2 ();
C2 (special_constructor);
C1 v7;
abstract_1 v8;
};
struct C3  {
/* method id 405 */ virtual abstract_0 func0 ();
/* method id 406 */ C3 ();
/* method id 407 */ abstract_0 func0 (C1 v9, C0 v10);
/* method id 408 */ virtual ~C3 ();
C3 (special_constructor);
C1 v17;
C1 v18;
};
abstract_0 func2 (C1 v19, C1 v20, C1 v21);
abstract_0 func3 (abstract_1 v26, C1 v27, C1 v28, C1 v29);
abstract_0 func4 (C1 v34, C1 v35, C1 v36, C1 v37);
abstract_0 func5 (C1 v41, C1 v42, C1 v43, C1 v44);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 402 */ abstract_0 C2::func1 () {
return ::func5(v7, v7, v7, v7);

}
/* method id 403 */ C2::C2 () {
C0 v2 = *(((C0*) 0));
C0 v3 = *(((C0*) 0));
C0 v4 = *(((C0*) 0));
C0 v5 = *(((C0*) 0));
v3 = v3;
delete (new C1 ());
return;

}
/* method id 404 */ C2::~C2 () {
C1 v6 = *(&(*(((C1*) 0))));
delete (new C1 ());
return;

}
C2::C2 (special_constructor)  {}

/* method id 405 */ abstract_0 C3::func0 () {
delete (new C2 ());
return ::func5(v17, v17, v17, v17);

}
/* method id 406 */ C3::C3 () {
return;

}
/* method id 407 */ abstract_0 C3::func0 (C1 v9, C0 v10) {
C1 v11 = *(&(*((new C1 ()))));
C1 v12 = *(&(*((new C1 ()))));
C2 v13 = *(((C2*) 0));
return abstract_0();

}
/* method id 408 */ C3::~C3 () {
abstract_2 v14 = abstract_2();
C1 v15 = *(&(*(((C1*) 0))));
C0 v16 = *(&(*((new C0 ()))));
return;

}
C3::C3 (special_constructor)  {}

abstract_0 func2 (C1 v19, C1 v20, C1 v21) {
C1 v22;
C1 v23;
C1 v24;
C1 v25;

return ::func4(v20, v20, v20, v20);

}
abstract_0 func3 (abstract_1 v26, C1 v27, C1 v28, C1 v29) {
C1 v30;
C1 v31;
C1 v32;
C1 v33;

delete (new C1 ());
return abstract_0();

}
abstract_0 func4 (C1 v34, C1 v35, C1 v36, C1 v37) {
abstract_1 v38;
C1 v39;
C1 v40;

return abstract_0();

}
abstract_0 func5 (C1 v41, C1 v42, C1 v43, C1 v44) {
C1 v45;
C1 v46;
C1 v47;
C1 v48;

return abstract_0();

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
class C1    size(2)
0    +---
0    | var0: ClassType{0}
1    | var1: ClassType{0}
2    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 2;
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
4    | var7: ClassType{1}
6    | alignment: 
8    | var8: AbstractType{1}
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
class C3    size(8)
0    +---
0    | {vfptr}
4    | var17: ClassType{1}
6    | var18: ClassType{1}
8    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 8;
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

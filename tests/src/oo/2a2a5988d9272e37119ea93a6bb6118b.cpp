// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
/* method id 402 */ virtual abstract_0 func1 (abstract_0* v6, abstract_0* v7, abstract_1 v8, abstract_1 v9);
/* method id 403 */ virtual abstract_0 func1 (abstract_0* v10, abstract_1 v11, abstract_1 v12, abstract_0** v13);
C0 (special_constructor);
};
abstract_0 func2 (abstract_1 v16, abstract_0** v17, abstract_1 v18);
abstract_0 func3 (abstract_1 v19, abstract_1 v20, abstract_1 v21);
abstract_0 func4 (abstract_0** v26, abstract_1 v27, abstract_1 v28, abstract_1 v29);
abstract_0 func5 (abstract_1 v34, abstract_1 v35, abstract_1 v36);
// definitions
/* method id 400 */ C0::~C0 () {
abstract_0* v0 = new abstract_0 ();
return;

}
/* method id 401 */ C0::C0 () {
abstract_0* v1 = ((abstract_0*) 0);
abstract_0* v2 = ((abstract_0*) 0);
abstract_0* v3 = ((abstract_0*) 0);
v3 = v2;
v3 = v2;
v3 = v2;
return;

}
/* method id 402 */ abstract_0 C0::func1 (abstract_0* v6, abstract_0* v7, abstract_1 v8, abstract_1 v9) {
return ::func5(v9, v9, v9);

}
/* method id 403 */ abstract_0 C0::func1 (abstract_0* v10, abstract_1 v11, abstract_1 v12, abstract_0** v13) {
abstract_0** v14 = new abstract_0* ();
abstract_0** v15 = new abstract_0* ();
delete (new C0 ());
return abstract_0();

}
C0::C0 (special_constructor)  {}

abstract_0 func2 (abstract_1 v16, abstract_0** v17, abstract_1 v18) {

delete (new C0 ());
return ::func4(v17, v16, v16, v16);

}
abstract_0 func3 (abstract_1 v19, abstract_1 v20, abstract_1 v21) {
abstract_1 v22;
abstract_1 v23;
abstract_0** v24;
abstract_1 v25;

return abstract_0();

}
abstract_0 func4 (abstract_0** v26, abstract_1 v27, abstract_1 v28, abstract_1 v29) {
abstract_1 v30;
abstract_0** v31;
abstract_1 v32;
abstract_1 v33;

::func3(v29, v29, v29);
::func3(v29, v29, v29);
::func3(v29, v29, v29);
::func3(v29, v29, v29);
return ::func3(v29, v29, v29);

}
abstract_0 func5 (abstract_1 v34, abstract_1 v35, abstract_1 v36) {
abstract_1 v37;
abstract_1 v38;
abstract_1 v39;
abstract_1 v40;

::func3(v36, v36, v36);
::func3(v36, v36, v36);
::func3(v36, v36, v36);
::func3(v36, v36, v36);
return ::func2(v36, new abstract_0* (), v36);

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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

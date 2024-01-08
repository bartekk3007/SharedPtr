#include <iostream>
#include "Base.hpp"

using namespace std;

int main()
{
	shared_ptr<Base> s1;
	shared_ptr<Base> s2(new Base);

	shared_ptr<Base> s3 = make_shared<Base>(10, 'a');

	shared_ptr<Base> s4 = s3;

	return 0;
}
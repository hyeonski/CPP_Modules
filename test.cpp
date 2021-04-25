#include <iostream>
using namespace std;

class A
{
private:
	int a;
	
public:
	A();
	A(const A&);
	virtual ~A();
};

A::A()
{
	cout << "A default : " << &this->a << endl;
}

A::A(const A& a)
{
	cout << "A copy : " << &this->a << endl;
}

A::~A()
{
	cout << "A destruct" << endl;
}

class B : virtual public A
{
private:
	int b;
	
public:
	B();
	B(const B&);
	virtual ~B();
};

B::B() : A()
{
	cout << "B default : " << &this->b << endl;
}

B::B(const B& b) : A(b)
{
	cout << "B copy : " << &this->b << endl;
}

B::~B()
{
	cout << "B destruct" << endl;
}

class C : virtual public A
{
private:
	int c;
	
public:
	C();
	C(const C&);
	virtual ~C();
};

C::C() : A()
{
	cout << "C default : " << &this->c << endl;
}

C::C(const C& c) : A(c)
{
	cout << "C copy : " << &this->c << endl;
}

C::~C()
{
	cout << "C destruct" << endl;
}

class D
{
private:
	int d;
	
public:
	D();
	D(const D&);
	virtual ~D();
};

D::D()
{
	cout << "D default : " << &this->d << endl;
}

D::D(const D& a)
{
	cout << "D copy : " << &this->d << endl;
}

D::~D()
{
	cout << "D destruct" << endl;
}

class E : virtual public D
{
private:
	int e;
	
public:
	E();
	E(const E&);
	virtual ~E();
};

E::E() : D()
{
	cout << "E default : " << &this->e << endl;
}

E::E(const E& e) : D(e)
{
	cout << "E copy : " << &this->e << endl;
}

E::~E()
{
	cout << "E destruct" << endl;
}

class F : virtual public D
{
private:
	int f;
	
public:
	F();
	F(const F&);
	virtual ~F();
};

F::F() : D()
{
	cout << "F default : " << &this->f << endl;
}

F::F(const F& f) : D(f)
{
	cout << "F copy : " << &this->f << endl;
}

F::~F()
{
	cout << "F destruct" << endl;
}

class G : public B, virtual public C, virtual public E
{
private:
	int g;
	
public:
	G();
	G(const G&);
	virtual ~G();
};

G::G() : B(), C(), E()
{
	cout << "G default : " << &this->g << endl;
}

G::G(const G& g) : B(g), C(g), E(g)
{
	cout << "G copy : " << &this->g << endl;
}

G::~G()
{
	cout << "G destruct" << endl;
}

class H : virtual public C, virtual public E, public F
{
private:
	int h;
	
public:
	H();
	H(const H&);
	virtual ~H();
};

H::H() : C(), E(), F()
{
	cout << "H default : " << &this->h << endl;
}

H::H(const H& h) : C(h), E(h), F(h)
{
	cout << "H copy : " << &this->h << endl;
}

H::~H()
{
	cout << "H destruct" << endl;
}

class I : public G, public H
{
private:
	int i;
	
public:
	I();
	I(const I&);
	virtual ~I();
};

I::I() : G(), H()
{
	cout << "I default : " << &this->i << endl;
}

I::I(const I& i) : G(i), H(i)
{
	cout << "I copy : " << &this->i << endl;
}

I::~I()
{
	cout << "I destruct" << endl;
}

int main()
{
	I i;
	cout << endl;
	I copy(i);

	cout << endl << endl;

	G g;
	cout << endl;
	G c(g);
}











// class A
// {
// private:
// 	int a;
// public:
// 	A();
// 	A(const A&);
// 	virtual ~A();
// };

// A::A()
// {
// 	cout << "A default : " << this << endl;
// }

// A::A(const A& a)
// {
// 	cout << "A copy : " << this << endl;
// }

// A::~A()
// {
// 	cout << "A destruct" << endl;
// }

// class B : virtual public A
// {
// private:
// 	int b;
// public:
// 	B();
// 	B(const B&);
// 	virtual ~B();
// };

// B::B() : A()
// {
// 	cout << "B default : " << this << endl;
// }

// B::B(const B& b) : A(b)
// {
// 	cout << "B copy : " << this << endl;
// }

// B::~B()
// {
// 	cout << "B destruct" << endl;
// }

// class C : public B
// {
// private:
// 	int c;
// public:
// 	C();
// 	C(const C&);
// 	virtual ~C();
// };

// C::C() : B()
// {
// 	cout << "C default : " << this << endl;
// }

// C::C(const C& c) : B(c)
// {
// 	cout << "C copy : " << this << endl;
// }

// C::~C()
// {
// 	cout << "C destruct" << endl;
// }

// int main(void)
// {
// 	C c;
// 	C copy(c);
// }
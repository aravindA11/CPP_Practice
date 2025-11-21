/*
Exercise 7.43: Assume we have a class named NoDefault that has a
constructor that takes an int, but has no default constructor. Define a
class C that has a member of type NoDefault. Define the default
constructor for C.
*/

class NoDefault {
    public:
        NoDefault(int x) {}
};

class C {
    public:
        C() : ndef(0) {} // Default constructor for C that initializes NoDefault member
    private:
        NoDefault ndef; // Member of type NoDefault
};
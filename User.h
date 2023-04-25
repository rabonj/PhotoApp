#pragma once

using namespace System;

public ref class User {
public:
	int id;
	String^ firstname;
	String^ lastname;
	String^ email;
	String^ password;
	DateTime^ dob;
	int hometown;

};
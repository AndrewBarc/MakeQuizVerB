/**
* @file college.h
* @brief This source code creates a linked list that can traverse a college course schedule.
* @date 10/11/2018
*/
//
//Matthew Aberegg
//Project 3
//CS 2401
//10/8/2015
//

#include <iostream>
#include <fstream>
#include <string>
#include "course.h"
#include "node.h"


#ifndef COLLEGE_H
#define COLLEGE_H


class College{
	public:
	College(std::string s);
	~College();
	College(const College& other);
	College& operator =(const College& other);
	void add(course& c);
	void remove(std::string coursename);
        /**
        * display function is a void function with one parameter and no return $
        * @param outs is a standard ostream pass by reference type
        * @brief this function is used to display what ever is needed.
        */

	void display(std::ostream& outs);
	/**
	* hours function is a double function with no parameters and returns a double value.
	* @return hours in double form.
	* @brief this function is used to create hours in a usual college course.
	*/
	double hours();
	/**
	* gpa function is a normal function with no parameters and returns a double value.
	* @return gpa of a finished college course.
	* @brief this function is used to get the gpa of a college course by using the given credit hours and final grade of the course.
 	*/
	double gpa();
	void save(std::ostream& outs);
	void load(std::istream& ins);
	private:
	std::string name;
	node * head;




};
#endif

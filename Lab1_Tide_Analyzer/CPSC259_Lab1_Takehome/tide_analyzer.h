/*
File:         tide_analyzer.h
Purpose:      Contains prototypes
Author:			Yekta Ataozden and Masrur Mahbub
Student #s:		20175360 and 39333851
CS Accounts:  s0v1b and j2o1b
Date:				  09/23/2018
*/

/********************************************************************
YOU MAY EDIT THIS FILE (BUT YOU DON'T NEED TO)
******************************************************************/

#pragma once

/* Insert function prototypes here */
FILE * open_file(FILE * file_pointer, char * fileName, char * mode);
void process_file(double array_to_populate[], FILE * pointer_to_data_file);
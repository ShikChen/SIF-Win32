/* 
   Copyright 2013 KLab Inc.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
#include "assert.h"
#include <stdio.h>
#include <stdlib.h>
#include <android/log.h>
#include "CPFInterface.h"
//#include <stdarg.h>

extern "C" {
void assertFunction(int line, const char* file, const char* msg,...) {
	va_list	argp;
	char pszBuf [1024];
	char buf[1024];

	va_start(argp, msg);
	vsprintf( pszBuf, msg, argp);
	va_end(argp);

	sprintf(buf, "Assert l.%i in %s : \n%s\n", line, file, pszBuf);
	DEBUG_PRINT(buf);
	abort();
}

void msgBox(char * log)
{

}
}

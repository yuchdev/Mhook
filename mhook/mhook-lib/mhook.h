//Copyright (c) 2007-2008, Marton Anka, 2018 Yurii Cherkasov
//
//Permission is hereby granted, free of charge, to any person obtaining a 
//copy of this software and associated documentation files (the "Software"), 
//to deal in the Software without restriction, including without limitation 
//the rights to use, copy, modify, merge, publish, distribute, sub-license, 
//and/or sell copies of the Software, and to permit persons to whom the 
//Software is furnished to do so, subject to the following conditions:
//
//The above copyright notice and this permission notice shall be included 
//in all copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
//OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL 
//THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
//FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS 
//IN THE SOFTWARE.

#include <Windows.h>

#ifdef _M_IX86
#define _M_IX86_X64
#elif defined _M_X64
#define _M_IX86_X64
#endif

//=========================================================================
/// @brief Set function hook.
/// Replace the initial part of a defined function code with our own code (also known as trampoline)
/// Upon execution, the function jumps to a hook handler. Store the original version of the 
/// replaced code of the defined function. This is required for the defined function to operate properly
/// @param ppSystemFunction: pointer to pointer to the hooked (system) function
/// @param pHookFunction: pointer to hook function, which will be executed instead 
/// @return: TRUE if succef, favle otherwise
BOOL Mhook_SetHook(PVOID *ppSystemFunction, PVOID pHookFunction);

//=========================================================================
/// @brief Remove function hook.
/// Restore the hooked function
/// @param ppSystemFunction: pointer to pointer to the hooked (system) function
BOOL Mhook_Unhook(PVOID *ppHookedFunction);

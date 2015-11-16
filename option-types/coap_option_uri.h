/*******************************************************************************
 * Copyright (c)  2015  Dipl.-Ing. Tobias Rohde, http://www.lobaro.com
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *******************************************************************************/
#ifndef COAP_URIPATH_OPTION
#define COAP_URIPATH_OPTION


CoAP_Result_t CoAP_AppendUriOptionsFromString(CoAP_option_t** pUriOptionsListBegin, char* UriStr);

CoAP_Result_t CoAP_AddUriOptionsToMsgFromString(CoAP_Message_t* msg, char* UriStr);

bool CoAP_UriOptionsAreEqual(CoAP_option_t* OptListA, CoAP_option_t* OptListB);

uint8_t* CoAP_UriQuery_strstr(CoAP_option_t* pUriOpt, const char* str);
uint8_t* CoAP_UriQuery_GetValueAfterPrefix(CoAP_option_t* pUriOpt, const char* prefixStr, uint8_t* pValueLen);
bool CoAP_UriQuery_KeyCorrect(CoAP_option_t* pUriOpt, const char* Key);

void CoAP_printUriOptionsList(CoAP_option_t* pOptListBegin);
#endif

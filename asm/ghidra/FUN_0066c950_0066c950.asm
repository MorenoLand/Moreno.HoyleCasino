; FUN_0066c950  0066c950
0066c950  PUSH EBP
0066c951  MOV EBP,ESP
0066c953  SUB ESP,0xc
0066c956  MOV dword ptr [EBP + -0xc],ECX
0066c959  MOV EAX,[0x007960d8]
0066c95e  MOV ECX,dword ptr [EAX + 0xc]
0066c961  MOV EDX,dword ptr [0x007960d8]
0066c967  MOV EAX,dword ptr [EDX + 0xc]
0066c96a  MOV EDX,dword ptr [ECX]
0066c96c  MOV ECX,EAX
0066c96e  MOV EAX,dword ptr [EDX + 0x8]
0066c971  CALL EAX
0066c973  MOV dword ptr [EBP + -0x4],EAX
0066c976  MOV ECX,dword ptr [EBP + -0xc]
0066c979  MOV EDX,dword ptr [EBP + -0x4]
0066c97c  SUB EDX,dword ptr [ECX + 0x80]
0066c982  MOV dword ptr [EBP + -0x8],EDX
0066c985  CMP dword ptr [EBP + -0x8],0x3fc
0066c98c  JG 0x0066c9f9
0066c98e  MOV EAX,dword ptr [EBP + -0xc]
0066c991  MOV ECX,dword ptr [EAX + 0x78]
0066c994  ADD ECX,0x1
0066c997  MOV EDX,dword ptr [EBP + -0xc]
0066c99a  MOV dword ptr [EDX + 0x7c],ECX
0066c99d  MOV EAX,dword ptr [EBP + -0xc]
0066c9a0  MOV ECX,dword ptr [EAX + 0x6c]
0066c9a3  CALL 0x005eb240
0066c9a8  MOV ECX,dword ptr [EBP + -0xc]
0066c9ab  CMP dword ptr [ECX + 0x7c],EAX
0066c9ae  JLE 0x0066c9ba
0066c9b0  MOV EDX,dword ptr [EBP + -0xc]
0066c9b3  MOV dword ptr [EDX + 0x7c],0x0
0066c9ba  PUSH 0xff
0066c9bf  MOV EAX,dword ptr [EBP + -0xc]
0066c9c2  MOV ECX,dword ptr [EAX + 0x6c]
0066c9c5  CALL 0x005eb5d0
0066c9ca  PUSH 0x0
0066c9cc  MOV ECX,dword ptr [EBP + -0xc]
0066c9cf  MOV ECX,dword ptr [ECX + 0x70]
0066c9d2  CALL 0x005eb5d0
0066c9d7  MOV EDX,dword ptr [EBP + -0xc]
0066c9da  MOV EAX,dword ptr [EDX + 0x7c]
0066c9dd  PUSH EAX
0066c9de  MOV ECX,dword ptr [EBP + -0xc]
0066c9e1  MOV EDX,dword ptr [ECX + 0x70]
0066c9e4  MOV EAX,dword ptr [EBP + -0xc]
0066c9e7  MOV ECX,dword ptr [EAX + 0x70]
0066c9ea  MOV EDX,dword ptr [EDX]
0066c9ec  MOV EAX,dword ptr [EDX + 0xb0]
0066c9f2  CALL EAX
0066c9f4  JMP 0x0066cb03
0066c9f9  CMP dword ptr [EBP + -0x8],0x7f8
0066ca00  JG 0x0066ca41
0066ca02  MOV EAX,0x7f8
0066ca07  SUB EAX,dword ptr [EBP + -0x8]
0066ca0a  CDQ
0066ca0b  AND EDX,0x3
0066ca0e  ADD EAX,EDX
0066ca10  SAR EAX,0x2
0066ca13  PUSH EAX
0066ca14  MOV ECX,dword ptr [EBP + -0xc]
0066ca17  MOV ECX,dword ptr [ECX + 0x6c]
0066ca1a  CALL 0x005eb5d0
0066ca1f  MOV EAX,dword ptr [EBP + -0x8]
0066ca22  SUB EAX,0x3fc
0066ca27  CDQ
0066ca28  AND EDX,0x3
0066ca2b  ADD EAX,EDX
0066ca2d  SAR EAX,0x2
0066ca30  PUSH EAX
0066ca31  MOV EDX,dword ptr [EBP + -0xc]
0066ca34  MOV ECX,dword ptr [EDX + 0x70]
0066ca37  CALL 0x005eb5d0
0066ca3c  JMP 0x0066cb03
0066ca41  CMP dword ptr [EBP + -0x8],0xbf4
0066ca48  JG 0x0066cab2
0066ca4a  MOV EAX,dword ptr [EBP + -0xc]
0066ca4d  MOV ECX,dword ptr [EAX + 0x7c]
0066ca50  ADD ECX,0x1
0066ca53  MOV EDX,dword ptr [EBP + -0xc]
0066ca56  MOV dword ptr [EDX + 0x78],ECX
0066ca59  MOV EAX,dword ptr [EBP + -0xc]
0066ca5c  MOV ECX,dword ptr [EAX + 0x6c]
0066ca5f  CALL 0x005eb240
0066ca64  MOV ECX,dword ptr [EBP + -0xc]
0066ca67  CMP dword ptr [ECX + 0x78],EAX
0066ca6a  JLE 0x0066ca76
0066ca6c  MOV EDX,dword ptr [EBP + -0xc]
0066ca6f  MOV dword ptr [EDX + 0x78],0x0
0066ca76  PUSH 0x0
0066ca78  MOV EAX,dword ptr [EBP + -0xc]
0066ca7b  MOV ECX,dword ptr [EAX + 0x6c]
0066ca7e  CALL 0x005eb5d0
0066ca83  PUSH 0xff
0066ca88  MOV ECX,dword ptr [EBP + -0xc]
0066ca8b  MOV ECX,dword ptr [ECX + 0x70]
0066ca8e  CALL 0x005eb5d0
0066ca93  MOV EDX,dword ptr [EBP + -0xc]
0066ca96  MOV EAX,dword ptr [EDX + 0x78]
0066ca99  PUSH EAX
0066ca9a  MOV ECX,dword ptr [EBP + -0xc]
0066ca9d  MOV EDX,dword ptr [ECX + 0x6c]
0066caa0  MOV EAX,dword ptr [EBP + -0xc]
0066caa3  MOV ECX,dword ptr [EAX + 0x6c]
0066caa6  MOV EDX,dword ptr [EDX]
0066caa8  MOV EAX,dword ptr [EDX + 0xb0]
0066caae  CALL EAX
0066cab0  JMP 0x0066cb03
0066cab2  CMP dword ptr [EBP + -0x8],0xff0
0066cab9  JG 0x0066caf7
0066cabb  MOV EAX,dword ptr [EBP + -0x8]
0066cabe  SUB EAX,0xbf4
0066cac3  CDQ
0066cac4  AND EDX,0x3
0066cac7  ADD EAX,EDX
0066cac9  SAR EAX,0x2
0066cacc  PUSH EAX
0066cacd  MOV ECX,dword ptr [EBP + -0xc]
0066cad0  MOV ECX,dword ptr [ECX + 0x6c]
0066cad3  CALL 0x005eb5d0
0066cad8  MOV EAX,0xff0
0066cadd  SUB EAX,dword ptr [EBP + -0x8]
0066cae0  CDQ
0066cae1  AND EDX,0x3
0066cae4  ADD EAX,EDX
0066cae6  SAR EAX,0x2
0066cae9  PUSH EAX
0066caea  MOV EDX,dword ptr [EBP + -0xc]
0066caed  MOV ECX,dword ptr [EDX + 0x70]
0066caf0  CALL 0x005eb5d0
0066caf5  JMP 0x0066cb03
0066caf7  MOV EAX,dword ptr [EBP + -0xc]
0066cafa  MOV ECX,dword ptr [EBP + -0x4]
0066cafd  MOV dword ptr [EAX + 0x80],ECX
0066cb03  MOV ESP,EBP
0066cb05  POP EBP
0066cb06  RET

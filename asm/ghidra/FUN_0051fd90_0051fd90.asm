; FUN_0051fd90  0051fd90
0051fd90  PUSH EBP
0051fd91  MOV EBP,ESP
0051fd93  SUB ESP,0x1c
0051fd96  MOV dword ptr [EBP + -0x14],ECX
0051fd99  MOV dword ptr [EBP + -0x8],0x10
0051fda0  MOV dword ptr [EBP + -0xc],0x0
0051fda7  JMP 0x0051fdb2
0051fda9  MOV EAX,dword ptr [EBP + -0xc]
0051fdac  ADD EAX,0x1
0051fdaf  MOV dword ptr [EBP + -0xc],EAX
0051fdb2  CMP dword ptr [EBP + -0xc],0x8
0051fdb6  JGE 0x0051fe96
0051fdbc  MOV dword ptr [EBP + -0x10],0x0
0051fdc3  JMP 0x0051fdce
0051fdc5  MOV ECX,dword ptr [EBP + -0x10]
0051fdc8  ADD ECX,0x1
0051fdcb  MOV dword ptr [EBP + -0x10],ECX
0051fdce  CMP dword ptr [EBP + -0x10],0x4
0051fdd2  JGE 0x0051fe91
0051fdd8  MOV EDX,dword ptr [EBP + -0x10]
0051fddb  PUSH EDX
0051fddc  MOV EAX,dword ptr [EBP + -0xc]
0051fddf  PUSH EAX
0051fde0  CALL 0x00520770
0051fde5  ADD ESP,0x8
0051fde8  MOVZX ECX,AL
0051fdeb  TEST ECX,ECX
0051fded  JZ 0x0051fe8c
0051fdf3  MOV EDX,dword ptr [EBP + -0xc]
0051fdf6  MOV EAX,dword ptr [EBP + -0x10]
0051fdf9  LEA ECX,[EAX + EDX*0x4]
0051fdfc  MOV dword ptr [EBP + -0x4],ECX
0051fdff  MOV EDX,dword ptr [EBP + -0xc]
0051fe02  PUSH EDX
0051fe03  MOV ECX,dword ptr [EBP + -0x14]
0051fe06  CALL 0x0051f660
0051fe0b  CMP EAX,0x5
0051fe0e  JNZ 0x0051fe4f
0051fe10  MOV EAX,dword ptr [EBP + -0x8]
0051fe13  MOV dword ptr [EBP + -0x18],EAX
0051fe16  PUSH 0x0
0051fe18  PUSH 0xff
0051fe1d  PUSH 0x0
0051fe1f  PUSH 0x5
0051fe21  PUSH 0x0
0051fe23  PUSH 0x0
0051fe25  MOV ECX,dword ptr [EBP + -0x4]
0051fe28  MOV EDX,dword ptr [ECX*0x4 + 0x721b78]
0051fe2f  PUSH EDX
0051fe30  MOV EAX,dword ptr [EBP + -0x18]
0051fe33  PUSH EAX
0051fe34  PUSH 0x0
0051fe36  MOV ECX,dword ptr [0x0162ee84]
0051fe3c  MOV ECX,dword ptr [ECX + 0x14]
0051fe3f  CALL 0x005f9ce0
0051fe44  MOV EDX,dword ptr [EBP + -0x8]
0051fe47  ADD EDX,0x1
0051fe4a  MOV dword ptr [EBP + -0x8],EDX
0051fe4d  JMP 0x0051fe8c
0051fe4f  MOV EAX,dword ptr [EBP + -0x8]
0051fe52  MOV dword ptr [EBP + -0x1c],EAX
0051fe55  PUSH 0x0
0051fe57  PUSH 0xff
0051fe5c  PUSH 0x0
0051fe5e  PUSH 0x5
0051fe60  PUSH 0x0
0051fe62  PUSH 0x0
0051fe64  MOV ECX,dword ptr [EBP + -0x4]
0051fe67  MOV EDX,dword ptr [ECX*0x4 + 0x721af8]
0051fe6e  PUSH EDX
0051fe6f  MOV EAX,dword ptr [EBP + -0x1c]
0051fe72  PUSH EAX
0051fe73  PUSH 0x0
0051fe75  MOV ECX,dword ptr [0x0162ee84]
0051fe7b  MOV ECX,dword ptr [ECX + 0x14]
0051fe7e  CALL 0x005f9ce0
0051fe83  MOV EDX,dword ptr [EBP + -0x8]
0051fe86  ADD EDX,0x1
0051fe89  MOV dword ptr [EBP + -0x8],EDX
0051fe8c  JMP 0x0051fdc5
0051fe91  JMP 0x0051fda9
0051fe96  MOV ESP,EBP
0051fe98  POP EBP
0051fe99  RET

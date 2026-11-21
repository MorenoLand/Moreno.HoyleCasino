; FUN_00536bc0  00536bc0
00536bc0  PUSH EBP
00536bc1  MOV EBP,ESP
00536bc3  SUB ESP,0x24
00536bc6  MOV dword ptr [EBP + -0x24],ECX
00536bc9  MOV EAX,[0x00793394]
00536bce  MOV EDX,dword ptr [EAX]
00536bd0  MOV ECX,dword ptr [0x00793394]
00536bd6  MOV EAX,dword ptr [EDX + 0x64]
00536bd9  CALL EAX
00536bdb  MOV dword ptr [EBP + -0x10],EAX
00536bde  MOV dword ptr [EBP + -0xc],0xffffffff
00536be5  MOV dword ptr [EBP + -0x4],0x0
00536bec  MOV ECX,dword ptr [0x007947e0]
00536bf2  MOV EDX,dword ptr [ECX + 0x4f14]
00536bf8  MOV dword ptr [EBP + -0x8],EDX
00536bfb  MOV dword ptr [EBP + -0x14],0x0
00536c02  JMP 0x00536c0d
00536c04  MOV EAX,dword ptr [EBP + -0x14]
00536c07  ADD EAX,0x1
00536c0a  MOV dword ptr [EBP + -0x14],EAX
00536c0d  MOV ECX,dword ptr [EBP + -0x14]
00536c10  CMP ECX,dword ptr [EBP + -0x10]
00536c13  JGE 0x00536d2d
00536c19  PUSH 0x1
00536c1b  MOV EDX,dword ptr [EBP + -0x14]
00536c1e  PUSH EDX
00536c1f  MOV EAX,[0x00793394]
00536c24  MOV EDX,dword ptr [EAX]
00536c26  MOV ECX,dword ptr [0x00793394]
00536c2c  MOV EAX,dword ptr [EDX + 0x68]
00536c2f  CALL EAX
00536c31  PUSH EAX
00536c32  MOV ECX,dword ptr [EBP + -0x24]
00536c35  CALL 0x00537e60
00536c3a  MOV dword ptr [EBP + -0xc],EAX
00536c3d  CMP dword ptr [EBP + -0xc],-0x1
00536c41  JZ 0x00536d28
00536c47  CMP dword ptr [EBP + -0xc],0x0
00536c4b  JNZ 0x00536c54
00536c4d  MOV ECX,dword ptr [EBP + -0x24]
00536c50  MOV byte ptr [ECX + 0x7c],0x1
00536c54  CMP dword ptr [EBP + -0x8],0xc
00536c58  JNZ 0x00536cd1
00536c5a  CMP dword ptr [EBP + -0x14],0x1c
00536c5e  JZ 0x00536c66
00536c60  CMP dword ptr [EBP + -0x14],0x1d
00536c64  JNZ 0x00536c95
00536c66  MOV ECX,dword ptr [EBP + -0x24]
00536c69  CALL 0x00535e50
00536c6e  SUB EAX,dword ptr [EBP + -0xc]
00536c71  SUB EAX,0x1
00536c74  MOV EDX,dword ptr [EBP + -0x24]
00536c77  MOV dword ptr [EDX + 0x64],EAX
00536c7a  MOV EAX,dword ptr [EBP + -0x24]
00536c7d  MOV ECX,dword ptr [EAX + 0x8]
00536c80  MOV dword ptr [EBP + -0x18],ECX
00536c83  MOV EDX,dword ptr [EBP + -0x18]
00536c86  IMUL EDX,EDX,0x6
00536c89  MOV dword ptr [EBP + -0x4],EDX
00536c8c  MOV EAX,dword ptr [EBP + -0x24]
00536c8f  MOV byte ptr [EAX + 0x7e],0x1
00536c93  JMP 0x00536ccf
00536c95  MOV ECX,dword ptr [EBP + -0x24]
00536c98  CALL 0x00535e50
00536c9d  SUB EAX,dword ptr [EBP + -0xc]
00536ca0  SUB EAX,0x1
00536ca3  MOV ECX,dword ptr [EBP + -0x24]
00536ca6  MOV dword ptr [ECX + 0x64],EAX
00536ca9  MOV EDX,dword ptr [EBP + -0x24]
00536cac  MOV EAX,dword ptr [EDX + 0x8]
00536caf  MOV dword ptr [EBP + -0x1c],EAX
00536cb2  MOV ECX,dword ptr [EBP + -0xc]
00536cb5  PUSH ECX
00536cb6  MOV EDX,dword ptr [EBP + -0x1c]
00536cb9  PUSH EDX
00536cba  MOV EAX,[0x00793394]
00536cbf  MOV EDX,dword ptr [EAX]
00536cc1  MOV ECX,dword ptr [0x00793394]
00536cc7  MOV EAX,dword ptr [EDX + 0x5c]
00536cca  CALL EAX
00536ccc  MOV dword ptr [EBP + -0x4],EAX
00536ccf  JMP 0x00536d0b
00536cd1  MOV ECX,dword ptr [EBP + -0x24]
00536cd4  CALL 0x00535e50
00536cd9  SUB EAX,dword ptr [EBP + -0xc]
00536cdc  SUB EAX,0x1
00536cdf  MOV ECX,dword ptr [EBP + -0x24]
00536ce2  MOV dword ptr [ECX + 0x64],EAX
00536ce5  MOV EDX,dword ptr [EBP + -0x24]
00536ce8  MOV EAX,dword ptr [EDX + 0x8]
00536ceb  MOV dword ptr [EBP + -0x20],EAX
00536cee  MOV ECX,dword ptr [EBP + -0xc]
00536cf1  PUSH ECX
00536cf2  MOV EDX,dword ptr [EBP + -0x20]
00536cf5  PUSH EDX
00536cf6  MOV EAX,[0x00793394]
00536cfb  MOV EDX,dword ptr [EAX]
00536cfd  MOV ECX,dword ptr [0x00793394]
00536d03  MOV EAX,dword ptr [EDX + 0x5c]
00536d06  CALL EAX
00536d08  MOV dword ptr [EBP + -0x4],EAX
00536d0b  MOV ECX,dword ptr [EBP + -0x14]
00536d0e  PUSH ECX
00536d0f  MOV EDX,dword ptr [0x00793394]
00536d15  MOV EAX,dword ptr [EDX]
00536d17  MOV ECX,dword ptr [0x00793394]
00536d1d  MOV EDX,dword ptr [EAX + 0x60]
00536d20  CALL EDX
00536d22  IMUL EAX,dword ptr [EBP + -0x4]
00536d26  JMP 0x00536d2f
00536d28  JMP 0x00536c04
00536d2d  XOR EAX,EAX
00536d2f  MOV ESP,EBP
00536d31  POP EBP
00536d32  RET

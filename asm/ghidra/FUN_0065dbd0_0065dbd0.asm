; FUN_0065dbd0  0065dbd0
0065dbd0  PUSH EBP
0065dbd1  MOV EBP,ESP
0065dbd3  PUSH -0x1
0065dbd5  PUSH 0x6ac898
0065dbda  MOV EAX,FS:[0x0]
0065dbe0  PUSH EAX
0065dbe1  PUSH ECX
0065dbe2  MOV EAX,[0x00781870]
0065dbe7  XOR EAX,EBP
0065dbe9  PUSH EAX
0065dbea  LEA EAX,[EBP + -0xc]
0065dbed  MOV FS:[0x0],EAX
0065dbf3  MOV dword ptr [EBP + -0x10],ECX
0065dbf6  MOV ECX,dword ptr [EBP + -0x10]
0065dbf9  CALL 0x0065ba70
0065dbfe  MOV dword ptr [EBP + -0x4],0x0
0065dc05  MOV EAX,dword ptr [EBP + -0x10]
0065dc08  MOV dword ptr [EAX],0x6deac4
0065dc0e  PUSH 0x0
0065dc10  PUSH 0x30d4d7
0065dc15  MOV ECX,dword ptr [EBP + -0x10]
0065dc18  CALL 0x005f83d0
0065dc1d  MOV ECX,dword ptr [EBP + -0x10]
0065dc20  MOV DL,byte ptr [EBP + 0x8]
0065dc23  MOV byte ptr [ECX + 0x1d4],DL
0065dc29  MOV EAX,dword ptr [EBP + -0x10]
0065dc2c  MOV CL,byte ptr [EBP + 0xc]
0065dc2f  MOV byte ptr [EAX + 0x1d5],CL
0065dc35  MOV EDX,dword ptr [EBP + -0x10]
0065dc38  MOVZX EAX,byte ptr [EDX + 0x1d4]
0065dc3f  TEST EAX,EAX
0065dc41  JZ 0x0065dc4d
0065dc43  MOV ECX,dword ptr [EBP + -0x10]
0065dc46  MOV byte ptr [ECX + 0x1d5],0x1
0065dc4d  MOV EDX,dword ptr [EBP + -0x10]
0065dc50  MOV AL,byte ptr [EBP + 0x18]
0065dc53  MOV byte ptr [EDX + 0x1d6],AL
0065dc59  MOV ECX,dword ptr [EBP + -0x10]
0065dc5c  MOV dword ptr [ECX + 0x1c8],0x0
0065dc66  MOV EDX,dword ptr [EBP + -0x10]
0065dc69  MOV EAX,dword ptr [EBP + 0x10]
0065dc6c  MOV dword ptr [EDX + 0x1e4],EAX
0065dc72  MOV ECX,dword ptr [EBP + -0x10]
0065dc75  MOV EDX,dword ptr [EBP + 0x14]
0065dc78  MOV dword ptr [ECX + 0x1e8],EDX
0065dc7e  MOV EAX,dword ptr [EBP + -0x10]
0065dc81  MOV dword ptr [EAX + 0x1d0],0x0
0065dc8b  MOV ECX,dword ptr [EBP + -0x10]
0065dc8e  MOV dword ptr [ECX + 0x1cc],0x0
0065dc98  MOV dword ptr [EBP + -0x4],0xffffffff
0065dc9f  MOV EAX,dword ptr [EBP + -0x10]
0065dca2  MOV ECX,dword ptr [EBP + -0xc]
0065dca5  MOV dword ptr FS:[0x0],ECX
0065dcac  POP ECX
0065dcad  MOV ESP,EBP
0065dcaf  POP EBP
0065dcb0  RET 0x14

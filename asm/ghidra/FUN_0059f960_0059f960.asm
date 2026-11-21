; FUN_0059f960  0059f960
0059f960  PUSH EBP
0059f961  MOV EBP,ESP
0059f963  PUSH ECX
0059f964  MOV dword ptr [EBP + -0x4],ECX
0059f967  MOV EAX,dword ptr [EBP + -0x4]
0059f96a  MOV byte ptr [EAX + 0x4],0x0
0059f96e  MOV ECX,dword ptr [EBP + -0x4]
0059f971  MOV byte ptr [ECX + 0x5],0x0
0059f975  MOV EDX,dword ptr [EBP + -0x4]
0059f978  MOV byte ptr [EDX + 0x7],0x0
0059f97c  MOV EAX,dword ptr [EBP + -0x4]
0059f97f  MOV byte ptr [EAX + 0x8],0x0
0059f983  MOV ECX,dword ptr [EBP + -0x4]
0059f986  MOV byte ptr [ECX + 0x9],0x0
0059f98a  MOV EDX,dword ptr [EBP + -0x4]
0059f98d  MOV byte ptr [EDX + 0x6],0x0
0059f991  MOV EAX,dword ptr [EBP + -0x4]
0059f994  MOV byte ptr [EAX + 0xa],0x0
0059f998  MOV ECX,dword ptr [EBP + -0x4]
0059f99b  MOV byte ptr [ECX + 0xb],0x0
0059f99f  CMP dword ptr [EBP + 0x8],0x0
0059f9a3  JNZ 0x0059f9d2
0059f9a5  MOV ECX,dword ptr [0x007935d0]
0059f9ab  CALL 0x005a3880
0059f9b0  MOV EDX,dword ptr [EBP + 0x8]
0059f9b3  PUSH EDX
0059f9b4  PUSH 0x1
0059f9b6  MOV EAX,[0x007935cc]
0059f9bb  MOV ECX,dword ptr [EAX + 0x4]
0059f9be  MOV EDX,dword ptr [0x007935cc]
0059f9c4  MOV EAX,dword ptr [EDX + 0x4]
0059f9c7  MOV EDX,dword ptr [ECX]
0059f9c9  MOV ECX,EAX
0059f9cb  MOV EAX,dword ptr [EDX + 0x8]
0059f9ce  CALL EAX
0059f9d0  JMP 0x0059f9f4
0059f9d2  MOV ECX,dword ptr [EBP + 0x8]
0059f9d5  PUSH ECX
0059f9d6  PUSH 0x1f4
0059f9db  MOV EDX,dword ptr [0x007935cc]
0059f9e1  MOV EAX,dword ptr [EDX + 0x4]
0059f9e4  MOV ECX,dword ptr [0x007935cc]
0059f9ea  MOV ECX,dword ptr [ECX + 0x4]
0059f9ed  MOV EDX,dword ptr [EAX]
0059f9ef  MOV EAX,dword ptr [EDX + 0x8]
0059f9f2  CALL EAX
0059f9f4  MOV ESP,EBP
0059f9f6  POP EBP
0059f9f7  RET 0x4

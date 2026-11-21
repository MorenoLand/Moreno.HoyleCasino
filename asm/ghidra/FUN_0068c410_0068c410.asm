; FUN_0068c410  0068c410
0068c410  PUSH EBP
0068c411  MOV EBP,ESP
0068c413  SUB ESP,0x64
0068c416  MOV dword ptr [EBP + -0x64],ECX
0068c419  MOV EAX,dword ptr [EBP + -0x64]
0068c41c  MOV ECX,dword ptr [EAX + 0x4]
0068c41f  MOV dword ptr [EBP + -0x1c],ECX
0068c422  MOV dword ptr [EBP + -0x8],0x0
0068c429  MOV EDX,dword ptr [EBP + -0x1c]
0068c42c  MOV dword ptr [EBP + -0x4],EDX
0068c42f  CMP dword ptr [EBP + -0x64],0x0
0068c433  JNZ 0x0068c43b
0068c435  CALL dword ptr [0x006b2274]
0068c43b  MOV EAX,dword ptr [EBP + -0x64]
0068c43e  MOV dword ptr [EBP + -0x8],EAX
0068c441  MOV ECX,dword ptr [EBP + -0x64]
0068c444  MOV EDX,dword ptr [ECX + 0x4]
0068c447  MOV dword ptr [EBP + -0x20],EDX
0068c44a  MOV EAX,dword ptr [EBP + -0x20]
0068c44d  MOV ECX,dword ptr [EAX]
0068c44f  MOV dword ptr [EBP + -0x24],ECX
0068c452  MOV dword ptr [EBP + -0x10],0x0
0068c459  MOV EDX,dword ptr [EBP + -0x24]
0068c45c  MOV dword ptr [EBP + -0xc],EDX
0068c45f  CMP dword ptr [EBP + -0x64],0x0
0068c463  JNZ 0x0068c46b
0068c465  CALL dword ptr [0x006b2274]
0068c46b  MOV EAX,dword ptr [EBP + -0x64]
0068c46e  MOV dword ptr [EBP + -0x10],EAX
0068c471  MOV ECX,dword ptr [EBP + -0x4]
0068c474  PUSH ECX
0068c475  MOV EDX,dword ptr [EBP + -0x8]
0068c478  PUSH EDX
0068c479  MOV EAX,dword ptr [EBP + -0xc]
0068c47c  PUSH EAX
0068c47d  MOV ECX,dword ptr [EBP + -0x10]
0068c480  PUSH ECX
0068c481  LEA EDX,[EBP + -0x18]
0068c484  PUSH EDX
0068c485  MOV ECX,dword ptr [EBP + -0x64]
0068c488  CALL 0x0068ce80
0068c48d  MOV EAX,dword ptr [EBP + -0x64]
0068c490  MOV ECX,dword ptr [EAX + 0x4]
0068c493  MOV dword ptr [EBP + -0x5c],ECX
0068c496  MOV EDX,dword ptr [EBP + -0x64]
0068c499  MOV EAX,dword ptr [EDX + 0x4]
0068c49c  MOV dword ptr [EBP + -0x60],EAX
0068c49f  MOV ECX,dword ptr [EBP + -0x60]
0068c4a2  PUSH ECX
0068c4a3  CALL 0x00686cae
0068c4a8  ADD ESP,0x4
0068c4ab  MOV EDX,dword ptr [EBP + -0x64]
0068c4ae  MOV dword ptr [EDX + 0x4],0x0
0068c4b5  MOV EAX,dword ptr [EBP + -0x64]
0068c4b8  MOV dword ptr [EAX + 0x8],0x0
0068c4bf  MOV ESP,EBP
0068c4c1  POP EBP
0068c4c2  RET

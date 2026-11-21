; FUN_0062ac90  0062ac90
0062ac90  PUSH EBP
0062ac91  MOV EBP,ESP
0062ac93  PUSH ECX
0062ac94  MOV dword ptr [EBP + -0x4],ECX
0062ac97  MOV EAX,dword ptr [EBP + -0x4]
0062ac9a  CMP dword ptr [EAX + 0x8],0x0
0062ac9e  JLE 0x0062acd0
0062aca0  MOV ECX,dword ptr [EBP + -0x4]
0062aca3  MOV EDX,dword ptr [ECX + 0x8]
0062aca6  SUB EDX,0x1
0062aca9  MOV EAX,dword ptr [EBP + -0x4]
0062acac  MOV dword ptr [EAX + 0x18],EDX
0062acaf  MOV ECX,dword ptr [EBP + -0x4]
0062acb2  MOV EDX,dword ptr [ECX + 0x18]
0062acb5  MOV EAX,dword ptr [EBP + -0x4]
0062acb8  MOV ECX,dword ptr [EAX + 0xc]
0062acbb  LEA EDX,[ECX + EDX*0x4]
0062acbe  MOV EAX,dword ptr [EBP + -0x4]
0062acc1  MOV dword ptr [EAX + 0x1c],EDX
0062acc4  MOV ECX,dword ptr [EBP + -0x4]
0062acc7  MOV EDX,dword ptr [ECX + 0x1c]
0062acca  MOV EAX,dword ptr [EDX]
0062accc  JMP 0x0062acdc
0062acd0  MOV EAX,dword ptr [EBP + -0x4]
0062acd3  MOV dword ptr [EAX + 0x1c],0x0
0062acda  XOR EAX,EAX
0062acdc  MOV ESP,EBP
0062acde  POP EBP
0062acdf  RET

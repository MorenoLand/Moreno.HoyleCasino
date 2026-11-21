; FUN_0041fac0  0041fac0
0041fac0  PUSH EBP
0041fac1  MOV EBP,ESP
0041fac3  PUSH ECX
0041fac4  MOV dword ptr [EBP + -0x4],ECX
0041fac7  PUSH 0x0
0041fac9  MOV EAX,dword ptr [EBP + 0x8]
0041facc  MOV ECX,dword ptr [EBP + -0x4]
0041facf  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x54]
0041fad3  CALL 0x005f5d50
0041fad8  MOV EDX,dword ptr [EBP + 0x8]
0041fadb  MOV EAX,dword ptr [EBP + -0x4]
0041fade  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x54]
0041fae2  MOV EDX,dword ptr [EBP + 0x8]
0041fae5  MOV EAX,dword ptr [EBP + -0x4]
0041fae8  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x54]
0041faec  MOV EAX,dword ptr [ECX]
0041faee  MOV ECX,EDX
0041faf0  MOV EDX,dword ptr [EAX + 0x70]
0041faf3  CALL EDX
0041faf5  PUSH 0x0
0041faf7  MOV EAX,dword ptr [EBP + 0x8]
0041fafa  MOV ECX,dword ptr [EBP + -0x4]
0041fafd  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x44]
0041fb01  MOV EAX,dword ptr [EBP + 0x8]
0041fb04  MOV ECX,dword ptr [EBP + -0x4]
0041fb07  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x44]
0041fb0b  MOV EDX,dword ptr [EDX]
0041fb0d  MOV EAX,dword ptr [EDX + 0xb0]
0041fb13  CALL EAX
0041fb15  MOV ESP,EBP
0041fb17  POP EBP
0041fb18  RET 0x4

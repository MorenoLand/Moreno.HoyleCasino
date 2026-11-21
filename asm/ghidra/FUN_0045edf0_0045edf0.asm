; FUN_0045edf0  0045edf0
0045edf0  PUSH EBP
0045edf1  MOV EBP,ESP
0045edf3  PUSH ECX
0045edf4  MOV dword ptr [EBP + -0x4],ECX
0045edf7  CMP dword ptr [EBP + 0x8],0x0
0045edfb  JNZ 0x0045ee01
0045edfd  XOR AL,AL
0045edff  JMP 0x0045ee48
0045ee01  MOV EAX,dword ptr [EBP + 0x8]
0045ee04  MOV dword ptr [EAX],0x4
0045ee0a  MOV ECX,dword ptr [EBP + 0x8]
0045ee0d  MOV dword ptr [ECX + 0x4],0x1
0045ee14  MOV EDX,dword ptr [EBP + 0x8]
0045ee17  MOV dword ptr [EDX + 0x8],0x4
0045ee1e  MOV EAX,dword ptr [EBP + 0x8]
0045ee21  MOV dword ptr [EAX + 0xc],0x1
0045ee28  MOV ECX,dword ptr [EBP + 0x8]
0045ee2b  MOV dword ptr [ECX + 0x10],0x4
0045ee32  MOV EDX,dword ptr [EBP + 0x8]
0045ee35  MOV dword ptr [EDX + 0x14],0x0
0045ee3c  MOV EAX,dword ptr [EBP + 0x8]
0045ee3f  MOV dword ptr [EAX + 0x18],0x3
0045ee46  MOV AL,0x1
0045ee48  MOV ESP,EBP
0045ee4a  POP EBP
0045ee4b  RET 0x8

; FUN_0064d9e0  0064d9e0
0064d9e0  PUSH EBP
0064d9e1  MOV EBP,ESP
0064d9e3  PUSH ECX
0064d9e4  MOV dword ptr [EBP + -0x4],ECX
0064d9e7  MOV EAX,[0x0162ee84]
0064d9ec  MOV ECX,dword ptr [EAX + 0x58]
0064d9ef  MOV EDX,dword ptr [EBP + -0x4]
0064d9f2  MOV EAX,dword ptr [EBP + 0x8]
0064d9f5  MOV ECX,dword ptr [ECX + EAX*0x4]
0064d9f8  MOV dword ptr [EDX + 0x34],ECX
0064d9fb  MOV EDX,dword ptr [EBP + 0xc]
0064d9fe  PUSH EDX
0064d9ff  MOV EAX,dword ptr [EBP + -0x4]
0064da02  MOV EDX,dword ptr [EAX]
0064da04  MOV ECX,dword ptr [EBP + -0x4]
0064da07  MOV EAX,dword ptr [EDX + 0x14c]
0064da0d  CALL EAX
0064da0f  MOV ESP,EBP
0064da11  POP EBP
0064da12  RET 0x8

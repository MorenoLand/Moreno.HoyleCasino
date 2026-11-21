; FUN_0047f980  0047f980
0047f980  PUSH EBP
0047f981  MOV EBP,ESP
0047f983  SUB ESP,0x18
0047f986  MOV dword ptr [EBP + -0x18],ECX
0047f989  PUSH 0x0
0047f98b  PUSH ECX
0047f98c  FLD float ptr [0x006b3654]
0047f992  FSTP float ptr [ESP]
0047f995  PUSH ECX
0047f996  FLD1
0047f998  FSTP float ptr [ESP]
0047f99b  PUSH 0x1
0047f99d  PUSH 0x5
0047f99f  PUSH 0x0
0047f9a1  PUSH 0x0
0047f9a3  PUSH 0x391
0047f9a8  MOV EAX,[0x0162ee84]
0047f9ad  MOV EDX,dword ptr [EAX]
0047f9af  MOV ECX,dword ptr [0x0162ee84]
0047f9b5  MOV EAX,dword ptr [EDX + 0x80]
0047f9bb  CALL EAX
0047f9bd  MOV dword ptr [EBP + -0x10],0x0
0047f9c4  JMP 0x0047f9cf
0047f9c6  MOV ECX,dword ptr [EBP + -0x10]
0047f9c9  ADD ECX,0x1
0047f9cc  MOV dword ptr [EBP + -0x10],ECX
0047f9cf  CMP dword ptr [EBP + -0x10],0x5
0047f9d3  JGE 0x0047fa8d
0047f9d9  MOV EDX,dword ptr [EBP + -0x18]
0047f9dc  MOV EAX,dword ptr [EDX + 0x4a4]
0047f9e2  MOV dword ptr [EBP + -0x14],EAX
0047f9e5  JMP 0x0047f9f0
0047f9e7  MOV ECX,dword ptr [EBP + -0x14]
0047f9ea  ADD ECX,0x1
0047f9ed  MOV dword ptr [EBP + -0x14],ECX
0047f9f0  MOV EDX,dword ptr [EBP + -0x18]
0047f9f3  MOV ECX,dword ptr [EDX + 0x34]
0047f9f6  CALL 0x0060c9a0
0047f9fb  CMP dword ptr [EBP + -0x14],EAX
0047f9fe  JGE 0x0047fa88
0047fa04  MOV EAX,dword ptr [EBP + -0x14]
0047fa07  PUSH EAX
0047fa08  MOV ECX,dword ptr [EBP + -0x18]
0047fa0b  MOV ECX,dword ptr [ECX + 0x34]
0047fa0e  CALL 0x0060ca40
0047fa13  MOV dword ptr [EBP + -0x8],EAX
0047fa16  MOV EDX,dword ptr [EBP + -0x18]
0047fa19  MOV ECX,dword ptr [EDX + 0x34]
0047fa1c  CALL 0x0060c9a0
0047fa21  SUB EAX,0x1
0047fa24  MOV ECX,dword ptr [EBP + -0x18]
0047fa27  SUB EAX,dword ptr [ECX + 0x4a4]
0047fa2d  PUSH EAX
0047fa2e  CALL 0x0062fbf0
0047fa33  ADD ESP,0x4
0047fa36  MOV dword ptr [EBP + -0xc],EAX
0047fa39  MOV EDX,dword ptr [EBP + -0x18]
0047fa3c  MOV EAX,dword ptr [EDX + 0x4a4]
0047fa42  ADD EAX,dword ptr [EBP + -0xc]
0047fa45  PUSH EAX
0047fa46  MOV ECX,dword ptr [EBP + -0x18]
0047fa49  MOV ECX,dword ptr [ECX + 0x34]
0047fa4c  CALL 0x0060ca40
0047fa51  MOV dword ptr [EBP + -0x4],EAX
0047fa54  MOV EDX,dword ptr [EBP + -0x4]
0047fa57  PUSH EDX
0047fa58  MOV EAX,dword ptr [EBP + -0x14]
0047fa5b  PUSH EAX
0047fa5c  MOV ECX,dword ptr [EBP + -0x18]
0047fa5f  MOV ECX,dword ptr [ECX + 0x34]
0047fa62  CALL 0x0060ca70
0047fa67  MOV EDX,dword ptr [EBP + -0x8]
0047fa6a  PUSH EDX
0047fa6b  MOV EAX,dword ptr [EBP + -0x18]
0047fa6e  MOV ECX,dword ptr [EAX + 0x4a4]
0047fa74  ADD ECX,dword ptr [EBP + -0xc]
0047fa77  PUSH ECX
0047fa78  MOV EDX,dword ptr [EBP + -0x18]
0047fa7b  MOV ECX,dword ptr [EDX + 0x34]
0047fa7e  CALL 0x0060ca70
0047fa83  JMP 0x0047f9e7
0047fa88  JMP 0x0047f9c6
0047fa8d  MOV EAX,dword ptr [EBP + -0x18]
0047fa90  MOV ECX,dword ptr [EAX + 0x34]
0047fa93  CALL 0x0060c9a0
0047fa98  MOV ECX,dword ptr [EBP + -0x18]
0047fa9b  MOV dword ptr [ECX + 0x4a8],EAX
0047faa1  MOV ESP,EBP
0047faa3  POP EBP
0047faa4  RET

; FUN_00563ad0  00563ad0
00563ad0  PUSH EBP
00563ad1  MOV EBP,ESP
00563ad3  SUB ESP,0x8
00563ad6  MOV dword ptr [EBP + -0x8],ECX
00563ad9  MOV EAX,dword ptr [EBP + -0x8]
00563adc  MOV ECX,dword ptr [EAX + 0x4]
00563adf  MOV EDX,dword ptr [EBP + -0x8]
00563ae2  MOV EAX,dword ptr [EDX + 0x4]
00563ae5  MOV EDX,dword ptr [ECX]
00563ae7  MOV ECX,EAX
00563ae9  MOV EAX,dword ptr [EDX + 0x70]
00563aec  CALL EAX
00563aee  MOV dword ptr [EBP + -0x4],0x0
00563af5  JMP 0x00563b00
00563af7  MOV ECX,dword ptr [EBP + -0x4]
00563afa  ADD ECX,0x1
00563afd  MOV dword ptr [EBP + -0x4],ECX
00563b00  CMP dword ptr [EBP + -0x4],0x5
00563b04  JGE 0x00563b25
00563b06  MOV EDX,dword ptr [EBP + -0x4]
00563b09  MOV EAX,dword ptr [EBP + -0x8]
00563b0c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
00563b10  MOV EDX,dword ptr [EBP + -0x4]
00563b13  MOV EAX,dword ptr [EBP + -0x8]
00563b16  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x8]
00563b1a  MOV EAX,dword ptr [ECX]
00563b1c  MOV ECX,EDX
00563b1e  MOV EDX,dword ptr [EAX + 0x70]
00563b21  CALL EDX
00563b23  JMP 0x00563af7
00563b25  MOV EAX,dword ptr [EBP + -0x8]
00563b28  MOV ECX,dword ptr [EAX + 0x1c]
00563b2b  CALL 0x00566a20
00563b30  MOV ESP,EBP
00563b32  POP EBP
00563b33  RET

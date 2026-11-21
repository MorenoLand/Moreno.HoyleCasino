; FUN_0068dbf0  0068dbf0
0068dbf0  PUSH EBP
0068dbf1  MOV EBP,ESP
0068dbf3  SUB ESP,0xc
0068dbf6  MOV dword ptr [EBP + -0xc],ECX
0068dbf9  MOV EAX,dword ptr [EBP + -0xc]
0068dbfc  MOV ECX,dword ptr [EAX + 0x4]
0068dbff  MOV EDX,dword ptr [ECX + 0x4]
0068dc02  MOV dword ptr [EBP + -0x8],EDX
0068dc05  MOV EAX,dword ptr [EBP + -0xc]
0068dc08  MOV ECX,dword ptr [EAX + 0x4]
0068dc0b  MOV dword ptr [EBP + -0x4],ECX
0068dc0e  MOV EDX,dword ptr [EBP + -0x8]
0068dc11  MOVSX EAX,byte ptr [EDX + 0x45]
0068dc15  TEST EAX,EAX
0068dc17  JNZ 0x0068dc4f
0068dc19  MOV ECX,dword ptr [EBP + 0x8]
0068dc1c  PUSH ECX
0068dc1d  MOV EDX,dword ptr [EBP + -0x8]
0068dc20  ADD EDX,0xc
0068dc23  PUSH EDX
0068dc24  CALL dword ptr [0x006b20f0]
0068dc2a  ADD ESP,0x8
0068dc2d  MOVZX EAX,AL
0068dc30  TEST EAX,EAX
0068dc32  JZ 0x0068dc3f
0068dc34  MOV ECX,dword ptr [EBP + -0x8]
0068dc37  MOV EDX,dword ptr [ECX + 0x8]
0068dc3a  MOV dword ptr [EBP + -0x8],EDX
0068dc3d  JMP 0x0068dc4d
0068dc3f  MOV EAX,dword ptr [EBP + -0x8]
0068dc42  MOV dword ptr [EBP + -0x4],EAX
0068dc45  MOV ECX,dword ptr [EBP + -0x8]
0068dc48  MOV EDX,dword ptr [ECX]
0068dc4a  MOV dword ptr [EBP + -0x8],EDX
0068dc4d  JMP 0x0068dc0e
0068dc4f  MOV EAX,dword ptr [EBP + -0x4]
0068dc52  MOV ESP,EBP
0068dc54  POP EBP
0068dc55  RET 0x4

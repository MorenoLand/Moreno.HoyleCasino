; FUN_00563b80  00563b80
00563b80  PUSH EBP
00563b81  MOV EBP,ESP
00563b83  SUB ESP,0x8
00563b86  MOV dword ptr [EBP + -0x4],ECX
00563b89  MOV EAX,dword ptr [EBP + 0x8]
00563b8c  PUSH EAX
00563b8d  MOV ECX,dword ptr [EBP + -0x4]
00563b90  MOV EDX,dword ptr [ECX]
00563b92  MOV ECX,dword ptr [EBP + -0x4]
00563b95  MOV EAX,dword ptr [EDX + 0x84]
00563b9b  CALL EAX
00563b9d  MOVZX ECX,AL
00563ba0  TEST ECX,ECX
00563ba2  JZ 0x00563bde
00563ba4  MOV EDX,dword ptr [EBP + 0x8]
00563ba7  MOV EAX,dword ptr [EDX + 0x18]
00563baa  MOV dword ptr [EBP + -0x8],EAX
00563bad  CMP dword ptr [EBP + -0x8],0x3
00563bb1  JZ 0x00563bb5
00563bb3  JMP 0x00563bdc
00563bb5  MOV ECX,dword ptr [EBP + 0x8]
00563bb8  MOV byte ptr [ECX + 0x4],0x1
00563bbc  MOV EDX,dword ptr [0x00793440]
00563bc2  MOV EAX,dword ptr [EDX + 0xb8]
00563bc8  MOV ECX,dword ptr [EBP + -0x4]
00563bcb  MOV EDX,dword ptr [ECX + 0x178]
00563bd1  MOV dword ptr [EAX + EDX*0x4 + 0x848],0x1
00563bdc  JMP 0x00563bfd
00563bde  MOV EAX,[0x00793440]
00563be3  MOV ECX,dword ptr [EAX + 0xb8]
00563be9  MOV EDX,dword ptr [EBP + -0x4]
00563bec  MOV EAX,dword ptr [EDX + 0x178]
00563bf2  MOV dword ptr [ECX + EAX*0x4 + 0x848],0x0
00563bfd  MOV ECX,dword ptr [EBP + -0x4]
00563c00  CMP dword ptr [ECX + 0x178],0x0
00563c07  JNZ 0x00563c1a
00563c09  MOV EDX,dword ptr [0x00793440]
00563c0f  MOV ECX,dword ptr [EDX + 0xb8]
00563c15  CALL 0x00563c20
00563c1a  MOV ESP,EBP
00563c1c  POP EBP
00563c1d  RET 0x4

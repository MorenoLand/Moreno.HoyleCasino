; FUN_00544e30  00544e30
00544e30  PUSH EBP
00544e31  MOV EBP,ESP
00544e33  SUB ESP,0xc
00544e36  MOV dword ptr [EBP + -0xc],ECX
00544e39  MOV EAX,[0x00793400]
00544e3e  MOV ECX,dword ptr [EAX + 0x4]
00544e41  CMP dword ptr [ECX + 0x4],0x0
00544e45  JZ 0x00544e4c
00544e47  JMP 0x00544ef6
00544e4c  MOV EDX,dword ptr [EBP + -0xc]
00544e4f  MOV EAX,dword ptr [EDX + 0x28]
00544e52  MOV ECX,dword ptr [EBP + -0xc]
00544e55  MOV ECX,dword ptr [ECX + 0x28]
00544e58  MOV EDX,dword ptr [EAX]
00544e5a  MOV EAX,dword ptr [EDX + 0x74]
00544e5d  CALL EAX
00544e5f  MOV dword ptr [EBP + -0x4],0x0
00544e66  JMP 0x00544e71
00544e68  MOV ECX,dword ptr [EBP + -0x4]
00544e6b  ADD ECX,0x1
00544e6e  MOV dword ptr [EBP + -0x4],ECX
00544e71  CMP dword ptr [EBP + -0x4],0x9
00544e75  JGE 0x00544e9d
00544e77  MOV EDX,dword ptr [EBP + -0x4]
00544e7a  PUSH EDX
00544e7b  MOV ECX,dword ptr [EBP + -0xc]
00544e7e  CALL 0x00544980
00544e83  MOV ECX,dword ptr [EBP + -0xc]
00544e86  ADD ECX,dword ptr [EBP + -0x4]
00544e89  MOV byte ptr [ECX + 0xc0],AL
00544e8f  MOV EDX,dword ptr [EBP + -0x4]
00544e92  PUSH EDX
00544e93  MOV ECX,dword ptr [EBP + -0xc]
00544e96  CALL 0x005448f0
00544e9b  JMP 0x00544e68
00544e9d  MOV dword ptr [EBP + -0x4],0x0
00544ea4  JMP 0x00544eaf
00544ea6  MOV EAX,dword ptr [EBP + -0x4]
00544ea9  ADD EAX,0x1
00544eac  MOV dword ptr [EBP + -0x4],EAX
00544eaf  CMP dword ptr [EBP + -0x4],0x4
00544eb3  JGE 0x00544eec
00544eb5  MOV ECX,dword ptr [EBP + -0x4]
00544eb8  PUSH ECX
00544eb9  MOV EDX,dword ptr [0x0162ee84]
00544ebf  MOV ECX,dword ptr [EDX + 0x14]
00544ec2  CALL 0x005fb300
00544ec7  MOV dword ptr [EBP + -0x8],EAX
00544eca  MOV ECX,dword ptr [EBP + -0x8]
00544ecd  CALL 0x006026d0
00544ed2  MOV ECX,dword ptr [EBP + -0xc]
00544ed5  ADD ECX,dword ptr [EBP + -0x4]
00544ed8  MOV byte ptr [ECX + 0xc9],AL
00544ede  MOV EDX,dword ptr [EBP + -0x4]
00544ee1  PUSH EDX
00544ee2  MOV ECX,dword ptr [EBP + -0xc]
00544ee5  CALL 0x00544b30
00544eea  JMP 0x00544ea6
00544eec  PUSH 0x8
00544eee  MOV ECX,dword ptr [EBP + -0xc]
00544ef1  CALL 0x00544860
00544ef6  MOV ESP,EBP
00544ef8  POP EBP
00544ef9  RET

; FUN_0047edd0  0047edd0
0047edd0  PUSH EBP
0047edd1  MOV EBP,ESP
0047edd3  PUSH ECX
0047edd4  MOV dword ptr [EBP + -0x4],ECX
0047edd7  CMP dword ptr [EBP + 0x8],0x0
0047eddb  JGE 0x0047edf4
0047eddd  PUSH 0x80d
0047ede2  PUSH 0x6bc694
0047ede7  PUSH 0x6bcc5c
0047edec  CALL 0x005e9f20
0047edf1  ADD ESP,0xc
0047edf4  CMP dword ptr [EBP + 0x8],0x4
0047edf8  JLE 0x0047ee11
0047edfa  PUSH 0x80e
0047edff  PUSH 0x6bc694
0047ee04  PUSH 0x6bcc4c
0047ee09  CALL 0x005e9f20
0047ee0e  ADD ESP,0xc
0047ee11  CMP dword ptr [EBP + 0x8],0x0
0047ee15  JLE 0x0047ee25
0047ee17  MOV EDX,dword ptr [EBP + -0x4]
0047ee1a  MOV EAX,dword ptr [EBP + 0x8]
0047ee1d  MOV dword ptr [EDX + 0x484],EAX
0047ee23  JMP 0x0047ee27
0047ee25  JMP 0x0047ee83
0047ee27  MOV ECX,dword ptr [EBP + -0x4]
0047ee2a  MOV EDX,dword ptr [ECX + 0x24]
0047ee2d  MOV EAX,dword ptr [EDX + 0x14]
0047ee30  SUB EAX,0x7
0047ee33  PUSH EAX
0047ee34  MOV ECX,dword ptr [EBP + -0x4]
0047ee37  MOV EDX,dword ptr [ECX + 0x484]
0047ee3d  SUB EDX,0x1
0047ee40  IMUL EDX,EDX,0xd
0047ee43  MOV EAX,dword ptr [EBP + -0x4]
0047ee46  MOV ECX,dword ptr [EAX + 0x24]
0047ee49  MOV EAX,dword ptr [ECX + 0x10]
0047ee4c  LEA ECX,[EDX + EAX*0x1 + 0x56]
0047ee50  PUSH ECX
0047ee51  MOV EDX,dword ptr [EBP + -0x4]
0047ee54  MOV EAX,dword ptr [EDX + 0x4a0]
0047ee5a  MOV ECX,dword ptr [EBP + -0x4]
0047ee5d  MOV ECX,dword ptr [ECX + 0x4a0]
0047ee63  MOV EDX,dword ptr [EAX]
0047ee65  MOV EAX,dword ptr [EDX + 0x44]
0047ee68  CALL EAX
0047ee6a  MOV ECX,dword ptr [EBP + -0x4]
0047ee6d  MOV EDX,dword ptr [ECX + 0x4a0]
0047ee73  MOV EAX,dword ptr [EBP + -0x4]
0047ee76  MOV ECX,dword ptr [EAX + 0x4a0]
0047ee7c  MOV EDX,dword ptr [EDX]
0047ee7e  MOV EAX,dword ptr [EDX + 0x74]
0047ee81  CALL EAX
0047ee83  MOV ESP,EBP
0047ee85  POP EBP
0047ee86  RET 0x4

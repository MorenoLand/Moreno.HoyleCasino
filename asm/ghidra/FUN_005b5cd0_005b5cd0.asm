; FUN_005b5cd0  005b5cd0
005b5cd0  PUSH EBP
005b5cd1  MOV EBP,ESP
005b5cd3  SUB ESP,0x24
005b5cd6  MOV dword ptr [EBP + -0x20],ECX
005b5cd9  MOV dword ptr [EBP + -0x14],0x0
005b5ce0  MOV dword ptr [EBP + -0x18],0x0
005b5ce7  JMP 0x005b5cf2
005b5ce9  MOV EAX,dword ptr [EBP + -0x18]
005b5cec  ADD EAX,0x1
005b5cef  MOV dword ptr [EBP + -0x18],EAX
005b5cf2  CMP dword ptr [EBP + -0x18],0x4
005b5cf6  JGE 0x005b5d7d
005b5cfc  MOV ECX,dword ptr [EBP + -0x18]
005b5cff  PUSH ECX
005b5d00  MOV ECX,dword ptr [0x0162ee84]
005b5d06  CALL 0x00638ff0
005b5d0b  MOVZX EDX,AL
005b5d0e  TEST EDX,EDX
005b5d10  JNZ 0x005b5d14
005b5d12  JMP 0x005b5ce9
005b5d14  MOV byte ptr [EBP + -0x19],0x0
005b5d18  MOV EAX,dword ptr [EBP + -0x18]
005b5d1b  PUSH EAX
005b5d1c  MOV ECX,dword ptr [EBP + -0x20]
005b5d1f  CALL 0x005b5c90
005b5d24  MOV dword ptr [EBP + -0x24],EAX
005b5d27  CMP dword ptr [EBP + -0x24],0x1
005b5d2b  JZ 0x005b5d35
005b5d2d  CMP dword ptr [EBP + -0x24],0x2
005b5d31  JZ 0x005b5d4d
005b5d33  JMP 0x005b5d59
005b5d35  CMP dword ptr [EBP + 0x8],0x1
005b5d39  JNZ 0x005b5d41
005b5d3b  MOV byte ptr [EBP + -0x19],0x1
005b5d3f  JMP 0x005b5d4b
005b5d41  CMP dword ptr [EBP + 0x8],0x0
005b5d45  JNZ 0x005b5d4b
005b5d47  MOV byte ptr [EBP + -0x19],0x1
005b5d4b  JMP 0x005b5d5d
005b5d4d  CMP dword ptr [EBP + 0x8],0x2
005b5d51  JZ 0x005b5d57
005b5d53  MOV byte ptr [EBP + -0x19],0x1
005b5d57  JMP 0x005b5d5d
005b5d59  MOV byte ptr [EBP + -0x19],0x1
005b5d5d  MOVZX ECX,byte ptr [EBP + -0x19]
005b5d61  TEST ECX,ECX
005b5d63  JZ 0x005b5d78
005b5d65  MOV EDX,dword ptr [EBP + -0x14]
005b5d68  MOV EAX,dword ptr [EBP + -0x18]
005b5d6b  MOV dword ptr [EBP + EDX*0x4 + -0x10],EAX
005b5d6f  MOV ECX,dword ptr [EBP + -0x14]
005b5d72  ADD ECX,0x1
005b5d75  MOV dword ptr [EBP + -0x14],ECX
005b5d78  JMP 0x005b5ce9
005b5d7d  CMP dword ptr [EBP + -0x14],0x0
005b5d81  JNZ 0x005b5d8a
005b5d83  OR EAX,0xffffffff
005b5d86  JMP 0x005b5d9f
005b5d8a  MOV EDX,dword ptr [EBP + -0x14]
005b5d8d  SUB EDX,0x1
005b5d90  PUSH EDX
005b5d91  PUSH 0x0
005b5d93  CALL 0x0062fc30
005b5d98  ADD ESP,0x8
005b5d9b  MOV EAX,dword ptr [EBP + EAX*0x4 + -0x10]
005b5d9f  MOV ESP,EBP
005b5da1  POP EBP
005b5da2  RET 0x4

; FUN_005afcd0  005afcd0
005afcd0  PUSH EBP
005afcd1  MOV EBP,ESP
005afcd3  PUSH ECX
005afcd4  MOV dword ptr [EBP + -0x4],ECX
005afcd7  MOVZX EAX,byte ptr [EBP + 0x8]
005afcdb  TEST EAX,EAX
005afcdd  JZ 0x005afcec
005afcdf  PUSH 0x0
005afce1  MOV ECX,dword ptr [0x00793604]
005afce7  CALL 0x005b7460
005afcec  MOV ECX,dword ptr [EBP + -0x4]
005afcef  CALL 0x005db9b0
005afcf4  MOV ECX,dword ptr [0x00793604]
005afcfa  MOVZX EDX,byte ptr [ECX + 0x678]
005afd01  TEST EDX,EDX
005afd03  JZ 0x005afd2b
005afd05  MOV EAX,[0x00793604]
005afd0a  MOV byte ptr [EAX + 0x678],0x0
005afd11  MOV ECX,dword ptr [0x00793604]
005afd17  CALL 0x005b6a60
005afd1c  PUSH 0x0
005afd1e  MOV ECX,dword ptr [0x007935fc]
005afd24  CALL 0x005aef40
005afd29  JMP 0x005afd4f
005afd2b  MOV ECX,dword ptr [0x00793604]
005afd31  MOV byte ptr [ECX + 0x678],0x1
005afd38  PUSH 0x0
005afd3a  PUSH 0x1
005afd3c  MOV EDX,dword ptr [EBP + -0x4]
005afd3f  MOV EAX,dword ptr [EDX + 0x4]
005afd42  MOV ECX,dword ptr [EBP + -0x4]
005afd45  MOV ECX,dword ptr [ECX + 0x4]
005afd48  MOV EDX,dword ptr [EAX]
005afd4a  MOV EAX,dword ptr [EDX + 0x8]
005afd4d  CALL EAX
005afd4f  MOVZX ECX,byte ptr [EBP + 0x8]
005afd53  TEST ECX,ECX
005afd55  JZ 0x005afd64
005afd57  MOV EDX,dword ptr [0x00793604]
005afd5d  MOV byte ptr [EDX + 0x678],0x1
005afd64  MOV ESP,EBP
005afd66  POP EBP
005afd67  RET 0x4

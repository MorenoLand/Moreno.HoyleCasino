; FUN_005dcd90  005dcd90
005dcd90  PUSH EBP
005dcd91  MOV EBP,ESP
005dcd93  SUB ESP,0x1c
005dcd96  MOV dword ptr [EBP + -0x18],ECX
005dcd99  MOV dword ptr [EBP + -0x4],0x0
005dcda0  MOV dword ptr [EBP + -0x8],0x0
005dcda7  JMP 0x005dcdb2
005dcda9  MOV EAX,dword ptr [EBP + -0x8]
005dcdac  ADD EAX,0x1
005dcdaf  MOV dword ptr [EBP + -0x8],EAX
005dcdb2  MOV ECX,dword ptr [0x0162ee84]
005dcdb8  MOV EDX,dword ptr [ECX]
005dcdba  MOV ECX,dword ptr [0x0162ee84]
005dcdc0  MOV EAX,dword ptr [EDX + 0x10c]
005dcdc6  CALL EAX
005dcdc8  CMP dword ptr [EBP + -0x8],EAX
005dcdcb  JGE 0x005dce60
005dcdd1  MOV ECX,dword ptr [EBP + -0x8]
005dcdd4  PUSH ECX
005dcdd5  CALL 0x005dcb00
005dcdda  ADD ESP,0x4
005dcddd  MOV dword ptr [EBP + -0x4],EAX
005dcde0  CMP dword ptr [EBP + -0x4],0x0
005dcde4  JZ 0x005dce5b
005dcde6  MOV EDX,dword ptr [EBP + -0x8]
005dcde9  PUSH EDX
005dcdea  CALL 0x005dcb00
005dcdef  ADD ESP,0x4
005dcdf2  MOV dword ptr [EBP + -0x14],EAX
005dcdf5  MOV ECX,dword ptr [EBP + -0x14]
005dcdf8  CALL 0x0063aac0
005dcdfd  MOV EAX,dword ptr [EAX]
005dcdff  MOV dword ptr [EBP + -0xc],EAX
005dce02  CMP dword ptr [EBP + -0xc],0x2
005dce06  JZ 0x005dce24
005dce08  MOV ECX,dword ptr [EBP + -0x14]
005dce0b  CALL 0x0063aac0
005dce10  MOV ECX,dword ptr [EAX]
005dce12  MOV dword ptr [EBP + -0x10],ECX
005dce15  CMP dword ptr [EBP + -0x10],0x3
005dce19  JZ 0x005dce24
005dce1b  MOV dword ptr [EBP + -0x1c],0x0
005dce22  JMP 0x005dce2b
005dce24  MOV dword ptr [EBP + -0x1c],0x1
005dce2b  MOVZX EDX,byte ptr [EBP + -0x1c]
005dce2f  TEST EDX,EDX
005dce31  JZ 0x005dce5b
005dce33  MOV EAX,dword ptr [EBP + -0x8]
005dce36  PUSH EAX
005dce37  CALL 0x005dcb00
005dce3c  ADD ESP,0x4
005dce3f  CMP dword ptr [EAX + 0x4b4],0x0
005dce46  JZ 0x005dce5b
005dce48  MOV ECX,dword ptr [EBP + -0x8]
005dce4b  PUSH ECX
005dce4c  CALL 0x005dcb00
005dce51  ADD ESP,0x4
005dce54  MOV ECX,EAX
005dce56  CALL 0x005d74b0
005dce5b  JMP 0x005dcda9
005dce60  MOV ECX,dword ptr [EBP + -0x18]
005dce63  CALL 0x00631960
005dce68  MOV ESP,EBP
005dce6a  POP EBP
005dce6b  RET

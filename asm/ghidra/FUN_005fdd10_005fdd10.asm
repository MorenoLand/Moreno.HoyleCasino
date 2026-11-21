; FUN_005fdd10  005fdd10
005fdd10  PUSH EBP
005fdd11  MOV EBP,ESP
005fdd13  SUB ESP,0x10
005fdd16  MOV dword ptr [EBP + -0x10],ECX
005fdd19  MOV dword ptr [EBP + -0x4],0x0
005fdd20  MOV ECX,dword ptr [EBP + -0x10]
005fdd23  CALL 0x005fe7f0
005fdd28  MOV dword ptr [EBP + -0x8],EAX
005fdd2b  MOV dword ptr [EBP + -0x4],0x0
005fdd32  JMP 0x005fdd3d
005fdd34  MOV EAX,dword ptr [EBP + -0x4]
005fdd37  ADD EAX,0x1
005fdd3a  MOV dword ptr [EBP + -0x4],EAX
005fdd3d  MOV ECX,dword ptr [EBP + -0x10]
005fdd40  CALL 0x005feda0
005fdd45  CMP dword ptr [EBP + -0x4],EAX
005fdd48  JGE 0x005fdd75
005fdd4a  MOV ECX,dword ptr [EBP + -0x4]
005fdd4d  PUSH ECX
005fdd4e  MOV ECX,dword ptr [EBP + -0x10]
005fdd51  CALL 0x005ff080
005fdd56  MOV dword ptr [EBP + -0xc],EAX
005fdd59  CMP dword ptr [EBP + -0xc],0x0
005fdd5d  JZ 0x005fdd73
005fdd5f  MOV EDX,dword ptr [EBP + -0x8]
005fdd62  PUSH EDX
005fdd63  MOV EAX,dword ptr [EBP + -0xc]
005fdd66  MOV EDX,dword ptr [EAX]
005fdd68  MOV ECX,dword ptr [EBP + -0xc]
005fdd6b  MOV EAX,dword ptr [EDX + 0xc8]
005fdd71  CALL EAX
005fdd73  JMP 0x005fdd34
005fdd75  PUSH 0x0
005fdd77  MOV ECX,dword ptr [EBP + -0x10]
005fdd7a  CALL 0x005fb2b0
005fdd7f  TEST EAX,EAX
005fdd81  JZ 0x005fdd98
005fdd83  MOV ECX,dword ptr [EBP + -0x8]
005fdd86  PUSH ECX
005fdd87  PUSH 0x0
005fdd89  MOV ECX,dword ptr [EBP + -0x10]
005fdd8c  CALL 0x005fb2b0
005fdd91  MOV ECX,EAX
005fdd93  CALL 0x005eaf00
005fdd98  PUSH 0x1
005fdd9a  MOV ECX,dword ptr [EBP + -0x10]
005fdd9d  CALL 0x005fb2b0
005fdda2  TEST EAX,EAX
005fdda4  JZ 0x005fddbb
005fdda6  MOV EDX,dword ptr [EBP + -0x8]
005fdda9  PUSH EDX
005fddaa  PUSH 0x1
005fddac  MOV ECX,dword ptr [EBP + -0x10]
005fddaf  CALL 0x005fb2b0
005fddb4  MOV ECX,EAX
005fddb6  CALL 0x005eaf00
005fddbb  MOV ECX,dword ptr [EBP + -0x10]
005fddbe  CALL 0x005fed00
005fddc3  ADD EAX,dword ptr [0x006d6eb8]
005fddc9  PUSH EAX
005fddca  MOV ECX,dword ptr [EBP + -0x10]
005fddcd  CALL 0x005fecb0
005fddd2  ADD EAX,dword ptr [0x006d6eb4]
005fddd8  PUSH EAX
005fddd9  MOV ECX,dword ptr [EBP + -0x10]
005fdddc  CALL 0x005f8510
005fdde1  MOV ESP,EBP
005fdde3  POP EBP
005fdde4  RET

; FUN_005fcc50  005fcc50
005fcc50  PUSH EBP
005fcc51  MOV EBP,ESP
005fcc53  SUB ESP,0x14
005fcc56  MOV dword ptr [EBP + -0x8],ECX
005fcc59  MOV dword ptr [EBP + -0x4],0x0
005fcc60  JMP 0x005fcc6b
005fcc62  MOV EAX,dword ptr [EBP + -0x4]
005fcc65  ADD EAX,0x1
005fcc68  MOV dword ptr [EBP + -0x4],EAX
005fcc6b  MOV ECX,dword ptr [EBP + -0x8]
005fcc6e  MOV ECX,dword ptr [ECX + 0x1f0]
005fcc74  CALL 0x005feda0
005fcc79  CMP dword ptr [EBP + -0x4],EAX
005fcc7c  JGE 0x005fcd1f
005fcc82  MOV EDX,dword ptr [EBP + -0x4]
005fcc85  PUSH EDX
005fcc86  MOV EAX,dword ptr [EBP + -0x8]
005fcc89  MOV ECX,dword ptr [EAX + 0x1f0]
005fcc8f  CALL 0x005ff080
005fcc94  MOV dword ptr [EBP + -0xc],EAX
005fcc97  MOV ECX,dword ptr [EBP + 0x8]
005fcc9a  PUSH ECX
005fcc9b  MOV EDX,dword ptr [EBP + -0xc]
005fcc9e  MOV EAX,dword ptr [EDX]
005fcca0  MOV ECX,dword ptr [EBP + -0xc]
005fcca3  MOV EDX,dword ptr [EAX + 0x84]
005fcca9  CALL EDX
005fccab  MOVZX EAX,AL
005fccae  TEST EAX,EAX
005fccb0  JZ 0x005fccb6
005fccb2  XOR AL,AL
005fccb4  JMP 0x005fcd21
005fccb6  PUSH 0x0
005fccb8  MOV ECX,dword ptr [EBP + -0x8]
005fccbb  MOV ECX,dword ptr [ECX + 0x1f0]
005fccc1  CALL 0x005fb2b0
005fccc6  MOV dword ptr [EBP + -0x10],EAX
005fccc9  MOV EDX,dword ptr [EBP + 0x8]
005fcccc  PUSH EDX
005fcccd  MOV EAX,dword ptr [EBP + -0x10]
005fccd0  MOV EDX,dword ptr [EAX]
005fccd2  MOV ECX,dword ptr [EBP + -0x10]
005fccd5  MOV EAX,dword ptr [EDX + 0x84]
005fccdb  CALL EAX
005fccdd  MOVZX ECX,AL
005fcce0  TEST ECX,ECX
005fcce2  JZ 0x005fcce8
005fcce4  XOR AL,AL
005fcce6  JMP 0x005fcd21
005fcce8  PUSH 0x1
005fccea  MOV EDX,dword ptr [EBP + -0x8]
005fcced  MOV ECX,dword ptr [EDX + 0x1f0]
005fccf3  CALL 0x005fb2b0
005fccf8  MOV dword ptr [EBP + -0x14],EAX
005fccfb  MOV EAX,dword ptr [EBP + 0x8]
005fccfe  PUSH EAX
005fccff  MOV ECX,dword ptr [EBP + -0x14]
005fcd02  MOV EDX,dword ptr [ECX]
005fcd04  MOV ECX,dword ptr [EBP + -0x14]
005fcd07  MOV EAX,dword ptr [EDX + 0x84]
005fcd0d  CALL EAX
005fcd0f  MOVZX ECX,AL
005fcd12  TEST ECX,ECX
005fcd14  JZ 0x005fcd1a
005fcd16  XOR AL,AL
005fcd18  JMP 0x005fcd21
005fcd1a  JMP 0x005fcc62
005fcd1f  MOV AL,0x1
005fcd21  MOV ESP,EBP
005fcd23  POP EBP
005fcd24  RET 0x4

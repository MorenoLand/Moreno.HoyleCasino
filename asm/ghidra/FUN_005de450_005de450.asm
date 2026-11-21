; FUN_005de450  005de450
005de450  PUSH EBP
005de451  MOV EBP,ESP
005de453  SUB ESP,0x24
005de456  MOV dword ptr [EBP + -0x20],ECX
005de459  MOV dword ptr [EBP + -0x8],0x0
005de460  MOV dword ptr [EBP + -0x4],0x0
005de467  JMP 0x005de472
005de469  MOV EAX,dword ptr [EBP + -0x4]
005de46c  ADD EAX,0x1
005de46f  MOV dword ptr [EBP + -0x4],EAX
005de472  MOV ECX,dword ptr [0x0162ee84]
005de478  MOV EDX,dword ptr [ECX]
005de47a  MOV ECX,dword ptr [0x0162ee84]
005de480  MOV EAX,dword ptr [EDX + 0x10c]
005de486  CALL EAX
005de488  CMP dword ptr [EBP + -0x4],EAX
005de48b  JGE 0x005de51d
005de491  MOV ECX,dword ptr [EBP + -0x4]
005de494  PUSH ECX
005de495  CALL 0x005dcb00
005de49a  ADD ESP,0x4
005de49d  MOV dword ptr [EBP + -0x14],EAX
005de4a0  MOV ECX,dword ptr [EBP + -0x14]
005de4a3  CALL 0x0063aac0
005de4a8  MOV EDX,dword ptr [EAX]
005de4aa  MOV dword ptr [EBP + -0xc],EDX
005de4ad  CMP dword ptr [EBP + -0xc],0x2
005de4b1  JZ 0x005de4cf
005de4b3  MOV ECX,dword ptr [EBP + -0x14]
005de4b6  CALL 0x0063aac0
005de4bb  MOV EAX,dword ptr [EAX]
005de4bd  MOV dword ptr [EBP + -0x10],EAX
005de4c0  CMP dword ptr [EBP + -0x10],0x3
005de4c4  JZ 0x005de4cf
005de4c6  MOV dword ptr [EBP + -0x24],0x0
005de4cd  JMP 0x005de4d6
005de4cf  MOV dword ptr [EBP + -0x24],0x1
005de4d6  MOVZX ECX,byte ptr [EBP + -0x24]
005de4da  TEST ECX,ECX
005de4dc  JZ 0x005de518
005de4de  MOV EDX,dword ptr [EBP + -0x4]
005de4e1  PUSH EDX
005de4e2  CALL 0x005dcb00
005de4e7  ADD ESP,0x4
005de4ea  MOV dword ptr [EBP + -0x18],EAX
005de4ed  MOV ECX,dword ptr [EBP + -0x18]
005de4f0  CALL 0x0063aac0
005de4f5  ADD EAX,0x4
005de4f8  MOV dword ptr [EBP + -0x1c],EAX
005de4fb  MOV EAX,dword ptr [EBP + -0x1c]
005de4fe  PUSH EAX
005de4ff  MOV ECX,dword ptr [EBP + 0x8]
005de502  PUSH ECX
005de503  CALL 0x00686ec0
005de508  ADD ESP,0x8
005de50b  TEST EAX,EAX
005de50d  JNZ 0x005de518
005de50f  MOV EDX,dword ptr [EBP + -0x8]
005de512  ADD EDX,0x1
005de515  MOV dword ptr [EBP + -0x8],EDX
005de518  JMP 0x005de469
005de51d  MOV EAX,dword ptr [EBP + -0x8]
005de520  MOV ESP,EBP
005de522  POP EBP
005de523  RET 0x4

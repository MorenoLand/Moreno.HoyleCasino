; FUN_005cd620  005cd620
005cd620  PUSH EBP
005cd621  MOV EBP,ESP
005cd623  PUSH ECX
005cd624  MOV dword ptr [EBP + -0x4],ECX
005cd627  MOV AL,byte ptr [EBP + 0x8]
005cd62a  PUSH EAX
005cd62b  MOV ECX,dword ptr [EBP + -0x4]
005cd62e  CALL 0x005f0ae0
005cd633  MOV ECX,dword ptr [EBP + -0x4]
005cd636  CMP dword ptr [ECX + 0x1d0],0x0
005cd63d  JZ 0x005cd68d
005cd63f  MOV ECX,dword ptr [EBP + -0x4]
005cd642  CALL 0x005f54a0
005cd647  MOVZX EDX,AL
005cd64a  TEST EDX,EDX
005cd64c  JZ 0x005cd68d
005cd64e  MOVZX EAX,byte ptr [EBP + 0x8]
005cd652  CMP EAX,0xff
005cd657  JGE 0x005cd674
005cd659  MOV ECX,dword ptr [EBP + -0x4]
005cd65c  MOV EDX,dword ptr [ECX + 0x1d0]
005cd662  MOV EAX,dword ptr [EBP + -0x4]
005cd665  MOV ECX,dword ptr [EAX + 0x1d0]
005cd66b  MOV EDX,dword ptr [EDX]
005cd66d  MOV EAX,dword ptr [EDX + 0x70]
005cd670  CALL EAX
005cd672  JMP 0x005cd68d
005cd674  MOV ECX,dword ptr [EBP + -0x4]
005cd677  MOV EDX,dword ptr [ECX + 0x1d0]
005cd67d  MOV EAX,dword ptr [EBP + -0x4]
005cd680  MOV ECX,dword ptr [EAX + 0x1d0]
005cd686  MOV EDX,dword ptr [EDX]
005cd688  MOV EAX,dword ptr [EDX + 0x74]
005cd68b  CALL EAX
005cd68d  MOV ESP,EBP
005cd68f  POP EBP
005cd690  RET 0x4

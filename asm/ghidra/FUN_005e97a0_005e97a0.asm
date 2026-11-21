; FUN_005e97a0  005e97a0
005e97a0  PUSH EBP
005e97a1  MOV EBP,ESP
005e97a3  SUB ESP,0x8
005e97a6  MOV dword ptr [EBP + -0x8],ECX
005e97a9  MOV EAX,dword ptr [EBP + 0x8]
005e97ac  PUSH EAX
005e97ad  MOV ECX,dword ptr [EBP + -0x8]
005e97b0  CALL 0x005e96b0
005e97b5  CMP dword ptr [EBP + 0x8],0xc8
005e97bc  JNZ 0x005e97e9
005e97be  MOV ECX,dword ptr [EBP + -0x8]
005e97c1  CALL 0x005e9590
005e97c6  MOV dword ptr [EBP + -0x4],EAX
005e97c9  CMP dword ptr [EBP + -0x4],-0x1
005e97cd  JZ 0x005e97e9
005e97cf  MOV ECX,dword ptr [EBP + -0x4]
005e97d2  PUSH ECX
005e97d3  MOV ECX,dword ptr [EBP + -0x8]
005e97d6  CALL 0x005e9640
005e97db  PUSH EAX
005e97dc  MOV EDX,dword ptr [EBP + -0x8]
005e97df  MOV EAX,dword ptr [EDX]
005e97e1  MOV ECX,dword ptr [EBP + -0x8]
005e97e4  MOV EDX,dword ptr [EAX + 0x4c]
005e97e7  CALL EDX
005e97e9  MOV ESP,EBP
005e97eb  POP EBP
005e97ec  RET 0x4

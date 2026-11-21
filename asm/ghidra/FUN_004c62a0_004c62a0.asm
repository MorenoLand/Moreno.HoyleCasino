; FUN_004c62a0  004c62a0
004c62a0  PUSH EBP
004c62a1  MOV EBP,ESP
004c62a3  SUB ESP,0xc
004c62a6  MOV dword ptr [EBP + -0xc],ECX
004c62a9  MOV EAX,dword ptr [EBP + -0xc]
004c62ac  MOV ECX,dword ptr [EAX + 0x4]
004c62af  PUSH ECX
004c62b0  CALL 0x005dcb00
004c62b5  ADD ESP,0x4
004c62b8  MOV dword ptr [EBP + -0x4],EAX
004c62bb  MOV ECX,dword ptr [EBP + -0x4]
004c62be  CALL 0x005d52e0
004c62c3  MOV DL,byte ptr [EAX + 0x29]
004c62c6  MOV byte ptr [EBP + -0x5],DL
004c62c9  MOV AL,byte ptr [EBP + -0x5]
004c62cc  MOV ESP,EBP
004c62ce  POP EBP
004c62cf  RET

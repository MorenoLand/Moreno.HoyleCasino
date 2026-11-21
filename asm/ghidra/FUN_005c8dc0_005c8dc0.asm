; FUN_005c8dc0  005c8dc0
005c8dc0  PUSH EBP
005c8dc1  MOV EBP,ESP
005c8dc3  SUB ESP,0x10
005c8dc6  MOV dword ptr [EBP + -0x10],ECX
005c8dc9  MOV EAX,dword ptr [EBP + -0x10]
005c8dcc  MOV ECX,dword ptr [EAX + 0xc]
005c8dcf  MOV dword ptr [EBP + -0x8],ECX
005c8dd2  MOV EDX,dword ptr [EBP + -0x8]
005c8dd5  ADD EDX,0x1
005c8dd8  MOV dword ptr [EBP + -0x4],EDX
005c8ddb  MOV EAX,dword ptr [EBP + -0x10]
005c8dde  MOV ECX,dword ptr [EAX + 0x10]
005c8de1  MOV EDX,dword ptr [ECX + 0x8]
005c8de4  MOV dword ptr [EBP + -0xc],EDX
005c8de7  MOV EAX,dword ptr [EBP + -0x4]
005c8dea  CMP EAX,dword ptr [EBP + -0xc]
005c8ded  JG 0x005c8dff
005c8def  PUSH 0x1
005c8df1  MOV ECX,dword ptr [EBP + -0x4]
005c8df4  PUSH ECX
005c8df5  MOV ECX,dword ptr [EBP + -0x10]
005c8df8  CALL 0x005c8e20
005c8dfd  JMP 0x005c8e13
005c8dff  MOVZX EDX,byte ptr [EBP + 0x8]
005c8e03  TEST EDX,EDX
005c8e05  JZ 0x005c8e13
005c8e07  PUSH 0x0
005c8e09  PUSH 0x2
005c8e0b  MOV ECX,dword ptr [EBP + -0x10]
005c8e0e  CALL 0x005c8e20
005c8e13  MOV ESP,EBP
005c8e15  POP EBP
005c8e16  RET 0x4

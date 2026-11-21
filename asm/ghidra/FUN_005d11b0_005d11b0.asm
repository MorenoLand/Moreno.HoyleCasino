; FUN_005d11b0  005d11b0
005d11b0  PUSH EBP
005d11b1  MOV EBP,ESP
005d11b3  SUB ESP,0xc
005d11b6  MOV dword ptr [EBP + -0xc],ECX
005d11b9  MOV byte ptr [EBP + -0x2],0x0
005d11bd  MOV byte ptr [EBP + -0x1],0x0
005d11c1  MOV byte ptr [EBP + -0x2],0x0
005d11c5  MOV EAX,dword ptr [EBP + -0xc]
005d11c8  MOV ECX,dword ptr [EAX + 0x8]
005d11cb  MOV dword ptr [EBP + -0x8],ECX
005d11ce  MOV EDX,dword ptr [EBP + -0xc]
005d11d1  MOV EAX,dword ptr [EDX]
005d11d3  MOV ECX,dword ptr [EBP + -0xc]
005d11d6  MOV EDX,dword ptr [EAX + 0x4]
005d11d9  CALL EDX
005d11db  XOR ECX,ECX
005d11dd  CMP dword ptr [EBP + -0x8],EAX
005d11e0  SETGE CL
005d11e3  MOV byte ptr [EBP + -0x1],CL
005d11e6  MOVZX EDX,byte ptr [EBP + -0x1]
005d11ea  TEST EDX,EDX
005d11ec  JNZ 0x005d11f9
005d11ee  MOV ECX,dword ptr [EBP + -0xc]
005d11f1  CALL 0x005d0ff0
005d11f6  MOV byte ptr [EBP + -0x2],AL
005d11f9  MOVZX EAX,byte ptr [EBP + -0x2]
005d11fd  TEST EAX,EAX
005d11ff  JNZ 0x005d11c1
005d1201  MOV ESP,EBP
005d1203  POP EBP
005d1204  RET

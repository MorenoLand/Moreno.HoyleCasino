; FUN_004fd5d0  004fd5d0
004fd5d0  PUSH EBP
004fd5d1  MOV EBP,ESP
004fd5d3  SUB ESP,0x8
004fd5d6  MOV dword ptr [EBP + -0x4],ECX
004fd5d9  MOV ECX,dword ptr [EBP + -0x4]
004fd5dc  CALL 0x005fc360
004fd5e1  MOV dword ptr [EBP + -0x8],EAX
004fd5e4  CMP dword ptr [EBP + -0x8],0x0
004fd5e8  JZ 0x004fd5f2
004fd5ea  CMP dword ptr [EBP + -0x8],0x1
004fd5ee  JZ 0x004fd605
004fd5f0  JMP 0x004fd62f
004fd5f2  PUSH 0x0
004fd5f4  PUSH 0x1
004fd5f6  MOV EAX,dword ptr [EBP + -0x4]
004fd5f9  MOV EDX,dword ptr [EAX]
004fd5fb  MOV ECX,dword ptr [EBP + -0x4]
004fd5fe  MOV EAX,dword ptr [EDX + 0x8]
004fd601  CALL EAX
004fd603  JMP 0x004fd62f
004fd605  PUSH 0x0
004fd607  MOV ECX,dword ptr [0x00791eb8]
004fd60d  MOV EDX,dword ptr [ECX + 0x4]
004fd610  MOV EAX,[0x00791eb8]
004fd615  MOV ECX,dword ptr [EAX + 0x4]
004fd618  MOV EDX,dword ptr [EDX]
004fd61a  MOV EAX,dword ptr [EDX + 0x1c]
004fd61d  CALL EAX
004fd61f  PUSH 0x0
004fd621  MOV ECX,dword ptr [0x00791eb8]
004fd627  MOV ECX,dword ptr [ECX + 0x4]
004fd62a  CALL 0x005fc420
004fd62f  MOV ESP,EBP
004fd631  POP EBP
004fd632  RET

; FUN_0061b450  0061b450
0061b450  PUSH EBP
0061b451  MOV EBP,ESP
0061b453  SUB ESP,0xb0
0061b459  PUSH EBX
0061b45a  PUSH ESI
0061b45b  PUSH EDI
0061b45c  MOV dword ptr [EBP + -0x10],0x4
0061b463  PUSH 0xf2
0061b468  PUSH 0x27
0061b46a  PUSH 0xf8
0061b46f  CALL 0x00617ab0
0061b474  ADD ESP,0xc
0061b477  MOV dword ptr [EBP + -0x2c],EAX
0061b47a  PUSH 0x28
0061b47c  PUSH 0x42
0061b47e  PUSH 0xf7
0061b483  CALL 0x00617ab0
0061b488  ADD ESP,0xc
0061b48b  MOV dword ptr [EBP + -0x1c],EAX
0061b48e  PUSH 0x2c
0061b490  PUSH 0xf3
0061b495  PUSH 0xee
0061b49a  CALL 0x00617ab0
0061b49f  ADD ESP,0xc
0061b4a2  MOV dword ptr [EBP + -0x18],EAX
0061b4a5  PUSH 0x2c
0061b4a7  PUSH 0xf3
0061b4ac  PUSH 0x8a
0061b4b1  CALL 0x00617ab0
0061b4b6  ADD ESP,0xc
0061b4b9  MOV dword ptr [EBP + -0x4],EAX
0061b4bc  PUSH 0xf2
0061b4c1  PUSH 0xf2
0061b4c6  PUSH 0x2d
0061b4c8  CALL 0x00617ab0
0061b4cd  ADD ESP,0xc
0061b4d0  MOV dword ptr [EBP + -0xc],EAX
0061b4d3  PUSH 0xf4
0061b4d8  PUSH 0x2b
0061b4da  PUSH 0x30
0061b4dc  CALL 0x00617ab0
0061b4e1  ADD ESP,0xc
0061b4e4  MOV dword ptr [EBP + -0x30],EAX
0061b4e7  MOV EAX,dword ptr [EBP + 0xc]
0061b4ea  MOVZX ECX,byte ptr [EAX]
0061b4ed  MOV dword ptr [EBP + -0x24],ECX
0061b4f0  MOV EDX,dword ptr [EBP + 0xc]
0061b4f3  MOV AX,word ptr [EDX + 0x1]
0061b4f7  MOV word ptr [EBP + -0x28],AX
0061b4fb  MOV ECX,dword ptr [EBP + 0xc]
0061b4fe  ADD ECX,0x3
0061b501  MOV dword ptr [EBP + 0xc],ECX
0061b504  MOVZX EDX,word ptr [EBP + -0x28]
0061b508  CMP dword ptr [EBP + 0x10],EDX
0061b50b  JL 0x0061b5de
0061b511  MOVZX EAX,word ptr [EBP + -0x28]
0061b515  TEST EAX,EAX
0061b517  JLE 0x0061b5de
0061b51d  MOVZX ECX,word ptr [EBP + -0x28]
0061b521  MOV EDX,dword ptr [EBP + 0x10]
0061b524  SUB EDX,ECX
0061b526  MOV dword ptr [EBP + 0x10],EDX
0061b529  MOV EAX,dword ptr [EBP + -0x24]
0061b52c  MOV dword ptr [EBP + 0xffffff54],EAX
0061b532  MOV ECX,dword ptr [EBP + 0xffffff54]
0061b538  SUB ECX,0x2
0061b53b  MOV dword ptr [EBP + 0xffffff54],ECX
0061b541  CMP dword ptr [EBP + 0xffffff54],0x86
0061b54b  JA 0x0061b5bc
0061b54d  MOV EDX,dword ptr [EBP + 0xffffff54]
0061b553  MOVZX EAX,byte ptr [EDX + 0x61c2e0]
0061b55a  JMP dword ptr [EAX*0x4 + 0x61c2c0]
0061b5bc  MOV EAX,dword ptr [EBP + 0xc]
0061b5bf  MOVZX ECX,byte ptr [EAX]
0061b5c2  MOV dword ptr [EBP + -0x24],ECX
0061b5c5  MOV EDX,dword ptr [EBP + 0xc]
0061b5c8  MOV AX,word ptr [EDX + 0x1]
0061b5cc  MOV word ptr [EBP + -0x28],AX
0061b5d0  MOV ECX,dword ptr [EBP + 0xc]
0061b5d3  ADD ECX,0x3
0061b5d6  MOV dword ptr [EBP + 0xc],ECX
0061b5d9  JMP 0x0061b504
0061b5de  CMP dword ptr [EBP + 0x14],0x0
0061b5e2  JLE 0x0061c2b9
0061b5e8  MOVZX EDX,word ptr [EBP + -0x28]
0061b5ec  TEST EDX,EDX
0061b5ee  JLE 0x0061c2b9
0061b5f4  MOVZX EAX,word ptr [EBP + -0x28]
0061b5f8  SUB EAX,dword ptr [EBP + 0x10]
0061b5fb  MOV word ptr [EBP + -0x28],AX
0061b5ff  MOV ECX,dword ptr [EBP + -0x24]
0061b602  MOV dword ptr [EBP + 0xffffff50],ECX
0061b608  MOV EDX,dword ptr [EBP + 0xffffff50]
0061b60e  SUB EDX,0x1
0061b611  MOV dword ptr [EBP + 0xffffff50],EDX
0061b617  CMP dword ptr [EBP + 0xffffff50],0x87
0061b621  JA 0x0061c285
0061b627  MOV EAX,dword ptr [EBP + 0xffffff50]
0061b62d  MOVZX ECX,byte ptr [EAX + 0x61c39c]
0061b634  JMP dword ptr [ECX*0x4 + 0x61c368]
0061c285  CMP dword ptr [EBP + 0x14],0x0
0061c289  JZ 0x0061c2b4
0061c28b  MOVZX EDX,word ptr [EBP + -0x28]
0061c28f  MOV EAX,dword ptr [EBP + 0x14]
0061c292  SUB EAX,EDX
0061c294  MOV dword ptr [EBP + 0x14],EAX
0061c297  MOV ECX,dword ptr [EBP + 0xc]
0061c29a  MOVZX EDX,byte ptr [ECX]
0061c29d  MOV dword ptr [EBP + -0x24],EDX
0061c2a0  MOV EAX,dword ptr [EBP + 0xc]
0061c2a3  MOV CX,word ptr [EAX + 0x1]
0061c2a7  MOV word ptr [EBP + -0x28],CX
0061c2ab  MOV EDX,dword ptr [EBP + 0xc]
0061c2ae  ADD EDX,0x3
0061c2b1  MOV dword ptr [EBP + 0xc],EDX
0061c2b4  JMP 0x0061b5de
0061c2b9  POP EDI
0061c2ba  POP ESI
0061c2bb  POP EBX
0061c2bc  MOV ESP,EBP
0061c2be  POP EBP
0061c2bf  RET

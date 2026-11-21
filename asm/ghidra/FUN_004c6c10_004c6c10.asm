; FUN_004c6c10  004c6c10
004c6c10  PUSH EBP
004c6c11  MOV EBP,ESP
004c6c13  SUB ESP,0xc
004c6c16  MOV dword ptr [EBP + -0xc],ECX
004c6c19  MOV EAX,dword ptr [EBP + -0xc]
004c6c1c  MOV ECX,dword ptr [EAX + 0x68]
004c6c1f  SUB ECX,dword ptr [EBP + 0x8]
004c6c22  MOV EDX,dword ptr [EBP + -0xc]
004c6c25  MOV dword ptr [EDX + 0x68],ECX
004c6c28  MOV ECX,dword ptr [EBP + -0xc]
004c6c2b  CALL 0x004c61b0
004c6c30  MOVZX EAX,AL
004c6c33  TEST EAX,EAX
004c6c35  JZ 0x004c6c5a
004c6c37  MOV ECX,dword ptr [0x00791364]
004c6c3d  MOVZX EDX,byte ptr [ECX + 0x38]
004c6c41  TEST EDX,EDX
004c6c43  JZ 0x004c6c5a
004c6c45  MOV EAX,dword ptr [EBP + -0xc]
004c6c48  MOV ECX,dword ptr [EAX + 0x80]
004c6c4e  ADD ECX,dword ptr [EBP + 0x8]
004c6c51  MOV EDX,dword ptr [EBP + -0xc]
004c6c54  MOV dword ptr [EDX + 0x80],ECX
004c6c5a  MOV EAX,dword ptr [EBP + 0x8]
004c6c5d  NEG EAX
004c6c5f  MOV dword ptr [EBP + -0x8],EAX
004c6c62  MOV dword ptr [EBP + -0x4],0x0
004c6c69  MOV ECX,dword ptr [EBP + -0x4]
004c6c6c  PUSH ECX
004c6c6d  MOV EDX,dword ptr [EBP + -0x8]
004c6c70  PUSH EDX
004c6c71  MOV EAX,dword ptr [EBP + -0xc]
004c6c74  MOV ECX,dword ptr [EAX + 0x4]
004c6c77  PUSH ECX
004c6c78  CALL 0x005dcb00
004c6c7d  ADD ESP,0x4
004c6c80  MOV ECX,EAX
004c6c82  CALL 0x005d5cf0
004c6c87  PUSH 0x0
004c6c89  MOV EDX,dword ptr [EBP + -0xc]
004c6c8c  MOV EAX,dword ptr [EDX + 0x4]
004c6c8f  PUSH EAX
004c6c90  MOV ECX,dword ptr [0x00791eb8]
004c6c96  CALL 0x005d9180
004c6c9b  MOV ECX,dword ptr [EBP + -0xc]
004c6c9e  CALL 0x004c6a70
004c6ca3  MOV ESP,EBP
004c6ca5  POP EBP
004c6ca6  RET 0x4

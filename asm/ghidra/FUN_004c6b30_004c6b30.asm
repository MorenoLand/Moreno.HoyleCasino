; FUN_004c6b30  004c6b30
004c6b30  PUSH EBP
004c6b31  MOV EBP,ESP
004c6b33  SUB ESP,0x8
004c6b36  MOV dword ptr [EBP + -0x4],ECX
004c6b39  MOV EAX,dword ptr [EBP + -0x4]
004c6b3c  MOV ECX,dword ptr [EAX + 0x4]
004c6b3f  PUSH ECX
004c6b40  CALL 0x005dcb00
004c6b45  ADD ESP,0x4
004c6b48  MOV EDX,dword ptr [EBP + -0x4]
004c6b4b  MOV ECX,dword ptr [EDX + 0x68]
004c6b4e  MOV dword ptr [EAX + 0x4cc],ECX
004c6b54  MOV EDX,dword ptr [EBP + -0x4]
004c6b57  MOV EAX,dword ptr [EDX + 0x4]
004c6b5a  PUSH EAX
004c6b5b  CALL 0x005dcb00
004c6b60  ADD ESP,0x4
004c6b63  ADD EAX,0x4c4
004c6b68  MOV dword ptr [EBP + -0x8],EAX
004c6b6b  MOV ECX,dword ptr [EBP + -0x8]
004c6b6e  MOV EDX,dword ptr [ECX]
004c6b70  MOV EAX,dword ptr [EBP + -0x4]
004c6b73  ADD EDX,dword ptr [EAX + 0x68]
004c6b76  MOV ECX,dword ptr [EBP + -0x8]
004c6b79  MOV dword ptr [ECX],EDX
004c6b7b  MOV ESP,EBP
004c6b7d  POP EBP
004c6b7e  RET

; FUN_005f6b60  005f6b60
005f6b60  PUSH EBP
005f6b61  MOV EBP,ESP
005f6b63  SUB ESP,0x8
005f6b66  MOV dword ptr [EBP + -0x8],ECX
005f6b69  MOV EAX,dword ptr [EBP + -0x8]
005f6b6c  MOV CL,byte ptr [EAX + 0x58]
005f6b6f  MOV byte ptr [EBP + -0x1],CL
005f6b72  MOVZX EDX,byte ptr [EBP + -0x1]
005f6b76  TEST EDX,EDX
005f6b78  JZ 0x005f6bb6
005f6b7a  MOV EAX,dword ptr [EBP + -0x8]
005f6b7d  MOV ECX,dword ptr [EAX + 0x10]
005f6b80  SUB ECX,0x1
005f6b83  MOV EDX,dword ptr [EBP + -0x8]
005f6b86  MOV dword ptr [EDX + 0x10],ECX
005f6b89  MOV EAX,dword ptr [EBP + -0x8]
005f6b8c  MOV ECX,dword ptr [EAX + 0x18]
005f6b8f  ADD ECX,0x1
005f6b92  MOV EDX,dword ptr [EBP + -0x8]
005f6b95  MOV dword ptr [EDX + 0x18],ECX
005f6b98  MOV EAX,dword ptr [EBP + -0x8]
005f6b9b  MOV ECX,dword ptr [EAX + 0x14]
005f6b9e  SUB ECX,0x1
005f6ba1  MOV EDX,dword ptr [EBP + -0x8]
005f6ba4  MOV dword ptr [EDX + 0x14],ECX
005f6ba7  MOV EAX,dword ptr [EBP + -0x8]
005f6baa  MOV ECX,dword ptr [EAX + 0x1c]
005f6bad  ADD ECX,0x1
005f6bb0  MOV EDX,dword ptr [EBP + -0x8]
005f6bb3  MOV dword ptr [EDX + 0x1c],ECX
005f6bb6  MOV EAX,dword ptr [EBP + -0x8]
005f6bb9  MOV EDX,dword ptr [EAX]
005f6bbb  MOV ECX,dword ptr [EBP + -0x8]
005f6bbe  MOV EAX,dword ptr [EDX + 0xac]
005f6bc4  CALL EAX
005f6bc6  MOV ECX,dword ptr [EBP + -0x8]
005f6bc9  MOV DL,byte ptr [ECX + 0x58]
005f6bcc  MOV byte ptr [EBP + -0x2],DL
005f6bcf  MOVZX EAX,byte ptr [EBP + -0x2]
005f6bd3  TEST EAX,EAX
005f6bd5  JZ 0x005f6c13
005f6bd7  MOV ECX,dword ptr [EBP + -0x8]
005f6bda  MOV EDX,dword ptr [ECX + 0x10]
005f6bdd  ADD EDX,0x1
005f6be0  MOV EAX,dword ptr [EBP + -0x8]
005f6be3  MOV dword ptr [EAX + 0x10],EDX
005f6be6  MOV ECX,dword ptr [EBP + -0x8]
005f6be9  MOV EDX,dword ptr [ECX + 0x18]
005f6bec  SUB EDX,0x1
005f6bef  MOV EAX,dword ptr [EBP + -0x8]
005f6bf2  MOV dword ptr [EAX + 0x18],EDX
005f6bf5  MOV ECX,dword ptr [EBP + -0x8]
005f6bf8  MOV EDX,dword ptr [ECX + 0x14]
005f6bfb  ADD EDX,0x1
005f6bfe  MOV EAX,dword ptr [EBP + -0x8]
005f6c01  MOV dword ptr [EAX + 0x14],EDX
005f6c04  MOV ECX,dword ptr [EBP + -0x8]
005f6c07  MOV EDX,dword ptr [ECX + 0x1c]
005f6c0a  SUB EDX,0x1
005f6c0d  MOV EAX,dword ptr [EBP + -0x8]
005f6c10  MOV dword ptr [EAX + 0x1c],EDX
005f6c13  MOV ESP,EBP
005f6c15  POP EBP
005f6c16  RET

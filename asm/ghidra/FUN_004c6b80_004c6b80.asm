; FUN_004c6b80  004c6b80
004c6b80  PUSH EBP
004c6b81  MOV EBP,ESP
004c6b83  SUB ESP,0xc
004c6b86  MOV dword ptr [EBP + -0xc],ECX
004c6b89  MOV EAX,dword ptr [EBP + -0xc]
004c6b8c  MOV ECX,dword ptr [EAX + 0x68]
004c6b8f  ADD ECX,dword ptr [EBP + 0x8]
004c6b92  MOV EDX,dword ptr [EBP + -0xc]
004c6b95  MOV dword ptr [EDX + 0x68],ECX
004c6b98  MOV ECX,dword ptr [EBP + -0xc]
004c6b9b  CALL 0x004c61b0
004c6ba0  MOVZX EAX,AL
004c6ba3  TEST EAX,EAX
004c6ba5  JZ 0x004c6bb6
004c6ba7  MOV ECX,dword ptr [0x00791364]
004c6bad  MOV EDX,dword ptr [EBP + 0x8]
004c6bb0  MOV dword ptr [ECX + 0x40c],EDX
004c6bb6  MOV EAX,dword ptr [EBP + 0x8]
004c6bb9  MOV dword ptr [EBP + -0x8],EAX
004c6bbc  MOV dword ptr [EBP + -0x4],0x0
004c6bc3  MOV ECX,dword ptr [EBP + -0x4]
004c6bc6  PUSH ECX
004c6bc7  MOV EDX,dword ptr [EBP + -0x8]
004c6bca  PUSH EDX
004c6bcb  MOV EAX,dword ptr [EBP + -0xc]
004c6bce  MOV ECX,dword ptr [EAX + 0x4]
004c6bd1  PUSH ECX
004c6bd2  CALL 0x005dcb00
004c6bd7  ADD ESP,0x4
004c6bda  MOV ECX,EAX
004c6bdc  CALL 0x005d5cf0
004c6be1  PUSH 0x0
004c6be3  MOV EDX,dword ptr [EBP + -0xc]
004c6be6  MOV EAX,dword ptr [EDX + 0x4]
004c6be9  PUSH EAX
004c6bea  MOV ECX,dword ptr [0x00791eb8]
004c6bf0  CALL 0x005d9180
004c6bf5  MOV ECX,dword ptr [EBP + -0xc]
004c6bf8  CALL 0x004c6a70
004c6bfd  MOV ESP,EBP
004c6bff  POP EBP
004c6c00  RET 0x4

; FUN_005f9b40  005f9b40
005f9b40  PUSH EBP
005f9b41  MOV EBP,ESP
005f9b43  PUSH -0x1
005f9b45  PUSH 0x6aa26f
005f9b4a  MOV EAX,FS:[0x0]
005f9b50  PUSH EAX
005f9b51  SUB ESP,0x10
005f9b54  MOV EAX,[0x00781870]
005f9b59  XOR EAX,EBP
005f9b5b  PUSH EAX
005f9b5c  LEA EAX,[EBP + -0xc]
005f9b5f  MOV FS:[0x0],EAX
005f9b65  MOV dword ptr [EBP + -0x18],ECX
005f9b68  CMP dword ptr [EBP + 0x8],0x0
005f9b6c  JNZ 0x005f9bb2
005f9b6e  PUSH 0x190
005f9b73  CALL 0x00686d82
005f9b78  ADD ESP,0x4
005f9b7b  MOV dword ptr [EBP + -0x14],EAX
005f9b7e  MOV dword ptr [EBP + -0x4],0x0
005f9b85  CMP dword ptr [EBP + -0x14],0x0
005f9b89  JZ 0x005f9b98
005f9b8b  MOV ECX,dword ptr [EBP + -0x14]
005f9b8e  CALL 0x005f5f50
005f9b93  MOV dword ptr [EBP + -0x1c],EAX
005f9b96  JMP 0x005f9b9f
005f9b98  MOV dword ptr [EBP + -0x1c],0x0
005f9b9f  MOV EAX,dword ptr [EBP + -0x1c]
005f9ba2  MOV dword ptr [EBP + -0x10],EAX
005f9ba5  MOV dword ptr [EBP + -0x4],0xffffffff
005f9bac  MOV ECX,dword ptr [EBP + -0x10]
005f9baf  MOV dword ptr [EBP + 0x8],ECX
005f9bb2  MOV DL,byte ptr [EBP + 0x34]
005f9bb5  PUSH EDX
005f9bb6  MOV AL,byte ptr [EBP + 0x30]
005f9bb9  PUSH EAX
005f9bba  MOV ECX,dword ptr [EBP + 0x2c]
005f9bbd  PUSH ECX
005f9bbe  MOV EDX,dword ptr [EBP + 0x24]
005f9bc1  PUSH EDX
005f9bc2  MOV EAX,dword ptr [EBP + 0x20]
005f9bc5  PUSH EAX
005f9bc6  MOV ECX,dword ptr [EBP + 0x1c]
005f9bc9  PUSH ECX
005f9bca  MOV EDX,dword ptr [EBP + 0x18]
005f9bcd  PUSH EDX
005f9bce  MOV EAX,dword ptr [EBP + 0x14]
005f9bd1  PUSH EAX
005f9bd2  MOV ECX,dword ptr [EBP + 0x10]
005f9bd5  PUSH ECX
005f9bd6  MOV EDX,dword ptr [EBP + 0xc]
005f9bd9  PUSH EDX
005f9bda  MOV EAX,dword ptr [EBP + 0x8]
005f9bdd  PUSH EAX
005f9bde  MOV ECX,dword ptr [EBP + -0x18]
005f9be1  CALL 0x005f9c10
005f9be6  MOV ECX,dword ptr [EBP + 0x28]
005f9be9  PUSH ECX
005f9bea  MOV ECX,dword ptr [EBP + 0x8]
005f9bed  CALL 0x005f6050
005f9bf2  MOV EAX,dword ptr [EBP + 0x8]
005f9bf5  MOV ECX,dword ptr [EBP + -0xc]
005f9bf8  MOV dword ptr FS:[0x0],ECX
005f9bff  POP ECX
005f9c00  MOV ESP,EBP
005f9c02  POP EBP
005f9c03  RET 0x30

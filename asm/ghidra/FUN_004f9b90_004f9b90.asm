; FUN_004f9b90  004f9b90
004f9b90  PUSH EBP
004f9b91  MOV EBP,ESP
004f9b93  PUSH -0x1
004f9b95  PUSH 0x6a26f8
004f9b9a  MOV EAX,FS:[0x0]
004f9ba0  PUSH EAX
004f9ba1  PUSH ECX
004f9ba2  MOV EAX,[0x00781870]
004f9ba7  XOR EAX,EBP
004f9ba9  PUSH EAX
004f9baa  LEA EAX,[EBP + -0xc]
004f9bad  MOV FS:[0x0],EAX
004f9bb3  MOV dword ptr [EBP + -0x10],ECX
004f9bb6  MOV ECX,dword ptr [EBP + -0x10]
004f9bb9  CALL 0x005d7b60
004f9bbe  MOV dword ptr [EBP + -0x4],0x0
004f9bc5  MOV EAX,dword ptr [EBP + -0x10]
004f9bc8  MOV dword ptr [EAX],0x6c03bc
004f9bce  MOV ECX,dword ptr [EBP + -0x10]
004f9bd1  CALL 0x005da830
004f9bd6  MOVZX ECX,AL
004f9bd9  TEST ECX,ECX
004f9bdb  JZ 0x004f9bf8
004f9bdd  PUSH 0x6c03a4
004f9be2  CALL 0x00630f40
004f9be7  ADD ESP,0x4
004f9bea  PUSH EAX
004f9beb  MOV ECX,dword ptr [0x0162ee84]
004f9bf1  CALL 0x005f38b0
004f9bf6  JMP 0x004f9c0c
004f9bf8  MOV ECX,dword ptr [EBP + -0x10]
004f9bfb  CALL 0x004fa1a0
004f9c00  PUSH EAX
004f9c01  MOV ECX,dword ptr [0x0162ee84]
004f9c07  CALL 0x005f38b0
004f9c0c  PUSH 0x186a3
004f9c11  MOV ECX,dword ptr [EBP + -0x10]
004f9c14  CALL 0x005f1ad0
004f9c19  MOV EDX,dword ptr [EBP + -0x10]
004f9c1c  MOV dword ptr [0x00791eb8],EDX
004f9c22  MOV EAX,dword ptr [EBP + -0x10]
004f9c25  MOV dword ptr [EAX + 0xa4],0x0
004f9c2f  MOV ECX,dword ptr [EBP + -0x10]
004f9c32  MOV byte ptr [ECX + 0xa8],0x0
004f9c39  MOV EDX,dword ptr [EBP + -0x10]
004f9c3c  MOV byte ptr [EDX + 0x94],0x0
004f9c43  MOV ECX,dword ptr [EBP + -0x10]
004f9c46  CALL 0x004fc210
004f9c4b  MOV dword ptr [EBP + -0x4],0xffffffff
004f9c52  MOV EAX,dword ptr [EBP + -0x10]
004f9c55  MOV ECX,dword ptr [EBP + -0xc]
004f9c58  MOV dword ptr FS:[0x0],ECX
004f9c5f  POP ECX
004f9c60  MOV ESP,EBP
004f9c62  POP EBP
004f9c63  RET

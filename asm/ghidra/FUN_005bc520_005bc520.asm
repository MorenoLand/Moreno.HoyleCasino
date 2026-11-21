; FUN_005bc520  005bc520
005bc520  PUSH EBP
005bc521  MOV EBP,ESP
005bc523  PUSH -0x1
005bc525  PUSH 0x6a80b9
005bc52a  MOV EAX,FS:[0x0]
005bc530  PUSH EAX
005bc531  SUB ESP,0x184
005bc537  MOV EAX,[0x00781870]
005bc53c  XOR EAX,EBP
005bc53e  PUSH EAX
005bc53f  LEA EAX,[EBP + -0xc]
005bc542  MOV FS:[0x0],EAX
005bc548  MOV EAX,dword ptr [EBP + 0x8]
005bc54b  MOV dword ptr [EBP + -0x10],EAX
005bc54e  MOV ECX,dword ptr [EBP + -0x10]
005bc551  MOV dword ptr [EBP + -0x18],ECX
005bc554  MOV dword ptr [EBP + -0x4],0x0
005bc55b  CMP dword ptr [EBP + -0x18],0x0
005bc55f  JZ 0x005bc590
005bc561  LEA EDX,[EBP + -0x21]
005bc564  MOV dword ptr [EBP + -0x20],EDX
005bc567  PUSH 0x0
005bc569  MOV ECX,dword ptr [EBP + -0x18]
005bc56c  CALL 0x005bbd80
005bc571  MOV byte ptr [EBP + -0x4],0x1
005bc575  MOV EAX,dword ptr [EBP + 0xc]
005bc578  PUSH EAX
005bc579  MOV ECX,dword ptr [EBP + -0x18]
005bc57c  CALL 0x005bc040
005bc581  MOV byte ptr [EBP + -0x4],0x0
005bc585  MOV ECX,dword ptr [EBP + -0x18]
005bc588  MOV dword ptr [EBP + 0xfffffe70],ECX
005bc58e  JMP 0x005bc59a
005bc590  MOV dword ptr [EBP + 0xfffffe70],0x0
005bc59a  MOV EDX,dword ptr [EBP + 0xfffffe70]
005bc5a0  MOV dword ptr [EBP + -0x14],EDX
005bc5a3  MOV dword ptr [EBP + -0x4],0xffffffff
005bc5aa  MOV ECX,dword ptr [EBP + -0xc]
005bc5ad  MOV dword ptr FS:[0x0],ECX
005bc5b4  POP ECX
005bc5b5  MOV ESP,EBP
005bc5b7  POP EBP
005bc5b8  RET

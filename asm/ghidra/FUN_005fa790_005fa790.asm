; FUN_005fa790  005fa790
005fa790  PUSH EBP
005fa791  MOV EBP,ESP
005fa793  PUSH -0x1
005fa795  PUSH 0x6aa40c
005fa79a  MOV EAX,FS:[0x0]
005fa7a0  PUSH EAX
005fa7a1  SUB ESP,0x10
005fa7a4  MOV EAX,[0x00781870]
005fa7a9  XOR EAX,EBP
005fa7ab  PUSH EAX
005fa7ac  LEA EAX,[EBP + -0xc]
005fa7af  MOV FS:[0x0],EAX
005fa7b5  MOV dword ptr [EBP + -0x18],ECX
005fa7b8  CMP dword ptr [EBP + 0x8],0x0
005fa7bc  JNZ 0x005fa7ff
005fa7be  PUSH 0x6c
005fa7c0  CALL 0x00686d82
005fa7c5  ADD ESP,0x4
005fa7c8  MOV dword ptr [EBP + -0x14],EAX
005fa7cb  MOV dword ptr [EBP + -0x4],0x0
005fa7d2  CMP dword ptr [EBP + -0x14],0x0
005fa7d6  JZ 0x005fa7e5
005fa7d8  MOV ECX,dword ptr [EBP + -0x14]
005fa7db  CALL 0x00625f10
005fa7e0  MOV dword ptr [EBP + -0x1c],EAX
005fa7e3  JMP 0x005fa7ec
005fa7e5  MOV dword ptr [EBP + -0x1c],0x0
005fa7ec  MOV EAX,dword ptr [EBP + -0x1c]
005fa7ef  MOV dword ptr [EBP + -0x10],EAX
005fa7f2  MOV dword ptr [EBP + -0x4],0xffffffff
005fa7f9  MOV ECX,dword ptr [EBP + -0x10]
005fa7fc  MOV dword ptr [EBP + 0x8],ECX
005fa7ff  MOV EDX,dword ptr [EBP + 0x8]
005fa802  PUSH EDX
005fa803  MOV ECX,dword ptr [EBP + -0x18]
005fa806  ADD ECX,0xa4
005fa80c  CALL 0x0060c840
005fa811  MOV EAX,dword ptr [EBP + 0x8]
005fa814  MOV ECX,dword ptr [EBP + -0x18]
005fa817  MOV dword ptr [EAX + 0x4],ECX
005fa81a  MOV EDX,dword ptr [EBP + 0xc]
005fa81d  PUSH EDX
005fa81e  MOV AL,byte ptr [EBP + 0x44]
005fa821  PUSH EAX
005fa822  MOV CL,byte ptr [EBP + 0x40]
005fa825  PUSH ECX
005fa826  MOV DL,byte ptr [EBP + 0x3c]
005fa829  PUSH EDX
005fa82a  MOV AL,byte ptr [EBP + 0x38]
005fa82d  PUSH EAX
005fa82e  MOV CL,byte ptr [EBP + 0x34]
005fa831  PUSH ECX
005fa832  MOV DL,byte ptr [EBP + 0x30]
005fa835  PUSH EDX
005fa836  MOV AL,byte ptr [EBP + 0x2c]
005fa839  PUSH EAX
005fa83a  MOV ECX,dword ptr [EBP + 0x28]
005fa83d  PUSH ECX
005fa83e  MOV EDX,dword ptr [EBP + 0x24]
005fa841  PUSH EDX
005fa842  MOV EAX,dword ptr [EBP + 0x20]
005fa845  PUSH EAX
005fa846  MOV ECX,dword ptr [EBP + 0x1c]
005fa849  PUSH ECX
005fa84a  MOV EDX,dword ptr [EBP + 0x18]
005fa84d  PUSH EDX
005fa84e  MOV EAX,dword ptr [EBP + 0x14]
005fa851  PUSH EAX
005fa852  MOV ECX,dword ptr [EBP + 0x10]
005fa855  PUSH ECX
005fa856  MOV ECX,dword ptr [EBP + 0x8]
005fa859  CALL 0x006260e0
005fa85e  MOV EDX,dword ptr [EBP + 0x8]
005fa861  MOV EAX,dword ptr [EDX]
005fa863  MOV ECX,dword ptr [EBP + 0x8]
005fa866  MOV EDX,dword ptr [EAX + 0x74]
005fa869  CALL EDX
005fa86b  MOV EAX,dword ptr [EBP + 0x8]
005fa86e  MOV ECX,dword ptr [EBP + -0xc]
005fa871  MOV dword ptr FS:[0x0],ECX
005fa878  POP ECX
005fa879  MOV ESP,EBP
005fa87b  POP EBP
005fa87c  RET 0x40

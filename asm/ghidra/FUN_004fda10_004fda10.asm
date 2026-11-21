; FUN_004fda10  004fda10
004fda10  PUSH EBP
004fda11  MOV EBP,ESP
004fda13  SUB ESP,0xc
004fda16  MOV dword ptr [EBP + -0xc],ECX
004fda19  PUSH -0x1
004fda1b  MOV ECX,dword ptr [0x007947e0]
004fda21  CALL 0x005de600
004fda26  MOV ECX,EAX
004fda28  CALL 0x0063aae0
004fda2d  MOV dword ptr [EBP + -0x4],EAX
004fda30  MOV EAX,dword ptr [EBP + 0x8]
004fda33  MOV dword ptr [EBP + -0x8],EAX
004fda36  CMP dword ptr [EBP + 0x8],0x0
004fda3a  JZ 0x004fda42
004fda3c  CMP dword ptr [EBP + -0x4],0x0
004fda40  JNZ 0x004fda46
004fda42  XOR AL,AL
004fda44  JMP 0x004fda60
004fda46  MOV ECX,dword ptr [EBP + -0x4]
004fda49  MOV EDX,dword ptr [EBP + -0x8]
004fda4c  MOV AX,word ptr [EDX]
004fda4f  MOV word ptr [ECX],AX
004fda52  MOV ECX,dword ptr [EBP + -0x4]
004fda55  MOV EDX,dword ptr [EBP + -0x8]
004fda58  MOV EAX,dword ptr [EDX + 0x4]
004fda5b  MOV dword ptr [ECX + 0x4],EAX
004fda5e  MOV AL,0x1
004fda60  MOV ESP,EBP
004fda62  POP EBP
004fda63  RET 0x4

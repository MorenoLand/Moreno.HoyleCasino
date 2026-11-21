; FUN_0044bc00  0044bc00
0044bc00  PUSH EBP
0044bc01  MOV EBP,ESP
0044bc03  SUB ESP,0x20
0044bc06  MOV dword ptr [EBP + -0x20],ECX
0044bc09  MOV dword ptr [EBP + -0x4],0xffffffff
0044bc10  CMP dword ptr [0x0163068c],0x0
0044bc17  JNZ 0x0044bc1e
0044bc19  JMP 0x0044bd16
0044bc1e  PUSH 0x32
0044bc20  MOV ECX,dword ptr [0x0163068c]
0044bc26  CALL 0x005fb350
0044bc2b  MOV dword ptr [EBP + -0x1c],EAX
0044bc2e  MOV dword ptr [EBP + -0x18],0x0
0044bc35  PUSH 0x33
0044bc37  MOV ECX,dword ptr [0x0163068c]
0044bc3d  CALL 0x005fb350
0044bc42  MOV dword ptr [EBP + -0x14],EAX
0044bc45  MOV dword ptr [EBP + -0x10],0x1
0044bc4c  MOV dword ptr [EBP + -0xc],0x2
0044bc53  MOV dword ptr [EBP + -0x8],0x0
0044bc5a  JMP 0x0044bc65
0044bc5c  MOV EAX,dword ptr [EBP + -0x8]
0044bc5f  ADD EAX,0x1
0044bc62  MOV dword ptr [EBP + -0x8],EAX
0044bc65  MOV ECX,dword ptr [EBP + -0x8]
0044bc68  CMP ECX,dword ptr [EBP + -0xc]
0044bc6b  JGE 0x0044bca8
0044bc6d  MOV EDX,dword ptr [EBP + -0x8]
0044bc70  CMP dword ptr [EBP + EDX*0x8 + -0x1c],0x0
0044bc75  JZ 0x0044bca6
0044bc77  MOV EAX,dword ptr [EBP + 0x8]
0044bc7a  PUSH EAX
0044bc7b  MOV ECX,dword ptr [EBP + -0x8]
0044bc7e  MOV EDX,dword ptr [EBP + ECX*0x8 + -0x1c]
0044bc82  MOV EAX,dword ptr [EBP + -0x8]
0044bc85  MOV ECX,dword ptr [EBP + EAX*0x8 + -0x1c]
0044bc89  MOV EDX,dword ptr [EDX]
0044bc8b  MOV EAX,dword ptr [EDX + 0x84]
0044bc91  CALL EAX
0044bc93  MOVZX ECX,AL
0044bc96  TEST ECX,ECX
0044bc98  JZ 0x0044bca6
0044bc9a  MOV EDX,dword ptr [EBP + -0x8]
0044bc9d  MOV EAX,dword ptr [EBP + EDX*0x8 + -0x18]
0044bca1  MOV dword ptr [EBP + -0x4],EAX
0044bca4  JMP 0x0044bca8
0044bca6  JMP 0x0044bc5c
0044bca8  CMP dword ptr [EBP + -0x4],-0x1
0044bcac  JNZ 0x0044bcce
0044bcae  MOV ECX,dword ptr [EBP + 0x8]
0044bcb1  CMP dword ptr [ECX + 0x18],0x3
0044bcb5  JNZ 0x0044bccc
0044bcb7  PUSH 0x6b27f8
0044bcbc  MOV EDX,dword ptr [EBP + -0x20]
0044bcbf  MOV EAX,dword ptr [EDX]
0044bcc1  MOV ECX,dword ptr [EBP + -0x20]
0044bcc4  MOV EDX,dword ptr [EAX + 0xb4]
0044bcca  CALL EDX
0044bccc  JMP 0x0044bd16
0044bcce  CMP dword ptr [EBP + -0x4],0x0
0044bcd2  JNZ 0x0044bcf2
0044bcd4  PUSH 0x6b312c
0044bcd9  CALL 0x00630f40
0044bcde  ADD ESP,0x4
0044bce1  PUSH EAX
0044bce2  MOV EAX,dword ptr [EBP + -0x20]
0044bce5  MOV EDX,dword ptr [EAX]
0044bce7  MOV ECX,dword ptr [EBP + -0x20]
0044bcea  MOV EAX,dword ptr [EDX + 0xb4]
0044bcf0  CALL EAX
0044bcf2  CMP dword ptr [EBP + -0x4],0x1
0044bcf6  JNZ 0x0044bd16
0044bcf8  PUSH 0x6b310c
0044bcfd  CALL 0x00630f40
0044bd02  ADD ESP,0x4
0044bd05  PUSH EAX
0044bd06  MOV ECX,dword ptr [EBP + -0x20]
0044bd09  MOV EDX,dword ptr [ECX]
0044bd0b  MOV ECX,dword ptr [EBP + -0x20]
0044bd0e  MOV EAX,dword ptr [EDX + 0xb4]
0044bd14  CALL EAX
0044bd16  MOV ESP,EBP
0044bd18  POP EBP
0044bd19  RET 0x4

; FUN_004fb640  004fb640
004fb640  PUSH EBP
004fb641  MOV EBP,ESP
004fb643  SUB ESP,0xc
004fb646  MOV dword ptr [EBP + -0xc],ECX
004fb649  CMP dword ptr [EBP + 0x8],0x186f9
004fb650  JL 0x004fb65b
004fb652  CMP dword ptr [EBP + 0x8],0x18702
004fb659  JLE 0x004fb693
004fb65b  XOR EAX,EAX
004fb65d  JNZ 0x004fb676
004fb65f  PUSH 0x287
004fb664  PUSH 0x6c07c8
004fb669  PUSH 0x6b2f58
004fb66e  CALL 0x005e9f20
004fb673  ADD ESP,0xc
004fb676  PUSH 0x0
004fb678  MOV EDX,dword ptr [0x0162ee84]
004fb67e  MOV EAX,dword ptr [EDX]
004fb680  MOV ECX,dword ptr [0x0162ee84]
004fb686  MOV EDX,dword ptr [EAX + 0x164]
004fb68c  CALL EDX
004fb68e  MOV dword ptr [EBP + -0x8],EAX
004fb691  JMP 0x004fb6b5
004fb693  MOV EAX,dword ptr [EBP + 0x8]
004fb696  SUB EAX,0x186f9
004fb69b  PUSH EAX
004fb69c  MOV ECX,dword ptr [0x0162ee84]
004fb6a2  MOV EDX,dword ptr [ECX]
004fb6a4  MOV ECX,dword ptr [0x0162ee84]
004fb6aa  MOV EAX,dword ptr [EDX + 0x164]
004fb6b0  CALL EAX
004fb6b2  MOV dword ptr [EBP + -0x8],EAX
004fb6b5  MOV ECX,dword ptr [EBP + 0xc]
004fb6b8  PUSH ECX
004fb6b9  MOV ECX,dword ptr [EBP + -0xc]
004fb6bc  CALL 0x005f2c40
004fb6c1  MOV EDX,dword ptr [EBP + 0x8]
004fb6c4  PUSH EDX
004fb6c5  MOV ECX,dword ptr [EBP + -0xc]
004fb6c8  CALL 0x005f2cb0
004fb6cd  PUSH 0xb
004fb6cf  MOV ECX,dword ptr [0x0162ee84]
004fb6d5  CALL 0x006375d0
004fb6da  MOV dword ptr [EBP + -0x4],EAX
004fb6dd  MOV EAX,dword ptr [EBP + -0x4]
004fb6e0  MOV ECX,dword ptr [EBP + -0x8]
004fb6e3  MOV dword ptr [EAX + 0x4],ECX
004fb6e6  MOV ECX,dword ptr [0x0162ee84]
004fb6ec  CALL 0x00637610
004fb6f1  MOV EDX,dword ptr [EBP + -0xc]
004fb6f4  MOV EAX,dword ptr [EDX + 0xa4]
004fb6fa  MOV ECX,dword ptr [EBP + -0x8]
004fb6fd  MOV dword ptr [EAX + 0xcc],ECX
004fb703  MOV ESP,EBP
004fb705  POP EBP
004fb706  RET 0x8

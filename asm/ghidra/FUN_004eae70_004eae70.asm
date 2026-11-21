; FUN_004eae70  004eae70
004eae70  PUSH EBP
004eae71  MOV EBP,ESP
004eae73  PUSH ECX
004eae74  MOV dword ptr [EBP + -0x4],ECX
004eae77  MOV EAX,dword ptr [EBP + -0x4]
004eae7a  MOVSX ECX,word ptr [EAX + 0x64]
004eae7e  TEST ECX,ECX
004eae80  JNZ 0x004eae90
004eae82  MOV EDX,dword ptr [EBP + -0x4]
004eae85  MOV AX,word ptr [EDX + 0x2a8]
004eae8c  JMP 0x004eaf0d
004eae90  MOV EAX,dword ptr [EBP + -0x4]
004eae93  MOVSX ECX,word ptr [EAX + 0x64]
004eae97  CMP ECX,0x1
004eae9a  JNZ 0x004eaeac
004eae9c  MOV EDX,dword ptr [EBP + -0x4]
004eae9f  MOVSX EAX,word ptr [EDX + 0x2a8]
004eaea6  SHL EAX,0x1
004eaea8  JMP 0x004eaf0d
004eaeac  MOV EAX,dword ptr [EBP + -0x4]
004eaeaf  MOVSX ECX,word ptr [EAX + 0x64]
004eaeb3  CMP ECX,0x2
004eaeb6  JNZ 0x004eaecb
004eaeb8  MOV EDX,dword ptr [EBP + -0x4]
004eaebb  MOVSX EAX,word ptr [EDX + 0x2a8]
004eaec2  CDQ
004eaec3  SUB EAX,EDX
004eaec5  SAR EAX,0x1
004eaec7  JMP 0x004eaf0d
004eaecb  MOV EAX,dword ptr [EBP + -0x4]
004eaece  MOVSX ECX,word ptr [EAX + 0x64]
004eaed2  CMP ECX,0x3
004eaed5  JNZ 0x004eaeee
004eaed7  MOV EDX,dword ptr [EBP + -0x4]
004eaeda  MOVSX EAX,word ptr [EDX + 0x2a8]
004eaee1  CDQ
004eaee2  AND EDX,0x3
004eaee5  ADD EAX,EDX
004eaee7  SAR EAX,0x2
004eaeea  JMP 0x004eaf0d
004eaeee  XOR EAX,EAX
004eaef0  JNZ 0x004eaf09
004eaef2  PUSH 0x2788
004eaef7  PUSH 0x6bf384
004eaefc  PUSH 0x6b2b64
004eaf01  CALL 0x005e9f20
004eaf06  ADD ESP,0xc
004eaf09  MOV AX,0x14
004eaf0d  MOV ESP,EBP
004eaf0f  POP EBP
004eaf10  RET

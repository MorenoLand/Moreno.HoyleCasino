; FUN_004f2a40  004f2a40
004f2a40  PUSH EBP
004f2a41  MOV EBP,ESP
004f2a43  SUB ESP,0x14
004f2a46  MOV dword ptr [EBP + -0x4],ECX
004f2a49  MOV EAX,dword ptr [EBP + -0x4]
004f2a4c  MOVSX ECX,word ptr [EAX + 0x64]
004f2a50  TEST ECX,ECX
004f2a52  JNZ 0x004f2a74
004f2a54  MOV EDX,dword ptr [EBP + -0x4]
004f2a57  MOVSX EAX,word ptr [EDX + 0x3d6]
004f2a5e  MOV dword ptr [EBP + -0x8],EAX
004f2a61  FILD dword ptr [EBP + -0x8]
004f2a64  FDIV double ptr [0x006b4b00]
004f2a6a  JMP 0x004f2b03
004f2a74  MOV ECX,dword ptr [EBP + -0x4]
004f2a77  MOVSX EDX,word ptr [ECX + 0x64]
004f2a7b  CMP EDX,0x1
004f2a7e  JNZ 0x004f2a9a
004f2a80  MOV EAX,dword ptr [EBP + -0x4]
004f2a83  MOVSX ECX,word ptr [EAX + 0x3d6]
004f2a8a  MOV dword ptr [EBP + -0xc],ECX
004f2a8d  FILD dword ptr [EBP + -0xc]
004f2a90  FDIV double ptr [0x006bf718]
004f2a96  JMP 0x004f2b03
004f2a9a  MOV EDX,dword ptr [EBP + -0x4]
004f2a9d  MOVSX EAX,word ptr [EDX + 0x64]
004f2aa1  CMP EAX,0x2
004f2aa4  JNZ 0x004f2ac0
004f2aa6  MOV ECX,dword ptr [EBP + -0x4]
004f2aa9  MOVSX EDX,word ptr [ECX + 0x3d6]
004f2ab0  MOV dword ptr [EBP + -0x10],EDX
004f2ab3  FILD dword ptr [EBP + -0x10]
004f2ab6  FDIV double ptr [0x006bf710]
004f2abc  JMP 0x004f2b03
004f2ac0  MOV EAX,dword ptr [EBP + -0x4]
004f2ac3  MOVSX ECX,word ptr [EAX + 0x64]
004f2ac7  CMP ECX,0x3
004f2aca  JNZ 0x004f2ae6
004f2acc  MOV EDX,dword ptr [EBP + -0x4]
004f2acf  MOVSX EAX,word ptr [EDX + 0x3d6]
004f2ad6  MOV dword ptr [EBP + -0x14],EAX
004f2ad9  FILD dword ptr [EBP + -0x14]
004f2adc  FDIV double ptr [0x006bf708]
004f2ae2  JMP 0x004f2b03
004f2ae6  XOR ECX,ECX
004f2ae8  JNZ 0x004f2b01
004f2aea  PUSH 0x30e3
004f2aef  PUSH 0x6bf384
004f2af4  PUSH 0x6b2b64
004f2af9  CALL 0x005e9f20
004f2afe  ADD ESP,0xc
004f2b01  FLDZ
004f2b03  MOV ESP,EBP
004f2b05  POP EBP
004f2b06  RET

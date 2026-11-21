; FUN_00600ac0  00600ac0
00600ac0  PUSH EBP
00600ac1  MOV EBP,ESP
00600ac3  SUB ESP,0x8
00600ac6  MOV dword ptr [EBP + -0x8],ECX
00600ac9  MOV EAX,dword ptr [EBP + -0x8]
00600acc  MOVZX ECX,byte ptr [EAX + 0x18]
00600ad0  TEST ECX,ECX
00600ad2  JNZ 0x00600ad6
00600ad4  JMP 0x00600b2a
00600ad6  MOV EDX,dword ptr [EBP + -0x8]
00600ad9  MOV EAX,dword ptr [EDX]
00600adb  MOV ECX,dword ptr [EBP + -0x8]
00600ade  MOV EDX,dword ptr [EAX + 0x10]
00600ae1  CALL EDX
00600ae3  MOV dword ptr [EBP + -0x4],EAX
00600ae6  MOV EAX,dword ptr [EBP + -0x8]
00600ae9  MOV ECX,dword ptr [EAX + 0x4]
00600aec  CALL 0x005eb220
00600af1  CMP EAX,dword ptr [EBP + -0x4]
00600af4  JZ 0x00600b2a
00600af6  MOV ECX,dword ptr [EBP + -0x8]
00600af9  MOV EDX,dword ptr [EBP + -0x4]
00600afc  CMP EDX,dword ptr [ECX + 0x14]
00600aff  JLE 0x00600b10
00600b01  MOV EAX,dword ptr [EBP + -0x8]
00600b04  MOV EDX,dword ptr [EAX]
00600b06  MOV ECX,dword ptr [EBP + -0x8]
00600b09  MOV EAX,dword ptr [EDX + 0x14]
00600b0c  CALL EAX
00600b0e  JMP 0x00600b2a
00600b10  MOV ECX,dword ptr [EBP + -0x4]
00600b13  PUSH ECX
00600b14  MOV EDX,dword ptr [EBP + -0x8]
00600b17  MOV EAX,dword ptr [EDX + 0x4]
00600b1a  MOV ECX,dword ptr [EBP + -0x8]
00600b1d  MOV ECX,dword ptr [ECX + 0x4]
00600b20  MOV EDX,dword ptr [EAX]
00600b22  MOV EAX,dword ptr [EDX + 0xb0]
00600b28  CALL EAX
00600b2a  MOV ESP,EBP
00600b2c  POP EBP
00600b2d  RET

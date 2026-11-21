; FUN_00443ae0  00443ae0
00443ae0  PUSH EBP
00443ae1  MOV EBP,ESP
00443ae3  SUB ESP,0x8
00443ae6  MOV dword ptr [EBP + -0x8],ECX
00443ae9  MOV EAX,dword ptr [EBP + -0x8]
00443aec  MOVZX ECX,byte ptr [EAX + 0x18]
00443af0  TEST ECX,ECX
00443af2  JNZ 0x00443af9
00443af4  JMP 0x00443b8f
00443af9  MOV EDX,dword ptr [EBP + -0x8]
00443afc  MOV EAX,dword ptr [EDX]
00443afe  MOV ECX,dword ptr [EBP + -0x8]
00443b01  MOV EDX,dword ptr [EAX + 0x10]
00443b04  CALL EDX
00443b06  MOV dword ptr [EBP + -0x4],EAX
00443b09  MOV EAX,dword ptr [EBP + -0x8]
00443b0c  MOV ECX,dword ptr [EAX + 0x4]
00443b0f  CALL 0x005eb220
00443b14  CMP EAX,dword ptr [EBP + -0x4]
00443b17  JZ 0x00443b8f
00443b19  MOV ECX,dword ptr [EBP + -0x8]
00443b1c  MOV EDX,dword ptr [EBP + -0x4]
00443b1f  CMP EDX,dword ptr [ECX + 0x1c]
00443b22  JNZ 0x00443b50
00443b24  MOV EAX,dword ptr [EBP + -0x8]
00443b27  MOV ECX,dword ptr [EAX + 0x1c]
00443b2a  PUSH ECX
00443b2b  MOV EDX,dword ptr [EBP + -0x8]
00443b2e  MOV EAX,dword ptr [EDX + 0x4]
00443b31  MOV ECX,dword ptr [EBP + -0x8]
00443b34  MOV ECX,dword ptr [ECX + 0x4]
00443b37  MOV EDX,dword ptr [EAX]
00443b39  MOV EAX,dword ptr [EDX + 0xb0]
00443b3f  CALL EAX
00443b41  MOV ECX,dword ptr [EBP + -0x8]
00443b44  MOV EDX,dword ptr [ECX]
00443b46  MOV ECX,dword ptr [EBP + -0x8]
00443b49  MOV EAX,dword ptr [EDX + 0x14]
00443b4c  CALL EAX
00443b4e  JMP 0x00443b8f
00443b50  MOV ECX,dword ptr [EBP + -0x8]
00443b53  MOV ECX,dword ptr [ECX + 0x4]
00443b56  CALL 0x005f5400
00443b5b  PUSH EAX
00443b5c  MOV ECX,dword ptr [0x007906f0]
00443b62  CALL 0x00445690
00443b67  MOV EDX,dword ptr [EBP + -0x8]
00443b6a  MOV ECX,dword ptr [EDX + 0x4]
00443b6d  MOV dword ptr [ECX + 0x178],EAX
00443b73  MOV EDX,dword ptr [EBP + -0x4]
00443b76  PUSH EDX
00443b77  MOV EAX,dword ptr [EBP + -0x8]
00443b7a  MOV ECX,dword ptr [EAX + 0x4]
00443b7d  MOV EDX,dword ptr [EBP + -0x8]
00443b80  MOV EAX,dword ptr [EDX + 0x4]
00443b83  MOV EDX,dword ptr [ECX]
00443b85  MOV ECX,EAX
00443b87  MOV EAX,dword ptr [EDX + 0xb0]
00443b8d  CALL EAX
00443b8f  MOV ESP,EBP
00443b91  POP EBP
00443b92  RET

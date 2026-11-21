; FUN_0053ed90  0053ed90
0053ed90  PUSH EBP
0053ed91  MOV EBP,ESP
0053ed93  SUB ESP,0x20
0053ed96  MOV dword ptr [EBP + -0x14],ECX
0053ed99  MOV EAX,dword ptr [EBP + 0x8]
0053ed9c  PUSH EAX
0053ed9d  MOV ECX,dword ptr [EBP + -0x14]
0053eda0  CALL 0x005d7f40
0053eda5  CMP dword ptr [0x007933ec],0x0
0053edac  JZ 0x0053edbe
0053edae  MOV ECX,dword ptr [0x007933ec]
0053edb4  CALL 0x00540d00
0053edb9  MOV dword ptr [EBP + -0x18],EAX
0053edbc  JMP 0x0053edc5
0053edbe  MOV dword ptr [EBP + -0x18],0xffffffff
0053edc5  MOV ECX,dword ptr [EBP + -0x18]
0053edc8  MOV dword ptr [EBP + -0x4],ECX
0053edcb  MOV EDX,dword ptr [EBP + 0x8]
0053edce  CMP dword ptr [EDX + 0x18],0x4
0053edd2  JNZ 0x0053ee79
0053edd8  MOV EAX,dword ptr [EBP + 0x8]
0053eddb  MOVZX ECX,byte ptr [EAX + 0x4]
0053eddf  TEST ECX,ECX
0053ede1  JNZ 0x0053ee79
0053ede7  CMP dword ptr [EBP + -0x4],-0x1
0053edeb  JZ 0x0053ee79
0053edf1  MOV EDX,dword ptr [EBP + 0x8]
0053edf4  MOVSX EAX,byte ptr [EDX + 0x14]
0053edf8  PUSH EAX
0053edf9  CALL dword ptr [0x006b2224]
0053edff  ADD ESP,0x4
0053ee02  MOV dword ptr [EBP + -0x1c],EAX
0053ee05  CMP dword ptr [EBP + -0x1c],0x70
0053ee09  JZ 0x0053ee0d
0053ee0b  JMP 0x0053ee79
0053ee0d  MOV ECX,dword ptr [EBP + -0x4]
0053ee10  PUSH ECX
0053ee11  CALL 0x005dcb00
0053ee16  ADD ESP,0x4
0053ee19  TEST EAX,EAX
0053ee1b  JZ 0x0053ee79
0053ee1d  MOV EDX,dword ptr [EBP + -0x4]
0053ee20  PUSH EDX
0053ee21  CALL 0x005dcb00
0053ee26  ADD ESP,0x4
0053ee29  MOV dword ptr [EBP + -0x10],EAX
0053ee2c  MOV ECX,dword ptr [EBP + -0x10]
0053ee2f  CALL 0x0063aac0
0053ee34  MOV EAX,dword ptr [EAX]
0053ee36  MOV dword ptr [EBP + -0x8],EAX
0053ee39  CMP dword ptr [EBP + -0x8],0x2
0053ee3d  JZ 0x0053ee5b
0053ee3f  MOV ECX,dword ptr [EBP + -0x10]
0053ee42  CALL 0x0063aac0
0053ee47  MOV ECX,dword ptr [EAX]
0053ee49  MOV dword ptr [EBP + -0xc],ECX
0053ee4c  CMP dword ptr [EBP + -0xc],0x3
0053ee50  JZ 0x0053ee5b
0053ee52  MOV dword ptr [EBP + -0x20],0x0
0053ee59  JMP 0x0053ee62
0053ee5b  MOV dword ptr [EBP + -0x20],0x1
0053ee62  MOVZX EDX,byte ptr [EBP + -0x20]
0053ee66  TEST EDX,EDX
0053ee68  JZ 0x0053ee79
0053ee6a  MOV EAX,dword ptr [EBP + -0x4]
0053ee6d  PUSH EAX
0053ee6e  MOV ECX,dword ptr [0x007933ec]
0053ee74  CALL 0x00540ed0
0053ee79  MOV ECX,dword ptr [EBP + 0x8]
0053ee7c  MOVZX EDX,byte ptr [ECX + 0x4]
0053ee80  TEST EDX,EDX
0053ee82  JNZ 0x0053eef9
0053ee84  MOV EAX,dword ptr [EBP + 0x8]
0053ee87  CMP dword ptr [EAX + 0x18],0x1
0053ee8b  JNZ 0x0053eef9
0053ee8d  CMP dword ptr [0x007933f4],0x0
0053ee94  JZ 0x0053eef9
0053ee96  CMP dword ptr [0x007933ec],0x0
0053ee9d  JZ 0x0053eef9
0053ee9f  MOV ECX,dword ptr [0x007933f4]
0053eea5  CMP dword ptr [ECX + 0x94],0x0
0053eeac  JZ 0x0053eef9
0053eeae  MOV EDX,dword ptr [0x007933f4]
0053eeb4  CMP dword ptr [EDX + 0x98],0x0
0053eebb  JZ 0x0053eef9
0053eebd  MOV EAX,[0x007933f4]
0053eec2  MOV ECX,dword ptr [EAX + 0x94]
0053eec8  CALL 0x005f54a0
0053eecd  MOVZX ECX,AL
0053eed0  TEST ECX,ECX
0053eed2  JNZ 0x0053eeec
0053eed4  MOV EDX,dword ptr [0x007933f4]
0053eeda  MOV ECX,dword ptr [EDX + 0x98]
0053eee0  CALL 0x005f54a0
0053eee5  MOVZX EAX,AL
0053eee8  TEST EAX,EAX
0053eeea  JZ 0x0053eef9
0053eeec  MOV ECX,dword ptr [0x007933ec]
0053eef2  MOV byte ptr [ECX + 0xfa],0x1
0053eef9  MOV ESP,EBP
0053eefb  POP EBP
0053eefc  RET 0x4

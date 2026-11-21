; FUN_005acba0  005acba0
005acba0  PUSH EBP
005acba1  MOV EBP,ESP
005acba3  SUB ESP,0x48
005acba6  MOV dword ptr [EBP + -0x38],ECX
005acba9  MOV ECX,dword ptr [0x00793604]
005acbaf  CALL 0x005b4f00
005acbb4  MOV dword ptr [EBP + -0x4],EAX
005acbb7  MOV ECX,dword ptr [EBP + -0x38]
005acbba  CALL 0x005fc360
005acbbf  MOV dword ptr [EBP + -0x3c],EAX
005acbc2  CMP dword ptr [EBP + -0x3c],0x0
005acbc6  JZ 0x005acbd7
005acbc8  CMP dword ptr [EBP + -0x3c],0x1
005acbcc  JZ 0x005acd05
005acbd2  JMP 0x005acd88
005acbd7  PUSH 0x1
005acbd9  MOV EAX,dword ptr [EBP + -0x38]
005acbdc  MOV EDX,dword ptr [EAX]
005acbde  MOV ECX,dword ptr [EBP + -0x38]
005acbe1  MOV EAX,dword ptr [EDX + 0x4]
005acbe4  CALL EAX
005acbe6  MOV dword ptr [EBP + -0x24],0xffffffff
005acbed  CMP dword ptr [EBP + -0x4],-0x1
005acbf1  JZ 0x005accd2
005acbf7  MOV ECX,dword ptr [EBP + -0x4]
005acbfa  PUSH ECX
005acbfb  CALL 0x005dcb00
005acc00  ADD ESP,0x4
005acc03  MOV dword ptr [EBP + -0x34],EAX
005acc06  MOV ECX,dword ptr [EBP + -0x34]
005acc09  CALL 0x0063aac0
005acc0e  MOV EDX,dword ptr [EAX]
005acc10  MOV dword ptr [EBP + -0x2c],EDX
005acc13  CMP dword ptr [EBP + -0x2c],0x2
005acc17  JZ 0x005acc35
005acc19  MOV ECX,dword ptr [EBP + -0x34]
005acc1c  CALL 0x0063aac0
005acc21  MOV EAX,dword ptr [EAX]
005acc23  MOV dword ptr [EBP + -0x30],EAX
005acc26  CMP dword ptr [EBP + -0x30],0x3
005acc2a  JZ 0x005acc35
005acc2c  MOV dword ptr [EBP + -0x40],0x0
005acc33  JMP 0x005acc3c
005acc35  MOV dword ptr [EBP + -0x40],0x1
005acc3c  MOVZX ECX,byte ptr [EBP + -0x40]
005acc40  TEST ECX,ECX
005acc42  JZ 0x005accd2
005acc48  MOV EDX,dword ptr [EBP + -0x4]
005acc4b  MOV dword ptr [EBP + -0x28],EDX
005acc4e  MOV dword ptr [EBP + -0x20],0xffffffff
005acc55  FLDZ
005acc57  FSTP double ptr [EBP + -0x18]
005acc5a  FLD1
005acc5c  FSTP double ptr [EBP + -0x10]
005acc5f  MOV EAX,dword ptr [EBP + -0x38]
005acc62  MOV ECX,dword ptr [EAX + 0x20]
005acc65  MOV dword ptr [EBP + -0x44],ECX
005acc68  CMP dword ptr [EBP + -0x44],0x6
005acc6c  JA 0x005accb7
005acc6e  MOV EDX,dword ptr [EBP + -0x44]
005acc71  JMP dword ptr [EDX*0x4 + 0x5acda8]
005accb7  XOR EAX,EAX
005accb9  JNZ 0x005accd2
005accbb  PUSH 0x766
005accc0  PUSH 0x6cf934
005accc5  PUSH 0x6b2f58
005accca  CALL 0x005e9f20
005acccf  ADD ESP,0xc
005accd2  CMP dword ptr [EBP + -0x24],-0x1
005accd6  JZ 0x005accf1
005accd8  PUSH 0x0
005accda  PUSH 0x0
005accdc  MOV EDX,dword ptr [EBP + -0x38]
005accdf  PUSH EDX
005acce0  LEA EAX,[EBP + -0x28]
005acce3  PUSH EAX
005acce4  MOV ECX,dword ptr [0x0162ee84]
005accea  CALL 0x00639390
005accef  JMP 0x005acd00
005accf1  PUSH 0x0
005accf3  MOV ECX,dword ptr [EBP + -0x38]
005accf6  MOV EDX,dword ptr [ECX]
005accf8  MOV ECX,dword ptr [EBP + -0x38]
005accfb  MOV EAX,dword ptr [EDX + 0x1c]
005accfe  CALL EAX
005acd00  JMP 0x005acda3
005acd05  PUSH 0x0
005acd07  MOV ECX,dword ptr [0x00793600]
005acd0d  MOV ECX,dword ptr [ECX + 0x4]
005acd10  CALL 0x005fc420
005acd15  MOV EDX,dword ptr [EBP + -0x38]
005acd18  MOV EAX,dword ptr [EDX + 0x20]
005acd1b  MOV dword ptr [EBP + -0x48],EAX
005acd1e  CMP dword ptr [EBP + -0x48],0x5
005acd22  JL 0x005acd48
005acd24  CMP dword ptr [EBP + -0x48],0x6
005acd28  JLE 0x005acd2c
005acd2a  JMP 0x005acd48
005acd2c  MOV ECX,dword ptr [EBP + -0x38]
005acd2f  CMP dword ptr [ECX + 0x20],0x5
005acd33  SETZ DL
005acd36  PUSH EDX
005acd37  MOV EAX,dword ptr [EBP + -0x4]
005acd3a  PUSH EAX
005acd3b  MOV ECX,dword ptr [0x00793604]
005acd41  CALL 0x005b73e0
005acd46  JMP 0x005acd69
005acd48  PUSH 0x1
005acd4a  MOV ECX,dword ptr [EBP + -0x38]
005acd4d  MOV EDX,dword ptr [ECX + 0x20]
005acd50  PUSH EDX
005acd51  MOV EAX,dword ptr [EBP + -0x4]
005acd54  PUSH EAX
005acd55  MOV ECX,dword ptr [0x007935fc]
005acd5b  CALL 0x005ad1f0
005acd60  MOVZX ECX,AL
005acd63  TEST ECX,ECX
005acd65  JNZ 0x005acd69
005acd67  JMP 0x005acda3
005acd69  PUSH 0x0
005acd6b  PUSH 0x1
005acd6d  MOV EDX,dword ptr [0x00793600]
005acd73  MOV EAX,dword ptr [EDX + 0x4]
005acd76  MOV ECX,dword ptr [0x00793600]
005acd7c  MOV ECX,dword ptr [ECX + 0x4]
005acd7f  MOV EDX,dword ptr [EAX]
005acd81  MOV EAX,dword ptr [EDX + 0x8]
005acd84  CALL EAX
005acd86  JMP 0x005acda3
005acd88  XOR ECX,ECX
005acd8a  JNZ 0x005acda3
005acd8c  PUSH 0x786
005acd91  PUSH 0x6cf934
005acd96  PUSH 0x6b2f58
005acd9b  CALL 0x005e9f20
005acda0  ADD ESP,0xc
005acda3  MOV ESP,EBP
005acda5  POP EBP
005acda6  RET

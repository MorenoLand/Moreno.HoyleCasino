; FUN_0056ebc0  0056ebc0
0056ebc0  PUSH EBP
0056ebc1  MOV EBP,ESP
0056ebc3  SUB ESP,0x10
0056ebc6  MOV dword ptr [EBP + -0x10],ECX
0056ebc9  MOV dword ptr [EBP + -0x4],0x0
0056ebd0  MOV EAX,dword ptr [EBP + -0x10]
0056ebd3  MOV ECX,dword ptr [EAX + 0xa4]
0056ebd9  MOV dword ptr [EBP + -0xc],ECX
0056ebdc  PUSH 0x0
0056ebde  MOV ECX,dword ptr [EBP + -0x10]
0056ebe1  CALL 0x0056e0a0
0056ebe6  MOV ECX,dword ptr [EBP + -0x10]
0056ebe9  CALL 0x0056f160
0056ebee  MOVZX EDX,AL
0056ebf1  TEST EDX,EDX
0056ebf3  JNZ 0x0056ec0c
0056ebf5  MOV ECX,dword ptr [EBP + -0x10]
0056ebf8  CALL 0x0056e480
0056ebfd  PUSH 0x0
0056ebff  MOV ECX,dword ptr [EBP + -0x10]
0056ec02  CALL 0x0056e110
0056ec07  JMP 0x0056ec8c
0056ec0c  MOV ECX,dword ptr [EBP + -0x10]
0056ec0f  CALL 0x0056f0d0
0056ec14  MOV dword ptr [EBP + -0x8],EAX
0056ec17  CMP dword ptr [EBP + -0x8],0x8
0056ec1b  JGE 0x0056ec56
0056ec1d  MOV EAX,dword ptr [EBP + -0x8]
0056ec20  MOV ECX,dword ptr [EAX*0x4 + 0x7488f0]
0056ec27  IMUL ECX,dword ptr [EBP + -0xc]
0056ec2b  MOV dword ptr [EBP + -0x4],ECX
0056ec2e  MOV ECX,dword ptr [EBP + -0x10]
0056ec31  CALL 0x0056e230
0056ec36  MOV EDX,dword ptr [EBP + -0x10]
0056ec39  MOVZX EAX,byte ptr [EDX + 0x99]
0056ec40  TEST EAX,EAX
0056ec42  JZ 0x0056ec56
0056ec44  CMP dword ptr [EBP + -0x8],0x1
0056ec48  JZ 0x0056ec56
0056ec4a  MOV ECX,dword ptr [EBP + -0x8]
0056ec4d  PUSH ECX
0056ec4e  MOV ECX,dword ptr [EBP + -0x10]
0056ec51  CALL 0x0056f560
0056ec56  MOV EDX,dword ptr [EBP + -0x4]
0056ec59  PUSH EDX
0056ec5a  MOV ECX,dword ptr [EBP + -0x10]
0056ec5d  CALL 0x0056e110
0056ec62  CMP dword ptr [EBP + -0x8],0x8
0056ec66  JNZ 0x0056ec7e
0056ec68  MOV EAX,dword ptr [EBP + -0x10]
0056ec6b  MOVZX ECX,byte ptr [EAX + 0x99]
0056ec72  TEST ECX,ECX
0056ec74  JNZ 0x0056ec7e
0056ec76  MOV ECX,dword ptr [EBP + -0x10]
0056ec79  CALL 0x0056f3e0
0056ec7e  CMP dword ptr [EBP + -0x8],0x9
0056ec82  JNZ 0x0056ec8c
0056ec84  MOV ECX,dword ptr [EBP + -0x10]
0056ec87  CALL 0x0056f870
0056ec8c  MOV EDX,dword ptr [EBP + -0x10]
0056ec8f  CMP dword ptr [EDX + 0xa0],0x0
0056ec96  JNZ 0x0056ecbe
0056ec98  MOV ECX,dword ptr [EBP + -0x10]
0056ec9b  CALL 0x0056e340
0056eca0  MOV EAX,dword ptr [EBP + -0x10]
0056eca3  MOVZX ECX,byte ptr [EAX + 0x99]
0056ecaa  TEST ECX,ECX
0056ecac  JNZ 0x0056ecbe
0056ecae  MOV ECX,dword ptr [EBP + -0x10]
0056ecb1  CALL 0x0056f870
0056ecb6  MOV ECX,dword ptr [EBP + -0x10]
0056ecb9  CALL 0x0056e3e0
0056ecbe  MOV EDX,dword ptr [EBP + -0x10]
0056ecc1  MOV EAX,dword ptr [EDX + 0x2c]
0056ecc4  MOVZX ECX,byte ptr [EAX + 0x190]
0056eccb  TEST ECX,ECX
0056eccd  JZ 0x0056ecd9
0056eccf  MOV EDX,dword ptr [EBP + -0x10]
0056ecd2  MOV byte ptr [EDX + 0x99],0x0
0056ecd9  PUSH 0x1
0056ecdb  MOV EAX,[0x0079344c]
0056ece0  MOV ECX,dword ptr [EAX + 0x4]
0056ece3  MOV EDX,dword ptr [0x0079344c]
0056ece9  MOV EAX,dword ptr [EDX + 0x4]
0056ecec  MOV EDX,dword ptr [ECX]
0056ecee  MOV ECX,EAX
0056ecf0  MOV EAX,dword ptr [EDX + 0x4]
0056ecf3  CALL EAX
0056ecf5  PUSH 0x0
0056ecf7  MOV ECX,dword ptr [0x0079344c]
0056ecfd  MOV EDX,dword ptr [ECX + 0x4]
0056ed00  MOV EAX,[0x0079344c]
0056ed05  MOV ECX,dword ptr [EAX + 0x4]
0056ed08  MOV EDX,dword ptr [EDX]
0056ed0a  MOV EAX,dword ptr [EDX + 0x1c]
0056ed0d  CALL EAX
0056ed0f  MOV ESP,EBP
0056ed11  POP EBP
0056ed12  RET

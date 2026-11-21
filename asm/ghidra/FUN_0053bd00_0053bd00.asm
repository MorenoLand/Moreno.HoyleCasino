; FUN_0053bd00  0053bd00
0053bd00  PUSH EBP
0053bd01  MOV EBP,ESP
0053bd03  SUB ESP,0x18
0053bd06  MOV dword ptr [EBP + -0x18],ECX
0053bd09  MOV EAX,dword ptr [EBP + -0x18]
0053bd0c  CMP dword ptr [EAX + 0x4],0x4
0053bd10  JZ 0x0053bd5e
0053bd12  PUSH 0x64
0053bd14  MOV ECX,dword ptr [EBP + -0x18]
0053bd17  MOV EDX,dword ptr [ECX + 0x4]
0053bd1a  PUSH EDX
0053bd1b  MOV ECX,dword ptr [0x0162ee84]
0053bd21  CALL 0x00639110
0053bd26  MOV ECX,EAX
0053bd28  CALL 0x00646380
0053bd2d  PUSH 0x0
0053bd2f  PUSH 0x0
0053bd31  MOV EAX,dword ptr [EBP + -0x18]
0053bd34  MOV ECX,dword ptr [EAX + 0x4]
0053bd37  PUSH ECX
0053bd38  MOV ECX,dword ptr [0x0162ee84]
0053bd3e  CALL 0x00639110
0053bd43  MOV ECX,EAX
0053bd45  CALL 0x006464d0
0053bd4a  PUSH 0x0
0053bd4c  MOV EDX,dword ptr [EBP + -0x18]
0053bd4f  MOV EAX,dword ptr [EDX + 0x4]
0053bd52  PUSH EAX
0053bd53  MOV ECX,dword ptr [0x007933e8]
0053bd59  CALL 0x005d9180
0053bd5e  MOV dword ptr [EBP + -0x4],0x0
0053bd65  JMP 0x0053bd70
0053bd67  MOV ECX,dword ptr [EBP + -0x4]
0053bd6a  ADD ECX,0x1
0053bd6d  MOV dword ptr [EBP + -0x4],ECX
0053bd70  CMP dword ptr [EBP + -0x4],0x3
0053bd74  JGE 0x0053bd95
0053bd76  MOV EDX,dword ptr [EBP + -0x4]
0053bd79  MOV EAX,dword ptr [EBP + -0x18]
0053bd7c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
0053bd80  MOV EDX,dword ptr [EBP + -0x4]
0053bd83  MOV EAX,dword ptr [EBP + -0x18]
0053bd86  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x8]
0053bd8a  MOV EAX,dword ptr [ECX]
0053bd8c  MOV ECX,EDX
0053bd8e  MOV EDX,dword ptr [EAX + 0x70]
0053bd91  CALL EDX
0053bd93  JMP 0x0053bd67
0053bd95  MOV EAX,dword ptr [EBP + -0x18]
0053bd98  CMP dword ptr [EAX + 0x4],0x4
0053bd9c  JZ 0x0053be1b
0053bd9e  MOV ECX,dword ptr [0x0162ee80]
0053bda4  MOV EDX,dword ptr [ECX + 0x4]
0053bda7  CMP dword ptr [EDX + 0x4],0x0
0053bdab  JNZ 0x0053be1b
0053bdad  MOV EAX,dword ptr [EBP + -0x18]
0053bdb0  MOV ECX,dword ptr [EAX + 0x4]
0053bdb3  PUSH ECX
0053bdb4  CALL 0x005dcb00
0053bdb9  ADD ESP,0x4
0053bdbc  MOV dword ptr [EBP + -0xc],EAX
0053bdbf  MOV ECX,dword ptr [EBP + -0xc]
0053bdc2  CALL 0x0063aac0
0053bdc7  MOV EDX,dword ptr [EAX]
0053bdc9  MOV dword ptr [EBP + -0x8],EDX
0053bdcc  XOR EAX,EAX
0053bdce  CMP dword ptr [EBP + -0x8],0x0
0053bdd2  SETZ AL
0053bdd5  MOVZX ECX,AL
0053bdd8  TEST ECX,ECX
0053bdda  JNZ 0x0053be19
0053bddc  MOV EDX,dword ptr [EBP + -0x18]
0053bddf  MOV EAX,dword ptr [EDX + 0x4]
0053bde2  PUSH EAX
0053bde3  CALL 0x005dcb00
0053bde8  ADD ESP,0x4
0053bdeb  MOV dword ptr [EBP + -0x10],EAX
0053bdee  MOV ECX,dword ptr [EBP + -0x10]
0053bdf1  MOV DL,byte ptr [ECX + 0x4a1]
0053bdf7  MOV byte ptr [EBP + -0x11],DL
0053bdfa  MOVZX EAX,byte ptr [EBP + -0x11]
0053bdfe  TEST EAX,EAX
0053be00  JNZ 0x0053be19
0053be02  MOV ECX,dword ptr [EBP + -0x18]
0053be05  MOV EDX,dword ptr [ECX + 0x4]
0053be08  MOV EAX,[0x007933ec]
0053be0d  MOVZX ECX,byte ptr [EAX + EDX*0x1 + 0xf6]
0053be15  TEST ECX,ECX
0053be17  JZ 0x0053be1b
0053be19  JMP 0x0053be6a
0053be1b  MOV dword ptr [EBP + -0x4],0x0
0053be22  JMP 0x0053be2d
0053be24  MOV EDX,dword ptr [EBP + -0x4]
0053be27  ADD EDX,0x1
0053be2a  MOV dword ptr [EBP + -0x4],EDX
0053be2d  CMP dword ptr [EBP + -0x4],0x3
0053be31  JGE 0x0053be6a
0053be33  MOV EAX,dword ptr [EBP + -0x4]
0053be36  PUSH EAX
0053be37  MOV ECX,dword ptr [EBP + -0x18]
0053be3a  MOV EDX,dword ptr [ECX + 0x4]
0053be3d  PUSH EDX
0053be3e  MOV ECX,dword ptr [0x007933ec]
0053be44  CALL 0x00540ba0
0053be49  MOVZX EAX,AX
0053be4c  TEST EAX,EAX
0053be4e  JNZ 0x0053be52
0053be50  JMP 0x0053be24
0053be52  MOV ECX,dword ptr [EBP + -0x4]
0053be55  PUSH ECX
0053be56  MOV EDX,dword ptr [EBP + -0x18]
0053be59  MOV EAX,dword ptr [EDX + 0x4]
0053be5c  PUSH EAX
0053be5d  MOV ECX,dword ptr [0x007933f4]
0053be63  CALL 0x0053b740
0053be68  JMP 0x0053be24
0053be6a  MOV ESP,EBP
0053be6c  POP EBP
0053be6d  RET

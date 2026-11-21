; FUN_005acf90  005acf90
005acf90  PUSH EBP
005acf91  MOV EBP,ESP
005acf93  SUB ESP,0x18
005acf96  MOV dword ptr [EBP + -0x14],ECX
005acf99  MOV EAX,dword ptr [EBP + -0x14]
005acf9c  MOVZX ECX,byte ptr [EAX + 0x8]
005acfa0  TEST ECX,ECX
005acfa2  JNZ 0x005acfdd
005acfa4  MOV EDX,dword ptr [EBP + -0x14]
005acfa7  MOV byte ptr [EDX + 0x8],0x1
005acfab  PUSH 0x4
005acfad  PUSH 0x8
005acfaf  MOV ECX,dword ptr [0x00793604]
005acfb5  CALL 0x005b7310
005acfba  PUSH 0x0
005acfbc  PUSH 0x1
005acfbe  MOV EAX,[0x00793600]
005acfc3  MOV ECX,dword ptr [EAX + 0x4]
005acfc6  MOV EDX,dword ptr [0x00793600]
005acfcc  MOV EAX,dword ptr [EDX + 0x4]
005acfcf  MOV EDX,dword ptr [ECX]
005acfd1  MOV ECX,EAX
005acfd3  MOV EAX,dword ptr [EDX + 0x8]
005acfd6  CALL EAX
005acfd8  JMP 0x005ad091
005acfdd  MOV ECX,dword ptr [EBP + 0x8]
005acfe0  PUSH ECX
005acfe1  CALL 0x005dcb00
005acfe6  ADD ESP,0x4
005acfe9  MOV dword ptr [EBP + -0x10],EAX
005acfec  MOV ECX,dword ptr [EBP + -0x10]
005acfef  CALL 0x0063aac0
005acff4  MOV EDX,dword ptr [EAX]
005acff6  MOV dword ptr [EBP + -0x8],EDX
005acff9  CMP dword ptr [EBP + -0x8],0x2
005acffd  JZ 0x005ad01b
005acfff  MOV ECX,dword ptr [EBP + -0x10]
005ad002  CALL 0x0063aac0
005ad007  MOV EAX,dword ptr [EAX]
005ad009  MOV dword ptr [EBP + -0xc],EAX
005ad00c  CMP dword ptr [EBP + -0xc],0x3
005ad010  JZ 0x005ad01b
005ad012  MOV dword ptr [EBP + -0x18],0x0
005ad019  JMP 0x005ad022
005ad01b  MOV dword ptr [EBP + -0x18],0x1
005ad022  MOVZX ECX,byte ptr [EBP + -0x18]
005ad026  TEST ECX,ECX
005ad028  JZ 0x005ad037
005ad02a  MOV ECX,dword ptr [0x007935f8]
005ad030  CALL 0x005a8610
005ad035  JMP 0x005ad091
005ad037  MOV EDX,dword ptr [EBP + 0x8]
005ad03a  PUSH EDX
005ad03b  MOV ECX,dword ptr [0x007935f4]
005ad041  CALL 0x005a6bb0
005ad046  MOV byte ptr [EBP + -0x1],AL
005ad049  MOV AL,byte ptr [EBP + -0x1]
005ad04c  PUSH EAX
005ad04d  MOV ECX,dword ptr [EBP + 0x8]
005ad050  PUSH ECX
005ad051  MOV ECX,dword ptr [0x00793604]
005ad057  CALL 0x005b73e0
005ad05c  MOVZX EDX,byte ptr [EBP + -0x1]
005ad060  TEST EDX,EDX
005ad062  JZ 0x005ad075
005ad064  MOV EAX,dword ptr [EBP + 0x8]
005ad067  PUSH EAX
005ad068  PUSH 0x0
005ad06a  MOV ECX,dword ptr [0x00793604]
005ad070  CALL 0x005b7310
005ad075  PUSH 0x0
005ad077  PUSH 0x1
005ad079  MOV ECX,dword ptr [0x00793600]
005ad07f  MOV EDX,dword ptr [ECX + 0x4]
005ad082  MOV EAX,[0x00793600]
005ad087  MOV ECX,dword ptr [EAX + 0x4]
005ad08a  MOV EDX,dword ptr [EDX]
005ad08c  MOV EAX,dword ptr [EDX + 0x8]
005ad08f  CALL EAX
005ad091  MOV ESP,EBP
005ad093  POP EBP
005ad094  RET 0x4

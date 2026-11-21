; FUN_005aeb60  005aeb60
005aeb60  PUSH EBP
005aeb61  MOV EBP,ESP
005aeb63  SUB ESP,0x44
005aeb66  MOV dword ptr [EBP + -0x40],ECX
005aeb69  MOV EAX,dword ptr [EBP + 0x8]
005aeb6c  PUSH EAX
005aeb6d  CALL 0x005dcb00
005aeb72  ADD ESP,0x4
005aeb75  MOV dword ptr [EBP + -0x30],EAX
005aeb78  MOV ECX,dword ptr [EBP + -0x30]
005aeb7b  CALL 0x0063aac0
005aeb80  MOV ECX,dword ptr [EAX]
005aeb82  MOV dword ptr [EBP + -0x28],ECX
005aeb85  CMP dword ptr [EBP + -0x28],0x2
005aeb89  JZ 0x005aeba7
005aeb8b  MOV ECX,dword ptr [EBP + -0x30]
005aeb8e  CALL 0x0063aac0
005aeb93  MOV EDX,dword ptr [EAX]
005aeb95  MOV dword ptr [EBP + -0x2c],EDX
005aeb98  CMP dword ptr [EBP + -0x2c],0x3
005aeb9c  JZ 0x005aeba7
005aeb9e  MOV dword ptr [EBP + -0x44],0x0
005aeba5  JMP 0x005aebae
005aeba7  MOV dword ptr [EBP + -0x44],0x1
005aebae  MOVZX EAX,byte ptr [EBP + -0x44]
005aebb2  TEST EAX,EAX
005aebb4  JZ 0x005aeca0
005aebba  PUSH -0x1
005aebbc  MOV ECX,dword ptr [0x007947e0]
005aebc2  CALL 0x005df700
005aebc7  MOVZX ECX,AL
005aebca  TEST ECX,ECX
005aebcc  JZ 0x005aebfa
005aebce  PUSH 0x753238
005aebd3  PUSH 0xb
005aebd5  MOV ECX,dword ptr [0x00793578]
005aebdb  CALL 0x0057ab80
005aebe0  MOV EDX,dword ptr [0x00793604]
005aebe6  MOV EAX,dword ptr [EDX + 0x5c8]
005aebec  PUSH EAX
005aebed  MOV ECX,dword ptr [0x00793604]
005aebf3  CALL 0x005b7a70
005aebf8  JMP 0x005aec05
005aebfa  MOV ECX,dword ptr [0x00793578]
005aec00  CALL 0x0057ae30
005aec05  MOV ECX,dword ptr [EBP + 0x8]
005aec08  PUSH ECX
005aec09  CALL 0x005dcb00
005aec0e  ADD ESP,0x4
005aec11  MOV ECX,EAX
005aec13  CALL 0x005d5840
005aec18  MOVZX EDX,AL
005aec1b  TEST EDX,EDX
005aec1d  JNZ 0x005aec89
005aec1f  MOV ECX,dword ptr [0x00793600]
005aec25  CALL 0x005da7b0
005aec2a  MOVZX EAX,AL
005aec2d  TEST EAX,EAX
005aec2f  JZ 0x005aec59
005aec31  MOV ECX,dword ptr [EBP + 0x8]
005aec34  PUSH ECX
005aec35  CALL 0x005dcb00
005aec3a  ADD ESP,0x4
005aec3d  MOV dword ptr [EBP + -0x34],EAX
005aec40  MOV EDX,dword ptr [EBP + -0x34]
005aec43  MOV byte ptr [EDX + 0x4a1],0x1
005aec4a  MOV ECX,dword ptr [EBP + -0x40]
005aec4d  CALL 0x005af1b0
005aec52  JMP 0x005aee3d
005aec59  MOV EAX,dword ptr [EBP + 0x8]
005aec5c  PUSH EAX
005aec5d  MOV ECX,dword ptr [0x00793604]
005aec63  CALL 0x005b7d70
005aec68  MOVZX ECX,AL
005aec6b  TEST ECX,ECX
005aec6d  JZ 0x005aec87
005aec6f  MOV EDX,dword ptr [EBP + 0x8]
005aec72  PUSH EDX
005aec73  CALL 0x005dcb00
005aec78  ADD ESP,0x4
005aec7b  PUSH EAX
005aec7c  MOV ECX,dword ptr [0x00793600]
005aec82  CALL 0x005dbb70
005aec87  JMP 0x005aec9b
005aec89  PUSH 0xaf
005aec8e  PUSH 0x0
005aec90  MOV ECX,dword ptr [0x00793600]
005aec96  CALL 0x005db7d0
005aec9b  JMP 0x005aee3d
005aeca0  MOV EAX,dword ptr [EBP + -0x40]
005aeca3  MOVZX ECX,byte ptr [EAX + 0x4]
005aeca7  TEST ECX,ECX
005aeca9  JNZ 0x005aecd0
005aecab  MOV EDX,dword ptr [EBP + -0x40]
005aecae  MOV byte ptr [EDX + 0x4],0x1
005aecb2  PUSH 0x2
005aecb4  MOV ECX,dword ptr [0x0162ee84]
005aecba  CALL 0x00637810
005aecbf  PUSH EAX
005aecc0  MOV ECX,dword ptr [0x00793600]
005aecc6  CALL 0x005da360
005aeccb  JMP 0x005aee3d
005aecd0  MOV EAX,dword ptr [EBP + -0x40]
005aecd3  MOV byte ptr [EAX + 0x4],0x0
005aecd7  MOV ECX,dword ptr [0x00793578]
005aecdd  CALL 0x0057ae30
005aece2  MOV ECX,dword ptr [EBP + 0x8]
005aece5  PUSH ECX
005aece6  CALL 0x005dcb00
005aeceb  ADD ESP,0x4
005aecee  MOV ECX,EAX
005aecf0  CALL 0x005d5840
005aecf5  MOVZX EDX,AL
005aecf8  TEST EDX,EDX
005aecfa  JZ 0x005aede3
005aed00  PUSH 0x0
005aed02  MOV EAX,dword ptr [EBP + 0x8]
005aed05  PUSH EAX
005aed06  MOV ECX,dword ptr [0x007935f4]
005aed0c  CALL 0x005a5840
005aed11  PUSH EAX
005aed12  CALL 0x0064c8a0
005aed17  ADD ESP,0x8
005aed1a  MOV dword ptr [EBP + -0x1c],EAX
005aed1d  MOV dword ptr [EBP + -0x18],EDX
005aed20  MOV ECX,dword ptr [EBP + -0x1c]
005aed23  MOV dword ptr [EBP + -0x8],ECX
005aed26  MOV EDX,dword ptr [EBP + -0x18]
005aed29  MOV dword ptr [EBP + -0x4],EDX
005aed2c  PUSH 0x1
005aed2e  PUSH 0x0
005aed30  LEA EAX,[EBP + -0x8]
005aed33  PUSH EAX
005aed34  MOV ECX,dword ptr [EBP + 0x8]
005aed37  MOV EDX,dword ptr [0x00793604]
005aed3d  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x580]
005aed44  MOV ECX,dword ptr [EBP + 0x8]
005aed47  MOV EDX,dword ptr [0x00793604]
005aed4d  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x580]
005aed54  MOV EAX,dword ptr [EAX]
005aed56  MOV EDX,dword ptr [EAX + 0xc4]
005aed5c  CALL EDX
005aed5e  MOV EAX,dword ptr [EBP + 0x8]
005aed61  PUSH EAX
005aed62  MOV ECX,dword ptr [0x007935f4]
005aed68  CALL 0x005a6b70
005aed6d  MOV dword ptr [EBP + -0xc],EAX
005aed70  CMP dword ptr [EBP + -0xc],0x0
005aed74  JLE 0x005aedc8
005aed76  PUSH 0x0
005aed78  MOV ECX,dword ptr [EBP + -0xc]
005aed7b  PUSH ECX
005aed7c  CALL 0x0064c8a0
005aed81  ADD ESP,0x8
005aed84  MOV dword ptr [EBP + -0x24],EAX
005aed87  MOV dword ptr [EBP + -0x20],EDX
005aed8a  MOV EDX,dword ptr [EBP + -0x24]
005aed8d  MOV dword ptr [EBP + -0x14],EDX
005aed90  MOV EAX,dword ptr [EBP + -0x20]
005aed93  MOV dword ptr [EBP + -0x10],EAX
005aed96  PUSH 0x1
005aed98  PUSH 0x0
005aed9a  LEA ECX,[EBP + -0x14]
005aed9d  PUSH ECX
005aed9e  MOV EDX,dword ptr [EBP + 0x8]
005aeda1  MOV EAX,[0x00793604]
005aeda6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x634]
005aedad  MOV EDX,dword ptr [EBP + 0x8]
005aedb0  MOV EAX,[0x00793604]
005aedb5  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x634]
005aedbc  MOV EAX,dword ptr [ECX]
005aedbe  MOV ECX,EDX
005aedc0  MOV EDX,dword ptr [EAX + 0xc4]
005aedc6  CALL EDX
005aedc8  MOV EAX,dword ptr [EBP + 0x8]
005aedcb  PUSH EAX
005aedcc  CALL 0x005dcb00
005aedd1  ADD ESP,0x4
005aedd4  MOV dword ptr [EBP + -0x38],EAX
005aedd7  MOV ECX,dword ptr [EBP + -0x38]
005aedda  MOV byte ptr [ECX + 0x4a0],0x1
005aede1  JMP 0x005aee1f
005aede3  MOV ECX,dword ptr [0x00793600]
005aede9  CALL 0x005da7b0
005aedee  MOVZX EDX,AL
005aedf1  TEST EDX,EDX
005aedf3  JZ 0x005aee10
005aedf5  MOV EAX,dword ptr [EBP + 0x8]
005aedf8  PUSH EAX
005aedf9  CALL 0x005dcb00
005aedfe  ADD ESP,0x4
005aee01  MOV dword ptr [EBP + -0x3c],EAX
005aee04  MOV ECX,dword ptr [EBP + -0x3c]
005aee07  MOV byte ptr [ECX + 0x4a1],0x1
005aee0e  JMP 0x005aee1f
005aee10  MOV EDX,dword ptr [EBP + 0x8]
005aee13  PUSH EDX
005aee14  MOV ECX,dword ptr [0x00793600]
005aee1a  CALL 0x005d9570
005aee1f  PUSH 0x0
005aee21  PUSH 0x1
005aee23  MOV EAX,[0x0162ee80]
005aee28  MOV ECX,dword ptr [EAX + 0x4]
005aee2b  MOV EDX,dword ptr [0x0162ee80]
005aee31  MOV EAX,dword ptr [EDX + 0x4]
005aee34  MOV EDX,dword ptr [ECX]
005aee36  MOV ECX,EAX
005aee38  MOV EAX,dword ptr [EDX + 0x8]
005aee3b  CALL EAX
005aee3d  MOV ESP,EBP
005aee3f  POP EBP
005aee40  RET 0x4

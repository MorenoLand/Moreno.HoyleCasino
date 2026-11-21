; FUN_0042fd50  0042fd50
0042fd50  PUSH EBP
0042fd51  MOV EBP,ESP
0042fd53  SUB ESP,0x54
0042fd56  MOV dword ptr [EBP + -0x50],ECX
0042fd59  MOV dword ptr [EBP + -0x4],0x0
0042fd60  MOV dword ptr [EBP + -0x20],0x0
0042fd67  PUSH 0x0
0042fd69  PUSH 0x0
0042fd6b  CALL 0x0064c8a0
0042fd70  ADD ESP,0x8
0042fd73  MOV dword ptr [EBP + -0x2c],EAX
0042fd76  MOV dword ptr [EBP + -0x28],EDX
0042fd79  MOV EAX,dword ptr [EBP + -0x2c]
0042fd7c  MOV dword ptr [EBP + -0x18],EAX
0042fd7f  MOV ECX,dword ptr [EBP + -0x28]
0042fd82  MOV dword ptr [EBP + -0x14],ECX
0042fd85  MOV EDX,dword ptr [EBP + 0x8]
0042fd88  PUSH EDX
0042fd89  CALL 0x005dcb00
0042fd8e  ADD ESP,0x4
0042fd91  MOV dword ptr [EBP + -0x38],EAX
0042fd94  MOV ECX,dword ptr [EBP + -0x38]
0042fd97  CALL 0x005d52e0
0042fd9c  MOV AL,byte ptr [EAX + 0x2a]
0042fd9f  MOV byte ptr [EBP + -0x39],AL
0042fda2  MOVSX ECX,byte ptr [EBP + -0x39]
0042fda6  MOV dword ptr [EBP + -0x1c],ECX
0042fda9  MOV dword ptr [EBP + -0x10],0xffffffff
0042fdb0  MOV byte ptr [EBP + -0x9],0x0
0042fdb4  MOV dword ptr [EBP + -0x8],0x4b
0042fdbb  JMP 0x0042fdc6
0042fdbd  MOV EDX,dword ptr [EBP + -0x8]
0042fdc0  SUB EDX,0x1
0042fdc3  MOV dword ptr [EBP + -0x8],EDX
0042fdc6  CMP dword ptr [EBP + -0x8],-0x1
0042fdca  JLE 0x0042fe02
0042fdcc  MOV EAX,dword ptr [EBP + -0x8]
0042fdcf  MOV ECX,dword ptr [0x007906d4]
0042fdd5  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4]
0042fdd9  CALL 0x005f5400
0042fdde  PUSH EAX
0042fddf  MOV ECX,dword ptr [0x007906d4]
0042fde5  CALL 0x00438a10
0042fdea  CMP EAX,0x1
0042fded  JNZ 0x0042fe00
0042fdef  MOV EDX,dword ptr [EBP + -0x8]
0042fdf2  MOV EAX,[0x007906dc]
0042fdf7  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x14]
0042fdfb  CALL 0x0042c340
0042fe00  JMP 0x0042fdbd
0042fe02  MOV ECX,dword ptr [EBP + 0x8]
0042fe05  PUSH ECX
0042fe06  MOV ECX,dword ptr [0x007906d4]
0042fe0c  CALL 0x004349b0
0042fe11  MOVZX EDX,AL
0042fe14  TEST EDX,EDX
0042fe16  JNZ 0x0042fe51
0042fe18  MOV EAX,dword ptr [EBP + 0x8]
0042fe1b  PUSH EAX
0042fe1c  CALL 0x005dcb00
0042fe21  ADD ESP,0x4
0042fe24  MOV dword ptr [EBP + -0x40],EAX
0042fe27  MOV ECX,dword ptr [EBP + -0x40]
0042fe2a  MOV byte ptr [ECX + 0x4a2],0x1
0042fe31  PUSH 0xf
0042fe33  MOV EDX,dword ptr [0x0162ee80]
0042fe39  MOV EAX,dword ptr [EDX + 0x4]
0042fe3c  MOV ECX,dword ptr [0x0162ee80]
0042fe42  MOV ECX,dword ptr [ECX + 0x4]
0042fe45  MOV EDX,dword ptr [EAX]
0042fe47  MOV EAX,dword ptr [EDX + 0x1c]
0042fe4a  CALL EAX
0042fe4c  JMP 0x0042ffed
0042fe51  MOV dword ptr [EBP + -0x8],0x4b
0042fe58  JMP 0x0042fe63
0042fe5a  MOV ECX,dword ptr [EBP + -0x8]
0042fe5d  SUB ECX,0x1
0042fe60  MOV dword ptr [EBP + -0x8],ECX
0042fe63  CMP dword ptr [EBP + -0x8],-0x1
0042fe67  JLE 0x0042ff2c
0042fe6d  PUSH 0x0
0042fe6f  MOV EDX,dword ptr [EBP + 0x8]
0042fe72  PUSH EDX
0042fe73  MOV EAX,dword ptr [EBP + -0x8]
0042fe76  MOV ECX,dword ptr [0x007906d4]
0042fe7c  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4]
0042fe80  CALL 0x005cb7d0
0042fe85  MOVZX EDX,AL
0042fe88  TEST EDX,EDX
0042fe8a  JZ 0x0042ff27
0042fe90  MOV EAX,dword ptr [EBP + 0x8]
0042fe93  PUSH EAX
0042fe94  CALL 0x005dcb00
0042fe99  ADD ESP,0x4
0042fe9c  MOV dword ptr [EBP + -0x44],EAX
0042fe9f  MOV ECX,dword ptr [EBP + -0x44]
0042fea2  CALL 0x005d52e0
0042fea7  MOV CL,byte ptr [EAX + 0x2a]
0042feaa  MOV byte ptr [EBP + -0x45],CL
0042fead  MOVSX EDX,byte ptr [EBP + -0x45]
0042feb1  MOV dword ptr [EBP + -0x10],EDX
0042feb4  MOV EAX,dword ptr [EBP + -0x1c]
0042feb7  CMP EAX,dword ptr [EBP + -0x10]
0042feba  JZ 0x0042fec6
0042febc  CMP dword ptr [EBP + -0x10],0x0
0042fec0  JNZ 0x0042fec6
0042fec2  MOV byte ptr [EBP + -0x9],0x1
0042fec6  MOVZX ECX,byte ptr [EBP + -0x9]
0042feca  TEST ECX,ECX
0042fecc  JZ 0x0042fed0
0042fece  JMP 0x0042ff2c
0042fed0  MOV EDX,dword ptr [EBP + -0x8]
0042fed3  MOV EAX,[0x007906d4]
0042fed8  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
0042fedc  CALL 0x005f5400
0042fee1  PUSH EAX
0042fee2  MOV ECX,dword ptr [0x007906d4]
0042fee8  CALL 0x00438a10
0042feed  MOV dword ptr [EBP + -0x24],EAX
0042fef0  CMP dword ptr [EBP + -0x24],0x1
0042fef4  JNZ 0x0042feff
0042fef6  MOV ECX,dword ptr [EBP + -0x4]
0042fef9  ADD ECX,0x1
0042fefc  MOV dword ptr [EBP + -0x4],ECX
0042feff  CMP dword ptr [EBP + -0x24],0x0
0042ff03  JNZ 0x0042ff0e
0042ff05  MOV EDX,dword ptr [EBP + -0x20]
0042ff08  ADD EDX,0x1
0042ff0b  MOV dword ptr [EBP + -0x20],EDX
0042ff0e  MOV EAX,dword ptr [EBP + -0x24]
0042ff11  PUSH EAX
0042ff12  MOV ECX,dword ptr [EBP + 0x8]
0042ff15  PUSH ECX
0042ff16  MOV EDX,dword ptr [EBP + -0x8]
0042ff19  MOV EAX,[0x007906d4]
0042ff1e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
0042ff22  CALL 0x0043cd40
0042ff27  JMP 0x0042fe5a
0042ff2c  MOVZX ECX,byte ptr [EBP + -0x9]
0042ff30  TEST ECX,ECX
0042ff32  JZ 0x0042ff7f
0042ff34  MOV EDX,dword ptr [EBP + 0x8]
0042ff37  PUSH EDX
0042ff38  CALL 0x005dcb00
0042ff3d  ADD ESP,0x4
0042ff40  MOV dword ptr [EBP + -0x54],EAX
0042ff43  PUSH -0x1
0042ff45  MOV EAX,dword ptr [EBP + -0x54]
0042ff48  MOV EDX,dword ptr [EAX]
0042ff4a  MOV ECX,dword ptr [EBP + -0x54]
0042ff4d  MOV EAX,dword ptr [EDX + 0x4]
0042ff50  CALL EAX
0042ff52  PUSH 0x0
0042ff54  PUSH 0x0
0042ff56  CALL 0x0064c8a0
0042ff5b  ADD ESP,0x8
0042ff5e  MOV dword ptr [EBP + -0x34],EAX
0042ff61  MOV dword ptr [EBP + -0x30],EDX
0042ff64  MOV ECX,dword ptr [EBP + -0x30]
0042ff67  PUSH ECX
0042ff68  MOV EDX,dword ptr [EBP + -0x34]
0042ff6b  PUSH EDX
0042ff6c  MOV EAX,dword ptr [EBP + 0x8]
0042ff6f  PUSH EAX
0042ff70  CALL 0x005dcb00
0042ff75  ADD ESP,0x4
0042ff78  MOV ECX,EAX
0042ff7a  CALL 0x005d6050
0042ff7f  MOV ECX,dword ptr [EBP + 0x8]
0042ff82  PUSH ECX
0042ff83  CALL 0x005dcb00
0042ff88  ADD ESP,0x4
0042ff8b  MOV dword ptr [EBP + -0x4c],EAX
0042ff8e  MOV EDX,dword ptr [EBP + -0x4c]
0042ff91  MOV byte ptr [EDX + 0x4a2],0x1
0042ff98  LEA EAX,[EBP + -0x18]
0042ff9b  PUSH EAX
0042ff9c  MOV ECX,dword ptr [EBP + 0x8]
0042ff9f  PUSH ECX
0042ffa0  CALL 0x005dcb00
0042ffa5  ADD ESP,0x4
0042ffa8  MOV ECX,EAX
0042ffaa  CALL 0x005d6020
0042ffaf  CMP dword ptr [EBP + -0x18],0x0
0042ffb3  JNZ 0x0042ffde
0042ffb5  CMP dword ptr [EBP + -0x4],0x0
0042ffb9  JNZ 0x0042ffde
0042ffbb  CMP dword ptr [EBP + -0x20],0x0
0042ffbf  JNZ 0x0042ffde
0042ffc1  PUSH 0xf
0042ffc3  MOV EDX,dword ptr [0x0162ee80]
0042ffc9  MOV EAX,dword ptr [EDX + 0x4]
0042ffcc  MOV ECX,dword ptr [0x0162ee80]
0042ffd2  MOV ECX,dword ptr [ECX + 0x4]
0042ffd5  MOV EDX,dword ptr [EAX]
0042ffd7  MOV EAX,dword ptr [EDX + 0x1c]
0042ffda  CALL EAX
0042ffdc  JMP 0x0042ffed
0042ffde  MOV ECX,dword ptr [EBP + 0x8]
0042ffe1  PUSH ECX
0042ffe2  MOV ECX,dword ptr [0x007906dc]
0042ffe8  CALL 0x0042a820
0042ffed  MOV ESP,EBP
0042ffef  POP EBP
0042fff0  RET 0x4

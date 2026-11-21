; FUN_0044ddc0  0044ddc0
0044ddc0  PUSH EBP
0044ddc1  MOV EBP,ESP
0044ddc3  SUB ESP,0x38
0044ddc6  MOV dword ptr [EBP + -0x34],ECX
0044ddc9  PUSH 0x0
0044ddcb  PUSH 0x5
0044ddcd  MOV EAX,dword ptr [EBP + 0x8]
0044ddd0  IMUL EAX,EAX,0xa
0044ddd3  MOV ECX,dword ptr [EBP + -0x34]
0044ddd6  LEA EDX,[ECX + EAX*0x1 + 0x98]
0044dddd  PUSH EDX
0044ddde  CALL 0x00462ba0
0044dde3  ADD ESP,0xc
0044dde6  MOV dword ptr [EBP + -0x10],EAX
0044dde9  CMP dword ptr [EBP + -0x10],0x2
0044dded  JNZ 0x0044de16
0044ddef  PUSH 0x5
0044ddf1  MOV EAX,dword ptr [EBP + 0x8]
0044ddf4  IMUL EAX,EAX,0xa
0044ddf7  MOV ECX,dword ptr [EBP + -0x34]
0044ddfa  LEA EDX,[ECX + EAX*0x1 + 0x98]
0044de01  PUSH EDX
0044de02  CALL 0x004639e0
0044de07  ADD ESP,0x8
0044de0a  CMP EAX,0xa
0044de0d  JGE 0x0044de16
0044de0f  MOV dword ptr [EBP + -0x10],0x1
0044de16  CMP dword ptr [EBP + -0x10],0x1
0044de1a  JNZ 0x0044de2f
0044de1c  MOV EAX,dword ptr [EBP + 0x8]
0044de1f  MOV ECX,dword ptr [EBP + -0x34]
0044de22  MOV dword ptr [ECX + EAX*0x4 + 0xdc],0x0
0044de2d  JMP 0x0044de40
0044de2f  MOV EDX,dword ptr [EBP + 0x8]
0044de32  MOV EAX,dword ptr [EBP + -0x34]
0044de35  MOV dword ptr [EAX + EDX*0x4 + 0xdc],0x1
0044de40  PUSH 0x0
0044de42  PUSH 0x0
0044de44  CALL 0x0064c8a0
0044de49  ADD ESP,0x8
0044de4c  MOV dword ptr [EBP + -0x18],EAX
0044de4f  MOV dword ptr [EBP + -0x14],EDX
0044de52  MOV ECX,dword ptr [EBP + -0x14]
0044de55  PUSH ECX
0044de56  MOV EDX,dword ptr [EBP + -0x18]
0044de59  PUSH EDX
0044de5a  MOV EAX,dword ptr [EBP + 0x8]
0044de5d  PUSH EAX
0044de5e  CALL 0x005dcb00
0044de63  ADD ESP,0x4
0044de66  MOV ECX,EAX
0044de68  CALL 0x005d6050
0044de6d  MOV ECX,dword ptr [EBP + 0x8]
0044de70  PUSH ECX
0044de71  CALL 0x005dcb00
0044de76  ADD ESP,0x4
0044de79  MOV dword ptr [EBP + -0x24],EAX
0044de7c  MOV ECX,dword ptr [EBP + -0x24]
0044de7f  CALL 0x005d52e0
0044de84  MOV DL,byte ptr [EAX + 0x2a]
0044de87  MOV byte ptr [EBP + -0x25],DL
0044de8a  MOVSX EAX,byte ptr [EBP + -0x25]
0044de8e  MOV dword ptr [EBP + -0xc],EAX
0044de91  MOV dword ptr [EBP + -0x8],0xffffffff
0044de98  MOV dword ptr [EBP + -0x4],0x0
0044de9f  JMP 0x0044deaa
0044dea1  MOV ECX,dword ptr [EBP + -0x4]
0044dea4  ADD ECX,0x1
0044dea7  MOV dword ptr [EBP + -0x4],ECX
0044deaa  CMP dword ptr [EBP + -0x4],0x3
0044deae  JGE 0x0044df7b
0044deb4  PUSH 0x0
0044deb6  MOV EDX,dword ptr [EBP + 0x8]
0044deb9  PUSH EDX
0044deba  MOV EAX,dword ptr [EBP + 0x8]
0044debd  IMUL EAX,EAX,0x3
0044dec0  ADD EAX,dword ptr [EBP + -0x4]
0044dec3  MOV ECX,dword ptr [EBP + -0x34]
0044dec6  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x8]
0044deca  CALL 0x005cb7d0
0044decf  MOVZX EDX,AL
0044ded2  TEST EDX,EDX
0044ded4  JZ 0x0044df76
0044deda  MOV EAX,dword ptr [EBP + -0x10]
0044dedd  PUSH EAX
0044dede  MOV ECX,dword ptr [EBP + 0x8]
0044dee1  PUSH ECX
0044dee2  MOV EDX,dword ptr [EBP + 0x8]
0044dee5  IMUL EDX,EDX,0x3
0044dee8  ADD EDX,dword ptr [EBP + -0x4]
0044deeb  MOV EAX,dword ptr [EBP + -0x34]
0044deee  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
0044def2  CALL 0x0044e340
0044def7  MOV ECX,dword ptr [EBP + 0x8]
0044defa  PUSH ECX
0044defb  CALL 0x005dcb00
0044df00  ADD ESP,0x4
0044df03  MOV dword ptr [EBP + -0x2c],EAX
0044df06  MOV ECX,dword ptr [EBP + -0x2c]
0044df09  CALL 0x005d52e0
0044df0e  MOV DL,byte ptr [EAX + 0x2a]
0044df11  MOV byte ptr [EBP + -0x2d],DL
0044df14  MOVSX EAX,byte ptr [EBP + -0x2d]
0044df18  MOV dword ptr [EBP + -0x8],EAX
0044df1b  MOV ECX,dword ptr [EBP + -0xc]
0044df1e  CMP ECX,dword ptr [EBP + -0x8]
0044df21  JZ 0x0044df76
0044df23  CMP dword ptr [EBP + -0x8],0x0
0044df27  JNZ 0x0044df76
0044df29  MOV EDX,dword ptr [EBP + 0x8]
0044df2c  PUSH EDX
0044df2d  CALL 0x005dcb00
0044df32  ADD ESP,0x4
0044df35  MOV dword ptr [EBP + -0x38],EAX
0044df38  PUSH -0x1
0044df3a  MOV EAX,dword ptr [EBP + -0x38]
0044df3d  MOV EDX,dword ptr [EAX]
0044df3f  MOV ECX,dword ptr [EBP + -0x38]
0044df42  MOV EAX,dword ptr [EDX + 0x4]
0044df45  CALL EAX
0044df47  PUSH 0x0
0044df49  PUSH 0x0
0044df4b  CALL 0x0064c8a0
0044df50  ADD ESP,0x8
0044df53  MOV dword ptr [EBP + -0x20],EAX
0044df56  MOV dword ptr [EBP + -0x1c],EDX
0044df59  MOV ECX,dword ptr [EBP + -0x1c]
0044df5c  PUSH ECX
0044df5d  MOV EDX,dword ptr [EBP + -0x20]
0044df60  PUSH EDX
0044df61  MOV EAX,dword ptr [EBP + 0x8]
0044df64  PUSH EAX
0044df65  CALL 0x005dcb00
0044df6a  ADD ESP,0x4
0044df6d  MOV ECX,EAX
0044df6f  CALL 0x005d6050
0044df74  JMP 0x0044df7b
0044df76  JMP 0x0044dea1
0044df7b  MOV ESP,EBP
0044df7d  POP EBP
0044df7e  RET 0x4

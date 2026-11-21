; FUN_0060a9c0  0060a9c0
0060a9c0  PUSH EBP
0060a9c1  MOV EBP,ESP
0060a9c3  SUB ESP,0xc
0060a9c6  PUSH ESI
0060a9c7  MOV dword ptr [EBP + -0xc],ECX
0060a9ca  MOVZX EAX,byte ptr [0x007960cb]
0060a9d1  TEST EAX,EAX
0060a9d3  JNZ 0x0060ab27
0060a9d9  MOV ECX,dword ptr [EBP + -0xc]
0060a9dc  MOVZX EDX,byte ptr [ECX + 0xa]
0060a9e0  TEST EDX,EDX
0060a9e2  JZ 0x0060a9eb
0060a9e4  XOR EAX,EAX
0060a9e6  JMP 0x0060ab29
0060a9eb  MOV EAX,dword ptr [EBP + -0xc]
0060a9ee  MOVZX ECX,byte ptr [EAX + 0x9]
0060a9f2  TEST ECX,ECX
0060a9f4  JZ 0x0060aa07
0060a9f6  MOV EDX,dword ptr [EBP + -0xc]
0060a9f9  MOVZX EAX,byte ptr [EDX + 0x8]
0060a9fd  TEST EAX,EAX
0060a9ff  JZ 0x0060aa07
0060aa01  CMP dword ptr [EBP + 0x8],0x0
0060aa05  JNZ 0x0060aa0f
0060aa07  OR EAX,0xffffffff
0060aa0a  JMP 0x0060ab29
0060aa0f  MOV ECX,dword ptr [EBP + -0xc]
0060aa12  CALL 0x00609e00
0060aa17  MOV dword ptr [EBP + -0x8],EAX
0060aa1a  CMP dword ptr [EBP + -0x8],-0x1
0060aa1e  JNZ 0x0060aa28
0060aa20  OR EAX,0xffffffff
0060aa23  JMP 0x0060ab29
0060aa28  MOV ECX,dword ptr [EBP + -0x8]
0060aa2b  IMUL ECX,ECX,0x74
0060aa2e  MOV EDX,dword ptr [EBP + 0x8]
0060aa31  MOV dword ptr [ECX + 0x796d38],EDX
0060aa37  CMP dword ptr [EBP + 0xc],0x0
0060aa3b  JZ 0x0060aad9
0060aa41  MOV EAX,dword ptr [EBP + -0x8]
0060aa44  IMUL EAX,EAX,0x74
0060aa47  MOV byte ptr [EAX + 0x796d3c],0x1
0060aa4e  MOV ECX,dword ptr [EBP + -0x8]
0060aa51  IMUL ECX,ECX,0x74
0060aa54  MOV dword ptr [ECX + 0x796d40],0xffffffff
0060aa5e  MOV dword ptr [EBP + -0x4],0x0
0060aa65  JMP 0x0060aa70
0060aa67  MOV EDX,dword ptr [EBP + -0x4]
0060aa6a  ADD EDX,0x1
0060aa6d  MOV dword ptr [EBP + -0x4],EDX
0060aa70  MOV EAX,dword ptr [EBP + -0x4]
0060aa73  MOV ECX,dword ptr [EBP + 0xc]
0060aa76  CMP dword ptr [ECX + EAX*0x4],-0x1
0060aa7a  JZ 0x0060aa97
0060aa7c  MOV EDX,dword ptr [EBP + -0x8]
0060aa7f  IMUL EDX,EDX,0x74
0060aa82  MOV EAX,dword ptr [EBP + -0x4]
0060aa85  MOV ECX,dword ptr [EBP + -0x4]
0060aa88  MOV ESI,dword ptr [EBP + 0xc]
0060aa8b  MOV ECX,dword ptr [ESI + ECX*0x4]
0060aa8e  MOV dword ptr [EDX + EAX*0x4 + 0x796d44],ECX
0060aa95  JMP 0x0060aa67
0060aa97  MOV EDX,dword ptr [EBP + -0x8]
0060aa9a  IMUL EDX,EDX,0x74
0060aa9d  MOV EAX,dword ptr [EBP + -0x4]
0060aaa0  MOV dword ptr [EDX + EAX*0x4 + 0x796d44],0xffffffff
0060aaab  MOV ECX,dword ptr [EBP + -0x8]
0060aaae  IMUL ECX,ECX,0x74
0060aab1  FLD float ptr [EBP + 0x14]
0060aab4  FSTP float ptr [ECX + 0x796d94]
0060aaba  MOV EDX,dword ptr [EBP + -0x8]
0060aabd  IMUL EDX,EDX,0x74
0060aac0  FLD float ptr [EBP + 0x18]
0060aac3  FSTP float ptr [EDX + 0x796d98]
0060aac9  PUSH 0x0
0060aacb  MOV EAX,dword ptr [EBP + -0x8]
0060aace  PUSH EAX
0060aacf  MOV ECX,dword ptr [EBP + -0xc]
0060aad2  CALL 0x0060ab30
0060aad7  JMP 0x0060ab20
0060aad9  MOV ECX,dword ptr [EBP + -0x8]
0060aadc  IMUL ECX,ECX,0x74
0060aadf  MOV byte ptr [ECX + 0x796d3c],0x0
0060aae6  MOV EDX,dword ptr [EBP + -0x8]
0060aae9  IMUL EDX,EDX,0x74
0060aaec  MOV EAX,dword ptr [EDX + 0x796d38]
0060aaf2  PUSH EAX
0060aaf3  PUSH 0x6d8044
0060aaf8  CALL 0x0062fde0
0060aafd  ADD ESP,0x4
0060ab00  FLD float ptr [EBP + 0x18]
0060ab03  FSTP float ptr [ESP]
0060ab06  PUSH ECX
0060ab07  FLD float ptr [EBP + 0x14]
0060ab0a  FSTP float ptr [ESP]
0060ab0d  MOV ECX,dword ptr [EBP + 0x10]
0060ab10  PUSH ECX
0060ab11  MOV EDX,dword ptr [EBP + -0x8]
0060ab14  PUSH EDX
0060ab15  MOV ECX,dword ptr [EBP + -0xc]
0060ab18  CALL 0x0060b0b0
0060ab1d  MOV dword ptr [EBP + -0x8],EAX
0060ab20  MOV EAX,dword ptr [EBP + -0x8]
0060ab23  JMP 0x0060ab29
0060ab27  XOR EAX,EAX
0060ab29  POP ESI
0060ab2a  MOV ESP,EBP
0060ab2c  POP EBP
0060ab2d  RET 0x14

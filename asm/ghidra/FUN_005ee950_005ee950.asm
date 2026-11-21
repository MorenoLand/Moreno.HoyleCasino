; FUN_005ee950  005ee950
005ee950  PUSH EBP
005ee951  MOV EBP,ESP
005ee953  SUB ESP,0x1c
005ee956  MOV dword ptr [EBP + -0x18],ECX
005ee959  MOV dword ptr [EBP + -0x4],0x0
005ee960  MOV AL,byte ptr [EBP + 0x8]
005ee963  PUSH EAX
005ee964  MOV ECX,dword ptr [EBP + -0x18]
005ee967  CALL 0x005f0a30
005ee96c  MOVZX ECX,AL
005ee96f  MOV dword ptr [EBP + -0xc],ECX
005ee972  MOV dword ptr [EBP + -0x8],0x0
005ee979  MOV EDX,dword ptr [EBP + -0x18]
005ee97c  MOV EAX,dword ptr [EDX + 0x64]
005ee97f  MOV dword ptr [EBP + -0x1c],EAX
005ee982  CMP dword ptr [EBP + -0x1c],0x1
005ee986  JZ 0x005ee999
005ee988  CMP dword ptr [EBP + -0x1c],0x2
005ee98c  JZ 0x005ee9d4
005ee98e  CMP dword ptr [EBP + -0x1c],0x3
005ee992  JZ 0x005eea0e
005ee994  JMP 0x005eead5
005ee999  MOV ECX,dword ptr [EBP + -0x18]
005ee99c  CMP dword ptr [ECX + 0x98],0x0
005ee9a3  JZ 0x005ee9cf
005ee9a5  MOV EDX,dword ptr [EBP + -0x18]
005ee9a8  MOV EAX,dword ptr [EDX + 0x98]
005ee9ae  MOV ECX,dword ptr [EBP + -0xc]
005ee9b1  MOVZX EDX,word ptr [EAX + ECX*0x8 + 0x8]
005ee9b6  MOV EAX,dword ptr [EBP + -0x18]
005ee9b9  MOV ECX,dword ptr [EAX + 0x98]
005ee9bf  MOV EAX,dword ptr [EBP + -0xc]
005ee9c2  MOVZX ECX,word ptr [ECX + EAX*0x8 + 0x4]
005ee9c7  SUB EDX,ECX
005ee9c9  ADD EDX,0x1
005ee9cc  MOV dword ptr [EBP + -0x8],EDX
005ee9cf  JMP 0x005eead9
005ee9d4  MOV EDX,dword ptr [EBP + -0x18]
005ee9d7  CMP dword ptr [EDX + 0xb0],0x0
005ee9de  JZ 0x005eea09
005ee9e0  MOV EAX,dword ptr [EBP + -0xc]
005ee9e3  SUB EAX,0x20
005ee9e6  MOV dword ptr [EBP + -0x4],EAX
005ee9e9  JNS 0x005ee9f2
005ee9eb  MOV dword ptr [EBP + -0x4],0x0
005ee9f2  MOV ECX,dword ptr [EBP + -0x4]
005ee9f5  PUSH ECX
005ee9f6  PUSH 0x0
005ee9f8  MOV EDX,dword ptr [EBP + -0x18]
005ee9fb  MOV ECX,dword ptr [EDX + 0xb0]
005eea01  CALL 0x00616410
005eea06  MOV dword ptr [EBP + -0x8],EAX
005eea09  JMP 0x005eead9
005eea0e  MOV EAX,dword ptr [EBP + -0x18]
005eea11  CMP dword ptr [EAX + 0xb0],0x0
005eea18  JZ 0x005eead3
005eea1e  MOV ECX,dword ptr [EBP + -0xc]
005eea21  PUSH ECX
005eea22  PUSH 0x0
005eea24  MOV EDX,dword ptr [EBP + -0x18]
005eea27  MOV ECX,dword ptr [EDX + 0xb0]
005eea2d  CALL 0x00616410
005eea32  MOV dword ptr [EBP + -0x8],EAX
005eea35  MOV EAX,dword ptr [EBP + -0x18]
005eea38  MOVZX ECX,byte ptr [EAX + 0xcc]
005eea3f  TEST ECX,ECX
005eea41  JZ 0x005eead3
005eea47  CMP dword ptr [EBP + 0xc],0x0
005eea4b  JL 0x005eead3
005eea51  CMP dword ptr [EBP + 0xc],0xff
005eea58  JG 0x005eead3
005eea5a  LEA EDX,[EBP + -0x14]
005eea5d  PUSH EDX
005eea5e  PUSH 0x0
005eea60  MOV EAX,dword ptr [EBP + 0xc]
005eea63  PUSH EAX
005eea64  MOV ECX,dword ptr [EBP + -0x18]
005eea67  MOV EDX,dword ptr [ECX + 0xbc]
005eea6d  PUSH EDX
005eea6e  CALL 0x00686c5a
005eea73  ADD ESP,0x8
005eea76  PUSH EAX
005eea77  MOV EAX,dword ptr [EBP + -0xc]
005eea7a  PUSH EAX
005eea7b  MOV ECX,dword ptr [EBP + -0x18]
005eea7e  MOV EDX,dword ptr [ECX + 0xbc]
005eea84  PUSH EDX
005eea85  CALL 0x00686c5a
005eea8a  ADD ESP,0x8
005eea8d  PUSH EAX
005eea8e  MOV EAX,dword ptr [EBP + -0x18]
005eea91  MOV ECX,dword ptr [EAX + 0xbc]
005eea97  PUSH ECX
005eea98  CALL 0x00686c54
005eea9d  ADD ESP,0x14
005eeaa0  XOR EAX,EAX
005eeaa2  CMP dword ptr [EBP + -0x14],0x0
005eeaa6  SETL AL
005eeaa9  SUB EAX,0x1
005eeaac  AND EAX,0x40
005eeaaf  ADD EAX,-0x20
005eeab2  ADD EAX,dword ptr [EBP + -0x14]
005eeab5  CDQ
005eeab6  AND EDX,0x3f
005eeab9  ADD EAX,EDX
005eeabb  SAR EAX,0x6
005eeabe  MOV EDX,dword ptr [EBP + -0x18]
005eeac1  ADD EDX,dword ptr [EBP + 0xc]
005eeac4  MOVSX ECX,byte ptr [EDX + 0xd0]
005eeacb  ADD ECX,dword ptr [EBP + -0x8]
005eeace  ADD ECX,EAX
005eead0  MOV dword ptr [EBP + -0x8],ECX
005eead3  JMP 0x005eead9
005eead5  XOR EAX,EAX
005eead7  JMP 0x005eeae6
005eead9  MOV EDX,dword ptr [EBP + -0x18]
005eeadc  MOVZX EAX,word ptr [EDX + 0x90]
005eeae3  ADD EAX,dword ptr [EBP + -0x8]
005eeae6  MOV ESP,EBP
005eeae8  POP EBP
005eeae9  RET 0x8

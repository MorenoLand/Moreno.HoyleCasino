; FUN_0040cdc0  0040cdc0
0040cdc0  PUSH EBP
0040cdc1  MOV EBP,ESP
0040cdc3  SUB ESP,0x30
0040cdc6  PUSH ESI
0040cdc7  MOV dword ptr [EBP + -0x28],ECX
0040cdca  MOV dword ptr [EBP + -0x18],0xffffffff
0040cdd1  MOV dword ptr [EBP + -0x14],0x1
0040cdd8  MOV dword ptr [EBP + -0x10],0x2
0040cddf  MOV dword ptr [EBP + -0xc],0x3
0040cde6  MOV dword ptr [EBP + -0x8],0x0
0040cded  MOV EAX,dword ptr [EBP + 0x8]
0040cdf0  MOV ECX,dword ptr [EBP + -0x28]
0040cdf3  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
0040cdf7  MOV EAX,dword ptr [EBP + 0xc]
0040cdfa  IMUL EAX,EAX,0x58
0040cdfd  LEA ECX,[EDX + EAX*0x1 + 0x28]
0040ce01  MOV EDX,dword ptr [EBP + 0x10]
0040ce04  MOV EAX,dword ptr [ECX + EDX*0x4]
0040ce07  MOV dword ptr [EBP + -0x4],EAX
0040ce0a  MOV ECX,dword ptr [EBP + 0x10]
0040ce0d  PUSH ECX
0040ce0e  MOV EDX,dword ptr [EBP + 0xc]
0040ce11  PUSH EDX
0040ce12  MOV EAX,dword ptr [EBP + 0x8]
0040ce15  PUSH EAX
0040ce16  MOV ECX,dword ptr [0x00790324]
0040ce1c  CALL 0x004193d0
0040ce21  MOV word ptr [EBP + -0x1c],AX
0040ce25  MOV ECX,dword ptr [EBP + 0x10]
0040ce28  PUSH ECX
0040ce29  MOV EDX,dword ptr [EBP + 0xc]
0040ce2c  PUSH EDX
0040ce2d  MOV EAX,dword ptr [EBP + 0x8]
0040ce30  PUSH EAX
0040ce31  MOV ECX,dword ptr [EBP + -0x28]
0040ce34  CALL 0x0040d040
0040ce39  PUSH EAX
0040ce3a  MOV ECX,dword ptr [EBP + -0x4]
0040ce3d  CALL 0x005eaf00
0040ce42  MOV ECX,dword ptr [EBP + 0x10]
0040ce45  PUSH ECX
0040ce46  MOV EDX,dword ptr [EBP + 0xc]
0040ce49  PUSH EDX
0040ce4a  MOV EAX,dword ptr [EBP + 0x8]
0040ce4d  PUSH EAX
0040ce4e  MOV ECX,dword ptr [EBP + -0x28]
0040ce51  CALL 0x0040d330
0040ce56  PUSH EAX
0040ce57  MOV ECX,dword ptr [EBP + 0x10]
0040ce5a  PUSH ECX
0040ce5b  MOV EDX,dword ptr [EBP + 0xc]
0040ce5e  PUSH EDX
0040ce5f  MOV EAX,dword ptr [EBP + 0x8]
0040ce62  PUSH EAX
0040ce63  MOV ECX,dword ptr [EBP + -0x28]
0040ce66  CALL 0x0040d0f0
0040ce6b  PUSH EAX
0040ce6c  MOV ECX,dword ptr [EBP + -0x4]
0040ce6f  MOV EDX,dword ptr [ECX]
0040ce71  MOV ECX,dword ptr [EBP + -0x4]
0040ce74  MOV EAX,dword ptr [EDX + 0x44]
0040ce77  CALL EAX
0040ce79  MOV CX,word ptr [EBP + -0x1c]
0040ce7d  PUSH ECX
0040ce7e  CALL 0x00641290
0040ce83  ADD ESP,0x4
0040ce86  MOV ESI,dword ptr [EBP + EAX*0x4 + -0x18]
0040ce8a  IMUL ESI,ESI,0xd
0040ce8d  MOV DX,word ptr [EBP + -0x1c]
0040ce91  PUSH EDX
0040ce92  CALL 0x00641280
0040ce97  ADD ESP,0x4
0040ce9a  LEA EAX,[ESI + EAX*0x1 + -0x1]
0040ce9e  CMP EAX,0x34
0040cea1  JL 0x0040ceba
0040cea3  PUSH 0xa5
0040cea8  PUSH 0x6b38c8
0040cead  PUSH 0x6b3888
0040ceb2  CALL 0x005e9f20
0040ceb7  ADD ESP,0xc
0040ceba  MOV DX,word ptr [EBP + -0x1c]
0040cebe  PUSH EDX
0040cebf  CALL 0x00641290
0040cec4  ADD ESP,0x4
0040cec7  MOV ESI,dword ptr [EBP + EAX*0x4 + -0x18]
0040cecb  IMUL ESI,ESI,0xd
0040cece  MOV AX,word ptr [EBP + -0x1c]
0040ced2  PUSH EAX
0040ced3  CALL 0x00641280
0040ced8  ADD ESP,0x4
0040cedb  LEA ECX,[ESI + EAX*0x1 + -0x1]
0040cedf  PUSH ECX
0040cee0  MOV EDX,dword ptr [EBP + -0x4]
0040cee3  MOV EAX,dword ptr [EDX]
0040cee5  MOV ECX,dword ptr [EBP + -0x4]
0040cee8  MOV EDX,dword ptr [EAX + 0xb0]
0040ceee  CALL EDX
0040cef0  MOV EAX,dword ptr [EBP + 0xc]
0040cef3  IMUL EAX,EAX,0x7
0040cef6  MOV ECX,dword ptr [EBP + 0x10]
0040cef9  LEA EDX,[ECX + EAX*0x1 + 0x5]
0040cefd  PUSH EDX
0040cefe  MOV EAX,dword ptr [EBP + -0x4]
0040cf01  MOV EDX,dword ptr [EAX]
0040cf03  MOV ECX,dword ptr [EBP + -0x4]
0040cf06  MOV EAX,dword ptr [EDX + 0x6c]
0040cf09  CALL EAX
0040cf0b  MOV ECX,dword ptr [EBP + -0x4]
0040cf0e  MOV EDX,dword ptr [ECX]
0040cf10  MOV ECX,dword ptr [EBP + -0x4]
0040cf13  MOV EAX,dword ptr [EDX + 0x74]
0040cf16  CALL EAX
0040cf18  MOV ECX,dword ptr [EBP + 0x10]
0040cf1b  PUSH ECX
0040cf1c  MOV EDX,dword ptr [EBP + 0xc]
0040cf1f  PUSH EDX
0040cf20  MOV EAX,dword ptr [EBP + 0x8]
0040cf23  PUSH EAX
0040cf24  MOV ECX,dword ptr [EBP + -0x28]
0040cf27  CALL 0x0040d530
0040cf2c  MOVZX ECX,AL
0040cf2f  TEST ECX,ECX
0040cf31  JZ 0x0040cf4f
0040cf33  MOVZX EDX,byte ptr [EBP + 0x14]
0040cf37  TEST EDX,EDX
0040cf39  JNZ 0x0040cf4f
0040cf3b  PUSH 0x35
0040cf3d  MOV EAX,dword ptr [EBP + -0x4]
0040cf40  MOV EDX,dword ptr [EAX]
0040cf42  MOV ECX,dword ptr [EBP + -0x4]
0040cf45  MOV EAX,dword ptr [EDX + 0xb0]
0040cf4b  CALL EAX
0040cf4d  JMP 0x0040cf84
0040cf4f  MOV ECX,dword ptr [EBP + 0x10]
0040cf52  PUSH ECX
0040cf53  MOV EDX,dword ptr [EBP + 0xc]
0040cf56  PUSH EDX
0040cf57  MOV EAX,dword ptr [EBP + 0x8]
0040cf5a  PUSH EAX
0040cf5b  MOV ECX,dword ptr [0x00790324]
0040cf61  CALL 0x00419470
0040cf66  MOVZX ECX,AL
0040cf69  TEST ECX,ECX
0040cf6b  JNZ 0x0040cf84
0040cf6d  MOV EDX,dword ptr [EBP + 0x10]
0040cf70  PUSH EDX
0040cf71  MOV EAX,dword ptr [EBP + 0xc]
0040cf74  PUSH EAX
0040cf75  MOV ECX,dword ptr [EBP + 0x8]
0040cf78  PUSH ECX
0040cf79  MOV ECX,dword ptr [0x00790324]
0040cf7f  CALL 0x00419ad0
0040cf84  CMP dword ptr [EBP + 0x8],0x4
0040cf88  JGE 0x0040d023
0040cf8e  CMP dword ptr [EBP + 0x8],-0x1
0040cf92  JNZ 0x0040cf9d
0040cf94  MOV dword ptr [EBP + -0x20],0xffffffff
0040cf9b  JMP 0x0040cfcb
0040cf9d  CMP dword ptr [EBP + 0x8],0x4
0040cfa1  JNZ 0x0040cfac
0040cfa3  MOV dword ptr [EBP + -0x2c],0x0
0040cfaa  JMP 0x0040cfc5
0040cfac  MOV EDX,dword ptr [EBP + 0x8]
0040cfaf  IMUL EDX,EDX,0x118
0040cfb5  MOV EAX,[0x00790324]
0040cfba  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x119]
0040cfc2  MOV dword ptr [EBP + -0x2c],ECX
0040cfc5  MOV EDX,dword ptr [EBP + -0x2c]
0040cfc8  MOV dword ptr [EBP + -0x20],EDX
0040cfcb  MOV EAX,dword ptr [EBP + -0x20]
0040cfce  CMP EAX,dword ptr [EBP + 0xc]
0040cfd1  JZ 0x0040d023
0040cfd3  CMP dword ptr [EBP + 0x8],-0x1
0040cfd7  JNZ 0x0040cfe2
0040cfd9  MOV dword ptr [EBP + -0x24],0xffffffff
0040cfe0  JMP 0x0040d011
0040cfe2  CMP dword ptr [EBP + 0x8],0x4
0040cfe6  JNZ 0x0040cff1
0040cfe8  MOV dword ptr [EBP + -0x30],0x0
0040cfef  JMP 0x0040d00b
0040cff1  MOV ECX,dword ptr [EBP + 0x8]
0040cff4  IMUL ECX,ECX,0x118
0040cffa  MOV EDX,dword ptr [0x00790324]
0040d000  MOVSX EAX,byte ptr [EDX + ECX*0x1 + 0x119]
0040d008  MOV dword ptr [EBP + -0x30],EAX
0040d00b  MOV ECX,dword ptr [EBP + -0x30]
0040d00e  MOV dword ptr [EBP + -0x24],ECX
0040d011  CMP dword ptr [EBP + -0x24],-0x1
0040d015  JZ 0x0040d023
0040d017  PUSH 0x64
0040d019  MOV ECX,dword ptr [EBP + -0x4]
0040d01c  CALL 0x005eb5d0
0040d021  JMP 0x0040d030
0040d023  PUSH 0xff
0040d028  MOV ECX,dword ptr [EBP + -0x4]
0040d02b  CALL 0x005eb5d0
0040d030  POP ESI
0040d031  MOV ESP,EBP
0040d033  POP EBP
0040d034  RET 0x10

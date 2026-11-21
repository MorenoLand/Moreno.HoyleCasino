; FUN_005f4d00  005f4d00
005f4d00  PUSH EBP
005f4d01  MOV EBP,ESP
005f4d03  SUB ESP,0x8
005f4d06  MOV dword ptr [EBP + -0x4],ECX
005f4d09  MOV EAX,dword ptr [EBP + 0x8]
005f4d0c  PUSH EAX
005f4d0d  MOV ECX,dword ptr [EBP + -0x4]
005f4d10  MOV EDX,dword ptr [ECX]
005f4d12  MOV ECX,dword ptr [EBP + -0x4]
005f4d15  MOV EAX,dword ptr [EDX + 0x4]
005f4d18  CALL EAX
005f4d1a  MOVZX ECX,AL
005f4d1d  TEST ECX,ECX
005f4d1f  JNZ 0x005f4d26
005f4d21  JMP 0x005f4e14
005f4d26  MOV EDX,dword ptr [EBP + 0x8]
005f4d29  MOV EAX,dword ptr [EDX + 0x18]
005f4d2c  MOV dword ptr [EBP + -0x8],EAX
005f4d2f  MOV ECX,dword ptr [EBP + -0x8]
005f4d32  SUB ECX,0x1
005f4d35  MOV dword ptr [EBP + -0x8],ECX
005f4d38  CMP dword ptr [EBP + -0x8],0x17
005f4d3c  JA 0x005f4e03
005f4d42  MOV EDX,dword ptr [EBP + -0x8]
005f4d45  MOVZX EAX,byte ptr [EDX + 0x5f4e34]
005f4d4c  JMP dword ptr [EAX*0x4 + 0x5f4e1c]
005f4d53  MOV ECX,dword ptr [EBP + 0x8]
005f4d56  MOV EDX,dword ptr [ECX + 0x1c]
005f4d59  AND EDX,0x8
005f4d5c  JZ 0x005f4d6f
005f4d5e  MOV EAX,dword ptr [EBP + 0x8]
005f4d61  PUSH EAX
005f4d62  MOV ECX,dword ptr [EBP + -0x4]
005f4d65  MOV EDX,dword ptr [ECX]
005f4d67  MOV ECX,dword ptr [EBP + -0x4]
005f4d6a  MOV EAX,dword ptr [EDX + 0x8]
005f4d6d  CALL EAX
005f4d6f  MOV ECX,dword ptr [EBP + 0x8]
005f4d72  MOV EDX,dword ptr [ECX + 0x1c]
005f4d75  AND EDX,0x10
005f4d78  JZ 0x005f4d8b
005f4d7a  MOV EAX,dword ptr [EBP + 0x8]
005f4d7d  PUSH EAX
005f4d7e  MOV ECX,dword ptr [EBP + -0x4]
005f4d81  MOV EDX,dword ptr [ECX]
005f4d83  MOV ECX,dword ptr [EBP + -0x4]
005f4d86  MOV EAX,dword ptr [EDX + 0xc]
005f4d89  CALL EAX
005f4d8b  JMP 0x005f4e14
005f4d90  MOV ECX,dword ptr [EBP + 0x8]
005f4d93  MOV EDX,dword ptr [ECX + 0x1c]
005f4d96  AND EDX,0x8
005f4d99  JZ 0x005f4dac
005f4d9b  MOV EAX,dword ptr [EBP + 0x8]
005f4d9e  PUSH EAX
005f4d9f  MOV ECX,dword ptr [EBP + -0x4]
005f4da2  MOV EDX,dword ptr [ECX]
005f4da4  MOV ECX,dword ptr [EBP + -0x4]
005f4da7  MOV EAX,dword ptr [EDX + 0x10]
005f4daa  CALL EAX
005f4dac  MOV ECX,dword ptr [EBP + 0x8]
005f4daf  MOV EDX,dword ptr [ECX + 0x1c]
005f4db2  AND EDX,0x10
005f4db5  JZ 0x005f4dc8
005f4db7  MOV EAX,dword ptr [EBP + 0x8]
005f4dba  PUSH EAX
005f4dbb  MOV ECX,dword ptr [EBP + -0x4]
005f4dbe  MOV EDX,dword ptr [ECX]
005f4dc0  MOV ECX,dword ptr [EBP + -0x4]
005f4dc3  MOV EAX,dword ptr [EDX + 0x14]
005f4dc6  CALL EAX
005f4dc8  JMP 0x005f4e14
005f4dca  MOV ECX,dword ptr [EBP + 0x8]
005f4dcd  PUSH ECX
005f4dce  MOV EDX,dword ptr [EBP + -0x4]
005f4dd1  MOV EAX,dword ptr [EDX]
005f4dd3  MOV ECX,dword ptr [EBP + -0x4]
005f4dd6  MOV EDX,dword ptr [EAX + 0x18]
005f4dd9  CALL EDX
005f4ddb  JMP 0x005f4e14
005f4ddd  MOV EAX,dword ptr [EBP + 0x8]
005f4de0  PUSH EAX
005f4de1  MOV ECX,dword ptr [EBP + -0x4]
005f4de4  MOV EDX,dword ptr [ECX]
005f4de6  MOV ECX,dword ptr [EBP + -0x4]
005f4de9  MOV EAX,dword ptr [EDX + 0x1c]
005f4dec  CALL EAX
005f4dee  JMP 0x005f4e14
005f4df0  MOV ECX,dword ptr [EBP + 0x8]
005f4df3  PUSH ECX
005f4df4  MOV EDX,dword ptr [EBP + -0x4]
005f4df7  MOV EAX,dword ptr [EDX]
005f4df9  MOV ECX,dword ptr [EBP + -0x4]
005f4dfc  MOV EDX,dword ptr [EAX + 0x20]
005f4dff  CALL EDX
005f4e01  JMP 0x005f4e14
005f4e03  MOV EAX,dword ptr [EBP + 0x8]
005f4e06  PUSH EAX
005f4e07  MOV ECX,dword ptr [EBP + -0x4]
005f4e0a  MOV EDX,dword ptr [ECX]
005f4e0c  MOV ECX,dword ptr [EBP + -0x4]
005f4e0f  MOV EAX,dword ptr [EDX + 0x24]
005f4e12  CALL EAX
005f4e14  MOV ESP,EBP
005f4e16  POP EBP
005f4e17  RET 0x4

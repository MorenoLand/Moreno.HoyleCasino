; FUN_00566a60  00566a60
00566a60  PUSH EBP
00566a61  MOV EBP,ESP
00566a63  PUSH ECX
00566a64  MOV dword ptr [EBP + -0x4],ECX
00566a67  MOV EAX,dword ptr [EBP + 0x8]
00566a6a  PUSH EAX
00566a6b  MOV ECX,dword ptr [EBP + -0x4]
00566a6e  MOV ECX,dword ptr [ECX + 0xc]
00566a71  CALL 0x00565a50
00566a76  CMP dword ptr [EBP + 0x8],0x5
00566a7a  JNZ 0x00566aa1
00566a7c  PUSH 0x120
00566a81  PUSH 0x9f
00566a86  MOV EDX,dword ptr [EBP + -0x4]
00566a89  MOV EAX,dword ptr [EDX + 0x8]
00566a8c  MOV ECX,dword ptr [EBP + -0x4]
00566a8f  MOV ECX,dword ptr [ECX + 0x8]
00566a92  MOV EDX,dword ptr [EAX]
00566a94  MOV EAX,dword ptr [EDX + 0x44]
00566a97  CALL EAX
00566a99  MOV ECX,dword ptr [EBP + -0x4]
00566a9c  MOV byte ptr [ECX],0x1
00566a9f  JMP 0x00566ad7
00566aa1  PUSH 0x13c
00566aa6  PUSH 0x9f
00566aab  MOV EDX,dword ptr [EBP + -0x4]
00566aae  MOV EAX,dword ptr [EDX + 0x8]
00566ab1  MOV ECX,dword ptr [EBP + -0x4]
00566ab4  MOV ECX,dword ptr [ECX + 0x8]
00566ab7  MOV EDX,dword ptr [EAX]
00566ab9  MOV EAX,dword ptr [EDX + 0x44]
00566abc  CALL EAX
00566abe  MOV ECX,dword ptr [EBP + -0x4]
00566ac1  MOV byte ptr [ECX],0x0
00566ac4  MOV EDX,dword ptr [EBP + -0x4]
00566ac7  MOV EAX,dword ptr [EDX + 0x4]
00566aca  MOV ECX,dword ptr [EBP + -0x4]
00566acd  MOV ECX,dword ptr [ECX + 0x4]
00566ad0  MOV EDX,dword ptr [EAX]
00566ad2  MOV EAX,dword ptr [EDX + 0x70]
00566ad5  CALL EAX
00566ad7  MOV ESP,EBP
00566ad9  POP EBP
00566ada  RET 0x4

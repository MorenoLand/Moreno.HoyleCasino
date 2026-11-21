; FUN_00627b10  00627b10
00627b10  PUSH EBP
00627b11  MOV EBP,ESP
00627b13  SUB ESP,0x14
00627b16  MOV dword ptr [EBP + -0x4],ECX
00627b19  MOV EAX,dword ptr [EBP + -0x4]
00627b1c  MOV ECX,dword ptr [EBP + -0x4]
00627b1f  MOV EDX,dword ptr [EAX + 0x54]
00627b22  CMP EDX,dword ptr [ECX + 0x5c]
00627b25  JGE 0x00627b32
00627b27  MOV EAX,dword ptr [EBP + -0x4]
00627b2a  MOV ECX,dword ptr [EAX + 0x54]
00627b2d  MOV dword ptr [EBP + -0x8],ECX
00627b30  JMP 0x00627b3b
00627b32  MOV EDX,dword ptr [EBP + -0x4]
00627b35  MOV EAX,dword ptr [EDX + 0x5c]
00627b38  MOV dword ptr [EBP + -0x8],EAX
00627b3b  MOV ECX,dword ptr [EBP + -0x4]
00627b3e  MOV EDX,dword ptr [EBP + -0x4]
00627b41  MOV EAX,dword ptr [ECX + 0x50]
00627b44  CMP EAX,dword ptr [EDX + 0x58]
00627b47  JGE 0x00627b54
00627b49  MOV ECX,dword ptr [EBP + -0x4]
00627b4c  MOV EDX,dword ptr [ECX + 0x50]
00627b4f  MOV dword ptr [EBP + -0xc],EDX
00627b52  JMP 0x00627b5d
00627b54  MOV EAX,dword ptr [EBP + -0x4]
00627b57  MOV ECX,dword ptr [EAX + 0x58]
00627b5a  MOV dword ptr [EBP + -0xc],ECX
00627b5d  MOV EDX,dword ptr [EBP + -0x8]
00627b60  PUSH EDX
00627b61  MOV EAX,dword ptr [EBP + -0xc]
00627b64  PUSH EAX
00627b65  MOV ECX,dword ptr [EBP + -0x4]
00627b68  CALL 0x005f5110
00627b6d  MOV ECX,dword ptr [EBP + -0x4]
00627b70  MOV EDX,dword ptr [EBP + -0x4]
00627b73  MOV EAX,dword ptr [ECX + 0x50]
00627b76  CMP EAX,dword ptr [EDX + 0x58]
00627b79  JLE 0x00627b86
00627b7b  MOV ECX,dword ptr [EBP + -0x4]
00627b7e  MOV EDX,dword ptr [ECX + 0x50]
00627b81  MOV dword ptr [EBP + -0x10],EDX
00627b84  JMP 0x00627b8f
00627b86  MOV EAX,dword ptr [EBP + -0x4]
00627b89  MOV ECX,dword ptr [EAX + 0x58]
00627b8c  MOV dword ptr [EBP + -0x10],ECX
00627b8f  MOV ECX,dword ptr [EBP + -0x4]
00627b92  CALL 0x005f51a0
00627b97  MOV EDX,dword ptr [EBP + -0x10]
00627b9a  SUB EDX,EAX
00627b9c  PUSH EDX
00627b9d  MOV ECX,dword ptr [EBP + -0x4]
00627ba0  CALL 0x005f5530
00627ba5  MOV EAX,dword ptr [EBP + -0x4]
00627ba8  MOV ECX,dword ptr [EBP + -0x4]
00627bab  MOV EDX,dword ptr [EAX + 0x54]
00627bae  CMP EDX,dword ptr [ECX + 0x5c]
00627bb1  JLE 0x00627bbe
00627bb3  MOV EAX,dword ptr [EBP + -0x4]
00627bb6  MOV ECX,dword ptr [EAX + 0x54]
00627bb9  MOV dword ptr [EBP + -0x14],ECX
00627bbc  JMP 0x00627bc7
00627bbe  MOV EDX,dword ptr [EBP + -0x4]
00627bc1  MOV EAX,dword ptr [EDX + 0x5c]
00627bc4  MOV dword ptr [EBP + -0x14],EAX
00627bc7  MOV ECX,dword ptr [EBP + -0x4]
00627bca  CALL 0x005f51f0
00627bcf  MOV ECX,dword ptr [EBP + -0x14]
00627bd2  SUB ECX,EAX
00627bd4  PUSH ECX
00627bd5  MOV ECX,dword ptr [EBP + -0x4]
00627bd8  CALL 0x005f5570
00627bdd  MOV EDX,dword ptr [EBP + -0x4]
00627be0  MOV EAX,dword ptr [EDX]
00627be2  MOV ECX,dword ptr [EBP + -0x4]
00627be5  MOV EDX,dword ptr [EAX + 0xac]
00627beb  CALL EDX
00627bed  MOV AL,0x1
00627bef  MOV ESP,EBP
00627bf1  POP EBP
00627bf2  RET

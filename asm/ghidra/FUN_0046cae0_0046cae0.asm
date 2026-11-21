; FUN_0046cae0  0046cae0
0046cae0  PUSH EBP
0046cae1  MOV EBP,ESP
0046cae3  PUSH ECX
0046cae4  MOV dword ptr [EBP + -0x4],ECX
0046cae7  MOV EAX,dword ptr [EBP + -0x4]
0046caea  MOVZX ECX,byte ptr [EAX + 0x1dc]
0046caf1  TEST ECX,ECX
0046caf3  JZ 0x0046cb86
0046caf9  MOV EDX,dword ptr [EBP + -0x4]
0046cafc  MOV EAX,dword ptr [EDX + 0x1e0]
0046cb02  MOV ECX,dword ptr [EAX + 0x220]
0046cb08  SUB ECX,0x1
0046cb0b  MOV EDX,dword ptr [EBP + -0x4]
0046cb0e  MOV EAX,dword ptr [EDX + 0x1e0]
0046cb14  MOV dword ptr [EAX + 0x220],ECX
0046cb1a  MOV ECX,dword ptr [EBP + -0x4]
0046cb1d  MOV byte ptr [ECX + 0x1dc],0x0
0046cb24  PUSH 0x6bbaf0
0046cb29  CALL 0x00630f40
0046cb2e  ADD ESP,0x4
0046cb31  PUSH EAX
0046cb32  MOV EDX,dword ptr [EBP + -0x4]
0046cb35  MOV EAX,dword ptr [EDX + 0x1e0]
0046cb3b  MOV ECX,dword ptr [EAX + 0x204]
0046cb41  MOV EDX,dword ptr [EBP + -0x4]
0046cb44  MOV EAX,dword ptr [EDX + 0x1e0]
0046cb4a  MOV EDX,dword ptr [EAX + 0x204]
0046cb50  MOV EAX,dword ptr [ECX]
0046cb52  MOV ECX,EDX
0046cb54  MOV EDX,dword ptr [EAX + 0xb4]
0046cb5a  CALL EDX
0046cb5c  MOV EAX,dword ptr [EBP + -0x4]
0046cb5f  MOV ECX,dword ptr [EAX + 0x1e0]
0046cb65  MOV EDX,dword ptr [ECX + 0x218]
0046cb6b  MOV EAX,dword ptr [EBP + -0x4]
0046cb6e  MOV ECX,dword ptr [EAX + 0x1e0]
0046cb74  MOV ECX,dword ptr [ECX + 0x218]
0046cb7a  MOV EDX,dword ptr [EDX]
0046cb7c  MOV EAX,dword ptr [EDX + 0x70]
0046cb7f  CALL EAX
0046cb81  JMP 0x0046cc30
0046cb86  MOV ECX,dword ptr [EBP + -0x4]
0046cb89  MOV EDX,dword ptr [ECX + 0x1e0]
0046cb8f  MOV EAX,dword ptr [EBP + -0x4]
0046cb92  MOV ECX,dword ptr [EAX + 0x1e0]
0046cb98  MOV EDX,dword ptr [EDX + 0x220]
0046cb9e  CMP EDX,dword ptr [ECX + 0x21c]
0046cba4  JGE 0x0046cc30
0046cbaa  MOV EAX,dword ptr [EBP + -0x4]
0046cbad  MOV ECX,dword ptr [EAX + 0x1e0]
0046cbb3  MOV EDX,dword ptr [ECX + 0x220]
0046cbb9  ADD EDX,0x1
0046cbbc  MOV EAX,dword ptr [EBP + -0x4]
0046cbbf  MOV ECX,dword ptr [EAX + 0x1e0]
0046cbc5  MOV dword ptr [ECX + 0x220],EDX
0046cbcb  MOV EDX,dword ptr [EBP + -0x4]
0046cbce  MOV byte ptr [EDX + 0x1dc],0x1
0046cbd5  PUSH 0x6bbdac
0046cbda  CALL 0x00630f40
0046cbdf  ADD ESP,0x4
0046cbe2  PUSH EAX
0046cbe3  MOV EAX,dword ptr [EBP + -0x4]
0046cbe6  MOV ECX,dword ptr [EAX + 0x1e0]
0046cbec  MOV EDX,dword ptr [ECX + 0x204]
0046cbf2  MOV EAX,dword ptr [EBP + -0x4]
0046cbf5  MOV ECX,dword ptr [EAX + 0x1e0]
0046cbfb  MOV ECX,dword ptr [ECX + 0x204]
0046cc01  MOV EDX,dword ptr [EDX]
0046cc03  MOV EAX,dword ptr [EDX + 0xb4]
0046cc09  CALL EAX
0046cc0b  MOV ECX,dword ptr [EBP + -0x4]
0046cc0e  MOV EDX,dword ptr [ECX + 0x1e0]
0046cc14  MOV EAX,dword ptr [EDX + 0x218]
0046cc1a  MOV ECX,dword ptr [EBP + -0x4]
0046cc1d  MOV EDX,dword ptr [ECX + 0x1e0]
0046cc23  MOV ECX,dword ptr [EDX + 0x218]
0046cc29  MOV EAX,dword ptr [EAX]
0046cc2b  MOV EDX,dword ptr [EAX + 0x74]
0046cc2e  CALL EDX
0046cc30  PUSH 0x5
0046cc32  MOV EAX,dword ptr [EBP + -0x4]
0046cc35  MOV ECX,dword ptr [EAX + 0x1e0]
0046cc3b  CALL 0x00519a40
0046cc40  MOV ESP,EBP
0046cc42  POP EBP
0046cc43  RET

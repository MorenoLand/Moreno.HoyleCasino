; FUN_005ffbb0  005ffbb0
005ffbb0  PUSH EBP
005ffbb1  MOV EBP,ESP
005ffbb3  PUSH -0x1
005ffbb5  PUSH 0x6aa7e8
005ffbba  MOV EAX,FS:[0x0]
005ffbc0  PUSH EAX
005ffbc1  PUSH ECX
005ffbc2  MOV EAX,[0x00781870]
005ffbc7  XOR EAX,EBP
005ffbc9  PUSH EAX
005ffbca  LEA EAX,[EBP + -0xc]
005ffbcd  MOV FS:[0x0],EAX
005ffbd3  MOV dword ptr [EBP + -0x10],ECX
005ffbd6  MOV ECX,dword ptr [EBP + -0x10]
005ffbd9  CALL 0x00601a80
005ffbde  MOV dword ptr [EBP + -0x4],0x0
005ffbe5  MOV EAX,dword ptr [EBP + -0x10]
005ffbe8  MOV dword ptr [EAX],0x6d72e4
005ffbee  MOV ECX,dword ptr [EBP + -0x10]
005ffbf1  MOV dword ptr [ECX + 0x1f0],0x0
005ffbfb  MOV EDX,dword ptr [EBP + -0x10]
005ffbfe  MOV dword ptr [EDX + 0x1f4],0x0
005ffc08  MOV EAX,dword ptr [EBP + -0x10]
005ffc0b  MOV dword ptr [EAX + 0x1f8],0x0
005ffc15  MOV ECX,dword ptr [EBP + -0x10]
005ffc18  MOV dword ptr [ECX + 0x1fc],0x0
005ffc22  MOV EDX,dword ptr [EBP + -0x10]
005ffc25  MOV dword ptr [EDX + 0x1e0],0x0
005ffc2f  MOV EAX,dword ptr [EBP + -0x10]
005ffc32  MOV dword ptr [EAX + 0x1e4],0x0
005ffc3c  MOV ECX,dword ptr [EBP + -0x10]
005ffc3f  MOV dword ptr [ECX + 0x1e8],0x0
005ffc49  MOV EDX,dword ptr [EBP + -0x10]
005ffc4c  MOV dword ptr [EDX + 0x1ec],0x0
005ffc56  MOV EAX,dword ptr [EBP + -0x10]
005ffc59  MOV ECX,dword ptr [EBP + -0x10]
005ffc5c  MOV EDX,dword ptr [ECX + 0x1f0]
005ffc62  MOV dword ptr [EAX + 0x198],EDX
005ffc68  MOV EAX,dword ptr [EBP + -0x10]
005ffc6b  MOV ECX,dword ptr [EBP + -0x10]
005ffc6e  MOV EDX,dword ptr [ECX + 0x1f4]
005ffc74  MOV dword ptr [EAX + 0x19c],EDX
005ffc7a  MOV EAX,dword ptr [EBP + -0x10]
005ffc7d  MOV ECX,dword ptr [EBP + -0x10]
005ffc80  MOV EDX,dword ptr [ECX + 0x1f8]
005ffc86  MOV dword ptr [EAX + 0x1a0],EDX
005ffc8c  MOV EAX,dword ptr [EBP + -0x10]
005ffc8f  MOV ECX,dword ptr [EBP + -0x10]
005ffc92  MOV EDX,dword ptr [ECX + 0x1fc]
005ffc98  MOV dword ptr [EAX + 0x1a4],EDX
005ffc9e  MOV EAX,dword ptr [EBP + -0x10]
005ffca1  MOV ECX,dword ptr [EBP + -0x10]
005ffca4  MOV EDX,dword ptr [ECX + 0x1e0]
005ffcaa  MOV dword ptr [EAX + 0x198],EDX
005ffcb0  MOV EAX,dword ptr [EBP + -0x10]
005ffcb3  MOV ECX,dword ptr [EBP + -0x10]
005ffcb6  MOV EDX,dword ptr [ECX + 0x1e4]
005ffcbc  MOV dword ptr [EAX + 0x19c],EDX
005ffcc2  MOV EAX,dword ptr [EBP + -0x10]
005ffcc5  MOV ECX,dword ptr [EBP + -0x10]
005ffcc8  MOV EDX,dword ptr [ECX + 0x1e8]
005ffcce  MOV dword ptr [EAX + 0x1a0],EDX
005ffcd4  MOV EAX,dword ptr [EBP + -0x10]
005ffcd7  MOV ECX,dword ptr [EBP + -0x10]
005ffcda  MOV EDX,dword ptr [ECX + 0x1ec]
005ffce0  MOV dword ptr [EAX + 0x1a4],EDX
005ffce6  MOV EAX,dword ptr [EBP + -0x10]
005ffce9  MOV byte ptr [EAX + 0x1dc],0x0
005ffcf0  MOV ECX,dword ptr [EBP + -0x10]
005ffcf3  MOV dword ptr [ECX + 0x1d8],0x11
005ffcfd  MOV EDX,dword ptr [EBP + -0x10]
005ffd00  MOV dword ptr [EDX + 0x200],0x0
005ffd0a  MOV EAX,dword ptr [EBP + -0x10]
005ffd0d  MOV dword ptr [EAX + 0x204],0x0
005ffd17  MOV ECX,dword ptr [EBP + -0x10]
005ffd1a  CALL 0x00600010
005ffd1f  MOV ECX,dword ptr [EBP + -0x10]
005ffd22  CALL 0x00600330
005ffd27  MOV dword ptr [EBP + -0x4],0xffffffff
005ffd2e  MOV EAX,dword ptr [EBP + -0x10]
005ffd31  MOV ECX,dword ptr [EBP + -0xc]
005ffd34  MOV dword ptr FS:[0x0],ECX
005ffd3b  POP ECX
005ffd3c  MOV ESP,EBP
005ffd3e  POP EBP
005ffd3f  RET

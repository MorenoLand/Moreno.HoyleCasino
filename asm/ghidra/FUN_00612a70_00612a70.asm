; FUN_00612a70  00612a70
00612a70  PUSH EBP
00612a71  MOV EBP,ESP
00612a73  SUB ESP,0x34
00612a76  XOR EAX,EAX
00612a78  MOV byte ptr [EBP + -0x1],AL
00612a7b  MOV CL,byte ptr [EBP + -0x3]
00612a7e  MOV byte ptr [EBP + -0x2],CL
00612a81  MOV EDX,dword ptr [EBP + 0xc]
00612a84  MOV dword ptr [EBP + -0x8],EDX
00612a87  MOV EAX,dword ptr [EBP + 0x8]
00612a8a  MOV dword ptr [EBP + -0x10],EAX
00612a8d  MOV CL,byte ptr [EBP + -0x1]
00612a90  MOV byte ptr [EBP + -0x31],CL
00612a93  MOV EDX,dword ptr [EBP + 0x10]
00612a96  MOV dword ptr [EBP + -0x30],EDX
00612a99  MOV EAX,dword ptr [EBP + -0x30]
00612a9c  MOV dword ptr [EBP + -0x2c],EAX
00612a9f  MOV ECX,dword ptr [EBP + -0x8]
00612aa2  MOV dword ptr [EBP + -0x28],ECX
00612aa5  MOV EDX,dword ptr [EBP + -0x10]
00612aa8  MOV dword ptr [EBP + -0x24],EDX
00612aab  XOR EAX,EAX
00612aad  MOV byte ptr [EBP + -0x11],AL
00612ab0  MOV CL,byte ptr [EBP + -0x13]
00612ab3  MOV byte ptr [EBP + -0x12],CL
00612ab6  MOV EDX,dword ptr [EBP + -0x28]
00612ab9  MOV dword ptr [EBP + -0x18],EDX
00612abc  MOV EAX,dword ptr [EBP + -0x24]
00612abf  MOV dword ptr [EBP + -0x20],EAX
00612ac2  MOV CL,byte ptr [EBP + -0x11]
00612ac5  PUSH ECX
00612ac6  MOV DL,byte ptr [EBP + -0x12]
00612ac9  PUSH EDX
00612aca  MOV EAX,dword ptr [EBP + 0x14]
00612acd  PUSH EAX
00612ace  MOV ECX,dword ptr [EBP + -0x2c]
00612ad1  PUSH ECX
00612ad2  MOV EDX,dword ptr [EBP + -0x18]
00612ad5  PUSH EDX
00612ad6  MOV EAX,dword ptr [EBP + -0x20]
00612ad9  PUSH EAX
00612ada  CALL 0x00612c70
00612adf  ADD ESP,0x18
00612ae2  MOV ESP,EBP
00612ae4  POP EBP
00612ae5  RET

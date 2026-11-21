; FUN_005ce980  005ce980
005ce980  PUSH EBP
005ce981  MOV EBP,ESP
005ce983  SUB ESP,0xc
005ce986  MOV dword ptr [EBP + -0x8],ECX
005ce989  MOV EAX,dword ptr [EBP + 0x8]
005ce98c  PUSH EAX
005ce98d  MOV ECX,dword ptr [0x007947e0]
005ce993  MOV EDX,dword ptr [ECX]
005ce995  MOV ECX,dword ptr [0x007947e0]
005ce99b  MOV EAX,dword ptr [EDX + 0xe0]
005ce9a1  CALL EAX
005ce9a3  MOV dword ptr [EBP + -0xc],EAX
005ce9a6  MOV ECX,dword ptr [EBP + -0xc]
005ce9a9  MOV EDX,dword ptr [ECX]
005ce9ab  MOV ECX,dword ptr [EBP + -0xc]
005ce9ae  MOV EAX,dword ptr [EDX + 0x9c]
005ce9b4  CALL EAX
005ce9b6  MOV ECX,dword ptr [0x007947e0]
005ce9bc  MOV dword ptr [ECX + 0x4ef0],EAX
005ce9c2  MOV EDX,dword ptr [0x007947e0]
005ce9c8  CMP dword ptr [EDX + 0x4ef0],0x0
005ce9cf  JNZ 0x005ce9e8
005ce9d1  PUSH 0x183
005ce9d6  PUSH 0x6d2dfc
005ce9db  PUSH 0x6d2dd8
005ce9e0  CALL 0x005e9f20
005ce9e5  ADD ESP,0xc
005ce9e8  PUSH 0x0
005ce9ea  MOV ECX,dword ptr [EBP + -0x8]
005ce9ed  CALL 0x005fb3a0
005ce9f2  MOV ECX,EAX
005ce9f4  CALL 0x00606490
005ce9f9  MOV ECX,dword ptr [0x007947e0]
005ce9ff  MOV EDX,dword ptr [EAX*0x4 + 0x75d33c]
005cea06  MOV dword ptr [ECX + 0x4eec],EDX
005cea0c  MOV EAX,[0x007947e0]
005cea11  MOV dword ptr [EAX + 0x4ef8],0x1
005cea1b  MOV ECX,dword ptr [EBP + -0x8]
005cea1e  MOV EDX,dword ptr [ECX + 0x1bc]
005cea24  PUSH EDX
005cea25  MOV EAX,[0x0162ee84]
005cea2a  MOV EDX,dword ptr [EAX]
005cea2c  MOV ECX,dword ptr [0x0162ee84]
005cea32  MOV EAX,dword ptr [EDX + 0xe0]
005cea38  CALL EAX
005cea3a  MOV dword ptr [EBP + -0x4],EAX
005cea3d  CMP dword ptr [EBP + -0x4],0x0
005cea41  JZ 0x005cea57
005cea43  MOV ECX,dword ptr [EBP + -0x8]
005cea46  PUSH ECX
005cea47  MOV EDX,dword ptr [EBP + -0x4]
005cea4a  MOV EAX,dword ptr [EDX]
005cea4c  MOV ECX,dword ptr [EBP + -0x4]
005cea4f  MOV EDX,dword ptr [EAX + 0xa8]
005cea55  CALL EDX
005cea57  MOV ESP,EBP
005cea59  POP EBP
005cea5a  RET 0x4
